//Rhye
#ifndef CVRHYES_H
#define CVRHYES_H

using namespace std;
typedef list<char*> LISTCHAR;

// rhyes.h
#define EARTH_X					(124)
#define EARTH_Y					(68)

#define MAX_COM_SHRINE			(20)

#define GREATPALACE				(1)
#define SUMMERPALACE			(1)
#define VERSAILLES				(2)
#define FORBIDDENPALACE			(2)

#define PAGAN_TEMPLE			(GC.getInfoTypeForString("BUILDING_OBELISK"))

#define BEGIN_WONDERS				(115)
#define NUM_WONDERS					(183)
#define NUM_BUILDINGS_PLAGUE		(184)
#define NUM_BUILDINGTYPES_PLAGUE	(139)

#define NUM_MAJOR_PLAYERS		(32)
#define ITALY					ROME

enum MyCivs
{
 EGYPT,
 INDIA,
 CHINA,
 BABYLONIA,
 GREECE,
 PERSIA,
 CARTHAGE,
 ROME,
 JAPAN,
 ETHIOPIA,
 KOREA,
 MAYA,
 BYZANTIUM,
 VIKING,
 ARABIA,
 KHMER,
 INDONESIA,
 SPAIN,
 FRANCE,
 ENGLAND,
 GERMANY,
 RUSSIA,
 NETHERLANDS,
 MALI,
 PORTUGAL,
 INCA,
 MONGOLIA,
 AZTEC,
 MUGHALS,
 TURKEY,
 THAILAND,
 AMERICA,
 INDEPENDENT,
 INDEPENDENT2,
 NATIVE,
 CELTIA,
 SELJUKS,
 BARBARIAN
};

enum MyTechs
{
 MYSTICISM,
 MEDITATION,
 POLYTHEISM,
 PRIESTHOOD,
 MONOTHEISM,
 MONARCHY,
 LITERATURE,
 CODEOFLAWS,
 DRAMA,
 FEUDALISM,
 THEOLOGY,
 MUSIC,
 CIVIL_SERVICE,
 GUILDS,
 DIVINERIGHT,
 NATIONALISM,
 MILITARY_TRADITION,
 CONSTITUTION,
 LIBERALISM,
 DEMOCRACY,
 CORPORATION,
 FASCISM,
 COMMUNISM,
 MASS_MEDIA,
 ECOLOGY,
 FISHING,
 THE_WHEEL,
 AGRICULTURE,
 POTTERY,
 AESTHETICS,
 SAILING,
 WRITING,
 MATHEMATICS,
 ALPHABET,
 CALENDAR,
 CURRENCY,
 PHILOSOPHY,
 PAPER,
 BANKING,
 EDUCATION,
 PRINTING_PRESS,
 ECONOMICS,
 ASTRONOMY,
 CHEMISTRY,
 SCIENTIFIC_METHOD,
 PHYSICS,
 BIOLOGY,
 MEDICINE,
 ELECTRICITY,
 COMBUSTION,
 FISSION,
 FLIGHT,
 ADVANCED_FLIGHT,
 PLASTICS,
 COMPOSITES,
 STEALTH,
 GENETICS,
 FIBER_OPTICS,
 FUSION,
 HUNTING,
 MINING,
 ARCHERY,
 MASONRY,
 ANIMAL_HUSBANDRY,
 BRONZEWORKING,
 HORSEBACK_RIDING,
 IRONWORKING,
 METALCASTING,
 COMPASS,
 CONSTRUCTION,
 MACHINERY,
 ENGINEERING,
 OPTICS,
 GUNPOWDER,
 REPLACEABLE_PARTS,
 MILITARY_SCIENCE,
 RIFLING,
 STEAM_POWER,
 STEEL,
 ASSEMBLY_LINE,
 RAILROAD,
 ARTILLERY,
 INDUSTRIALISM,
 RADIO,
 REFRIGERATION,
 SUPERCONDUCTORS,
 COMPUTERS,
 LASER,
 ROCKETRY,
 SATELLITES,
 ROBOTICS
};

enum MyBuildings
{
  HEROICEPIC = BEGIN_WONDERS,
  FLAVIANAMPHITHEATRE = BEGIN_WONDERS,
  NATIONALEPIC = BEGIN_WONDERS+1,
  TRIUMPHALARCH = BEGIN_WONDERS+1,
  GLOBETHEATRE = BEGIN_WONDERS+2,
  HERMITAGE = BEGIN_WONDERS+4,
  NATIONALGALLERY = BEGIN_WONDERS+4,
  CHANNELTUNNEL = BEGIN_WONDERS+5,
  WALLSTREET = BEGIN_WONDERS+6,
  IRONWORKS = BEGIN_WONDERS+7,
  TRADINGCOMPANY = BEGIN_WONDERS+8,
  MTRUSHMORE = BEGIN_WONDERS+9,
  REDCROSS = BEGIN_WONDERS+10,
  INTERPOL = BEGIN_WONDERS+11,
  SCOTLANDYARD = BEGIN_WONDERS+11,
  PYRAMID = BEGIN_WONDERS+12,
  STONEHENGE = BEGIN_WONDERS+13,
  GREATLIBRARY = BEGIN_WONDERS+14,
  GREATLIGHTHOUSE = BEGIN_WONDERS+15,
  HANGINGGARDEN = BEGIN_WONDERS+16,
  COLOSSUS = BEGIN_WONDERS+17,
  ORACLE = BEGIN_WONDERS+18,
  PARTHENON = BEGIN_WONDERS+19,
  ANGKORWAT = BEGIN_WONDERS+20,
  HAGIASOPHIA = BEGIN_WONDERS+21,
  CHICHENITZA = BEGIN_WONDERS+22,
  TEMPLEOFKUKULKAN = BEGIN_WONDERS+22,
  SISTINECHAPEL = BEGIN_WONDERS+23,
  SPIRALMINARET = BEGIN_WONDERS+24,
  NOTREDAME = BEGIN_WONDERS+25,
  TAJMAHAL = BEGIN_WONDERS+26,
  KREMLIN = BEGIN_WONDERS+27,
  EIFFELTOWER = BEGIN_WONDERS+28,
  STATUEOFLIBERTY = BEGIN_WONDERS+29,
  BROADWAY = BEGIN_WONDERS+30,
  WEMBLEY = BEGIN_WONDERS+30,
  ROCKNROLL = BEGIN_WONDERS+31,
  GRACELAND = BEGIN_WONDERS+31,
  HOLLYWOOD = BEGIN_WONDERS+32,
  GREATDAM = BEGIN_WONDERS+33,
  PENTAGON = BEGIN_WONDERS+34,
  UNITEDNATIONS = BEGIN_WONDERS+35,
  SPACEELEVATOR = BEGIN_WONDERS+36,
  ARTEMIS = BEGIN_WONDERS+38,
  SANKORE = BEGIN_WONDERS+39,
  GREATWALL = BEGIN_WONDERS+40,
  ZEUS = BEGIN_WONDERS+41,
  MAUSOLLOS = BEGIN_WONDERS+42,
  CRISTO = BEGIN_WONDERS+43,
  PAYA = BEGIN_WONDERS+44,
  MOAI = BEGIN_WONDERS+45,
  APOSTOLIC = BEGIN_WONDERS+46,
  LEANINGTOWER = BEGIN_WONDERS+47,
  OLYMPICPARK = BEGIN_WONDERS+48,
  SOLOMON = BEGIN_WONDERS+49,
  ISHTAR = BEGIN_WONDERS+50,
  THEODOSIAN = BEGIN_WONDERS+51,
  TERRACOTTA = BEGIN_WONDERS+52,
  MEZQUITA = BEGIN_WONDERS+53,
  DOMEROCK = BEGIN_WONDERS+54,
  TOPKAPI = BEGIN_WONDERS+55,
  BRANDENBURG = BEGIN_WONDERS+56,
  SANMARCO = BEGIN_WONDERS+57,
  WESTMINSTER = BEGIN_WONDERS+58,
  BOROBUDUR = BEGIN_WONDERS+60,
  KHAJURAHO = BEGIN_WONDERS+61,
  HIMEJI = BEGIN_WONDERS+62,
  PORCELAIN = BEGIN_WONDERS+63,
  HARMANDIR_SAHIB = BEGIN_WONDERS+64,
  GREAT_BATH = BEGIN_WONDERS+65,
  BLUE_MOSQUE = BEGIN_WONDERS+66,
  RED_FORT = BEGIN_WONDERS+67,
};

enum MyReligions
{
	PROTESTANTISM,
	CATHOLICISM,
	ISLAM,
	HINDUISM,
	BUDDHISM,
	CONFUCIANISM,
	TAOISM,
	ZOROASTRIANISM
};

enum MyBonuses
{
	BONUS_ALUMINUM,
	BONUS_COAL,
	BONUS_COPPER,
	BONUS_HORSE,
	BONUS_IRON,
	BONUS_MARBLE,
	BONUS_OIL,
	BONUS_STONE,
	BONUS_URANIUM,
	BONUS_BANANA,
	BONUS_CLAM,
	BONUS_CORN,
	BONUS_COW,
	BONUS_CRAB,
	BONUS_DEER,
	BONUS_FISH,
	BONUS_PIG,
	BONUS_RICE,
	BONUS_SHEEP,
	BONUS_WHEAT,
	BONUS_DYE,
	BONUS_FUR,
	BONUS_GEMS,
	BONUS_GOLD,
	BONUS_INCENSE,
	BONUS_IVORY,
	BONUS_SILK,
	BONUS_SILVER,
	BONUS_SPICES,
	BONUS_SUGAR,
	BONUS_WINE,
	BONUS_WHALE,
	BONUS_DRAMA,
	BONUS_MUSIC,
	BONUS_MOVIES,
	BONUS_COTTON,
	BONUS_SWAMP
};


#endif	// CVRHYES_H


extern int startingTurn[];
extern int startingTurnYear[]; // edead
extern char loadingTime[40][4];
extern char loadingTime600AD[40][4];
extern char startingYear[40][6];
extern bool startingEra[40];
extern char startingYear600AD[40][6];
extern bool startingEra600AD[40];

extern int takenTiles[32];
extern int distanceSubtrahend[32];
extern int distanceSubtrahendAstronomy[32];
extern int distanceMultiply[32];
extern int distanceMultiplyAstronomy[32];
extern int compactEmpireModifierArray[32];
extern int compactEmpireModifierAstronomy[32];
extern int targetCityValueDivisor[32];

extern int eraModifierInit[32];
extern int eraModifierInitAstronomy[32];
extern int cultureModifier[32];

extern int unitCostModifier[32];
extern int researchModifier[32];
extern int distanceMaintenanceModifier[32];
extern int numMaintenanceModifier[32];
extern int civicUpkeepModifier[32];
extern int healthMultiplier[32];

extern int startingEraFound[32];
extern int startingEraFound600AD[32];
extern int startingEraFoundAstronomy[32];
extern int unitCostModifier2[32];
extern int wonderCostModifier[32];
extern int buildingCostModifier[32];
extern int inflationRateModifier[32];
extern int greatPeopleThresholdArray[32];
extern int currentEra[32];
extern int currentEra600AD[32];
extern int growthThreshold[32];

//extern int militaryBonus[2][18];
extern char uniquePower[40][2][16];
extern char uniqueGoals[40][3][18];
extern char rating[40][6][15];

extern int turnPlayed[38];
extern int civSpreadFactor[38][8];
extern int civicMatrix[32][6][5];
extern int borders[32][32];
extern wchar civDynamicNames[2][32][22][19]; //(dynamic civ names - not jdog's)
extern int civDynamicNamesFlag[32];
extern int civDynamicNamesEraThreshold[32];
extern int settlersMaps[2][32][68][124];
extern int warMaps[2][32][68][124];


