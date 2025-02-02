// GENERATED - DO NOT EDIT
#ifndef LANGDE_H
#define LANGDE_H

/*-----------------------------------------------------------------------------------------------*/

//! German language
class LangDE : public StrLoc {
public:

  Ogre::String LanguageCode()
  { return Ogre::String("de"); }
  Ogre::String GameTitle()
  { return Ogre::String("Energie Tycoon"); }
  Ogre::String MyGUILanguage()
  { return Ogre::String("German"); }
  Ogre::String MainMenuClose()
  { return Ogre::String("Beenden"); }
  Ogre::String MainMenuOptions()
  { return Ogre::String("Optionen"); }
  Ogre::String MainMenuNewGame()
  { return Ogre::String("Neues Spiel"); }
  Ogre::String MainMenuLoadGame()
  { return Ogre::String("Spiel laden"); }
  Ogre::String MainMenuCredits()
  { return Ogre::String("Mitwirkende"); }
  Ogre::String MainMenuSaveGame()
  { return Ogre::String("Spiel speichern"); }
  Ogre::String MainMenuResumeGame()
  { return Ogre::String("Zurück zum Spiel"); }
  Ogre::String MainMenuBack()
  { return Ogre::String("Zurück zum Menü"); }
  Ogre::String OptionsMenuDisplayMode()
  { return Ogre::String("Grafikmodus:"); }
  Ogre::String OptionsMenuGraphicsQuality()
  { return Ogre::String("Grafikqualität:"); }
  Ogre::String OptionsMenuNormal()
  { return Ogre::String("Normal"); }
  Ogre::String OptionsMenuHigh()
  { return Ogre::String("Hoch"); }
  Ogre::String OptionsMenuFullscreen()
  { return Ogre::String("Vollbild"); }
  Ogre::String LoadMenuLoad()
  { return Ogre::String("Laden"); }
  Ogre::String LoadMenuSaved()
  { return Ogre::String("Gespeichert: "); }
  Ogre::String LoadMenuMap()
  { return Ogre::String("Karte: "); }
  Ogre::String LoadMenuQuestion()
  { return Ogre::String("Es läuft gerade ein Spiel. Wollen Sie wirklich dieses Spiel laden?"); }
  Ogre::String LoadMenuSelect()
  { return Ogre::String("Bitte wählen Sie einen Spielstand aus."); }
  Ogre::String NewMenuStart()
  { return Ogre::String("Spiel starten"); }
  Ogre::String NewMenuEasy()
  { return Ogre::String("Leicht"); }
  Ogre::String NewMenuMedium()
  { return Ogre::String("Normal"); }
  Ogre::String NewMenuHard()
  { return Ogre::String("Schwer"); }
  Ogre::String NewMenuMissions()
  { return Ogre::String("Missionen:"); }
  Ogre::String NewMenuDifficulty()
  { return Ogre::String("Schwierigkeit:"); }
  Ogre::String NewMenuQuestion()
  { return Ogre::String("Es läuft gerade ein Spiel. Wollen Sie wirklich ein neues Spiel starten?"); }
  Ogre::String NewMenuSelect()
  { return Ogre::String("Bitte wählen Sie eine Karte und eine Mission aus."); }
  Ogre::String NewMenuMissionGoals()
  { return Ogre::String("Missionsziele:"); }
  Ogre::String NewMenuMap()
  { return Ogre::String("Karten:"); }
  Ogre::String SaveMenuSave()
  { return Ogre::String("Speichern"); }
  Ogre::String SaveMenuName()
  { return Ogre::String("Bitte wählen Sie einen Namen für Ihren Spielstand."); }
  Ogre::String SaveMenuOverwrite()
  { return Ogre::String("Ein Spielstand mit diesem Namen existiert bereits. überschreiben?"); }
  Ogre::String SaveMenuSaved()
  { return Ogre::String("Spiel gespeichert."); }
  Ogre::String Year()
  { return Ogre::String("Jahr"); }
  Ogre::String January()
  { return Ogre::String("Januar"); }
  Ogre::String February()
  { return Ogre::String("Februar"); }
  Ogre::String March()
  { return Ogre::String("März"); }
  Ogre::String April()
  { return Ogre::String("April"); }
  Ogre::String May()
  { return Ogre::String("Mai"); }
  Ogre::String June()
  { return Ogre::String("Juni"); }
  Ogre::String July()
  { return Ogre::String("Juli"); }
  Ogre::String August()
  { return Ogre::String("August"); }
  Ogre::String September()
  { return Ogre::String("September"); }
  Ogre::String October()
  { return Ogre::String("Oktober"); }
  Ogre::String November()
  { return Ogre::String("November"); }
  Ogre::String December()
  { return Ogre::String("Dezember"); }
  Ogre::String TooltipBuildPowerplant()
  { return Ogre::String("Kraftwerke bauen"); }
  Ogre::String TooltipBuildDistribution()
  { return Ogre::String("Stromleitungen bauen"); }
  Ogre::String TooltipBuildResource()
  { return Ogre::String("Anlagen zur Resourcenförderung bauen"); }
  Ogre::String TooltipBuildMisc()
  { return Ogre::String("Firmenebäude bauen"); }
  Ogre::String TooltipDemolish()
  { return Ogre::String("Gebäude abreißen"); }
  Ogre::String TooltipSp1()
  { return Ogre::String("Keine Mitarbeiterausbildung für 6 Monate.\n(") + Ogre::String(toString(GameConfig::getInt("PriceNoTraining")/1000)) + Ogre::String("k€, -25% auf Betriebskosten)"); }
  Ogre::String TooltipSp2()
  { return Ogre::String("Illegale Müllbeseitigung für 6 Monate.\n(") + Ogre::String(toString(GameConfig::getInt("PriceWasteDumping")/1000)) + Ogre::String("k€, -25% auf Betriebskosten)"); }
  Ogre::String TooltipSp3()
  { return Ogre::String("Handlessteuer hinterziehen für die nächsten 4 Transaktionen.\n(") + Ogre::String(toString(GameConfig::getInt("PriceTaxFraud")/1000)) + Ogre::String("k€, -50% auf Handelsabschlüsse)"); }
  Ogre::String TooltipSp4()
  { return Ogre::String("Die zur Wahl antretenden Parteien schmieren.\n(") + Ogre::String(toString(GameConfig::getInt("PriceBribe")/1000)) + Ogre::String("k€, -80% Umweltschutzzahlungen für 4 Jahre)"); }
  Ogre::String TooltipSp5()
  { return Ogre::String("Kriegsanstrengungen der Regierung unterstützen.\n(") + Ogre::String(toString(GameConfig::getInt("PriceWarSupport")/1000)) + Ogre::String("k€, -50% auf alle Handelsaktionen für 1 Jahr)"); }
  Ogre::String TooltipSp6()
  { return Ogre::String("Preisabsprache mit den Konkurrenten.\n(") + Ogre::String(toString(GameConfig::getInt("PricePriceRigging")/1000)) + Ogre::String("k€, +50% Kundeneinkommen für 1 Jahr)"); }
  Ogre::String TooltipSpNotAvailable()
  { return Ogre::String("Zu dieser Spezialaktion haben Sie noch keinen Zugriff.\nBauen Sie das Hauptquartier um auf diese Aktionen zuzugreifen."); }
  Ogre::String TooltipSp1Img()
  { return Ogre::String("Keine Mitarbeiterausbildung aktiv"); }
  Ogre::String TooltipSp2Img()
  { return Ogre::String("Illegale Müllbeseitigung aktiv"); }
  Ogre::String TooltipSp3ImgA()
  { return Ogre::String("Handelssteuerhinterziehung aktiv ("); }
  Ogre::String TooltipSp3ImgB()
  { return Ogre::String(" Handelsverträge übrig)"); }
  Ogre::String TooltipSp4Img()
  { return Ogre::String("Schmiergeld zur Wahl aktiv"); }
  Ogre::String TooltipSp5Img()
  { return Ogre::String("Kriegsunterstützung aktiv"); }
  Ogre::String TooltipSp6Img()
  { return Ogre::String("Preisabsprachen aktiv"); }
  Ogre::String TooltipSpImgInactive()
  { return Ogre::String("Spezialaktion inaktiv"); }
  Ogre::String TooltipAd1()
  { return Ogre::String("Anzeigenkampagne im Internet. (") + Ogre::String(GameConfig::getString("AdInternetCost")) + Ogre::String("k€)"); }
  Ogre::String TooltipAd2()
  { return Ogre::String("Zeitungsanzeigen. (") + Ogre::String(GameConfig::getString("AdNewspaperCost")) + Ogre::String("k€)"); }
  Ogre::String TooltipAd3()
  { return Ogre::String("Radiowerbung. (") + Ogre::String(GameConfig::getString("AdRadioCost")) + Ogre::String("k€)"); }
  Ogre::String TooltipAd4()
  { return Ogre::String("TV-Spots. (") + Ogre::String(GameConfig::getString("AdTVCost")) + Ogre::String("k€)"); }
  Ogre::String TooltipAdNotAvailable()
  { return Ogre::String("Auf diese Werbeform haben Sie noch keinen Zugriff.\nBauen Sie das PR-Gebäude um darauf Zugriff zu bekommen."); }
  Ogre::String TooltipRe1()
  { return Ogre::String("Großes Kohlekraftwerk erforschen."); }
  Ogre::String TooltipRe2()
  { return Ogre::String("Großes Windkraftwerk erforschen."); }
  Ogre::String TooltipRe3()
  { return Ogre::String("Verbesserung der Anzeigenkampagnen erforschen."); }
  Ogre::String TooltipRe4()
  { return Ogre::String("Biomassekraftwerk erforschen."); }
  Ogre::String TooltipRe5()
  { return Ogre::String("Effizienzsteigerung für Windkraftwerke erforschen."); }
  Ogre::String TooltipRe6()
  { return Ogre::String("Effizienzsteigerung für Kohlekraftwerke erforschen."); }
  Ogre::String TooltipRe7()
  { return Ogre::String("Offshorewindkraft erforschen."); }
  Ogre::String TooltipRe8()
  { return Ogre::String("Effizienzsteigerung für Gaskraftwerke erforschen."); }
  Ogre::String TooltipRe9()
  { return Ogre::String("Kleines Atomkraftwerk erforschen."); }
  Ogre::String TooltipRe10()
  { return Ogre::String("Großes Gaskraftwerk erforschen."); }
  Ogre::String TooltipRe11()
  { return Ogre::String("Große Kohleförderanlage erforschen."); }
  Ogre::String TooltipRe12()
  { return Ogre::String("Verringerte Betriebskosten erforschen."); }
  Ogre::String TooltipRe13()
  { return Ogre::String("Große Gasförderanlage erforschen."); }
  Ogre::String TooltipRe14()
  { return Ogre::String("CO2-Reduktion erforschen"); }
  Ogre::String TooltipRe15()
  { return Ogre::String("Effizienzsteigerung für Atomkraftwerke erforschen."); }
  Ogre::String TooltipRe16()
  { return Ogre::String("Großes Solarkraftwerk erforschen."); }
  Ogre::String TooltipRe17()
  { return Ogre::String("Aufwindkraftwerk erforschen."); }
  Ogre::String TooltipRe18()
  { return Ogre::String("Effizienzsteigerung für Solarkraftwerke erforschen."); }
  Ogre::String TooltipRe19()
  { return Ogre::String("Großes Atomkraftwerk erforschen."); }
  Ogre::String TooltipRe20()
  { return Ogre::String("Große Uranförderanlage erforschen."); }
  Ogre::String TooltipRe21()
  { return Ogre::String("Fusionskraftwerk erforschen."); }
  Ogre::String TooltipReNotAvailable()
  { return Ogre::String("Auf dieses Forschungsprojekt haben Sie noch keinen Zugriff.\nBauen Sie ein Forschungszentrum, um darauf Zugriff zu erhalten."); }
  Ogre::String TooltipMenu()
  { return Ogre::String("Zum Hauptmenü"); }
  Ogre::String TooltipMission()
  { return Ogre::String("Zeige Missionsziele"); }
  Ogre::String TooltipFinances()
  { return Ogre::String("Zeige Finanzen"); }
  Ogre::String TooltipResearch()
  { return Ogre::String("Gehe zur Forschung"); }
  Ogre::String TooltipCEO()
  { return Ogre::String("Gehe ins Büro"); }
  Ogre::String TooltipTrade()
  { return Ogre::String("Zeige Handel"); }
  Ogre::String TooltipZoomIn()
  { return Ogre::String("Vergrößern"); }
  Ogre::String TooltipZoomOut()
  { return Ogre::String("Verkleinern"); }
  Ogre::String TooltipRotateLeft()
  { return Ogre::String("Nach links drehen"); }
  Ogre::String TooltipRotateRight()
  { return Ogre::String("Nach rechts drehen"); }
  Ogre::String TooltipSlower()
  { return Ogre::String("Spielgeschwindigkeit verringern"); }
  Ogre::String TooltipFaster()
  { return Ogre::String("Spielgeschwindigkeit erhöhen"); }
  Ogre::String TooltipPause()
  { return Ogre::String("Spiel pausieren"); }
  Ogre::String TooltipPowerNets()
  { return Ogre::String("Zeige Netze"); }
  Ogre::String TooltipMessageArchive()
  { return Ogre::String("Zeige Nachrichtenarchiv"); }
  Ogre::String TooltipImage()
  { return Ogre::String("Image: "); }
  Ogre::String TooltipReliability()
  { return Ogre::String("Zuverlässigkeit: "); }
  Ogre::String TooltipNormal()
  { return Ogre::String("Normal"); }
  Ogre::String TooltipHigh()
  { return Ogre::String("Hoch"); }
  Ogre::String TooltipLow()
  { return Ogre::String("Schlecht"); }
  Ogre::String TooltipCost()
  { return Ogre::String("Preis: "); }
  Ogre::String TooltipPower()
  { return Ogre::String("Leistung: "); }
  Ogre::String TooltipOutput()
  { return Ogre::String("Förderung: "); }
  Ogre::String TooltipRods()
  { return Ogre::String("Brennst."); }
  Ogre::String TooltipKCubicFeet()
  { return Ogre::String("kKubikm."); }
  Ogre::String TooltipKTons()
  { return Ogre::String("KTn."); }
  Ogre::String TooltipPerWeek()
  { return Ogre::String("/Woche"); }
  Ogre::String TooltipCapacity()
  { return Ogre::String("Max. Last: "); }
  Ogre::String TooltipCoalSmall()
  { return Ogre::String("Kleines Kohlekraftwerk"); }
  Ogre::String TooltipCoalLarge()
  { return Ogre::String("Großes Kohlekraftwerk"); }
  Ogre::String TooltipGasSmall()
  { return Ogre::String("Kleines Gaskraftwerk"); }
  Ogre::String TooltipGasLarge()
  { return Ogre::String("Großes Gaskraftwerk"); }
  Ogre::String TooltipNuclearSmall()
  { return Ogre::String("Kleines Atomkraftwerk"); }
  Ogre::String TooltipNuclearLarge()
  { return Ogre::String("Großes Atomkraftwerk"); }
  Ogre::String TooltipNuclearFusion()
  { return Ogre::String("Fusionskraftwerk"); }
  Ogre::String TooltipSolarSmall()
  { return Ogre::String("Kleines Solarkraftwerk"); }
  Ogre::String TooltipSolarLarge()
  { return Ogre::String("Großes Solarkraftwerk"); }
  Ogre::String TooltipSolarUpdraft()
  { return Ogre::String("Aufwindkraftwerk"); }
  Ogre::String TooltipWindSmall()
  { return Ogre::String("Kleine Windkraftanlage"); }
  Ogre::String TooltipWindLarge()
  { return Ogre::String("Große Windkraftanlage"); }
  Ogre::String TooltipWindOffshore()
  { return Ogre::String("Offshore-Windkraftanlage"); }
  Ogre::String TooltipBio()
  { return Ogre::String("Biomassekraftwerk"); }
  Ogre::String TooltipHeadquarters()
  { return Ogre::String("Firmenhauptsitz"); }
  Ogre::String TooltipResearchBuilding()
  { return Ogre::String("Forschungszentr."); }
  Ogre::String TooltipPR()
  { return Ogre::String("PR-Zentrum"); }
  Ogre::String TooltipCoalRSmall()
  { return Ogre::String("Kleine Kohlemine"); }
  Ogre::String TooltipCoalRLarge()
  { return Ogre::String("Große Kohlemine"); }
  Ogre::String TooltipGasRSmall()
  { return Ogre::String("Kleine Gasförderanlage"); }
  Ogre::String TooltipGasRLarge()
  { return Ogre::String("Große Gasförderanlage"); }
  Ogre::String TooltipUraniumRSmall()
  { return Ogre::String("Kleine Uranmine"); }
  Ogre::String TooltipUraniumRLarge()
  { return Ogre::String("Große Uranmine"); }
  Ogre::String TooltipLineSmall()
  { return Ogre::String("Kleine Stromleitung"); }
  Ogre::String TooltipLineLarge()
  { return Ogre::String("Große Stromleitung"); }
  Ogre::String NoMoney()
  { return Ogre::String("Sie haben nicht genügend Geld!"); }
  Ogre::String NoResources()
  { return Ogre::String("Sie haben nicht genügend Rohstoffe!"); }
  Ogre::String TooltipRepair()
  { return Ogre::String("Diese Gebäude reparieren"); }
  Ogre::String TooltipMMCapacity()
  { return Ogre::String("Zeige Kapazitätsinformationen"); }
  Ogre::String TooltipMMDefault()
  { return Ogre::String("Standardansicht"); }
  Ogre::String TooltipMMSupply()
  { return Ogre::String("Zeige Versorgungsinformationen"); }
  Ogre::String TooltipMMResources()
  { return Ogre::String("Zeige Rohstoffvorkommen"); }
  Ogre::String WantToQuit()
  { return Ogre::String("Wirklich beenden?"); }
  Ogre::String GoalNone()
  { return Ogre::String("Keine"); }
  Ogre::String CitySeeNet()
  { return Ogre::String("... (siehe Netzübers.)"); }
  Ogre::String CityNone()
  { return Ogre::String("Keine"); }
  Ogre::String PPOutput()
  { return Ogre::String("Leistung: "); }
  Ogre::String PPUsed()
  { return Ogre::String("Last: "); }
  Ogre::String PPConnected()
  { return Ogre::String("Verbunden mit: "); }
  Ogre::String Condition()
  { return Ogre::String("Zustand: "); }
  Ogre::String BuiltYear()
  { return Ogre::String("Baujahr: "); }
  Ogre::String WeeklyCost()
  { return Ogre::String("Kosten/Woche: "); }
  Ogre::String DamagedNeedsRepair()
  { return Ogre::String("Reparaturbedürftig"); }
  Ogre::String Loading()
  { return Ogre::String("Lade..."); }
  Ogre::String LoadingTerrain()
  { return Ogre::String("Karte"); }
  Ogre::String LoadingTreesResources()
  { return Ogre::String("Verteile Vegetation & Resourcen"); }
  Ogre::String LoadingCompanyData()
  { return Ogre::String("Firmendaten"); }
  Ogre::String LoadingPopulace()
  { return Ogre::String("Bevölkerung"); }
  Ogre::String COCoal()
  { return Ogre::String("Kohle: "); }
  Ogre::String COGas()
  { return Ogre::String("Gas: "); }
  Ogre::String COUranium()
  { return Ogre::String("Uran: "); }
  Ogre::String COKCubicShort()
  { return Ogre::String("KKM"); }
  Ogre::String COKTonShort()
  { return Ogre::String("KT"); }
  Ogre::String CORodShort()
  { return Ogre::String("BS"); }
  Ogre::String CONet()
  { return Ogre::String("Netz"); }
  Ogre::String COCities()
  { return Ogre::String("Städte: "); }
  Ogre::String COPowerplants()
  { return Ogre::String("Kraftwerke: "); }
  Ogre::String COSelectCity()
  { return Ogre::String("Für Details Stadt auswählen."); }
  Ogre::String COSelectPP()
  { return Ogre::String("Für Details Kraftwerk auswählen."); }
  Ogre::String CONetEfficiency()
  { return Ogre::String("Netzauslastung: "); }
  Ogre::String CONetAvailable()
  { return Ogre::String("Leistung verfügb.: "); }
  Ogre::String CONetNeeded()
  { return Ogre::String("Leistung genutzt: "); }
  Ogre::String Residents()
  { return Ogre::String("Einwohner: "); }
  Ogre::String PowerNeeded()
  { return Ogre::String("Von Kunden benöt.:"); }
  Ogre::String PowerSuppliedByYou()
  { return Ogre::String("Zur Verfügung:"); }
  Ogre::String Customers()
  { return Ogre::String("Kunden: "); }
  Ogre::String SuppliedBy()
  { return Ogre::String("Versorgt durch: "); }
  Ogre::String Price()
  { return Ogre::String("Preis:"); }
  Ogre::String UseGlobalSettings()
  { return Ogre::String("Globale Einst. verwenden"); }
  Ogre::String AdsBudget()
  { return Ogre::String("Werbeetat:"); }
  Ogre::String Week()
  { return Ogre::String("Woche"); }
  Ogre::String PPMaintenance()
  { return Ogre::String("Wartung:"); }
  Ogre::String Nothing()
  { return Ogre::String("Nichts"); }
  Ogre::String CurrentlyResearching()
  { return Ogre::String("Es wird erforscht:"); }
  Ogre::String ResearchCaption()
  { return Ogre::String("Forschung"); }
  Ogre::String ResearchDone()
  { return Ogre::String("Dieses Forschungsprojekt wurde bereits abgeschlossen."); }
  Ogre::String ResearchOne()
  { return Ogre::String("Sie können nur ein Forschungsprjekt gleichzeitig betreiben."); }
  Ogre::String ResearchNoAccess()
  { return Ogre::String("Auf diese Forschungsprojekt haben Sie noch keinen Zugriff."); }
  Ogre::String ResearchNoAccessTree()
  { return Ogre::String("Auf diese Forschungsprojekt haben Sie noch keinen Zugriff."); }
  Ogre::String StartResearchA()
  { return Ogre::String("Forschungsprojekt '"); }
  Ogre::String StartResearchB()
  { return Ogre::String("' starten? ("); }
  Ogre::String Re1()
  { return Ogre::String("Großes Kohlekraftwerk"); }
  Ogre::String Re2()
  { return Ogre::String("Große Windkraftanlage"); }
  Ogre::String Re3()
  { return Ogre::String("Verbesserung der Anzeigenkampagnen"); }
  Ogre::String Re4()
  { return Ogre::String("Biomassekraftwerk"); }
  Ogre::String Re5()
  { return Ogre::String("Effizienzsteigerung für Windkraftanlagen"); }
  Ogre::String Re6()
  { return Ogre::String("Effizienzsteigerung für Kohlekraftwerke"); }
  Ogre::String Re7()
  { return Ogre::String("Offshore-Windkraftanlage"); }
  Ogre::String Re8()
  { return Ogre::String("Effizienzsteigerung für Gaskraftwerke"); }
  Ogre::String Re9()
  { return Ogre::String("Kleines Atomkraftwerk"); }
  Ogre::String Re10()
  { return Ogre::String("Großes Gaskraftwerk"); }
  Ogre::String Re11()
  { return Ogre::String("Große Kohlemine"); }
  Ogre::String Re12()
  { return Ogre::String("Reduzierung der Betriebskosten"); }
  Ogre::String Re13()
  { return Ogre::String("Große Gasförderanlage"); }
  Ogre::String Re14()
  { return Ogre::String("CO2-Reduktion"); }
  Ogre::String Re15()
  { return Ogre::String("Effizienzsteigerung für Atomkraftwerke"); }
  Ogre::String Re16()
  { return Ogre::String("Großes Solarkraftwerk"); }
  Ogre::String Re17()
  { return Ogre::String("Aufwindkraftwerk"); }
  Ogre::String Re18()
  { return Ogre::String("Effizienzsteigerung für Solarkraftwerke"); }
  Ogre::String Re19()
  { return Ogre::String("Großes Atomkraftwerk"); }
  Ogre::String Re20()
  { return Ogre::String("Große Uranmine"); }
  Ogre::String Re21()
  { return Ogre::String("Fusionskraftwerk"); }
  Ogre::String CEOCaption()
  { return Ogre::String("Büro"); }
  Ogre::String CEOOffice()
  { return Ogre::String("Büro"); }
  Ogre::String CustomersOpinionsFrom()
  { return Ogre::String("Kundenmeinungen aus:"); }
  Ogre::String NoOpinions()
  { return Ogre::String("Keine Kundenmeinungen"); }
  Ogre::String AllCities()
  { return Ogre::String("Alle Städte"); }
  Ogre::String CEOCustomers()
  { return Ogre::String("Kunden"); }
  Ogre::String Ad1Question()
  { return Ogre::String("Internetwerbung schalten für ") + Ogre::String(GameConfig::getString("AdInternetCost")) + Ogre::String("k€?"); }
  Ogre::String Ad2Question()
  { return Ogre::String("Zeitungsanzeigen kaufen für ") + Ogre::String(GameConfig::getString("AdNewspaperCost")) + Ogre::String("k€?"); }
  Ogre::String Ad3Question()
  { return Ogre::String("Radiowerbung schalten für ") + Ogre::String(GameConfig::getString("AdRadioCost")) + Ogre::String("k€?"); }
  Ogre::String Ad4Question()
  { return Ogre::String("TV-Spots kaufen für ") + Ogre::String(GameConfig::getString("AdTVCost")) + Ogre::String("k€?"); }
  Ogre::String AdNoAccess()
  { return Ogre::String("Auf diese Werbeform haben Sie noch keinen Zugriff. Bauen Sie ein PR-Gebäude um Zugriff zu erhalten."); }
  Ogre::String Sp1Question()
  { return Ogre::String("Keine Mitarbeiterausbildung für 6 Monate? (") + Ogre::String(toString(GameConfig::getInt("PriceNoTraining")/1000)) + Ogre::String("k€, -25% auf Betriebskosten)"); }
  Ogre::String Sp2Question()
  { return Ogre::String("Illegale Müllbeseitigung für 6 Monate? (") + Ogre::String(toString(GameConfig::getInt("PriceWasteDumping")/1000)) + Ogre::String("k€, -25% auf Betriebskosten)"); }
  Ogre::String Sp3Question()
  { return Ogre::String("Handlessteuer hinterziehen für die nächsten 4 Transaktionen?\n(") + Ogre::String(toString(GameConfig::getInt("PriceTaxFraud")/1000)) + Ogre::String("k€, -50% auf Handelsabschlüsse)"); }
  Ogre::String Sp4Question()
  { return Ogre::String("Die zur Wahl antretenden Parteien schmieren?\n(") + Ogre::String(toString(GameConfig::getInt("PriceBribe")/1000)) + Ogre::String("k€, -80% Umweltschutzzahlungen für 4 Jahre)"); }
  Ogre::String Sp5Question()
  { return Ogre::String("Kriegsanstrengungen der Regierung unterstützen? (") + Ogre::String(toString(GameConfig::getInt("PriceWarSupport")/1000)) + Ogre::String("k€, -50% auf alle Handelsaktionen für 1 Jahr)"); }
  Ogre::String Sp6Question()
  { return Ogre::String("Preisabsprache mit den Konkurrenten? (") + Ogre::String(toString(GameConfig::getInt("PricePriceRigging")/1000)) + Ogre::String("k€, +50% Kundeneinkommen für 1 Jahr)"); }
  Ogre::String SpStarted()
  { return Ogre::String("Diese Spezialaktion läuft bereits."); }
  Ogre::String SpNoAccess()
  { return Ogre::String("Auf diese Spezialaktion haben Sie noch keinen Zugriff. Bauen Sie einen Firmenhauptsitz um Zugriff zu erhalten."); }
  Ogre::String MissionCaption()
  { return Ogre::String("Missionsziele"); }
  Ogre::String TickerCaption()
  { return Ogre::String("Nachrichtenarchiv"); }
  Ogre::String TickerEmpty()
  { return Ogre::String("Es befinden sich keine Nachrichten im Archiv."); }
  Ogre::String BuildingNoAccess()
  { return Ogre::String("Dieses Gebäude können Sie noch nicht bauen."); }
  Ogre::String NoPowerNet()
  { return Ogre::String("Sie haben noch kein Stromnetz."); }
  Ogre::String InterestRate()
  { return Ogre::String("Zinssatz: "); }
  Ogre::String MonthlyCharge()
  { return Ogre::String("Monatl. Rate: "); }
  Ogre::String NewMonthlyCharge()
  { return Ogre::String("Neue monatl. Rate: "); }
  Ogre::String RepairA()
  { return Ogre::String("Repariere "); }
  Ogre::String RepairB()
  { return Ogre::String(" für "); }
  Ogre::String UniqueHeadquarters()
  { return Ogre::String("Sie können nur einen Firmenhauptsitz bauen."); }
  Ogre::String UniqueResearch()
  { return Ogre::String("Sie können nur ein Forschungszentrum bauen."); }
  Ogre::String UniquePR()
  { return Ogre::String("Sie können nur ein PR-Gebäude bauen."); }
  Ogre::String Sp1Started()
  { return Ogre::String("Spezialaktion 'Keine Mitarbeiterausbildung' gestartet."); }
  Ogre::String Sp2Started()
  { return Ogre::String("Spezialaktion 'Illegale Müllbeseitigung' gestartet."); }
  Ogre::String Sp3Started()
  { return Ogre::String("Spezialaktion 'Handelssteuerhinterziehung' gestartet."); }
  Ogre::String Sp4Started()
  { return Ogre::String("Spezialaktion 'Schmiergeld zur Wahl' gestartet."); }
  Ogre::String Sp5Started()
  { return Ogre::String("Spezialaktion 'Kriegsunterstützung' gestartet."); }
  Ogre::String Sp6Started()
  { return Ogre::String("Spezialaktion 'Preisabsprachen' gestartet."); }
  Ogre::String Sp1Detail()
  { return Ogre::String("Ihre Mitarbeiter werden für 6 Monate nicht fortgebildet."); }
  Ogre::String Sp2Detail()
  { return Ogre::String("Durch illegale Müllbeseitung können Sie viel Geld sparen, werden Sie jedoch erwischt leidet Ihr Image."); }
  Ogre::String Sp3Detail()
  { return Ogre::String("Durch Handelssteuerhinterziehung können Sie 4 mal ohne Steuern zu bezahlen handeln."); }
  Ogre::String Sp4Detail()
  { return Ogre::String("Für die nächste Legislaturperiode müssen Sie keine Umweltschutzzahlungen leisten. Sollten Sie erwischt werden leidet Ihr Image."); }
  Ogre::String Sp5Detail()
  { return Ogre::String("Sie können eine ganze Legislaturperiode steuerfrei handeln, sollten Sie jedoch erwischt werden wird Ihr Image dahin sein."); }
  Ogre::String Sp6Detail()
  { return Ogre::String("Ihre Einnahmen werden sich verdoppeln, solltetn Sie jedoch erwischt werden wird Ihr Image sehr leiden."); }
  Ogre::String Ad1Started()
  { return Ogre::String("Internetwerbung gestartet."); }
  Ogre::String Ad2Started()
  { return Ogre::String("Zeitungsanzeigen verö") + Ogre::String("ffentlicht."); }
  Ogre::String Ad3Started()
  { return Ogre::String("Radiowerbung gestartet."); }
  Ogre::String Ad4Started()
  { return Ogre::String("TV-Spots gestartet."); }
  Ogre::String Ad1Detail()
  { return Ogre::String("Werbekampagnen verbessern Ihr Image, allerdings nur für einen kurzen Zeitraum."); }
  Ogre::String Ad2Detail()
  { return Ogre::String("Werbekampagnen verbessern Ihr Image, allerdings nur für einen kurzen Zeitraum."); }
  Ogre::String Ad3Detail()

  { return Ogre::String("Werbekampagnen verbessern Ihr Image, allerdings nur für einen kurzen Zeitraum."); }
  Ogre::String Ad4Detail()
  { return Ogre::String("Werbekampagnen verbessern Ihr Image, allerdings nur für einen kurzen Zeitraum."); }
  Ogre::String OfferNA()
  { return Ogre::String("Dieses Angebot ist nicht mehr verfügbar!"); }
  Ogre::String ObligationNA()
  { return Ogre::String("Der Handelsvertrag ist ausgelaufen oder wurde storniert!"); }
  Ogre::String SelectOffer()
  { return Ogre::String("Bitte wählen Sie ein Handelsangebot aus."); }
  Ogre::String SelectObligation()
  { return Ogre::String("Bitte wählen Sie einen Handelsvertrag aus."); }
  Ogre::String SelectPartner()
  { return Ogre::String("Bitte wählen Sie einen Handelspartner aus."); }
  Ogre::String CancelObligation()
  { return Ogre::String("Wollen Sie diesen Vertrag wirklich kündigen?"); }
  Ogre::String SignTradeA()
  { return Ogre::String("Wollen Sie mit "); }
  Ogre::String SignTradeB()
  { return Ogre::String(" ein Handelsabkommen für "); }
  Ogre::String SignTradeC()
  { return Ogre::String("abschließen?"); }
  Ogre::String Coal()
  { return Ogre::String("Kohle"); }
  Ogre::String Gas()
  { return Ogre::String("Gas"); }
  Ogre::String Uranium()
  { return Ogre::String("Uran"); }
  Ogre::String CoalS()
  { return Ogre::String("Kohle"); }
  Ogre::String GasS()
  { return Ogre::String("Gas"); }
  Ogre::String UraniumS()
  { return Ogre::String("Uran"); }
  Ogre::String Sell()
  { return Ogre::String("Verkauf"); }
  Ogre::String Buy()
  { return Ogre::String("Ankauf"); }
  Ogre::String SelectLoan()
  { return Ogre::String("Bitte wählen Sie einen laufenden Kredit aus."); }
  Ogre::String ChooseSum()
  { return Ogre::String("Bitte legen Sie ein Summe fest."); }
  Ogre::String RepayA()
  { return Ogre::String("Wollen Sie "); }
  Ogre::String RepayB()
  { return Ogre::String("k€ von dem ausgewählten Kredit zurückzahlen?"); }
  Ogre::String TakeoutA()
  { return Ogre::String("Wollen Sie einen Kredit von "); }
  Ogre::String TakeoutB()
  { return Ogre::String("k€ mit einer Laufzeit von "); }
  Ogre::String TakeoutC()
  { return Ogre::String(" Jahren aufnehmen?"); }
  Ogre::String FinancesCaption()
  { return Ogre::String("Finanzen"); }
  Ogre::String PriceText()
  { return Ogre::String("Globaler Strompreis:"); }
  Ogre::String AdsText()
  { return Ogre::String("Globaler Werbeetat:"); }
  Ogre::String PriceUnit()
  { return Ogre::String("cent/kWh"); }
  Ogre::String AdsUnit()
  { return Ogre::String("EUR pro Woche und Stadt"); }
  Ogre::String MaintenanceText()
  { return Ogre::String("Anlagenwartung:"); }
  Ogre::String EnvText()
  { return Ogre::String("Umweltschutzzahlungen:"); }
  Ogre::String EnvUnit()
  { return Ogre::String("kEUR/Monat"); }
  Ogre::String ContractText()
  { return Ogre::String("Mindestvertragslaufzeit:"); }
  Ogre::String SupportText()
  { return Ogre::String("Kundenbetreuung:"); }
  Ogre::String SupplyText()
  { return Ogre::String("Wartung der Stromleitungen:"); }
  Ogre::String SafetyText()
  { return Ogre::String("Sicherheitsmaßnahmen:"); }
  Ogre::String TermNone()
  { return Ogre::String("keine"); }
  Ogre::String Term12()
  { return Ogre::String("12 Monate"); }
  Ogre::String Term24()
  { return Ogre::String("24 Monate"); }
  Ogre::String SupportPoor()
  { return Ogre::String("schlecht"); }
  Ogre::String SupportNormal()
  { return Ogre::String("normal"); }
  Ogre::String SupportExtensive()
  { return Ogre::String("hervorragend"); }
  Ogre::String EmployeeText()
  { return Ogre::String("Mitarbeiterausbildung:"); }
  Ogre::String SafetyNone()
  { return Ogre::String("keine"); }
  Ogre::String SafetyNormal()
  { return Ogre::String("normal"); }
  Ogre::String SafetyHeavy()
  { return Ogre::String("erheblich"); }
  Ogre::String EmployeeNone()
  { return Ogre::String("keine"); }
  Ogre::String EmployeeBasic()
  { return Ogre::String("normal"); }
  Ogre::String EmployeeExtensive()
  { return Ogre::String("ausführlich"); }
  Ogre::String SalesCaption()
  { return Ogre::String("Verkauf"); }
  Ogre::String IncomeCaption()
  { return Ogre::String("Einkommen/Ausgabe"); }
  Ogre::String CurrentMonthText()
  { return Ogre::String("Aktueller Monat:"); }
  Ogre::String LastMonthText()
  { return Ogre::String("Letzter Monat:"); }
  Ogre::String CurrentYearText()
  { return Ogre::String("Aktuelles Jahr:"); }
  Ogre::String LastYearText()
  { return Ogre::String("Letztes Jahr:"); }
  Ogre::String TotalText()
  { return Ogre::String("Komplett:"); }
  Ogre::String FLoan()
  { return Ogre::String("Kredittilgung:"); }
  Ogre::String FSafety()
  { return Ogre::String("Sicherheit/Ausbildung:"); }
  Ogre::String FAdvertising()
  { return Ogre::String("Werbung:"); }
  Ogre::String FMaintenance()
  { return Ogre::String("Wartung:"); }
  Ogre::String FOperation()
  { return Ogre::String("Betriebskosten:"); }
  Ogre::String FEnvironment()
  { return Ogre::String("Umweltschutz:"); }
  Ogre::String FResearch()
  { return Ogre::String("Forschungsausgaben:"); }
  Ogre::String FBuilding()
  { return Ogre::String("Bauprojekte:"); }
  Ogre::String FIncome()
  { return Ogre::String("Einnahmen:"); }
  Ogre::String FSpecial()
  { return Ogre::String("Spezialausgaben:"); }
  Ogre::String FTrade()
  { return Ogre::String("Handel:"); }
  Ogre::String ChartTab()
  { return Ogre::String("Graphen"); }
  Ogre::String ExpensesCheck()
  { return Ogre::String("Ausgaben"); }
  Ogre::String IncomeCheck()
  { return Ogre::String("Einkommen"); }
  Ogre::String FundsCheck()
  { return Ogre::String("Vermögen"); }
  Ogre::String NetWorthCheck()
  { return Ogre::String("Firmenwert"); }
  Ogre::String LoanTab()
  { return Ogre::String("Kredite"); }
  Ogre::String TakeOutButton()
  { return Ogre::String("Kredit aufnehmen"); }
  Ogre::String RepaymentButton()
  { return Ogre::String("Sonderzahlung"); }
  Ogre::String NoLoansText()
  { return Ogre::String("Keine laufenden Kredite"); }
  Ogre::String CurrentLoansText()
  { return Ogre::String("Laufende Kredite:"); }
  Ogre::String AmountText()
  { return Ogre::String("Höhe:"); }
  Ogre::String PeriodUnit()
  { return Ogre::String("Jahre"); }
  Ogre::String PeriodText()
  { return Ogre::String("Laufzeit:"); }
  Ogre::String TradeCaption()
  { return Ogre::String("Handel"); }
  Ogre::String TradingPartnersText()
  { return Ogre::String("Handelspartner:"); }
  Ogre::String NoTradingPartners()
  { return Ogre::String("Keine Handelspartner übrig"); }
  Ogre::String WorldMarketText()
  { return Ogre::String("Weltmarktpreise:"); }
  Ogre::String SignButton()
  { return Ogre::String("Handelabkommen abschließen"); }
  Ogre::String NoTradeOffers()
  { return Ogre::String("In diesem Monat gibt es keine Angebote."); }
  Ogre::String OffersText()
  { return Ogre::String("Angebote:"); }
  Ogre::String AcceptOfferButton()
  { return Ogre::String("Angebot annehmen"); }
  Ogre::String NoObligations()
  { return Ogre::String("Sie haben keine laufenden Verträge"); }
  Ogre::String CancelOfferButton()
  { return Ogre::String("Auflösen"); }
  Ogre::String CurrentObligationsText()
  { return Ogre::String("Laufende\nVerträge"); }
  Ogre::String LoanFormattedA()
  { return Ogre::String("Betrag übrig: "); }
  Ogre::String LoanFormattedB()
  { return Ogre::String(" k€, Raten übrig: "); }
  Ogre::String LoanFormattedC()
  { return Ogre::String(" k€ für "); }
  Ogre::String LoanFormattedD()
  { return Ogre::String(" Monate."); }
  Ogre::String FreeTradesLeft()
  { return Ogre::String(" steuerfreie Handelsaktionen übrig."); }
  Ogre::String FreeTradesGone()
  { return Ogre::String("Sie habe alle steuerfrei Handelsaktionen aufgebraucht."); }
  Ogre::String DamagedResourceMessageA()
  { return Ogre::String("Ihre Anlage "); }
  Ogre::String DamagedResourceMessageB()
  { return Ogre::String(" wurde wegen eines technischen Fehlers heruntergefahren."); }
  Ogre::String DamagedPPMessageA()
  { return Ogre::String("Ihr Kraftwerk "); }
  Ogre::String DamagedPPMessageB()
  { return Ogre::String(" wurde wegen eines technischen Fehlers heruntergefahren."); }
  Ogre::String DamagedDetail()
  { return Ogre::String("Am das Gebäude zu reparieren wählen Sie es and und klicken Sie auf die Reparatur-Schaltfläche."); }
  Ogre::String ResearchFinishedA()
  { return Ogre::String("Erforschung von '"); }
  Ogre::String ResearchFinishedB()
  { return Ogre::String("' abgeschlossen!"); }
  Ogre::String ResearchStartedA()
  { return Ogre::String("Erforschung von '"); }
  Ogre::String ResearchStartedB()
  { return Ogre::String("' begonnen."); }
  Ogre::String BuyF()
  { return Ogre::String("Ankauf von "); }
  Ogre::String SellF()
  { return Ogre::String("Verkauf von "); }
  Ogre::String From()
  { return Ogre::String(" von "); }
  Ogre::String To()
  { return Ogre::String(" an "); }
  Ogre::String For()
  { return Ogre::String(" für "); }
  Ogre::String EveryWeek()
  { return Ogre::String("unbefristet"); }
  Ogre::String PriceT()
  { return Ogre::String("Preis"); }
  Ogre::String WorldMarket()
  { return Ogre::String("Weltmarkt"); }
  Ogre::String Weeks()
  { return Ogre::String("Wochen"); }
  Ogre::String EveryWeekS()
  { return Ogre::String("Unbefristet"); }
  Ogre::String WeeksRemaining()
  { return Ogre::String("Wochen übrig"); }
  Ogre::String ContractCanceledResources()
  { return Ogre::String("Ein Handelsvertrag wurde aufgelöst (Zu wenige Rohstoffe)."); }
  Ogre::String ContractCanceledMoney()
  { return Ogre::String("Ein Handelsvertrag wurde aufgelöst (Kein Geld)."); }
  Ogre::String ContractCanceledResourcesDetail()
  { return Ogre::String("Ein Handelsvertrag wurde aufgelöst weil Sie nicht genügend Rohstoffe zur Verfügung hatten."); }
  Ogre::String ContractCanceledMoneyDetail()
  { return Ogre::String("Ein Handelsvertrag wurde aufgelöst weil Sie nicht genügend Geld zur Verfügung hatten."); }
  Ogre::String GasStockDepleted()
  { return Ogre::String("Ihr Gasvorrat ist aufgebraucht!"); }
  Ogre::String CoalStockDepleted()
  { return Ogre::String("Ihr Kohlevorrat ist aufgebraucht!"); }
  Ogre::String UraniumStockDepleted()
  { return Ogre::String("Ihr Uranvorrat ist aufgebraucht!"); }
  Ogre::String HeadquartersBuilt()
  { return Ogre::String("Firmenhauptsitz gebaut. Sie habe jetzt Zugriff auf alle Spezialaktionen!"); }
  Ogre::String HeadquartersBuiltDetail()
  { return Ogre::String("Keine"); }
  Ogre::String ResearchBuilt()
  { return Ogre::String("Forschungszentrum gebaut. Sie haben jetzt Zugriff auf alle Forschungsprojekte!"); }
  Ogre::String ResearchBuiltDetail()
  { return Ogre::String("Keine"); }
  Ogre::String PRBuilt()
  { return Ogre::String("PR-Zentrum gebaut. Sie haben jetzt Zugriff auf alle Werbeformen!"); }
  Ogre::String PRBuiltDetail()
  { return Ogre::String("Keine"); }
  Ogre::String NewYear()
  { return Ogre::String("Ein neues Jahr!"); }
  Ogre::String NoBuild()
  { return Ogre::String("Sie können dort nicht bauen!"); }
  Ogre::String NoBuildGas()
  { return Ogre::String("Dieses Gebäude muss auf einem Gasvorkommen errichtet werden."); }
  Ogre::String NoBuildUranium()
  { return Ogre::String("Dieses Gebäude muss auf einem Uranvorkommen errichtet werden."); }
  Ogre::String NoBuildCoal()
  { return Ogre::String("Dieses Gebäude muss auf einem Kohlevorkommen errichtet werden."); }
  Ogre::String NoBuildOffshore()
  { return Ogre::String("Offshore-Windkraftanlagen müssen im Meer errichtet werden."); }
  Ogre::String ScreenSaved()
  { return Ogre::String(" gespeichert."); }
  Ogre::String GameSaved()
  { return Ogre::String("Spielstand gespeichert."); }
  Ogre::String PowerplantText()
  { return Ogre::String("Kraftwerk"); }
  Ogre::String FullCapacity()
  { return Ogre::String(" läuft mit maximaler Leistung."); }
  Ogre::String NewspaperImage()
  { return Ogre::String("newspaper_de.png"); }
  Ogre::String NPFounded()
  { return Ogre::String("Neuer Strom-\nversorger\ngegründet!"); }
  Ogre::String NPFoundedDetail()
  { return Ogre::String("Ein neues Energieunternehmen wurde gegründet. Wird es sich auf dem Markt behaupten können?"); }
  Ogre::String NPFusion()
  { return Ogre::String("Nukleare\nFusion\ngemeistert!"); }
  Ogre::String NPFusionDetail()
  { return Ogre::String("ist weltweit der erste Stromversorger der erfolgreich einen Fusionsreaktor betreibt. Ein Wendepunkt in der Menschheitsgeschichte?"); }
  Ogre::String NPBribe()
  { return Ogre::String("Schmiergeld-\nskandal\naufgedeckt!"); }
  Ogre::String NPBribeDetail()
  { return Ogre::String(" ist verwickelt in ..."); }
  Ogre::String NPPriceRigging()
  { return Ogre::String("Preisab-\nsprachen\naufgedeckt!"); }
  Ogre::String NPPriceRiggingDetail()
  { return Ogre::String("hat illegalerweise ..."); }
  Ogre::String NPWasteDumping()
  { return Ogre::String("Illegale\nMüll-\nbeseitigung!"); }
  Ogre::String NPWasteDumpingDetail()
  { return Ogre::String("beseitigte seinen Müll ..."); }
  Ogre::String NPNoTraining()
  { return Ogre::String("Schlechte\nMitarbeiter-\nausbildung!"); }
  Ogre::String NPNoTrainingDetail()
  { return Ogre::String("hat seine Mitarbeiter nur ..."); }
  Ogre::String NPWar()
  { return Ogre::String("Kriegs-\nunterstützung\naufgedeckt!"); }
  Ogre::String NPWarDetail()
  { return Ogre::String("unterstützte die Regierung ..."); }
  Ogre::String MissionDoneCaption()
  { return Ogre::String("Mission erfolgreich!"); }
  Ogre::String MissionDoneText()
  { return Ogre::String("Glückwunsch!\n\nSie haben diese Mission erfolgreich beendet.\nSie können weiterspielen oder dieses Spiel\nbeenden."); }
  Ogre::String KeepPlaying()
  { return Ogre::String("Weiterspielen"); }
  Ogre::String ToMenu()
  { return Ogre::String("Beenden"); }
  Ogre::String BankruptcyImminentCaption()
  { return Ogre::String("Konkurs steht kurz bevor!"); }
  Ogre::String BankruptcyImminentText()
  { return Ogre::String("Sehr geehrter Vorstandsvorsitzender,\n\nIhre Schulden übersteigen einen Betrag\nvon 2.000 kEUR. Falls Sie es nicht schaffen\nbis zum Ende des Jahres Ihre Schulden\nauf max. 1.000 kEUR zu reduzieren\nwerden wir Ihre Firma schließen müssen.\n\nMit freundlichen Grüßen\nOmniBank"); }
  Ogre::String BankruptcyCaption()
  { return Ogre::String("Konkurs!"); }
  Ogre::String BankruptcyText()
  { return Ogre::String("Sehr geehrter Vorstandsvorsitzender,\n\nDa Sie Ihre Schulden auf unsere Warnung\nhin nicht reduzieren konnten, sehen wir\nuns gezwungen Ihre Firma zu schließen.\n\nMit freundlichen Grüßen\nOmniBank"); }
  Ogre::String Small()
  { return Ogre::String("klein"); }
  Ogre::String Large()
  { return Ogre::String("groß"); }
  Ogre::String ConnectThisCity()
  { return Ogre::String("#CC0000Verbinden Sie diese Stadt\num Kunden zu gewinnen"); }
  Ogre::String CreditsText()
  { return Ogre::String("Programmierung\nMichael Schießl\n\nGrafik\nPeter Schießl\n\nMusik\nKevin McLeod"); }
  Ogre::String NoSavegameSelected()
  { return Ogre::String("Wählen Sie einen Spielstand"); }
  Ogre::String PowerNetCaption()
  { return Ogre::String("Stromnetze"); }
  Ogre::String PoleCollapsed()
  { return Ogre::String("Ein Strommast ist aufgrund von Wartungsmängeln eingestürzt. Klicken Sie hier um herauszufinden wo."); }
  Ogre::String Building()
  { return Ogre::String("Bauen..."); }
  Ogre::String TooManyLoans()
  { return Ogre::String("Sie haben zu viele laufende Kredite. Die Bank verweigert Ihnen einen weiteren Kredit."); }
  Ogre::String NotEnoughNetWorth()
  { return Ogre::String("Sie haben zuwenig Eigenkapital um diesen Kredit zu erhalten. "); }
  Ogre::String NetWorthNeeded()
  { return Ogre::String("Benötigt: "); }
  Ogre::String NetWorthHave()
  { return Ogre::String(", Aktuell: "); }
  Ogre::String ForecastForThisMonth()
  { return Ogre::String("Wettervorhersage:"); }
  Ogre::String StrongWind()
  { return Ogre::String("Starke Winde"); }
  Ogre::String NormalWind()
  { return Ogre::String("Normale Winde"); }
  Ogre::String LittleWind()
  { return Ogre::String("Kaum Wind"); }
  Ogre::String PlentySunshine()
  { return Ogre::String("Viel Sonnenschein"); }
  Ogre::String NormalSunshine()
  { return Ogre::String("Normaler Sonnenschein"); }
  Ogre::String HardlySunshine()
  { return Ogre::String("Kaum Sonnenschein"); }
  Ogre::String Tutorial()
  { return Ogre::String("Tutorial"); }
  Ogre::String Step()
  { return Ogre::String("Schritt"); }
  Ogre::String TutorialBack()
  { return Ogre::String("Zurück"); }
  Ogre::String TutorialContinue()
  { return Ogre::String("Weiter"); }
  Ogre::String TutorialExit()
  { return Ogre::String("Tutorial beenden"); }
  Ogre::String TutorialReallyClose()
  { return Ogre::String("Wollen Sie das Tutorial wirklich beenden?"); }
  Ogre::String NextTutorial()
  { return Ogre::String("Nächstes Tutorial"); }
  Ogre::String OpinionIsOK()
  { return Ogre::String(" ist OK."); }
  Ogre::String OpinionDontLike1()
  { return Ogre::String("Ich mag "); }
  Ogre::String OpinionDontLike2()
  { return Ogre::String(" nicht."); }
  Ogre::String OpinionIsGreat()
  { return Ogre::String(" ist ein tolles Unternehmen."); }
  Ogre::String OpinionSawAd1()
  { return Ogre::String("Ich habe gerade Werbung von "); }
  Ogre::String OpinionSawAd2()
  { return Ogre::String(" gesehen"); }
  Ogre::String OpinionPriceHigh1()
  { return Ogre::String("Der Preis von "); }
  Ogre::String OpinionPriceHigh2()
  { return Ogre::String(" ist mir zu hoch."); }
  Ogre::String OpinionPriceOK1()
  { return Ogre::String("Der Preis von "); }
  Ogre::String OpinionPriceOK2()
  { return Ogre::String(" ist OK"); }
  Ogre::String DefaultCompanyName()
  { return Ogre::String("Standard Elektrik GmbH"); }
  Ogre::String QuestionCompanyName()
  { return Ogre::String("Wie wollen Sie ihre Firma nennen?"); }
  Ogre::String PleaseChooseCompanyName()
  { return Ogre::String("Bitte wählen Sie einen Firmennamen aus."); }
  Ogre::String EndTutorial()
  { return Ogre::String("Tutorial beenden"); }
  Ogre::String NextTutorialQuestion()
  { return Ogre::String("Dieses Tutorial beenden und mit dem nächsten fortfahren?"); }
  Ogre::String Repairs1()
  { return Ogre::String("Die Reparaturen werden "); }
  Ogre::String Repairs2()
  { return Ogre::String(" Monat(e) dauern."); }
  Ogre::String IsBeingRepaired()
  { return Ogre::String("Wird repariert..."); }
  Ogre::String RepairsComplete1()
  { return Ogre::String("Die Reparaturarbeiten bei "); }
  Ogre::String RepairsComplete2()
  { return Ogre::String(" wurden abgeschlossen."); }
  Ogre::String Germany()
  { return Ogre::String("Deutschland"); }
  Ogre::String USA()
  { return Ogre::String("USA"); }
  Ogre::String GameAutoSaved()
  { return Ogre::String("Spiel wurde automatisch gespeichert."); }
  Ogre::String Accident()
  { return Ogre::String("Unfall im\nKraftwerk!"); }
  Ogre::String AccidentDetail1()
  { return Ogre::String("Das Kraftwerk "); }
  Ogre::String AccidentDetail2()
  { return Ogre::String(" wurde heute aufgrund eines Unfalls heruntergefahren."); }
  Ogre::String PPShutdown1()
  { return Ogre::String("Ihr Kraftwerk "); }
  Ogre::String PPShutdown2()
  { return Ogre::String(" wurde aufgrund eines Unfalls heruntergefahren."); }
  Ogre::String CoalStockDepletedDetail()
  { return Ogre::String("Ihr Kohlevorrat ist komplett aufgebraucht. Beschaffen Sie sich Kohle indem Sie handeln oder selbst eine Kohlemine betreieben."); }
  Ogre::String UraniumStockDepletedDetail()
  { return Ogre::String("Ihr Uranvorrat ist komplett aufgebraucht. Beschaffen Sie sich Uran indem Sie handeln oder selbst eine Uranmine betreieben."); }
  Ogre::String GasStockDepletedDetail()
  { return Ogre::String("Ihr Gasvorrat ist komplett aufgebraucht. Beschaffen Sie sich Gas indem Sie handeln oder selbst eine Gasförderanlage betreieben."); }
  Ogre::String FreeTradesDetail()
  { return Ogre::String("Durch Steuerhinterziehung im \"CEO\"-Fenster erkaufen Sie sich 6 steuerfreie Handelsaktionen."); }
  Ogre::String PPAccidentDetail()
  { return Ogre::String("Falls Sie zukünftige Unfälle vermeiden wollen, verbessern Sie ihre Sicherheitsmaßnahmen."); }
  Ogre::String PoleCollapsedDetail()
  { return Ogre::String("Falls Sie vermeiden wollen, dass es auch in Zukunft zu Einstürzen kommt, verbessern Sie Ihre Wartung der Versorgungseinrichtungen."); }
  Ogre::String FullCapacityDetail()
  { return Ogre::String("Sie sollten weitere Kraftwerke bauen um die Stromnachfrage zu befriedigen."); }
  Ogre::String DemoTime()
  { return Ogre::String("Demozeit übrig:"); }
  Ogre::String DemoNoSave()
  { return Ogre::String("In der Demo können Sie Ihr Spiel nicht speichern."); }
  Ogre::String DemoTimeUpCaption()
  { return Ogre::String("Demozeit abgelaufen"); }
  Ogre::String DemoTimeUpText()
  { return Ogre::String("Die Demozeit ist leider abgelaufen. Beenden Sie das Spiel oder\nbesuchen Sie www.energietycoon.de um das Spiel zu kaufen."); }
  std::vector< std::vector< Ogre::String > > TutorialStep()
  {
    std::vector<std::vector< Ogre::String > > lReturn;
    std::vector< Ogre::String > lSteps1;
    std::vector< Ogre::String > lSteps2;
    std::vector< Ogre::String > lSteps3;

    lSteps1.push_back("Willkommen zum Energie-Tycoon Tutorial.\nHier werden Sie lernen wie Sie ein erfolgreiches Energieunternehmen führen.\n\nKlicken Sie auf \"Weiter\" um im Tutorial fortzufahren.");
    lSteps1.push_back("Zuerst sollten Sie sich mit der Kamera vertraut machen.\nBewegen Sie die Maus an den Spielfeldrand um den Bildauschnitt zu verschieben.\nAlternativ können Sie auch die rechte Maustaste gedrückt halten oder die Pfeiltasten ihrer Tastatur verwenden.\nUm den Bildauschnitt zu verkleinern oder zu vergrößern benutzen Sie Ihr Mausrad, die Tasten 'W' und 'S' oder die Schaltflächen '+' und '-' unten links.\nUm die Ansicht zu rotieren halten Sie das Mausrad gedrückt, benutzen Sie die Tasten 'A' und 'D', oder verwenden Sie die Schaltflächen '<-' und '->' unten links.\n\nMachen Sie sich mit der Steuerung vertraut und klicken anschließend auf 'Weiter' um im Tutorial fortzufahren.");
    lSteps1.push_back("Der erste Schritt beim Aufbau eines Energieunternehmens besteht darin ein Kraftwerk zu errichten. Klicken Sie unten links auf die Schaltfläche mit dem Bild eines Kraftwerks um eine Auswahl verfügbarer Kraftwerke zu erhalten. Wählen Sie die Schaltfläche 'Kleines Windkraftwerk' um ein Kraftwerk zu errichten. Sie können jetzt den Bauort ihres Kraftwerks bestimmen.\nSolange die Umrisse des Kraftwerks grün dargestellt werden ist alles in Ordnung, sollte es jedoch in rot erscheinen können Sie an diesem Ort nicht bauen.\nSuchen Sie sich jetzt eine Stadt und bauen Sie in der Umgebung ihr Windkraftwerk.\n\nKlicken Sie anschließend auf 'Weiter' um im Tutorial fortzufahren.");
    lSteps1.push_back("Sie haben jetzt ein Kraftwerk errichtet. Allerdings können Sie damit noch kein Geld verdienen, da es noch mit keiner Stadt verbunden ist.\nUm eine Stromleitung zu errichten wählen Sie die Schaltfläche mit dem Bild eines Strommasten.\nWählen Sie jetzt die Schaltfläche 'Kleine Stromleitung'\nSie können jetzt eine Stromleitung bauen. Wenn Sie den Mauszeiger über ein Objekt bewegen, dass Sie an die Stromleitung anschließen können andert der Mauszeiger sein Aussehen.\nVerbinden Sie jetzt Ihr Kraftwerk und eine Stadt. Mit einem Rechtsklick können Sie den Baumodus wieder verlassen.\nWenn Sie fertig sind klicken Sie auf 'Weiter' um im Tutorial fortzufahren.");
    lSteps1.push_back("Sie haben jetzt eine Stadt an ein Kraftwerk angeschlossen, d.h. Kunden können jetzt Ihren Strom kaufen. Klicken Sie auf die Stadt um zu sehen wieviele Kunden Sie haben und wieviel Leistung diese beanspruchen.\n\nOb und wieviele Kunden Sie dazugewinnen oder verlieren hängt von vielen Faktoren ab, die Sie im nächsten Tutorial kennenlernen werden.\nKlicken Sie auf 'Nächstes Tutorial' um damit fortzufahren.");

    lSteps2.push_back("Willkommen zum 2. Energie-Tycoon Tutorial.\nHier werden Sie lernen wie Sie mit Ihren Kunden umgehen, ausserdem werden Sie Ihre Forschungs- und Finanzabteilungen kennenlernen.\n\nKlicken Sie auf \"Weiter\" um im Tutorial fortzufahren.");
    lSteps2.push_back("Wie Sie sicher schon bemerkt haben, befinden Sich bereits einige Kraftwerke in Ihrem Besitz. Eine der Städte die Sie mit Strom versorgen ist München.\nKlicken Sie die Stadt an um detailierte Informationen über die Stadt zu erhalten.\nSie sehen jetzt wieviele Einwohner die Stadt hat, wieviele Kunden Sie in dieser Stadt haben, wieviel Leistung diese benötigen und wieviel Sie zur Verfügung stellen. Ausserdem können Sie den Strompreis und das Werbebudget für diese Stadt einstellen.\nIhre Kundenzahl ändert sich ständig.\n\nKlicken Sie auf \"Weiter\" um zu lernen wie Sie Kunden gewinnen können.");
    lSteps2.push_back("Die wichtigsten Faktoren, die Ihre Kundenentwicklung beeinflussen sind der Strompreis, der Werbeetat und ihr Image. Preis und Werbeetat können Sie im Finanzfenster oder für jede Stadt individuell einstellen indem Sie die Stadt anwählen. Ihr Image dagegen hängt von mehreren Faktoren ab. Unter anderem wie umweltfreundliche ihre Kraftwerke sind, von ihren Werbeaktionen und von einigen Forschungsprojekten. Verändern Sie den Werbeetat oder starten Sie eine Werbeaktion im \"Büro\"-Fenster und beobachten Sie die Kundenentwicklung.\n\nKlicken Sie auf \"Weiter\" um mit dem Tutorial fortzufahren.");
    lSteps2.push_back("Es ist sehr wichtig, dass Sie ständig Ihre Finanzen im Auge behalten und falls notwendig eine drohende Insolvenz rechtzeitig verhindern.\nÖffnen Sie das Fenster \"Finanzen\", die Schaltfläche finden Sie links unten auf ihrem Bildschirm oder alternativ auch neben Ihrem aktuellen Kontostand links oben.\nAuf der ersten Seite legen Sie Preise, Wartungseinstellungen und vieles mehr fest. Jede dieser Einstellungen hat Auswirkungen auf Ihr Image, Ihre Finanzen oder die Kundenentwicklung.\n\nKlicken Sie auf \"Weiter\" um im Tutorial fortzufahren.");
    lSteps2.push_back("Auf der zweiten Seite des Finanzfensters sehen Sie eine tabellarische Übersicht ihrer Finanzen.\nEs werden sowohl der laufenden Monat und das laufenden Jahr als auch der vollständige vergangene Monat und das Jahr angezeigt.\nAuf der dritten Seite des Finanzfensters finden Sie eine graphische Darstellung Ihrer Finanzen. Sie können einzelne Graphen aus- oder einblenden indem Sie die Kästchen über den Graphen markieren.\nSollten Sie einmal knapp bei Kasse sein und dringen Geld brauchen können Sie auf der vierten Seite des Finanzfensters Kredite aufnehmen.\n\nKlicken Sie auf \"Weiter\" um im Tutorial fortzufahren.");
    lSteps2.push_back("Eine der wichtigsten Abteilungen ist Ihre Forschungsabteilung.\nOhne neue Gebäude, Kraftwerke oder Technologien zu erforschen werden Sie keine großen Erfolge erzielen könne.\nÖffnen Sie das Forschungsfenster indem Sie auf die Schaltfläche \"Forschung\" links unten auf Ihrem Bildschirm klicken. Sie sehen jetzt einen Forschungsbaum mit allen Projekten die Sie erforschen können. Um alle Projekte freizuschalten müssen Sie ein Forschungszentrum bauen, ausserdem können Sie nur ein Forschungsprojekt zur selben Zeit betreiben, also überlegen Sie gut was Sie erforschen wollen.\n\nKlicken Sie auf \"Weiter\" um im Tutorial fortzufahren.");
    lSteps2.push_back("Hiermit haben Sie das zweite Energie-Tycoon Tutorial beendet.\n\nIm dritten und letzten Tutorial lernen Sie wie Sie mit Resourcen umgehen.\nSie können mit dem nächsten Tutorial fortfahren oder dieses Spiel fortsetzen indem Sie einfach dieses Fenster schließen.");

    lSteps3.push_back("Willkommen zum 3. Energie-Tycoon Tutorial.\nHier werden Sie lernen wie Sie mit Resourcen umgehen.\n\nKlicken Sie auf \"Weiter\" um im Tutorial fortzufahren.");
    lSteps3.push_back("Sie haben zwei Möglichkeiten sich Resourcen zu beschaffen:\nSie erwerben Ihre Rohstoffe auf dem internationalen Rohstoffmarkt, oder Sie bauen Ihre eigenen Förderstätten um selbst Rohstoffe zu fördern.\nBeide Möglichkeiten haben Vor- und Nachteile und unter Umständen stehen Ihnen auf Ihrer Spielkarte nicht alle Rohstoffe zur Verfügung um sie selbst zu fördern.\n\nKlicken Sie auf \"Weiter\" um zu erfahren wie Sie mit Rohstoffen handeln.");
    lSteps3.push_back("Öffnen Sie zuerst das Fenster \"Handel\". Sie finden die Schaltfläche links unten auf ihrem Bildschirm.\nOben links sehen Sie Handelspartner mit denen Sie noch keinen Handelsvertrag abgeschlossen haben, Ihnen jedoch möglicherweise sehr gute Angebote bieten könnten.\nRechts oben sehen Sie die Entwicklung der Weltmarktpreise der 3 verfügbaren Rohstoffe. Handelsverträge werden entweder zu einem Fixpreis abgeschlossen oder zu Weltmarktpreisen, in diesem Fall ist diese Anzeige von großer Bedeutung.\n\nKlicken Sie auf \"Weiter\" um zu lernen wie Sie Handelsverträge abschließen und verwalten.");
    lSteps3.push_back("Im unteren Teil des Handelsfensters sehen Sie die zurzeit verfügbaren Angebote und Ihre laufenden Verpflichtungen.\nDie verfügbaren Angebote ändern sich jeden Monat.\nSie haben die Möglichkeit die Angebote nach Rohstoffen und/oder nach Verkaufs- und Kaufangeboten zu filtern indem Sie die Kästchen rechts markieren.\nWählen Sie jetzt einen beliebigen Vertrag aus und klicken Sie auf \"Angebot annehmen\". Einfache Handelsaktionen werden sofort abgewickelt und verschwinden aus der Liste. Aktionen die über einen längeren Zeitraum laufen werden unterhalb angezeigt.\n\nKlicken Sie auf \"Weiter\" um zu erfahren wie Sie eigene Rohstoffe fördern.");
    lSteps3.push_back("Um selbst Rohstoffe zu fördern sollten Sie zuerst neben der Übersichtskarte rechts unten die Schaltfläche \"Zeige Rohstoffvorkommen\" betätigen. Sie sehen jetzt welche Rohstoffe sich auf der Spielkarte befinden.\n\nGrün:\tUran\nRot:\tGas\nBlau:\tKohle\n\nUm zu erfahren wie Sie eigene Förderstätten errichten klicken Sie auf \"Weiter\".");
    lSteps3.push_back("Klicken Sie jetzt auf die Schaltfläche \"Anlagen zur Resourcenförderung bauen\" links unten auf Ihrem Bildschirm. Sie sehen jetzt eine Auswahl von Gebäuden die Sie errichten können. Unter Umständen sind noch nicht alle Gebäude erforscht.\n Wählen Sie die \"Kleine Uranmine\" und suchen Sie mithilfe der Übersichtskarte ein Uranvorkommen.\nRohstoffvorkommen werden durch kleine Symbole angezeigt auf denen Sie Förderstätten bauen können. Bauen Sie jetzt Ihre Uranmine auf einem Uranvorkommen.\n\nKlicken Sie auf \"Weiter\" um fortzufahren.");
    lSteps3.push_back("Hiermit haben Sie das Energie-Tycoon Tutorial beendet.\nSie können dieses Fenster schließen und weiterspielen oder das Spiel beenden und ein Freies Spiel oder eine Mission starten.\n\nViel Spaß!");

    lReturn.push_back(lSteps1);
    lReturn.push_back(lSteps2);
    lReturn.push_back(lSteps3);

    return lReturn;
  }
};

/*-----------------------------------------------------------------------------------------------*/

#endif // LANGDE_H
