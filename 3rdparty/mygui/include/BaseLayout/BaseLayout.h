/*!
	@file
	@author		Albert Semenov
	@date		07/2008
	@module
*/

#ifndef BASE_LAYOUT_H_
#define BASE_LAYOUT_H_

#include <MYGUI/MyGUI.h>
#include "WrapsAttribute.h"

namespace wraps
{

	class BaseLayout
	{
	protected:
		BaseLayout() :
			mMainWidget(nullptr)
		{
		}

		BaseLayout(const std::string& _layout, MyGUI::Widget* _parent = nullptr) :
			mMainWidget(nullptr)
		{
			initialise(_layout, _parent);
		}

		template <typename T>
		void assignWidget(T * & _widget, const std::string& _name, bool _throw = true, bool _createFakeWidgets = true)
		{
			_widget = nullptr;
			for (MyGUI::VectorWidgetPtr::iterator iter = mListWindowRoot.begin(); iter != mListWindowRoot.end(); ++iter)
			{
				MyGUI::Widget* find = (*iter)->findWidget(mPrefix + _name);
				if (nullptr != find)
				{
					T* cast = find->castType<T>(false);
					if (nullptr != cast)
					{
						_widget = cast;
					}
					else
					{
						MYGUI_LOG(Warning, "Widget with name '" << _name << "' have wrong type ('" <<
							find->getTypeName() << "instead of '" << T::getClassTypeName() << "'). [" << mLayoutName << "]");
						MYGUI_ASSERT( ! _throw, "Can't assign widget with name '" << _name << "'. [" << mLayoutName << "]");
						if (_createFakeWidgets)
							_widget = _createFakeWidget<T>(mMainWidget);
					}

					return;
				}
			}
			MYGUI_LOG(Warning, "Widget with name '" << _name << "' not found. [" << mLayoutName << "]");
			MYGUI_ASSERT( ! _throw, "Can't assign widget with name '" << _name << "'. [" << mLayoutName << "]");
			if (_createFakeWidgets)
				_widget = _createFakeWidget<T>(mMainWidget);
		}

		template <typename T>
		void assignBase(T * & _widget, const std::string& _name, bool _throw = true, bool _createFakeWidgets = true)
		{
			_widget = nullptr;
			for (MyGUI::VectorWidgetPtr::iterator iter = mListWindowRoot.begin(); iter != mListWindowRoot.end(); ++iter)
			{
				MyGUI::Widget* find = (*iter)->findWidget(mPrefix + _name);
				if (nullptr != find)
				{
					_widget = new T(find);
					mListBase.push_back(_widget);
					return;
				}
			}

			MYGUI_LOG(Warning, "Widget with name '" << _name << "' not found. [" << mLayoutName << "]");
			MYGUI_ASSERT( ! _throw, "Can't assign base widget with name '" << _name << "'. [" << mLayoutName << "]");
			if (_createFakeWidgets)
			{
				_widget = new T(_createFakeWidget<MyGUI::Widget>(mMainWidget));
				mListBase.push_back(_widget);
			}
		}

		void initialise(const std::string& _layout, MyGUI::Widget* _parent = nullptr, bool _throw = true, bool _createFakeWidgets = true)
		{
			const std::string MAIN_WINDOW1 = "_Main";
			const std::string MAIN_WINDOW2 = "Root";
			mLayoutName = _layout;

			// оборачиваем
			if (mLayoutName.empty())
			{
				mMainWidget = _parent;
				if (mMainWidget != nullptr)
				{
					mListWindowRoot.push_back(mMainWidget);
					mPrefix = FindParentPrefix(mMainWidget);
				}
			}
			// загружаем лейаут на виджет
			else
			{
				mPrefix = MyGUI::utility::toString(this, "_");
				mListWindowRoot = MyGUI::LayoutManager::getInstance().loadLayout(mLayoutName, mPrefix, _parent);

				const std::string mainName1 = mPrefix + MAIN_WINDOW1;
				const std::string mainName2 = mPrefix + MAIN_WINDOW2;
				for (MyGUI::VectorWidgetPtr::iterator iter = mListWindowRoot.begin(); iter != mListWindowRoot.end(); ++iter)
				{
					if ((*iter)->getName() == mainName1 || (*iter)->getName() == mainName2)
					{
						mMainWidget = (*iter);

						snapToParent(mMainWidget);

						break;
					}
				}

				if (mMainWidget == nullptr)
				{
					MYGUI_LOG(Warning, "Root widget with name '" << MAIN_WINDOW1 << "' or '" << MAIN_WINDOW2 << "'  not found. [" << mLayoutName << "]");
					MYGUI_ASSERT(!_throw, "No root widget. ['" << mLayoutName << "]");
					if (_createFakeWidgets)
						mMainWidget = _createFakeWidget<MyGUI::Widget>(_parent);
				}

				mMainWidget->setUserString("BaseLayoutPrefix", mPrefix);
			}
		}

		void shutdown()
		{
			// удаляем все классы
			for (VectorBasePtr::reverse_iterator iter = mListBase.rbegin(); iter != mListBase.rend(); ++iter)
				delete (*iter);
			mListBase.clear();

			// удаляем все рутовые виджеты
			if (!mLayoutName.empty())
				MyGUI::LayoutManager::getInstance().unloadLayout(mListWindowRoot);
			mListWindowRoot.clear();
		}

		template <typename Type>
		void initialiseByAttributes(Type* _owner, MyGUI::Widget* _parent = nullptr, bool _throw = true, bool _createFakeWidgets = true)
		{
			initialise(attribute::AttributeLayout<Type>::getData(), _parent, _throw, _createFakeWidgets);

			typename attribute::AttributeFieldWidgetName<Type>::VectorBindPair& data = attribute::AttributeFieldWidgetName<Type>::getData();
			for (typename attribute::AttributeFieldWidgetName<Type>::VectorBindPair::iterator item = data.begin(); item != data.end(); ++item)
			{
				MyGUI::Widget* value = nullptr;
				assignWidget(value, item->second, _throw, false);

				bool result = item->first->set(_owner, value);

				if (!result && _createFakeWidgets)
				{
					value = _createFakeWidgetT(item->first->getFieldTypeName(), mMainWidget);
					item->first->set(_owner, value);
				}
			}
		}

	private:
		std::string FindParentPrefix(MyGUI::Widget* _parent)
		{
			std::string prefix = _parent->getUserString("BaseLayoutPrefix");
			if (!prefix.empty())
				return prefix;
			if (_parent->getParent() != nullptr)
				return FindParentPrefix(_parent->getParent());

			return "";
		}

		void snapToParent(MyGUI::Widget* _child)
		{
			if (_child->isUserString("SnapTo"))
			{
				MyGUI::Align align = MyGUI::Align::parse(_child->getUserString("SnapTo"));

				MyGUI::IntCoord coord = _child->getCoord();
				MyGUI::IntSize size = _child->getParentSize();

				if (align.isHStretch())
				{
					coord.left = 0;
					coord.width = size.width;
				}
				else if (align.isLeft())
				{
					coord.left = 0;
				}
				else if (align.isRight())
				{
					coord.left = size.width - coord.width;
				}
				else
				{
					coord.left = (size.width - coord.width) / 2;
				}

				if (align.isVStretch())
				{
					coord.top = 0;
					coord.height = size.height;
				}
				else if (align.isTop())
				{
					coord.top = 0;
				}
				else if (align.isBottom())
				{
					coord.top = size.height - coord.height;
				}
				else
				{
					coord.top = (size.height - coord.height) / 2;
				}

				_child->setCoord(coord);
			}
		}

		template <typename T>
		T* _createFakeWidget(MyGUI::Widget* _parent)
		{
			return static_cast<T*>(_createFakeWidgetT(T::getClassTypeName(), _parent));
		}

		MyGUI::Widget* _createFakeWidgetT(const std::string& _typeName, MyGUI::Widget* _parent)
		{
			if (_parent)
				return _parent->createWidgetT(_typeName, MyGUI::SkinManager::getInstance().getDefaultSkin(), MyGUI::IntCoord(), MyGUI::Align::Default);

			return MyGUI::Gui::getInstance().createWidgetT(_typeName, MyGUI::SkinManager::getInstance().getDefaultSkin(), MyGUI::IntCoord(), MyGUI::Align::Default, "");
		}

	public:
		virtual ~BaseLayout()
		{
			shutdown();
		}

	protected:
		MyGUI::Widget* mMainWidget;

	private:
		std::string mPrefix;
		std::string mLayoutName;
		MyGUI::VectorWidgetPtr mListWindowRoot;
		typedef std::vector<BaseLayout*> VectorBasePtr;
		VectorBasePtr mListBase;
	};

} // namespace wraps

#endif // BASE_LAYOUT_H_
