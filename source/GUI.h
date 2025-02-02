#ifndef GUI_H
#define GUI_H

/*-----------------------------------------------------------------------------------------------*/

#include "Event.h"
#include "Audio.h"
#include "GameTime.h"
#include "Weather.h"
#include "MessageBox.h"
#include "MessageBoxStyle.h"
#include <MYGUI/MyGUI_OgreRenderManager.h>
#include <MYGUI/MyGUI_OgrePlatform.h>

/*-----------------------------------------------------------------------------------------------*/

const int cScrollViewDeadSpaceH = 23; //!< Dead space (right side) for MyGUI scroll views
const int cMinimapWindowWidth = 80; //!< Minimap data
const int cMinimapWindowHeight = 60;
const int cPanelButtonSize = 52; //!< Building buttons size and gap
const int cPanelButtonGap = 4;
const double cAspectRatios[] = { 5.0/4.0, 4.0/3.0, 16.0/10.0, 16.0/9.0 };
const std::string cBackgrounds[] = { "back_5_4_de.png", "back_4_3_de.png", "back_16_10_de.png",
                                     "back_16_9_de.png",
                                     "back_5_4_en.png", "back_4_3_en.png", "back_16_10_en.png",
                                     "back_16_9_en.png"};

/*-----------------------------------------------------------------------------------------------*/

enum eAspectRatio { e5_4, e4_3, e16_10, e16_9 }; //!< aspect ratio for background image

/*-----------------------------------------------------------------------------------------------*/

class InfoPanel;
class Company;
class Powerplant;
class City;
class GameObject;
class ResourceBuilding;
class CompanyBuilding;

/*-----------------------------------------------------------------------------------------------*/

//! A Ticker message
class TickerMessage
{
public:

  //! Create with default values
	TickerMessage(void)
	{
		mID = 0;
		mMessage = "NoMessage";
		mDetail = StrLoc::get()->GoalNone();
		mPointOfInterest = Ogre::Vector2(-1,-1);
		mUrgent = false;
		mDateTime = "NoTime";
	}

	int mID;
	std::string mMessage;
	std::string mDetail;
	Ogre::Vector2 mPointOfInterest;
	bool mUrgent;
	std::string mDateTime;
};

/*-----------------------------------------------------------------------------------------------*/

//! A "popup" message
class PopMessage
{
public:
	double mDurationLeft;
	double mYOffset;
	int mOriginalY;
	MyGUI::StaticTextPtr mWidget;
};

/*-----------------------------------------------------------------------------------------------*/

//! All "arrow up" and "arrow down" buttons
class ButtonDownSet
{
public:

	ButtonDownSet() :
	  mPriceUp(false), mPriceDown(false),
	  mAdsUp(false), mAdsDown(false),
	  mMaintenanceUp(false), mMaintenanceDown(false),
	  mLoanYearsUp(false), mLoanYearsDown(false),
	  mAmountTakeoutUp(false), mAmountTakeoutDown(false),
	  mAmountRepayUp(false), mAmountRepayDown(false),
	  mMaintenanceSupplyUp(false), mMaintenanceSupplyDown(false),
	  mEnvSupportUp(false), mEnvSupportDown(false),
	  mPPMaintUp(false), mPPMaintDown(false),
	  mCityPriceUp(false), mCityPriceDown(false),
	  mCityAdsUp(false), mCityAdsDown(false),
	  mREMaintUp(false), mREMaintDown(false)
	  {}

    bool mPriceUp, mPriceDown;
	bool mAdsUp, mAdsDown;
	bool mMaintenanceUp, mMaintenanceDown;
	bool mLoanYearsUp, mLoanYearsDown;
	bool mAmountTakeoutUp, mAmountTakeoutDown;
	bool mAmountRepayUp, mAmountRepayDown;
	bool mMaintenanceSupplyUp, mMaintenanceSupplyDown;
	bool mEnvSupportUp, mEnvSupportDown;
	bool mPPMaintUp, mPPMaintDown;
	bool mCityPriceUp, mCityPriceDown;
	bool mCityAdsUp, mCityAdsDown;
	bool mREMaintUp, mREMaintDown;
};

/*-----------------------------------------------------------------------------------------------*/

//! Game and menu GUI
class GUI
{
public:

	//! Startup MyGUI
    GUI(Ogre::RenderWindow* pWindow, Ogre::SceneManager* pScene, Ogre::RenderSystem* pRenderSystem, Ogre::Root* pRoot,
    bool pRestart = false);

	//! Shutdown
	~GUI();

	//! Return MyGUI instance
	MyGUI::Gui* getMyGUI(void);

	//! Is mouse over any GUI element with picking enabled
	bool isMouseOverGUI(void);

	//! Update DateTimePanel
	void updateGameTime(Ogre::String pTime, eSpeed pSpeed);

	//! Update realtime company data
	void updateCompanyData(EventData* pData);

	//! Update minimap view window
	void updateMinimapWindow(float pX, float pY, float pHeight, float pTerrainWidth,
    float pTerrainHeight);
	
	//! Update/Show/Hide tooltip
	void updateTooltip(void);

	//! Update fast change buttons
	void updateButtonsDown(float pElapsedTime);

	//! Show main menu
	void switchToMainMenu(void);

	//! Enable game
	void setGameRunning(bool pRunning);

  //! Set map
  void setMinimap(std::string filename);

	//! Ask for company name
	void askForCompanyName(void);

	//! Set mouse cursor to pan icon
	void setPanIcon(bool pVisible, int pX, int pY, bool pRotate, bool pLastPosOnly = false);

	//! Recover mouse position before pan
	Ogre::Vector2 getLastPanPosition(void) { return mLastPanPosition; }

	//! Show info panel for any gameobject that is selectable
	void showInfo(boost::shared_ptr<GameObject> pObject);

	//! Unshow the info panel
	void unshowInfo(void);

	//! Update realtime data on the info panels
	void updateInfoPanels(std::vector<InfoPanel> pPanels);

	//! Unset loading state (start updating realtime data)
	void finishLoading(void);

	//! Unset game running
	void setNoRunningGame(void);

	//! Get ticker archive (serializing)
	std::vector<TickerMessage> getTickerArchive(void) { return mTickerArchive; }

	//! Set ticker archive (loading)
	void setTickerArchive(std::vector<TickerMessage> pArchive) 
	{
		mTickerArchiveLoaded = true;
		mTickerArchive = pArchive;
	}

	//! Set company pointer
	void setCompany(boost::shared_ptr<Company> pCompany) { mCompany = pCompany; }

  //! Skip 5 frames (loading delay)
	void delaySwitchToMainMenu(void);

  //! En/Disable tutorial mode
	void setTutorial(bool pEnabled);

  //! show weather panel
	void updateWeather(double pTime);

  //! set mission data
	void setMission(std::string pMission) { mMission = pMission; }

  //! show popup text (e.g. "-50k�" when building)
	void popMessage(std::string pMessage, double pDuration, int pX, int pY);

  //! update popup messages (fadeout)
	void updatePopMessages(double pElapsedTime);

  void setDemo(bool pEnabled);
  void updateDemoTime(float pDemoTime);

	void showDemoTimeUp(EventData* pData);
private:

  void demoQuitPressed(MyGUI::Widget* _widget);
  void demoWebsitePressed(MyGUI::Widget* _widget);

	// ET event handlers
	void newWeather(EventData* pData);
	void updateMinimap(EventData* pData);
	void tickerMessage(EventData* pData);
	void messageBoxOK(EventData* pData);
	void updateResearchableButtons(EventData* pData);
	void updateCOBuildingButtons(EventData* pData);
	void setLoadingProgress(EventData *pData);
	void setLoadingStatus(EventData *pData);
	void updatePowerNetWindow(EventData* pData);
	void updateTradeWindow(EventData* pData);
	void updateObligations(EventData* pData);
	void updateFinances(EventData* pData);
	void updateLoans(EventData* pData);
	void showNewspaper(EventData* pData);
	void showBankruptcyWarning(EventData* pData);
	void showBankruptcy(EventData* pData);
	void showMissionDone(EventData* pData);
	void updateSpecialActions(EventData* pData);
	void updateMissionGoals(EventData* pData);
	void updateResourceTrend(EventData* pData);
	void resetSpeedIndicator(EventData* pData);

	// Helper functions
	size_t getCurrentAspectRatio(void);
	void preloadTextures(void);
	void updateTradeData(void);
	void recalcCreditData(void);
	void recalcRate(void);
	void setupGamePanels(void);
    void computeNextButtonPlacement(MyGUI::ImageBox* pPanel, int &oNextX, int &oNextY);
    void createButton(MyGUI::ImageBox* pPanel,std::string pCaption, std::string pName,
    int pX, int pY);
    void fitInfoPanel(MyGUI::ImageBox* pInfoPanel, MyGUI::Widget* pButtonPanel,
    MyGUI::Widget* pMinimapPanel);
	void changeShadowTextCaption(std::string pTextName, std::string pCaption);
	void changeShadowTextCaptionW(std::string pTextName, std::wstring pCaption);
    void showTooltip(bool pShow, std::string pText);
	void showCityInfo(boost::shared_ptr<City> pCity);
	void showPowerPlantInfo(boost::shared_ptr<Powerplant> pPowerplant);
	void showResourceInfo(boost::shared_ptr<ResourceBuilding> pResourceBuilding);
	void showCompanyInfo(boost::shared_ptr<CompanyBuilding> pCompanyBuilding);
	void showInfo(std::string pInfo);
	void createPowerNetTab(int pIndex);
	void updateFinanceRadios(void);
	void setHoverText(int pX, int pY, std::string pText, MyGUI::Colour pColour 
    = MyGUI::Colour(1.0,1.0,0.0));
	void setHoverTextVisible(bool pVisible);

	// MyGUI event handlers
	void question(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void minimapPressed(MyGUI::Widget* _widget, int _left, int _top, MyGUI::MouseButton _button);
	void minimapDragged(MyGUI::Widget* _widget, int _left, int _top);
	void minimapButtonPressed(MyGUI::Widget* _widget);
	void tickerLinePressed(MyGUI::Widget* _widget);
	void gameSpeedFasterPressed(MyGUI::Widget* _widget);
	void gameSpeedSlowerPressed(MyGUI::Widget* _widget);
	void gameSpeedPausePressed(MyGUI::Widget* _widget);
	void buildPowerPlantPressed(MyGUI::Widget* _widget);
	void buildResourcePlantPressed(MyGUI::Widget* _widget);
	void buildDistributionPressed(MyGUI::Widget* _widget);
	void buildMiscPressed(MyGUI::Widget* _widget);
	void menuPressed(MyGUI::Widget* _widget);
	void missionPressed(MyGUI::Widget* _widget);
	void financesPressed(MyGUI::Widget* _widget);
	void tradePressed(MyGUI::Widget* _widget);
	void researchPressed(MyGUI::Widget* _widget);
	void ceoPressed(MyGUI::Widget* _widget);
	void zoomRotatePressed(MyGUI::Widget* _widget);
	void demolishPressed(MyGUI::Widget* _widget);
	void buildPressed(MyGUI::Widget* _widget);
	void showHideResourcesPressed(MyGUI::Widget* _widget);
	void closeWindowPressed(MyGUI::WindowPtr _widget, const std::string& _string);
	void showPowerNetsWindowPressed(MyGUI::Widget* _widget);
	void showTickerArchiveWindowPressed(MyGUI::Widget* _widget);
	void tradeButtonPressed(MyGUI::Widget* _widget);
	void tradeQuestion(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void tradeListPressed(MyGUI::ListPtr _widget, size_t _index);
	void repairButtonPressed(MyGUI::Widget* _widget);
	void repairQuestion(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void powerNetListPressed(MyGUI::ListPtr _widget, size_t _index);
	void menuResumeGamePressed(MyGUI::Widget* _widget);
	void menuExitPressed(MyGUI::Widget* _widget);
	void menuCreditsPressed(MyGUI::Widget* _widget);
	void menuOptionsPressed(MyGUI::Widget* _widget);
	void menuLoadPressed(MyGUI::Widget* _widget);
	void menuSavePressed(MyGUI::Widget* _widget);
	void menuNewPressed(MyGUI::Widget* _widget);
	void menuBackToMainPressed(MyGUI::Widget* _widget);
	void saveButtonPressed(MyGUI::Widget* _widget);
	void loadButtonPressed(MyGUI::Widget* _widget);
	void optionsButtonPressed(MyGUI::Widget* _widget);
	void newButtonPressed(MyGUI::Widget* _widget);
    void newListPressed(MyGUI::ListBox* _sender, size_t index);
    void saveListPressed(MyGUI::ListBox* _sender, size_t _index);
    void loadListPressed(MyGUI::ListBox* _sender, size_t _index);
	void overwrite(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void questionExit(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void unloadAndStartNew(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void unloadAndLoad(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void financesButtonPressed(MyGUI::Widget* _widget);
	void ceoButtonPressed(MyGUI::Widget* _widget);
	void ceoTabPressed(MyGUI::TabPtr _widget, size_t _index);
	void ceoComboPressed(MyGUI::ComboBoxPtr _widget, size_t _index);
	void buttonDownPressed(MyGUI::Widget* _widget, int, int, MyGUI::MouseButton);
	void buttonDownReleased(MyGUI::Widget* _widget, int, int, MyGUI::MouseButton);
	void cityButtonPressed(MyGUI::Widget* _widget);
	void powerplantButtonPressed(MyGUI::Widget* _widget);
	void companyButtonPressed(MyGUI::Widget* _widget);
	void resourceButtonPressed(MyGUI::Widget* _widget);
	void researchButtonPressed(MyGUI::Widget* _widget);
	void closeNewspaperPressed(MyGUI::Widget* _widget);
	void missionButtonPressed(MyGUI::Widget* _widget);
	void tickerLineMouseOver(MyGUI::Widget* _widget, MyGUI::Widget* _old);
	void tickerLineMouseOut(MyGUI::Widget* _widget, MyGUI::Widget* _old);
	void tickerListPressed(MyGUI::ListPtr _widget, size_t _index);
	void companyNameOK(MyGUI::Widget* _widget);
	void companyNameWOK(MyGUI::WindowPtr _widget, const std::string& _string);
	void tutorialClosePressed(MyGUI::Widget* _widget);
	void tutorialContinuePressed(MyGUI::Widget* _widget);
	void tutorialBackPressed(MyGUI::Widget* _widget);
	void tutorialWindowClosePressed(MyGUI::WindowPtr _widget, const std::string& _string);
	void tutorialCloseQuestion(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void tutorialNextQuestion(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);
	void tutorialShutdownQuestion(MyGUI::Message* _sender, MyGUI::MessageBoxStyle _style);


    boost::shared_ptr<MyGUI::Gui> mGUI; //!< MyGUI instance
    std::vector<TickerMessage> mTickerArchive; //!< All ticker messages
    MyGUI::VectorWidgetPtr mCurrentLayout; //!< Current mygui layout
    MyGUI::VectorWidgetPtr mPreviousLayout; //!< Current mygui layout
    int mTickerIDCounter; //!< ticker counter
	int mCurrentTerrainWidth;
	int mCurrentTerrainHeight;
	eSpeed mCurrentSpeed; //!< Current game speed
	Ogre::RenderSystem* mRenderSystem; //!< OGRE rendersystem for graphic options
    MyGUI::OgrePlatform* mPlatform;
    bool mGameRunning;
	bool mAskForRestart; //!< Ask for restart on load/new game
	bool mLastPanVisible;
	bool mLastTooltipVisible;
    std::string mLastTooltipText;
	Ogre::Vector2 mLastPanPosition; //!< Recover this when user leaves pan mode
	boost::shared_ptr<Company> mCompany;
	bool mShowBuy, mShowSell, mShowGas, mShowCoal, mShowUranium; //!< trade contracts
	bool mOffersInvalidated, mObligationsInvalidated; //!< invalidation on month change
	boost::shared_ptr<City> mCityInfo; //!< currently selected city, powerplant, ...
	boost::shared_ptr<Powerplant> mPowerplantInfo;
	boost::shared_ptr<ResourceBuilding> mResourceInfo;
	boost::shared_ptr<CompanyBuilding> mCompanyInfo;
	ButtonDownSet mBD; //!< fast change buttons
	float mButtonDownTime; //!< time current button is down
	int mRepayment, mAmount, mYears, mMonthlyRate, mNewMonthlyRate; //!< loan values
	float mInterestRate;
	MyGUI::Widget *mInfoPanelWidget; //!< Widget for hover panels
	size_t mResearchIndex;
	Ogre::Root* mRoot; //!< OGRE root for graphic options
	bool mLoading; //!< Currently loading?
	Ogre::String mCurrentTime;
	int mSelectMessage; //!< Ticker line message clicked
	bool mTickerArchiveLoaded; 
	size_t mRepairCost;
	bool mRepairPP; //!< Repair PP or RE
	int mMainMenuLock;
	std::string mOldGraphicsQuality;
	bool mTutorial;
	size_t mTutorialStep;
	std::string mMission;
	size_t mTutorialIndex;
	bool mTutorialClosed;
	bool mCompanyInfoLock;
	float mWeatherOutCounter;
	float mWeatherStayCounter;
	float mWeatherInCounter;
	Weather mCurrentWeather;
	std::map<std::string, std::string> mISOToFormattedMapname;
	std::map<std::string, std::string> mFormattedToISOMapname;
	std::vector<PopMessage> mPopMessages;
  bool mOptionsChanged;
  bool mDemo;
  bool mShowDemoTime;
};

/*-----------------------------------------------------------------------------------------------*/

#endif // GUI_H
