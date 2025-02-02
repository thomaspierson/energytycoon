cmake_minimum_required(VERSION 2.16.0)

set(PROJECT_NAME "energytycoon")

include(FindPkgConfig)

project(${PROJECT_NAME} CXX C)

if (WIN32)
    set(Boost_USE_STATIC_LIBS TRUE)
    set(Boost_USE_MULTITHREADED TRUE)
    set(Boost_USE_STATIC_RUNTIME FALSE)
else ()
    set(Boost_USE_STATIC_LIBS FALSE)
    set(Boost_USE_MULTITHREADED TRUE)
    set(Boost_USE_STATIC_RUNTIME FALSE)
endif (WIN32)
find_package(Boost COMPONENTS system thread filesystem REQUIRED) # Specify the required components

find_package(OGRE REQUIRED COMPONENTS Bites CONFIG)

pkg_search_module(TinyXml REQUIRED tinyxml)
pkg_search_module(MyGUI REQUIRED MYGUI)
pkg_search_module(OIS REQUIRED OIS)

set(HDRS
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/OgreRectangle.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETArray2D.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETAutoUpdater.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETBrush.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETCommon.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETCompatibility.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETDynamicTexture.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETEditable.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETFilter.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETFlatTerrain.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETIndexHandler.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETMapGeneration.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETMovableContainer.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETMovable.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETPage.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETPatch.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETShaderGenerator.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETSplattingLayout.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETSplattingManager.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETSplattingMaterial.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETSubDescription.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETTerrainDescription.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETUpdatable.h
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETUtility.h
        ${CMAKE_CURRENT_SOURCE_DIR}/source/Audio.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Bezier.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Chart.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/City.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Collidable.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/CompanyBuilding.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Company.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Event.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/GameConfig.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Game.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/GameObject.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/GameTime.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/GUI.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/LangDE.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/LangEN.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Main.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Map.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/PanCamera.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Pole.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/PowerLine.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/PowerNet.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Powerplant.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/ResourceBuilding.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/resource.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/River.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Shared.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/StaticGameObject.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/StdAfx.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Street.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/StringsLoc.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Terrain.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Timer.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/TransformatorSet.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/Weather.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/MessageBox.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/MessageBoxStyle.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/BaseLayout/Attribute.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/BaseLayout/BaseLayout.h
	${CMAKE_CURRENT_SOURCE_DIR}/source/BaseLayout/WrapsAttribute.h
)
 
set(SRCS
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETAutoUpdater.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETBrush.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETDynamicTexture.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETEditable.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETFlatTerrain.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETIndexHandler.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETMapGeneration.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETMovableContainer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETMovable.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETPage.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETPatch.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETShaderGenerator.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETSplattingLayout.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETSplattingManager.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETSplattingMaterial.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETSubDescription.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/etl/source/ETUtility.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/source/Bezier.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Chart.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/City.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/CompanyBuilding.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Company.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Game.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/GameTime.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/GUI.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/GUIMenu.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Map.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/PanCamera.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Pole.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/PowerLine.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/PowerNet.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Powerplant.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/ResourceBuilding.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/River.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/StaticGameObject.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/StdAfx.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Street.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/Terrain.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/source/TransformatorSet.cpp
)
 
include_directories( ${OGRE_INCLUDE_DIRS}
    ${OIS_INCLUDE_DIRS}
    ${MyGUI_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
    ${TinyXml_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME} WIN32 ${HDRS} ${SRCS})
 
SET(MyGUI_PLATFORM_LIBRARIES "MyGUI.OgrePlatform")

target_link_libraries(${PROJECT_NAME} ${TinyXml_LIBRARIES} ${MyGUI_PLATFORM_LIBRARIES} ${MyGUI_LIBRARIES} ${OGRE_LIBRARIES} ${OIS_LIBRARIES} ${Boost_LIBRARIES})

install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	CONFIGURATIONS All)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/dist/media
	DESTINATION ./
	CONFIGURATIONS Release RelWithDebInfo Debug
)

install(FILES ${CMAKE_SOURCE_DIR}/dist/bin/plugins.cfg
	${CMAKE_SOURCE_DIR}/dist/bin/resources.cfg
	DESTINATION bin
	CONFIGURATIONS Release RelWithDebInfo Debug
)

