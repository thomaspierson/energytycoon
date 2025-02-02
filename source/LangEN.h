// GENERATED - DO NOT EDIT
#ifndef LANGEN_H
#define LANGEN_H

/*-----------------------------------------------------------------------------------------------*/

//! English language
class LangEN : public StrLoc {
public:

  Ogre::String LanguageCode()
  { return Ogre::String("en"); }
  Ogre::String GameTitle()
  { return Ogre::String("Energy Tycoon"); }
  Ogre::String MyGUILanguage()
  { return Ogre::String("English"); }
  Ogre::String MainMenuClose()
  { return Ogre::String("Exit"); }
  Ogre::String MainMenuOptions()
  { return Ogre::String("Options"); }
  Ogre::String MainMenuNewGame()
  { return Ogre::String("New game"); }
  Ogre::String MainMenuLoadGame()
  { return Ogre::String("Load game"); }
  Ogre::String MainMenuCredits()
  { return Ogre::String("Credits"); }
  Ogre::String MainMenuSaveGame()
  { return Ogre::String("Save game"); }
  Ogre::String MainMenuResumeGame()
  { return Ogre::String("Resume game"); }
  Ogre::String MainMenuBack()
  { return Ogre::String("Back to menu"); }
  Ogre::String OptionsMenuDisplayMode()
  { return Ogre::String("Display mode:"); }
  Ogre::String OptionsMenuGraphicsQuality()
  { return Ogre::String("Graphics quality:"); }
  Ogre::String OptionsMenuNormal()
  { return Ogre::String("Normal"); }
  Ogre::String OptionsMenuHigh()
  { return Ogre::String("High"); }
  Ogre::String OptionsMenuFullscreen()
  { return Ogre::String("Fullscreen"); }
  Ogre::String LoadMenuLoad()
  { return Ogre::String("Load"); }
  Ogre::String LoadMenuSaved()
  { return Ogre::String("Saved: "); }
  Ogre::String LoadMenuMap()
  { return Ogre::String("Map: "); }
  Ogre::String LoadMenuQuestion()
  { return Ogre::String("A game is currently running, do you really want to load a game?"); }
  Ogre::String LoadMenuSelect()
  { return Ogre::String("Please select a savegame."); }
  Ogre::String NewMenuStart()
  { return Ogre::String("Start game"); }
  Ogre::String NewMenuEasy()
  { return Ogre::String("Easy"); }
  Ogre::String NewMenuMedium()
  { return Ogre::String("Medium"); }
  Ogre::String NewMenuHard()
  { return Ogre::String("Hard"); }
  Ogre::String NewMenuMissions()
  { return Ogre::String("Missions:"); }
  Ogre::String NewMenuDifficulty()
  { return Ogre::String("Difficulty:"); }
  Ogre::String NewMenuQuestion()
  { return Ogre::String("A game is currently running, do you really want to start a new game?"); }
  Ogre::String NewMenuSelect()
  { return Ogre::String("Please select a map and mission."); }
  Ogre::String NewMenuMissionGoals()
  { return Ogre::String("Mission goals:"); }
  Ogre::String NewMenuMap()
  { return Ogre::String("Maps:"); }
  Ogre::String SaveMenuSave()
  { return Ogre::String("Save"); }
  Ogre::String SaveMenuName()
  { return Ogre::String("Please choose a name for your savegame."); }
  Ogre::String SaveMenuOverwrite()
  { return Ogre::String("A savegame with that name already exists. Overwrite?"); }
  Ogre::String SaveMenuSaved()
  { return Ogre::String("Game saved."); }
  Ogre::String Year()
  { return Ogre::String("Year"); }
  Ogre::String January()
  { return Ogre::String("January"); }
  Ogre::String February()
  { return Ogre::String("February"); }
  Ogre::String March()
  { return Ogre::String("March"); }
  Ogre::String April()
  { return Ogre::String("April"); }
  Ogre::String May()
  { return Ogre::String("May"); }
  Ogre::String June()
  { return Ogre::String("June"); }
  Ogre::String July()
  { return Ogre::String("July"); }
  Ogre::String August()
  { return Ogre::String("August"); }
  Ogre::String September()
  { return Ogre::String("September"); }
  Ogre::String October()
  { return Ogre::String("October"); }
  Ogre::String November()
  { return Ogre::String("November"); }
  Ogre::String December()
  { return Ogre::String("December"); }
  Ogre::String TooltipBuildPowerplant()
  { return Ogre::String("Build powerplants"); }
  Ogre::String TooltipBuildDistribution()
  { return Ogre::String("Build power lines"); }
  Ogre::String TooltipBuildResource()
  { return Ogre::String("Build resource gathering buildings"); }
  Ogre::String TooltipBuildMisc()
  { return Ogre::String("Build company buildings"); }
  Ogre::String TooltipDemolish()
  { return Ogre::String("Demolish buildings"); }
  Ogre::String TooltipSp1()
  { return Ogre::String("Don't train employees for 6 month.\n(") + Ogre::String(toString(GameConfig::getInt("PriceNoTraining")/1000)) + Ogre::String("k€, -25% on operation cost)"); }
  Ogre::String TooltipSp2()
  { return Ogre::String("Run illegal waste dumping for 6 month.\n(") + Ogre::String(toString(GameConfig::getInt("PriceWasteDumping")/1000)) + Ogre::String("k€, -25% on operation cost)"); }
  Ogre::String TooltipSp3()
  { return Ogre::String("Commit trade tax fraud for the next 4 trade transactions.\n(") + Ogre::String(toString(GameConfig::getInt("PriceTaxFraud")/1000)) + Ogre::String("k€, -50% cost for trades)"); }
  Ogre::String TooltipSp4()
  { return Ogre::String("Bribe parties running in the next election.\n(") + Ogre::String(toString(GameConfig::getInt("PriceBribe")/1000)) + Ogre::String("k€, -80% mandatory environmental support for 4 years)"); }
  Ogre::String TooltipSp5()
  { return Ogre::String("Support the current governments war efforts.\n(") + Ogre::String(toString(GameConfig::getInt("PriceWarSupport")/1000)) + Ogre::String("k€, -50% on all resource trades for 1 year)"); }
  Ogre::String TooltipSp6()
  { return Ogre::String("Manipulate the prices together with your competitors.\n(") + Ogre::String(toString(GameConfig::getInt("PricePriceRigging")/1000)) + Ogre::String("k€, +50% on customer income for 1 year)"); }
  Ogre::String TooltipSpNotAvailable()
  { return Ogre::String("You don't have access to this special action yet.\nBuild a headquarter building to access this."); }
  Ogre::String TooltipSp1Img()
  { return Ogre::String("No employee training active"); }
  Ogre::String TooltipSp2Img()
  { return Ogre::String("Illegal waste dumping active"); }
  Ogre::String TooltipSp3ImgA()
  { return Ogre::String("Trade tax fraud active ("); }
  Ogre::String TooltipSp3ImgB()
  { return Ogre::String(" trades left)"); }
  Ogre::String TooltipSp4Img()
  { return Ogre::String("Election bribe active"); }
  Ogre::String TooltipSp5Img()
  { return Ogre::String("War support active"); }
  Ogre::String TooltipSp6Img()
  { return Ogre::String("Price rigging active"); }
  Ogre::String TooltipSpImgInactive()
  { return Ogre::String("Special action inactive"); }
  Ogre::String TooltipAd1()
  { return Ogre::String("Run internet ad campaign. (") + Ogre::String(GameConfig::getString("AdInternetCost")) + Ogre::String("k€)"); }
  Ogre::String TooltipAd2()
  { return Ogre::String("Run newspaper ad campaign. (") + Ogre::String(GameConfig::getString("AdNewspaperCost")) + Ogre::String("k€)"); }
  Ogre::String TooltipAd3()
  { return Ogre::String("Run radio ad campaign. (") + Ogre::String(GameConfig::getString("AdRadioCost")) + Ogre::String("k€)"); }
  Ogre::String TooltipAd4()
  { return Ogre::String("Run TV ad campaign. (") + Ogre::String(GameConfig::getString("AdTVCost")) + Ogre::String("k€)"); }
  Ogre::String TooltipAdNotAvailable()
  { return Ogre::String("You don't have access to this ad form yet.\nBuild a public relations building to access this."); }
  Ogre::String TooltipRe1()
  { return Ogre::String("Research large coal powerplant."); }
  Ogre::String TooltipRe2()
  { return Ogre::String("Research large wind turbine."); }
  Ogre::String TooltipRe3()
  { return Ogre::String("Research advertising improvement."); }
  Ogre::String TooltipRe4()
  { return Ogre::String("Research bio powerplant."); }
  Ogre::String TooltipRe5()
  { return Ogre::String("Research wind efficiency improvement."); }
  Ogre::String TooltipRe6()
  { return Ogre::String("Research coal efficiency improvement."); }
  Ogre::String TooltipRe7()
  { return Ogre::String("Research offshore turbine."); }
  Ogre::String TooltipRe8()
  { return Ogre::String("Research gas efficiency improvement."); }
  Ogre::String TooltipRe9()
  { return Ogre::String("Research small nuclear powerplant."); }
  Ogre::String TooltipRe10()
  { return Ogre::String("Research large gas powerplant."); }
  Ogre::String TooltipRe11()
  { return Ogre::String("Research large coal extraction facility."); }
  Ogre::String TooltipRe12()
  { return Ogre::String("Research reduce operation cost"); }
  Ogre::String TooltipRe13()
  { return Ogre::String("Research large gas extraction facility."); }
  Ogre::String TooltipRe14()
  { return Ogre::String("Research CO2 reduction."); }
  Ogre::String TooltipRe15()
  { return Ogre::String("Research uranium efficiency."); }
  Ogre::String TooltipRe16()
  { return Ogre::String("Research large solar powerplant."); }
  Ogre::String TooltipRe17()
  { return Ogre::String("Research solar updraft powerplant."); }
  Ogre::String TooltipRe18()
  { return Ogre::String("Research solar efficiency."); }
  Ogre::String TooltipRe19()
  { return Ogre::String("Research large nuclear powerplant."); }
  Ogre::String TooltipRe20()
  { return Ogre::String("Research large uranium extraction facility."); }
  Ogre::String TooltipRe21()
  { return Ogre::String("Research nuclear fusion powerplant."); }
  Ogre::String TooltipReNotAvailable()
  { return Ogre::String("You don't have access to this upgrade yet.\nBuild a research center to access this."); }
  Ogre::String TooltipMenu()
  { return Ogre::String("Go to main menu"); }
  Ogre::String TooltipMission()
  { return Ogre::String("Show mission goals"); }
  Ogre::String TooltipFinances()
  { return Ogre::String("Show finances"); }
  Ogre::String TooltipResearch()
  { return Ogre::String("Show research"); }
  Ogre::String TooltipCEO()
  { return Ogre::String("Go to CEOs office"); }
  Ogre::String TooltipTrade()
  { return Ogre::String("Show trade window"); }
  Ogre::String TooltipZoomIn()
  { return Ogre::String("Zoom in"); }
  Ogre::String TooltipZoomOut()
  { return Ogre::String("Zoom out"); }
  Ogre::String TooltipRotateLeft()
  { return Ogre::String("Rotate left"); }
  Ogre::String TooltipRotateRight()
  { return Ogre::String("Rotate right"); }
  Ogre::String TooltipSlower()
  { return Ogre::String("Decrease game speed"); }
  Ogre::String TooltipFaster()
  { return Ogre::String("Increase game speed"); }
  Ogre::String TooltipPause()
  { return Ogre::String("Pause game"); }
  Ogre::String TooltipPowerNets()
  { return Ogre::String("Show power nets"); }
  Ogre::String TooltipMessageArchive()
  { return Ogre::String("Show message archive"); }
  Ogre::String TooltipImage()
  { return Ogre::String("Image: "); }
  Ogre::String TooltipReliability()
  { return Ogre::String("Reliability: "); }
  Ogre::String TooltipNormal()
  { return Ogre::String("Normal"); }
  Ogre::String TooltipHigh()
  { return Ogre::String("High"); }
  Ogre::String TooltipLow()
  { return Ogre::String("Low"); }
  Ogre::String TooltipCost()
  { return Ogre::String("Cost: "); }
  Ogre::String TooltipPower()
  { return Ogre::String("Power: "); }
  Ogre::String TooltipOutput()
  { return Ogre::String("Output: "); }
  Ogre::String TooltipRods()
  { return Ogre::String("Rods"); }
  Ogre::String TooltipKCubicFeet()
  { return Ogre::String("Kcubic feet"); }
  Ogre::String TooltipKTons()
  { return Ogre::String("Ktons"); }
  Ogre::String TooltipPerWeek()
  { return Ogre::String("/Week"); }
  Ogre::String TooltipCapacity()
  { return Ogre::String("Capacity: "); }
  Ogre::String TooltipCoalSmall()
  { return Ogre::String("Small coal powerplant"); }
  Ogre::String TooltipCoalLarge()
  { return Ogre::String("Large coal powerplant"); }
  Ogre::String TooltipGasSmall()
  { return Ogre::String("Small gas powerplant"); }
  Ogre::String TooltipGasLarge()
  { return Ogre::String("Large gas powerplant"); }
  Ogre::String TooltipNuclearSmall()
  { return Ogre::String("Small nuclear powerplant"); }
  Ogre::String TooltipNuclearLarge()
  { return Ogre::String("Large nuclear powerplant"); }
  Ogre::String TooltipNuclearFusion()
  { return Ogre::String("Nuclear fusion powerplant"); }
  Ogre::String TooltipSolarSmall()
  { return Ogre::String("Small solar powerplant"); }
  Ogre::String TooltipSolarLarge()
  { return Ogre::String("Large solar powerplant"); }
  Ogre::String TooltipSolarUpdraft()
  { return Ogre::String("Solar updraft powerplant"); }
  Ogre::String TooltipWindSmall()
  { return Ogre::String("Small wind turbine"); }
  Ogre::String TooltipWindLarge()
  { return Ogre::String("Large wind turbine"); }
  Ogre::String TooltipWindOffshore()
  { return Ogre::String("Offshore wind turbine"); }
  Ogre::String TooltipBio()
  { return Ogre::String("Biomass powerplant"); }
  Ogre::String TooltipHeadquarters()
  { return Ogre::String("Company headquarters"); }
  Ogre::String TooltipResearchBuilding()
  { return Ogre::String("Research center"); }
  Ogre::String TooltipPR()
  { return Ogre::String("Public relations center"); }
  Ogre::String TooltipCoalRSmall()
  { return Ogre::String("Small coal mine"); }
  Ogre::String TooltipCoalRLarge()
  { return Ogre::String("Large coal mine"); }
  Ogre::String TooltipGasRSmall()
  { return Ogre::String("Small gas extraction facility"); }
  Ogre::String TooltipGasRLarge()
  { return Ogre::String("Large gas extraction facility"); }
  Ogre::String TooltipUraniumRSmall()
  { return Ogre::String("Small uranium mine"); }
  Ogre::String TooltipUraniumRLarge()
  { return Ogre::String("Large uranium mine"); }
  Ogre::String TooltipLineSmall()
  { return Ogre::String("Small powerline"); }
  Ogre::String TooltipLineLarge()
  { return Ogre::String("Large powerline"); }
  Ogre::String NoMoney()
  { return Ogre::String("You don't have enough money!"); }
  Ogre::String NoResources()
  { return Ogre::String("You don't have enough resources!"); }
  Ogre::String TooltipRepair()
  { return Ogre::String("Repair this building"); }
  Ogre::String TooltipMMCapacity()
  { return Ogre::String("Show capacity information"); }
  Ogre::String TooltipMMDefault()
  { return Ogre::String("Default view"); }
  Ogre::String TooltipMMSupply()
  { return Ogre::String("Show supply information"); }
  Ogre::String TooltipMMResources()
  { return Ogre::String("Show resource locations"); }
  Ogre::String WantToQuit()
  { return Ogre::String("Do you really want to quit?"); }
  Ogre::String GoalNone()
  { return Ogre::String("None"); }
  Ogre::String CitySeeNet()
  { return Ogre::String("... (see power net)"); }
  Ogre::String CityNone()
  { return Ogre::String("None"); }
  Ogre::String PPOutput()
  { return Ogre::String("Output: "); }
  Ogre::String PPUsed()
  { return Ogre::String("Power used: "); }
  Ogre::String PPConnected()
  { return Ogre::String("Connected to: "); }
  Ogre::String Condition()
  { return Ogre::String("Condition: "); }
  Ogre::String BuiltYear()
  { return Ogre::String("Year built: "); }
  Ogre::String WeeklyCost()
  { return Ogre::String("Weekly cost: "); }
  Ogre::String DamagedNeedsRepair()
  { return Ogre::String("Damaged, needs repair"); }
  Ogre::String Loading()
  { return Ogre::String("Loading..."); }
  Ogre::String LoadingTerrain()
  { return Ogre::String("Terrain"); }
  Ogre::String LoadingTreesResources()
  { return Ogre::String("Distributing trees & resources"); }
  Ogre::String LoadingCompanyData()
  { return Ogre::String("Company data"); }
  Ogre::String LoadingPopulace()
  { return Ogre::String("Populace"); }
  Ogre::String COCoal()
  { return Ogre::String("Coal: "); }
  Ogre::String COGas()
  { return Ogre::String("Gas: "); }
  Ogre::String COUranium()
  { return Ogre::String("Uranium: "); }
  Ogre::String COKCubicShort()
  { return Ogre::String("KCF"); }
  Ogre::String COKTonShort()
  { return Ogre::String("KTon"); }
  Ogre::String CORodShort()
  { return Ogre::String("Rod"); }
  Ogre::String CONet()
  { return Ogre::String("Net"); }
  Ogre::String COCities()
  { return Ogre::String("Cities: "); }
  Ogre::String COPowerplants()
  { return Ogre::String("Powerplants: "); }
  Ogre::String COSelectCity()
  { return Ogre::String("Select city for details."); }
  Ogre::String COSelectPP()
  { return Ogre::String("Select powerplant for details."); }
  Ogre::String CONetEfficiency()
  { return Ogre::String("Net efficiency: "); }
  Ogre::String CONetAvailable()
  { return Ogre::String("Power available: "); }
  Ogre::String CONetNeeded()
  { return Ogre::String("Needed by Customers: "); }
  Ogre::String Residents()
  { return Ogre::String("Residents: "); }
  Ogre::String PowerNeeded()
  { return Ogre::String("Needed by Customers:"); }
  Ogre::String PowerSuppliedByYou()
  { return Ogre::String("Supplied by you:"); }
  Ogre::String Customers()
  { return Ogre::String("Customers: "); }
  Ogre::String SuppliedBy()
  { return Ogre::String("Supplied by: "); }
  Ogre::String Price()
  { return Ogre::String("Price:"); }
  Ogre::String UseGlobalSettings()
  { return Ogre::String("Use global settings"); }
  Ogre::String AdsBudget()
  { return Ogre::String("Ads budget:"); }
  Ogre::String Week()
  { return Ogre::String("week"); }
  Ogre::String PPMaintenance()
  { return Ogre::String("Maintenance:"); }
  Ogre::String Nothing()
  { return Ogre::String("Nothing"); }
  Ogre::String CurrentlyResearching()
  { return Ogre::String("Currently researching:"); }
  Ogre::String ResearchCaption()
  { return Ogre::String("Research"); }
  Ogre::String ResearchDone()
  { return Ogre::String("This research project has already been completed."); }
  Ogre::String ResearchOne()
  { return Ogre::String("You can only have one research project at a time!"); }
  Ogre::String ResearchNoAccess()
  { return Ogre::String("You don't have access to this yet!"); }
  Ogre::String ResearchNoAccessTree()
  { return Ogre::String("You don't have access to this yet!"); }
  Ogre::String StartResearchA()
  { return Ogre::String("Start research on: '"); }
  Ogre::String StartResearchB()
  { return Ogre::String("'? ("); }
  Ogre::String Re1()
  { return Ogre::String("Large coal powerplant"); }
  Ogre::String Re2()
  { return Ogre::String("Large wind turbine"); }
  Ogre::String Re3()
  { return Ogre::String("Advertising improvement"); }
  Ogre::String Re4()
  { return Ogre::String("Bio powerplant"); }
  Ogre::String Re5()
  { return Ogre::String("Wind efficiency improvement"); }
  Ogre::String Re6()
  { return Ogre::String("Coal efficiency improvement"); }
  Ogre::String Re7()
  { return Ogre::String("Offshore turbine"); }
  Ogre::String Re8()
  { return Ogre::String("Gas efficiency improvement"); }
  Ogre::String Re9()
  { return Ogre::String("Small nuclear powerplant"); }

  Ogre::String Re10()
  { return Ogre::String("Large gas powerplant"); }
  Ogre::String Re11()
  { return Ogre::String("Large coal extraction facility"); }
  Ogre::String Re12()
  { return Ogre::String("Reduced operation cost"); }
  Ogre::String Re13()
  { return Ogre::String("Large gas extraction facility"); }
  Ogre::String Re14()
  { return Ogre::String("CO2 reduction"); }
  Ogre::String Re15()
  { return Ogre::String("Uranium efficiency improvement"); }
  Ogre::String Re16()
  { return Ogre::String("Large solar powerplant"); }
  Ogre::String Re17()
  { return Ogre::String("Solar updraft powerplant"); }
  Ogre::String Re18()
  { return Ogre::String("Solar efficiency improvement"); }
  Ogre::String Re19()
  { return Ogre::String("Large nuclear powerplant"); }
  Ogre::String Re20()
  { return Ogre::String("Large uranium extraction facility"); }
  Ogre::String Re21()
  { return Ogre::String("Nuclear fusion powerplant"); }
  Ogre::String CEOCaption()
  { return Ogre::String("CEOs Office"); }
  Ogre::String CEOOffice()
  { return Ogre::String("Office"); }
  Ogre::String CustomersOpinionsFrom()
  { return Ogre::String("Customer opinions from:"); }
  Ogre::String NoOpinions()
  { return Ogre::String("No customer opinions"); }
  Ogre::String AllCities()
  { return Ogre::String("All cities"); }
  Ogre::String CEOCustomers()
  { return Ogre::String("Customers"); }
  Ogre::String Ad1Question()
  { return Ogre::String("Run a Internet ad campaign for ") + Ogre::String(GameConfig::getString("AdInternetCost")) + Ogre::String("k€?"); }
  Ogre::String Ad2Question()
  { return Ogre::String("Run a newspaper ad campaign for ") + Ogre::String(GameConfig::getString("AdNewspaperCost")) + Ogre::String("k€?"); }
  Ogre::String Ad3Question()
  { return Ogre::String("Run a radio ad campaign for ") + Ogre::String(GameConfig::getString("AdRadioCost")) + Ogre::String("k€?"); }
  Ogre::String Ad4Question()
  { return Ogre::String("Run a TV ad campaign for ") + Ogre::String(GameConfig::getString("AdTVCost")) + Ogre::String("k€?"); }
  Ogre::String AdNoAccess()
  { return Ogre::String("You don't have access to this yet!\nBuild a public relations building to access this."); }
  Ogre::String Sp1Question()
  { return Ogre::String("Don't train employees for 6 month? (") + Ogre::String(toString(GameConfig::getInt("PriceNoTraining")/1000)) + Ogre::String("k€, -25% on operation cost)"); }
  Ogre::String Sp2Question()
  { return Ogre::String("Run illegal waste dumping for 6 month? (") + Ogre::String(toString(GameConfig::getInt("PriceWasteDumping")/1000)) + Ogre::String("k€, -25% on operation cost)"); }
  Ogre::String Sp3Question()
  { return Ogre::String("Commit trade tax fraud for the next 4 trade transactions?\n(") + Ogre::String(toString(GameConfig::getInt("PriceTaxFraud")/1000)) + Ogre::String("k€, -50% cost for trades)"); }
  Ogre::String Sp4Question()
  { return Ogre::String("Bribe parties running in the next election?\n(") + Ogre::String(toString(GameConfig::getInt("PriceBribe")/1000)) + Ogre::String("k€, -80% mandatory environmental support for 4 years)"); }
  Ogre::String Sp5Question()
  { return Ogre::String("Support the current governments war efforts? (") + Ogre::String(toString(GameConfig::getInt("PriceWarSupport")/1000)) + Ogre::String("k€, -50% on all resource trades for 1 year)"); }
  Ogre::String Sp6Question()
  { return Ogre::String("Manipulate the prices together with your competitors? (") + Ogre::String(toString(GameConfig::getInt("PricePriceRigging")/1000)) + Ogre::String("k€, +50% on customer income for 1 year)"); }
  Ogre::String SpStarted()
  { return Ogre::String("You already started this special action."); }
  Ogre::String SpNoAccess()
  { return Ogre::String("You don't have access to this yet!\nBuild a headquarters building to access this."); }
  Ogre::String MissionCaption()
  { return Ogre::String("Mission goals"); }
  Ogre::String TickerCaption()
  { return Ogre::String("Ticker archive"); }
  Ogre::String TickerEmpty()
  { return Ogre::String("The ticker archive is empty."); }
  Ogre::String BuildingNoAccess()
  { return Ogre::String("You don't have access to this building yet."); }
  Ogre::String NoPowerNet()
  { return Ogre::String("You don't have a power net."); }
  Ogre::String InterestRate()
  { return Ogre::String("Interest rate: "); }
  Ogre::String MonthlyCharge()
  { return Ogre::String("Monthly charge: "); }
  Ogre::String NewMonthlyCharge()
  { return Ogre::String("New monthly charge: "); }
  Ogre::String RepairA()
  { return Ogre::String("Repair "); }
  Ogre::String RepairB()
  { return Ogre::String(" for "); }
  Ogre::String UniqueHeadquarters()
  { return Ogre::String("You can only build one headquarter building!"); }
  Ogre::String UniqueResearch()
  { return Ogre::String("You can only build one research building!"); }
  Ogre::String UniquePR()
  { return Ogre::String("You can only build one public relations building!"); }
  Ogre::String Sp1Started()
  { return Ogre::String("Special action 'No employee training' started."); }
  Ogre::String Sp2Started()
  { return Ogre::String("Special action 'Illegal waste dumping' started."); }
  Ogre::String Sp3Started()
  { return Ogre::String("Special action 'Tax fraud' started."); }
  Ogre::String Sp4Started()
  { return Ogre::String("Special action 'Election bribe' started."); }
  Ogre::String Sp5Started()
  { return Ogre::String("Special action 'War support' started."); }
  Ogre::String Sp6Started()
  { return Ogre::String("Special action 'Price rigging' started."); }
  Ogre::String Sp1Detail()
  { return Ogre::String("Your employess won't be trained for 6 month."); }
  Ogre::String Sp2Detail()
  { return Ogre::String("Illegal waste dumping saves you money, but uncovered it severely damages your image."); }
  Ogre::String Sp3Detail()
  { return Ogre::String("Tax fraud gives you 4 tax-free trades which saves a lot of money."); }
  Ogre::String Sp4Detail()
  { return Ogre::String("You won't have to pay environment payments for the next legislation period. Uncovered it will damage your image."); }
  Ogre::String Sp5Detail()
  { return Ogre::String("Saves you a lot of money when trading resources, but uncovered it severely damages your image."); }
  Ogre::String Sp6Detail()
  { return Ogre::String("Price rigging doubles your income, but uncovered it severely damages your image and you may have to pay a hefty fine."); }
  Ogre::String Ad1Started()
  { return Ogre::String("Internet ad campaign started."); }
  Ogre::String Ad2Started()
  { return Ogre::String("Newspaper ad campaign started."); }
  Ogre::String Ad3Started()
  { return Ogre::String("Radio ad campaign started."); }
  Ogre::String Ad4Started()
  { return Ogre::String("TV ad campaign started."); }
  Ogre::String Ad1Detail()
  { return Ogre::String("Ad campaigns improve your image, but only for a short time."); }
  Ogre::String Ad2Detail()
  { return Ogre::String("Ad campaigns improve your image, but only for a short time."); }
  Ogre::String Ad3Detail()
  { return Ogre::String("Ad campaigns improve your image, but only for a short time."); }
  Ogre::String Ad4Detail()
  { return Ogre::String("Ad campaigns improve your image, but only for a short time."); }
  Ogre::String OfferNA()
  { return Ogre::String("The offer is no longer available!"); }
  Ogre::String ObligationNA()
  { return Ogre::String("The obligation is no longer active!"); }
  Ogre::String SelectOffer()
  { return Ogre::String("Please select a trading offer."); }
  Ogre::String SelectObligation()
  { return Ogre::String("Please select an obligation."); }
  Ogre::String SelectPartner()
  { return Ogre::String("Please select a trading partner."); }
  Ogre::String CancelObligation()
  { return Ogre::String("Do you really want to cancel that obligation?"); }
  Ogre::String SignTradeA()
  { return Ogre::String("Do you want to sign a trade agreement with "); }
  Ogre::String SignTradeB()
  { return Ogre::String(" for "); }
  Ogre::String SignTradeC()
  { return Ogre::String("?"); }
  Ogre::String Coal()
  { return Ogre::String("Coal"); }
  Ogre::String Gas()
  { return Ogre::String("Gas"); }
  Ogre::String Uranium()
  { return Ogre::String("Uranium"); }
  Ogre::String CoalS()
  { return Ogre::String("coal"); }
  Ogre::String GasS()
  { return Ogre::String("gas"); }
  Ogre::String UraniumS()
  { return Ogre::String("Uranium"); }
  Ogre::String Sell()
  { return Ogre::String("Sell"); }
  Ogre::String Buy()
  { return Ogre::String("Buy"); }
  Ogre::String SelectLoan()
  { return Ogre::String("Please select a current loan."); }
  Ogre::String ChooseSum()
  { return Ogre::String("Please choose a repayment sum."); }
  Ogre::String RepayA()
  { return Ogre::String("Do you want to repay "); }
  Ogre::String RepayB()
  { return Ogre::String("k€ on the selected loan?"); }
  Ogre::String TakeoutA()
  { return Ogre::String("Take out a loan of "); }
  Ogre::String TakeoutB()
  { return Ogre::String("k€ running "); }
  Ogre::String TakeoutC()
  { return Ogre::String(" years?"); }
  Ogre::String FinancesCaption()
  { return Ogre::String("Finances"); }
  Ogre::String PriceText()
  { return Ogre::String("Standard price:"); }
  Ogre::String AdsText()
  { return Ogre::String("Standard advertising budget:"); }
  Ogre::String PriceUnit()
  { return Ogre::String("cent per kWh"); }
  Ogre::String AdsUnit()
  { return Ogre::String("EUR per week and connected city"); }
  Ogre::String MaintenanceText()
  { return Ogre::String("Facility maintenance:"); }
  Ogre::String EnvText()
  { return Ogre::String("Environmental support:"); }
  Ogre::String EnvUnit()
  { return Ogre::String("kEUR per month"); }
  Ogre::String ContractText()
  { return Ogre::String("Minimum contract term:"); }
  Ogre::String SupportText()
  { return Ogre::String("Customer support:"); }
  Ogre::String SupplyText()
  { return Ogre::String("Supply lines maintenance:"); }
  Ogre::String SafetyText()
  { return Ogre::String("Safety measures:"); }
  Ogre::String TermNone()
  { return Ogre::String("none"); }
  Ogre::String Term12()
  { return Ogre::String("12 month"); }
  Ogre::String Term24()
  { return Ogre::String("24 month"); }
  Ogre::String SupportPoor()
  { return Ogre::String("poor"); }
  Ogre::String SupportNormal()
  { return Ogre::String("normal"); }
  Ogre::String SupportExtensive()
  { return Ogre::String("extensive"); }
  Ogre::String EmployeeText()
  { return Ogre::String("Employee training:"); }
  Ogre::String SafetyNone()
  { return Ogre::String("none"); }
  Ogre::String SafetyNormal()
  { return Ogre::String("normal"); }
  Ogre::String SafetyHeavy()
  { return Ogre::String("heavy"); }
  Ogre::String EmployeeNone()
  { return Ogre::String("none"); }
  Ogre::String EmployeeBasic()
  { return Ogre::String("basic"); }
  Ogre::String EmployeeExtensive()
  { return Ogre::String("extensive"); }
  Ogre::String SalesCaption()
  { return Ogre::String("Sales"); }
  Ogre::String IncomeCaption()
  { return Ogre::String("Income/Expenses"); }
  Ogre::String CurrentMonthText()
  { return Ogre::String("Current month:"); }
  Ogre::String LastMonthText()
  { return Ogre::String("Last month:"); }
  Ogre::String CurrentYearText()
  { return Ogre::String("Current year:"); }
  Ogre::String LastYearText()
  { return Ogre::String("Last year:"); }
  Ogre::String TotalText()
  { return Ogre::String("Total:"); }
  Ogre::String FLoan()
  { return Ogre::String("Loan payments:"); }
  Ogre::String FSafety()
  { return Ogre::String("Safety/Training:"); }
  Ogre::String FAdvertising()
  { return Ogre::String("Advertising:"); }
  Ogre::String FMaintenance()
  { return Ogre::String("Maintenance:"); }
  Ogre::String FOperation()
  { return Ogre::String("Facilities operation:"); }
  Ogre::String FEnvironment()
  { return Ogre::String("Environmental costs:"); }
  Ogre::String FResearch()
  { return Ogre::String("Research expenses:"); }
  Ogre::String FBuilding()
  { return Ogre::String("Building expenses:"); }
  Ogre::String FIncome()
  { return Ogre::String("Customer income:"); }
  Ogre::String FSpecial()
  { return Ogre::String("Special expenses:"); }
  Ogre::String FTrade()
  { return Ogre::String("Trade:"); }
  Ogre::String ChartTab()
  { return Ogre::String("Charts"); }
  Ogre::String ExpensesCheck()
  { return Ogre::String("Expenses"); }
  Ogre::String IncomeCheck()
  { return Ogre::String("Income"); }
  Ogre::String FundsCheck()
  { return Ogre::String("Funds"); }
  Ogre::String NetWorthCheck()
  { return Ogre::String("Net worth"); }
  Ogre::String LoanTab()
  { return Ogre::String("Loans"); }
  Ogre::String TakeOutButton()
  { return Ogre::String("Request loan"); }
  Ogre::String RepaymentButton()
  { return Ogre::String("Unscheduled repayment"); }
  Ogre::String NoLoansText()
  { return Ogre::String("No current loans"); }
  Ogre::String CurrentLoansText()
  { return Ogre::String("Current loans:"); }
  Ogre::String AmountText()
  { return Ogre::String("Amount:"); }
  Ogre::String PeriodUnit()
  { return Ogre::String("years"); }
  Ogre::String PeriodText()
  { return Ogre::String("Period:"); }
  Ogre::String TradeCaption()
  { return Ogre::String("Trade"); }
  Ogre::String TradingPartnersText()
  { return Ogre::String("Trading partners:"); }
  Ogre::String NoTradingPartners()
  { return Ogre::String("No trading\npartners left"); }
  Ogre::String WorldMarketText()
  { return Ogre::String("World market prices:"); }
  Ogre::String SignButton()
  { return Ogre::String("Sign trade agreement"); }
  Ogre::String NoTradeOffers()
  { return Ogre::String("No trade offers this month."); }
  Ogre::String OffersText()
  { return Ogre::String("Offers:"); }
  Ogre::String AcceptOfferButton()
  { return Ogre::String("Accept offer"); }
  Ogre::String NoObligations()
  { return Ogre::String("You have no current obligations."); }
  Ogre::String CancelOfferButton()
  { return Ogre::String("Cancel"); }
  Ogre::String CurrentObligationsText()
  { return Ogre::String("Current\nobligations"); }
  Ogre::String LoanFormattedA()
  { return Ogre::String("Amount left: "); }
  Ogre::String LoanFormattedB()
  { return Ogre::String(" k€, Rates left: "); }
  Ogre::String LoanFormattedC()
  { return Ogre::String(" k€ for "); }
  Ogre::String LoanFormattedD()
  { return Ogre::String(" months."); }
  Ogre::String FreeTradesLeft()
  { return Ogre::String(" tax-free trades left."); }
  Ogre::String FreeTradesGone()
  { return Ogre::String("You've used up all of your tax-free trades."); }
  Ogre::String DamagedResourceMessageA()
  { return Ogre::String("Your resource building "); }
  Ogre::String DamagedResourceMessageB()
  { return Ogre::String(" has been shut down due to a technical failure"); }
  Ogre::String DamagedPPMessageA()
  { return Ogre::String("Your powerplant "); }
  Ogre::String DamagedPPMessageB()
  { return Ogre::String(" has been shut down due to a technical failure"); }
  Ogre::String DamagedDetail()
  { return Ogre::String("To repair this building select it and click the repair button"); }
  Ogre::String ResearchFinishedA()
  { return Ogre::String("Research on '"); }
  Ogre::String ResearchFinishedB()
  { return Ogre::String("' finished!"); }
  Ogre::String ResearchStartedA()
  { return Ogre::String("Research on '"); }
  Ogre::String ResearchStartedB()
  { return Ogre::String("' started."); }
  Ogre::String BuyF()
  { return Ogre::String("Buy "); }
  Ogre::String SellF()
  { return Ogre::String("Sell "); }
  Ogre::String From()
  { return Ogre::String(" from "); }
  Ogre::String To()
  { return Ogre::String(" to "); }
  Ogre::String For()
  { return Ogre::String(" for "); }
  Ogre::String EveryWeek()
  { return Ogre::String("every week"); }
  Ogre::String PriceT()
  { return Ogre::String("Price"); }
  Ogre::String WorldMarket()
  { return Ogre::String("World market"); }
  Ogre::String Weeks()
  { return Ogre::String("weeks"); }
  Ogre::String EveryWeekS()
  { return Ogre::String("Every week"); }
  Ogre::String WeeksRemaining()
  { return Ogre::String("weeks remaining"); }
  Ogre::String ContractCanceledResources()
  { return Ogre::String("A contract has been canceled (No resources). Your trading partner is displeased."); }
  Ogre::String ContractCanceledMoney()
  { return Ogre::String("A contract has been canceled (No money). Your trading partner is displeased."); }
  Ogre::String ContractCanceledResourcesDetail()
  { return Ogre::String("You have run out of resources and are unable to fulfill this contract in the future."); }
  Ogre::String ContractCanceledMoneyDetail()
  { return Ogre::String("You have run out of money and are unable to fulfill this contract in the future."); }
  Ogre::String GasStockDepleted()
  { return Ogre::String("Your gas stock is depleted!"); }
  Ogre::String CoalStockDepleted()
  { return Ogre::String("Your coal stock is depleted!"); }
  Ogre::String UraniumStockDepleted()
  { return Ogre::String("Your Uranium stock is depleted!"); }
  Ogre::String HeadquartersBuilt()
  { return Ogre::String("Headquarters built. You got access to more special actions!"); }
  Ogre::String HeadquartersBuiltDetail()
  { return Ogre::String("You have built your companys headquarter. This means you now have access to all special actions. Open the CEO window to see the new actions."); }
  Ogre::String ResearchBuilt()
  { return Ogre::String("Research built. You got access to more research projects!"); }
  Ogre::String ResearchBuiltDetail()
  { return Ogre::String("You have built a research center. This means that you now have access to all research projects. Open the research window to see the new projects."); }
  Ogre::String PRBuilt()
  { return Ogre::String("Public relations built. You got access to more ad forms!"); }
  Ogre::String PRBuiltDetail()
  { return Ogre::String("You have built a public relations center. This means that you now have access to all ad forms. Open the CEO window to see the new options."); }
  Ogre::String NewYear()
  { return Ogre::String("A new year!"); }
  Ogre::String NoBuild()
  { return Ogre::String("You can't build there!"); }
  Ogre::String NoBuildGas()
  { return Ogre::String("You can't build there! You must build this on a gas deposit."); }
  Ogre::String NoBuildUranium()
  { return Ogre::String("You can't build there! You must build this on a uranium deposit."); }
  Ogre::String NoBuildCoal()
  { return Ogre::String("You can't build there! You must build this on a coal deposit."); }
  Ogre::String NoBuildOffshore()
  { return Ogre::String("You can't build there! Offshore turbines must be built in the sea."); }
  Ogre::String ScreenSaved()
  { return Ogre::String(" written."); }
  Ogre::String GameSaved()
  { return Ogre::String("Game saved."); }
  Ogre::String PowerplantText()
  { return Ogre::String("Powerplant"); }
  Ogre::String FullCapacity()
  { return Ogre::String(" is operating at full capacity."); }
  Ogre::String NewspaperImage()
  { return Ogre::String("newspaper_en.png"); }
  Ogre::String NPFounded()
  { return Ogre::String("New electric company founded!"); }
  Ogre::String NPFoundedDetail()
  { return Ogre::String("A new electric company has been founded. Will it be able to establish itself in the market?"); }
  Ogre::String NPFusion()
  { return Ogre::String("Nuclear\nfusion\nmastered!"); }
  Ogre::String NPFusionDetail()
  { return Ogre::String("is the worlds first electric company to master the nuclear fusion technology. Will this be a new era for mankind?"); }
  Ogre::String NPBribe()
  { return Ogre::String("Bribe\nscandal\nuncovered!"); }
  Ogre::String NPBribeDetail()
  { return Ogre::String("tried to bribe parties running for the current election to save mandatory environmental payments."); }
  Ogre::String NPPriceRigging()
  { return Ogre::String("Price\nrigging\nuncovered!"); }
  Ogre::String NPPriceRiggingDetail()
  { return Ogre::String("tried to rig prices together with its competitors."); }
  Ogre::String NPWasteDumping()
  { return Ogre::String("Illegal\nwaste\ndumping!"); }
  Ogre::String NPWasteDumpingDetail()
  { return Ogre::String("has been caught dumping waste illegally."); }
  Ogre::String NPNoTraining()
  { return Ogre::String("Lousy\nemployee\ntraining!"); }
  Ogre::String NPNoTrainingDetail()
  { return Ogre::String("tried to save money by not training its employees."); }
  Ogre::String NPWar()
  { return Ogre::String("War\nsupport\nuncovered!"); }
  Ogre::String NPWarDetail()
  { return Ogre::String("supported the government in its war efforts to save money trading resources."); }
  Ogre::String MissionDoneCaption()
  { return Ogre::String("Mission completed!"); }
  Ogre::String MissionDoneText()
  { return Ogre::String("Congratulations!\n\nYou have completed this mission. You may\nkeep playing or go to the menu and start\nanother mission."); }
  Ogre::String KeepPlaying()
  { return Ogre::String("Keep playing"); }
  Ogre::String ToMenu()
  { return Ogre::String("Quit to menu"); }
  Ogre::String BankruptcyImminentCaption()
  { return Ogre::String("Bankruptcy imminent!"); }
  Ogre::String BankruptcyImminentText()
  { return Ogre::String("Dear CEO of Default Corp.,\n\nIt has come to our attention that your\ndebt has exceeded 2.000kEUR. Reduce\nyour debt to a maximum of 1.000kEUR by\nthe end of this year or we will be forced\nto shut you down.\n\nYours sincerely,\nOmniBank"); }
  Ogre::String BankruptcyCaption()
  { return Ogre::String("Bankruptcy!"); }
  Ogre::String BankruptcyText()
  { return Ogre::String("Dear CEO of Default Corp.,\n\nSince you were unable to reduce your debt\nfollowing our warning, we are forced to\nshut your company down.\n\nYours sincerely,\nOmniBank"); }
  Ogre::String Small()
  { return Ogre::String("small"); }
  Ogre::String Large()
  { return Ogre::String("large"); }
  Ogre::String ConnectThisCity()
  { return Ogre::String("#CC0000Connect this city\nto gain customers"); }
  Ogre::String CreditsText()
  { return Ogre::String("Programming\nMichael Schießl\n\nGraphics\nPeter Schießl\n\nMusic\nKevin McLeod"); }
  Ogre::String NoSavegameSelected()
  { return Ogre::String("Select a savegame"); }
  Ogre::String PowerNetCaption()
  { return Ogre::String("Power nets"); }
  Ogre::String PoleCollapsed()
  { return Ogre::String("A pole collapsed due to bad maintenance. Click here to see where."); }
  Ogre::String Building()
  { return Ogre::String("Building..."); }
  Ogre::String TooManyLoans()
  { return Ogre::String("You have too many open loans. The bank refuses to give you another."); }
  Ogre::String NotEnoughNetWorth()
  { return Ogre::String("Your net worth isn't enough for this loan. "); }
  Ogre::String NetWorthNeeded()
  { return Ogre::String("Needed: "); }
  Ogre::String NetWorthHave()
  { return Ogre::String(", you have: "); }
  Ogre::String ForecastForThisMonth()
  { return Ogre::String("Weather Forecast:"); }
  Ogre::String StrongWind()
  { return Ogre::String("Strong wind"); }
  Ogre::String NormalWind()
  { return Ogre::String("Average wind"); }
  Ogre::String LittleWind()
  { return Ogre::String("Little wind"); }
  Ogre::String PlentySunshine()
  { return Ogre::String("Plenty of sunshine"); }
  Ogre::String NormalSunshine()
  { return Ogre::String("Normal sunshine"); }
  Ogre::String HardlySunshine()
  { return Ogre::String("Hardly any sunshine"); }
  Ogre::String Tutorial()
  { return Ogre::String("Tutorial"); }
  Ogre::String Step()
  { return Ogre::String("Step"); }
  Ogre::String TutorialBack()
  { return Ogre::String("Back"); }
  Ogre::String TutorialContinue()
  { return Ogre::String("Next"); }
  Ogre::String TutorialExit()
  { return Ogre::String("Close tutorial"); }
  Ogre::String TutorialReallyClose()
  { return Ogre::String("Do you really want to close the tutorial?"); }
  Ogre::String NextTutorial()
  { return Ogre::String("Next tutorial"); }
  Ogre::String OpinionIsOK()
  { return Ogre::String(" is OK."); }
  Ogre::String OpinionDontLike1()
  { return Ogre::String("I don't like "); }
  Ogre::String OpinionDontLike2()
  { return Ogre::String(""); }
  Ogre::String OpinionIsGreat()
  { return Ogre::String(" is a great company."); }
  Ogre::String OpinionSawAd1()
  { return Ogre::String("I just saw an ad from "); }
  Ogre::String OpinionSawAd2()
  { return Ogre::String(""); }
  Ogre::String OpinionPriceHigh1()
  { return Ogre::String("The price from "); }
  Ogre::String OpinionPriceHigh2()
  { return Ogre::String(" is too high"); }
  Ogre::String OpinionPriceOK1()
  { return Ogre::String("The price from "); }
  Ogre::String OpinionPriceOK2()
  { return Ogre::String(" is OK"); }
  Ogre::String DefaultCompanyName()
  { return Ogre::String("Standard Electric Ltd"); }
  Ogre::String QuestionCompanyName()
  { return Ogre::String("How would you like to name your company?"); }
  Ogre::String PleaseChooseCompanyName()
  { return Ogre::String("Please choose a name for your company."); }
  Ogre::String EndTutorial()
  { return Ogre::String("End tutorial"); }
  Ogre::String NextTutorialQuestion()
  { return Ogre::String("End this tutorial and continue with the next one?"); }
  Ogre::String Repairs1()
  { return Ogre::String("Repair works will take "); }
  Ogre::String Repairs2()
  { return Ogre::String(" month(s)."); }
  Ogre::String IsBeingRepaired()
  { return Ogre::String("Under repair..."); }
  Ogre::String RepairsComplete1()
  { return Ogre::String("Repairs for "); }
  Ogre::String RepairsComplete2()
  { return Ogre::String(" completed."); }
  Ogre::String Germany()
  { return Ogre::String("Germany"); }
  Ogre::String USA()
  { return Ogre::String("USA"); }
  Ogre::String GameAutoSaved()
  { return Ogre::String("Game autosaved."); }
  Ogre::String Accident()
  { return Ogre::String("Powerplant\naccident!"); }
  Ogre::String AccidentDetail1()
  { return Ogre::String(""); }
  Ogre::String AccidentDetail2()
  { return Ogre::String(" was shut down today after an accident."); }
  Ogre::String PPShutdown1()
  { return Ogre::String("Your powerplant "); }
  Ogre::String PPShutdown2()
  { return Ogre::String(" has been shut down after due to an accident."); }
  Ogre::String CoalStockDepletedDetail()
  { return Ogre::String("Your coal stock is empty. You can aquire coal by trading it or by conveying it for yourself by building a coal mine."); }
  Ogre::String UraniumStockDepletedDetail()
  { return Ogre::String("Your uranium stock is empty. You can aquire uranium by trading it or by conveying it for yourself by building a uranium mine."); }
  Ogre::String GasStockDepletedDetail()
  { return Ogre::String("Your gas stock is empty. You can aquire gas by trading it or by conveying it for yourself by building a gas extraction facility."); }
  Ogre::String FreeTradesDetail()
  { return Ogre::String("Free trades are available as a special action in the \"CEO\"-window."); }
  Ogre::String PPAccidentDetail()
  { return Ogre::String("If you want to avoid future accidents increase your safety measures."); }
  Ogre::String PoleCollapsedDetail()
  { return Ogre::String("If you want to avoid poles collapsing increase your supply lines maintenance spendings."); }
  Ogre::String FullCapacityDetail()
  { return Ogre::String("You might want to build new powerplants to satisfy the power demand."); }
  Ogre::String DemoTime()
  { return Ogre::String("Demo, time left:"); }
  Ogre::String DemoNoSave()
  { return Ogre::String("You can't save your game in the Demo."); }
  Ogre::String DemoTimeUpCaption()
  { return Ogre::String("Demotime expired"); }
  Ogre::String DemoTimeUpText()
  { return Ogre::String("Your demotime has expired. Close the game or visit\nwww.energietycoon.de to buy the game."); }
  std::vector< std::vector< Ogre::String > > TutorialStep()
  {
    std::vector< std::vector< Ogre::String > > lReturn;
    std::vector< Ogre::String > lSteps1;
    std::vector< Ogre::String > lSteps2;
    std::vector< Ogre::String > lSteps3;

    lSteps1.push_back("Welcome to the energy tycoon tutorial.\nHere you will learn how to lead a successful energy company.\n\nClick 'Next' to continue the tutorial.");
    lSteps1.push_back("First, you should familiarize yourself with the camera.\nMove the mouse to the screen edges in order to move the viewing area.\nAlternatively, you can also hold down the right mouse button or use the arrow keys of your keyboard.\nTo zoom in or enlarge the viewing area, use your mouse wheel, the keys 'W' and 'S' or '+' and '-' in the bottom left of the screen.\nTo rotate the view to hold down the mouse wheel, use the keys 'A' and 'D', or '<-' and '->' in the bottom left of the screen.\n\nGet familiar with the controls, and then click 'Next' to continue the tutorial.");
    lSteps1.push_back("The first step in building up an energy company is to build a power plant. Click the button with the picture of a power plant to get a selection of available power plants. Select the button 'Small wind turbine' to build a power plant. You can now determine the place of construction for the plant.\nAs long as the outlines of the power plant are shown in green you're clear to build, but should it appear in red, you can not build at this place.\nFind a city now and build the wind farm in the area arround it.\n\nThen click 'Next' to continue the tutorial.");
    lSteps1.push_back("You have now built a power plant. However, it doesn't earn you any money, because it is not connected to a city.\nTo build a power line select the button with the picture of an electricity pylon.\nNow select the button 'Small power line'\nYou can now build a power line. If you move the mouse pointer over an object that you can connect to the power line the mouse pointer alters its appearance.\nNow connect your power plant and a city. By right-clicking, you can leave the building mode.\n\nWhen you're done, click 'Next' to continue the tutorial.");
    lSteps1.push_back("You now have a city that is connected to a power plant, customers can now buy your electricity. Click on the city in order to see how many customers you have and how much power they claim.\n\nWhether and how many customers you win or lose depends on many factors that you will get to know in the next tutorial.\n\nClick 'Next Tutorial' button to continue with it.");

    lSteps2.push_back("Welcome to the 2nd Energy tycoon tutorial.\nHere you will learn how to deal with your customers, you will also learn about your research and finance departments.\n\nClick 'Next' to continue the tutorial.");
    lSteps2.push_back("As you probably noticed, some power plants are already in your possession. One of the cities that you are supplying with electricity is Munich.\nClick the city to obtain detailed information about the city.\nYou can see now how many people live in the city, how many customers you have in this city, how much power they need and how much you provide. You can also set the electricity price and the advertising budget for this city.\nIts customer base is constantly changing.\n\nClick 'Next' to learn how to attract customers.");
    lSteps2.push_back("The main factors that influence your customer development are the electricity price, the advertising budget and image. You can set your price and advertising budget individually for each city, or globally by setting it in the finances window. Your image depends on several factors. Among other things, environmentally friendly power plants, and research projects. Change the advertising budget, or start a promotion in the 'Office' window and watch the customer development.\n\nClick 'Next' to continue with the tutorial.");
    lSteps2.push_back("It is very important that you constantly keep an eye on your finances to prevent a threat of insolvency in time.\nOpen the 'Finance' window, by clicking the button located to the left at the bottom of your screen, or alternatively the button left of your current balance at the top left of your screen.\nOn the first page you can set rates, service settings and much more. Each of these settings will affect your image, your finances, and the customer development.\n\nClick 'Next' to continue the tutorial.");
    lSteps2.push_back("On the second page of the financial window you will see a summary table of your finances.\nIt shows both the current month and the current year and the full last month and last year.\nOn the third page of the financial window is a graphical representation of your finances. You can hide or show individual graphs in by checking the boxes on the top of the graph.\nIf you happen to be short on cash and need money, you can go to the fourth page of the financial window and take out a loan.\n\nClick 'Next' to continue the tutorial.");
    lSteps2.push_back("One of the main divisions is your research department.\nWithout exploring new buildings, plants or technologies you can not achieve great success.\nOpen the window by clicking the research button on the bottom left of your screen. You now see a tree with all research projects that can be explored. To unlock all the projects you need to build a research center, also you can run just one research project at the same time, so think carefully what you want to research.\n\nClick 'Next' to continue the tutorial.");
    lSteps2.push_back("You've finished the second Energy Tycoon tutorial.\n\nIn the third and final tutorial you will learn how to deal with resources.\nYou can go to the next tutorial or continue playing the game by simply closing this window.");

    lSteps3.push_back("Welcome to the 3rd Energy tycoon tutorial.\nHere you will learn how to deal with resources.\n\nClick 'Next' to continue the tutorial.");
    lSteps3.push_back("You have two options how to gain resources:\nYou buy your raw materials on the international commodity market, or build your own mines in order to get raw materials from them.\nBoth options have advantages and disadvantages and you may not have all resources available on the map you're playing.\n\nClick 'Next' to learn how to deal with raw materials.");
    lSteps3.push_back("First, open the window 'Trade'. You can find the button on the bottom left of your screen.\nTop left you will see trading partners with whom you have still not signed a trade agreement, but who could possibly offer you very good deals.\nTop right you will see the trend in world prices of the 3 available raw materials. Trade agreements are concluded either at a fixed price or at world market prices, in this case, this graph is of great importance.\n\nClick on 'Next' to see how you conclude trade agreements and manage them.");
    lSteps3.push_back("In the lower part of the trading window, you will see the currently available offers and your ongoing obligations.\nThe available offers change every month.\nYou have the option of filtering the offers by commodity or by sale and purchase offers by using the box to the right.\nNow select any agreement and click 'Accept offer'. Simple trade actions are executed immediately and disappear from the list. Actions running over a long period will appear below.\n\nClick 'Next' to see how to sell your own goods.");
    lSteps3.push_back("To mine raw materials, you should first click the button 'Show resource locations' right of your minimap. Now you see what resources are located on the map and where they are.\n\nGreen:\tUranium\nRed:\tGas\nBlue:\tCoal\n\nTo learn how to build your own mines click 'Next'.");
    lSteps3.push_back("Now click on the 'Build resource gathering facilites' on the lower left of your screen. You will now see a selection of buildings you can build. There may not be all buildings available if you haven't researched them.\nSelect the 'Small uranium mine' and browse to the map for one uranium deposit.\nMineral deposits are indicated by small icons on which you can build mines. Now build your uranium mine.\n\nClick 'Next' to continue.");
    lSteps3.push_back("You have completet the Energy Tycoon tutorial.\nYou can close this window and continue playing or quit the game and start a free game or a mission.\n\nEnjoy!");

    lReturn.push_back(lSteps1);
    lReturn.push_back(lSteps2);
    lReturn.push_back(lSteps3);

    return lReturn;
  }
};

/*-----------------------------------------------------------------------------------------------*/

#endif // LANGEN_H
