class CfgPatches
{
	class sahrani_fix
	{
		units[] = {"smd_sahrani_A2"};
		worlds[] = {"smd_sahrani_A2"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"smd_sahrani_A2","smd_sahrani_artif_obj","smd_sahrani_rocks","smd_sahrani_veg","smd_roads","smd_sahrani_a2_Scenes"};
		fileName = "smd_sahrani_a2.pbo";
		author[] = {"SMD"};
		version = "1.0";
	};
};
class CfgMaterials
{
	class Water;
	class Sara_WaterColor: Water
	{
		ambient[] = {0.0,0.025,0.2,1.0};
		diffuse[] = {0.0,0.05,0.06,0.5};
	};
	class Shore;
	class Sara_ShoreColor: Shore
	{
		ambient[] = {0.0,0.025,0.2,1.0};
		diffuse[] = {0.0,0.05,0.06,0.5};
	};
	class ShoreFoam;
	class Sara_ShoreFoamColor: ShoreFoam
	{
		ambient[] = {0.0,0.25,0.2,0.5};
		diffuse[] = {0.0,0.05,0.6,0.4};
	};
};
class CfgWorldList
{
	class smd_sahrani_A2{};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather
		{
			class Overcast;
		};
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class Weather: Weather
		{
			class Lighting;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class smd_sahrani_A2: CAWorld
	{
		seaMaterial = "#Sara_Watercolor";
		shoreMaterial = "#Sara_ShoreColor";
		shoreFoamMaterial = "#Sara_ShoreFoamColor";
		access = 3;
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"smd_sahrani_a2Intro1"};
		description = "Sahrani";
		icon = "";
		worldName = "SMD\SMD_Sahrani_A2\smd_sahrani_a2.wrp";
		pictureMap = "\sahrani_fix\Data\Sahrani_ca.paa";
		pictureShot = "\sahrani_fix\Data\ui_sahrani_ca.paa";
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = -40;
		latitude = -40;
		startTime = "8.30";
		startDate = "15/08/2014";
		startWeather = 0.1;
		startFog = 0.0;
		forecastWeather = 0.3;
		forecastFog = 0.0;
		centerPosition[] = {13200,8850,300};
		seagullPos[] = {1272.842,150.0,14034.962};
		clutterGrid = 1.3;
		clutterDist = 200;
		noDetailDist = 70;
		fullDetailDist = 25;
		midDetailTexture = "SMD\SMD_Sahrani_A2\data\smd_sara_a2_middle_mco.paa";
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 2;
		safePositionAnchor[] = {13840.7,9375.21};
		safePositionRadius = 5000;
		class Sounds
		{
			sounds[] = {};
		};
		ilsPosition[] = {9240,10144,141};
		ilsDirection[] = {-1,0.08,0};
		ilsTaxiOff[] = {9800,10144,10200,10144,10358,10144,10375,10134,10384,10116,10384,10050,10375,10032,10358,10022,9820,10022};
		ilsTaxiIn[] = {9820,10022,9271,10022,9254,10032,9245,10050,9245,10116,9254,10134,9271,10144};
		drawTaxiway = "true";
		class SecondaryAirports
		{
			class SaraAirstrip1
			{
				ilsPosition[] = {2545,3000};
				ilsDirection[] = {0,0.08,1};
				ilsTaxiIn[] = {2495,2725,2495,2850,2508,2860,2508,3000,2520,3010,2545,3000};
				ilsTaxiOff[] = {2545,2445,2520,2425,2495,2445,2495,2725};
				drawTaxiway = "false";
			};
			class SaraAirstrip2
			{
				ilsPosition[] = {18640,14512};
				ilsDirection[] = {-0.754709,0.08,0.656059};
				ilsTaxiOff[] = {18887,14299,19135,14084,19220,14011,19272,13968,19281,13941,19271,13928,19252,13928,19195,13977};
				ilsTaxiIn[] = {19195,13977,19189,14029,18676,14478,18644,14478,18627,14492,18626,14507,18643,14511,18663,14492};
				drawTaxiway = "false";
			};
			class SaraAirstrip3
			{
				ilsPosition[] = {18013,18867};
				ilsDirection[] = {-0.207911,0.08,0.978147};
				ilsTaxiOff[] = {18106,18449,18205,17988,18187,17965,18156,17975,18100,18222};
				ilsTaxiIn[] = {18100,18222,18086,18290,18077,18338,18013,18630,17984,18771,18004,18790,18032,18780};
				drawTaxiway = "true";
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 20480;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		class Lighting: DefaultLighting
		{
			groundReflection[] = {0.06,0.06,0.03};
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{ 0.05,0.05,0.06 },{ 0.001,0.001,0.002 },{ 0.02,0.02,0.05 },{ 0.003,0.003,0.003 },{ 0.0001,0.0001,0.0002 },{ 0.0001,0.0001,0.0002 },0};
			fullNight[] = {-5,{ 0.05,0.05,0.05 },{ 0.02,0.02,0.02 },{ 0.04,0.04,0.04 },{ 0.04,0.04,0.04 },{ 0.01,0.01,0.02 },{ 0.08,0.06,0.06 },0};
			sunMoon[] = {-3.75,{ 0.045,0.04,0.04 },{ 0.04,0.04,0.04 },{ 0.045,0.04,0.04 },{ 0.04,0.04,0.04 },{ 0.04,0.035,0.04 },{ 0.1,0.08,0.09 },0.5};
			earlySun[] = {-2.5,{ 0.12,0.1,0.1 },{ 0.08,0.06,0.07 },{ 0.12,0.1,0.1 },{ 0.08,0.06,0.07 },{ 0.08,0.07,0.08 },{ 0.1,0.1,0.12 },1};
			sunrise[] = {0,{ { 0.7,0.45,0.45 },"5.16+(-4)" },{ { 0.07,0.09,0.12 },"4.0+(-4)" },{ { 0.6,0.47,0.25 },"4.66+(-4)" },{ { 0.1,0.09,0.1 },"4.3+(-4)" },{ { 0.5,0.4,0.4 },"6.49+(-4)" },{ { 0.88,0.51,0.24 },"8.39+(-4)" },1};
			earlyMorning[] = {3,{ { 0.65,0.55,0.55 },"6.04+(-4)" },{ { 0.08,0.09,0.11 },"4.5+(-4)" },{ { 0.55,0.47,0.25 },"5.54+(-4)" },{ { 0.1,0.09,0.1 },"5.02+(-4)" },{ { 0.5,0.4,0.4 },"7.05+(-4)" },{ { 0.88,0.51,0.24 },"8.88+(-4)" },1};
			midMorning[] = {8,{ { 0.98,0.85,0.8 },"8.37+(-4)" },{ { 0.08,0.09,0.11 },"6.42+(-4)" },{ { 0.87,0.47,0.25 },"7.87+(-4)" },{ { 0.09,0.09,0.1 },"6.89+(-4)" },{ { 0.5,0.4,0.4 },"8.9+(-4)" },{ { 0.88,0.51,0.24 },"10.88+(-4)" },1};
			morning[] = {16,{ { 1,1,0.9 },"13.17+(-4)" },{ { 0.17,0.18,0.19 },"10.26+(-4)" },{ { 1,1,0.9 },"12.67+(-4)" },{ { 0.17,0.18,0.19 },"11.71+(-4)" },{ { 0.15,0.15,0.15 },"12.42+(-4)" },{ { 0.17,0.17,0.15 },"14.42+(-4)" },1};
			noon[] = {45,{ { 1,1,1 },"17+(-4)" },{ { 1,1.3,1.55 },"13.5+(-4)" },{ { 1,1,1 },"15+(-4)" },{ { 0.36,0.37,0.38 },"13.5+(-4)" },{ { 1,1,1 },"16+(-4)" },{ { 1.0,1.0,1 },"17+(-4)" },1};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{ 0.0034,0.0034,0.004 },{ 0.003,0.003,0.003 },{ 0.0034,0.0034,0.004 },{ 0.003,0.003,0.003 },{ 0.001,0.001,0.002 },{ 0.001,0.001,0.002 },0};
			fullNight[] = {-5,{ 0.023,0.023,0.023 },{ 0.02,0.02,0.02 },{ 0.023,0.023,0.023 },{ 0.02,0.02,0.02 },{ 0.01,0.01,0.02 },{ 0.08,0.06,0.06 },0};
			sunMoon[] = {-3.75,{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.035,0.04 },{ 0.11,0.08,0.09 },0.5};
			earlySun[] = {-2.5,{ 0.0689,0.0689,0.0804 },{ 0.06,0.06,0.07 },{ 0.0689,0.0689,0.0804 },{ 0.06,0.06,0.07 },{ 0.08,0.07,0.08 },{ 0.14,0.1,0.12 },0.5};
			earlyMorning[] = {0,{ { 1,1,1 },"(-4)+3.95" },{ { 1,1,1 },"(-4)+3.0" },{ { 1,1,1 },"(-4)+3.95" },{ { 1,1,1 },"(-4)+3.0" },{ { 1,1,1 },"(-4)+4" },{ { 1,1,1 },"(-4)+5.5" },1};
			morning[] = {5,{ { 1,1,1 },"(-4)+5.7" },{ { 1,1,1 },"(-4)+4.5" },{ { 1,1,1 },"(-4)+5.7" },{ { 1,1,1 },"(-4)+4.5" },{ { 1,1,1 },"(-4)+7" },{ { 1,1,1 },"(-4)+8" },1};
			lateMorning[] = {25,{ { 1,1,1 },"(-4)+10.45" },{ { 1,1,1 },"(-4)+9.75" },{ { 1,1,1 },"(-4)+10.45" },{ { 1,1,1 },"(-4)+9.75" },{ { 1,1,1 },"(-4)+12" },{ { 1,1,1 },"(-4)+12.75" },1};
			noon[] = {70,{ { 1,1,1 },"(-4)+12.5" },{ { 1,1,1 },"(-4)+11" },{ { 1,1,1 },"(-4)+12" },{ { 1,1,1 },"(-4)+11" },{ { 1,1,1 },"(-4)+13.5" },{ { 1,1,1 },"(-4)+14" },1};
		};
		class Weather: Weather
		{
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0;
				};
				class Rainy: DayLightingRainy
				{
					overcast = 1.0;
				};
			};
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "smd_sahrani_artif_obj\skybox\smd_sky_clear_sky.paa";
					horizon = "";
				};
				class Weather7: Weather1
				{
					sky = "smd_sahrani_artif_obj\skybox\smd_sky_veryclear_sky.paa";
					horizon = "";
				};
				class Weather2: Weather2
				{
					sky = "smd_sahrani_artif_obj\skybox\smd_sky_almostclear_sky.paa";
					horizon = "";
				};
				class Weather3: Weather3
				{
					sky = "smd_sahrani_artif_obj\skybox\smd_sky_semicloudy_sky.paa";
					horizon = "";
				};
				class Weather4: Weather4
				{
					sky = "smd_sahrani_artif_obj\skybox\smd_sky_cloudy_sky.paa";
					horizon = "";
				};
				class Weather5: Weather5
				{
					sky = "smd_sahrani_artif_obj\skybox\smd_sky_mostlycloudy_sky.paa";
					horizon = "";
				};
				class Weather6: Weather5
				{
					sky = "smd_sahrani_artif_obj\skybox\smd_sky_overcast_sky.paa";
					horizon = "";
				};
			};
			class ThunderboltNorm;
			class ThunderboltHeavy;
		};
		class Rain;
		class Ambient
		{
			class Mammals
			{
				radius = 200;
				cost = "(1 + forest + trees) * (0.5 + (0.5 * night)) * (1 - sea) * (1 - houses)";
				class Species
				{
					class Rabbit
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};
			class BigBirds
			{
				radius = 300;
				cost = "((1 + forest + trees) - ((2 * rain)) - houses) * (1 - night) * (1 - sea)";
				class Species
				{
					class Hawk
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};
			class Birds
			{
				radius = 170;
				cost = "(1 - night) * ((1 + (3 * sea)) - (2 * rain))";
				class Species
				{
					class Crow
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};
			class BigInsects
			{
				radius = 20;
				cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class DragonFly
					{
						probability = "0.6 - (meadow * 0.5) + (forest * 0.4)";
						cost = 1;
					};
					class ButterFly
					{
						probability = "0.4 + (meadow * 0.5) - (forest * 0.4)";
						cost = 1;
					};
				};
			};
			class BigInsectsAquatic
			{
				radius = 20;
				cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species
				{
					class DragonFly
					{
						probability = 1;
						cost = 1;
					};
				};
			};
			class SmallInsects
			{
				radius = 3;
				cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class HouseFly
					{
						probability = "deadBody + (1 - deadBody) * (0.5 - forest * 0.1 - meadow * 0.2)";
						cost = 1;
					};
					class HoneyBee
					{
						probability = "(1 - deadBody) * (0.5 - forest * 0.1 + meadow * 0.2)";
						cost = 1;
					};
					class Mosquito
					{
						probability = "(1 - deadBody) * (0.2 * forest)";
						cost = 1;
					};
				};
			};
			class NightInsects
			{
				radius = 3;
				cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class Mosquito
					{
						probability = 1;
						cost = 1;
					};
				};
			};
			class WindClutter
			{
				radius = 10;
				cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindGrass2
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindRock1
					{
						probability = "0.4 * hills";
						cost = 1;
					};
				};
			};
			class NoWindClutter
			{
				radius = 15;
				cost = 8;
				class Species
				{
					class FxWindPollen1
					{
						probability = 1;
						cost = 1;
					};
				};
			};
		};
		class Names
		{
			class Sara_Rashidah
			{
				name = "Rashidah";
				position[] = {9585.79,11109.2};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Balmopan
			{
				name = "Balmopan";
				position[] = {8035.76,9456.25};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Estrella
			{
				name = "Estrella";
				position[] = {6785.26,8139.76};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Chantico
			{
				name = "Chantico";
				position[] = {8221.84,9087.71};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Cedras
			{
				name = "Cedras";
				position[] = {7379.13,8687.78};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Ambergris
			{
				name = "Ambergris";
				position[] = {7669.62,9181.86};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Ortego
			{
				name = "Ortego";
				position[] = {12355.6,7095.83};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Cayo
			{
				name = "Cayo";
				position[] = {9324.72,5982.79};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Iguana
			{
				name = "Iguana";
				position[] = {10730.4,4827.97};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Dolores
			{
				name = "Dolores";
				position[] = {11613.6,6018.85};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Parato
			{
				name = "Parato";
				position[] = {11367.6,5290.51};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Tiberia
			{
				name = "Tiberia";
				position[] = {9406.45,5145.5};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Geraldo
			{
				name = "Geraldo";
				position[] = {13276.7,6966.06};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_SelvaDeCresta
			{
				name = "Selva De Cresta";
				position[] = {7475,16815};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Corazol
			{
				name = "Corazol";
				position[] = {13191.7,8793.91};
				type = "NameCity";
				radiusA = 300;
				radiusB = 300;
			};
			class Forest_SelvaDeCaza
			{
				name = "Selva de Caza";
				position[] = {9504.02,16382.3};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Gulan
			{
				name = "Gulan";
				position[] = {8803.67,7733.56};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Somato
			{
				name = "Somato";
				position[] = {9199.74,8273.56};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Bonanza
			{
				name = "Bonanza";
				position[] = {11211.5,8858.06};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Corinto
			{
				name = "Corinto";
				position[] = {11567.7,9144.12};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Yoro
			{
				name = "Yoro";
				position[] = {9750.97,8723.95};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Pesto
			{
				name = "Pesto";
				position[] = {10179.7,8432.19};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Assombracao
			{
				name = "Assombracao";
				position[] = {13448.6,15014.4};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Paraiso
			{
				name = "PARAISO";
				position[] = {10612.3,9412.9};
				type = "NameCityCapital";
				radiusA = 300;
				radiusB = 300;
			};
			class Sara_Arcadia
			{
				name = "Arcadia";
				position[] = {7600.91,6435.52};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_MatoGrosso
			{
				name = "Mato Grosso";
				position[] = {10044.8,13709.8};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Masbete
			{
				name = "Masbete";
				position[] = {17231.4,14339.1};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Pita
			{
				name = "Pita";
				position[] = {18941,13888.9};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Bagango
			{
				name = "BAGANGO";
				position[] = {14240.3,12534};
				type = "NameCityCapital";
				radiusA = 300;
				radiusB = 300;
			};
			class Sara_Eponia
			{
				name = "Eponia";
				position[] = {12447.7,15099};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Everon
			{
				name = "Everon";
				position[] = {16514.2,9300.35};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Hunapu
			{
				name = "Hunapu";
				position[] = {7737.76,15755.6};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Pacamac
			{
				name = "Pacamac";
				position[] = {9713.48,14448.7};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Tlaloc
			{
				name = "Tlaloc";
				position[] = {10857.5,12628.6};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Obregan
			{
				name = "Obregan";
				position[] = {14520.1,10877.6};
				type = "NameCity";
				radiusA = 300;
				radiusB = 300;
			};
			class Sara_Carmen
			{
				name = "Carmen";
				position[] = {12436.1,13303.1};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 200;
			};
			class Sara_Ixel
			{
				name = "Ixel";
				position[] = {17480.5,13564.6};
				type = "NameVillage";
				radiusA = 150;
				radiusB = 150;
			};
			class Sara_Mercalillo
			{
				name = "Mercalillo";
				position[] = {13250,11292.9};
				type = "NameCity";
				radiusA = 250;
				radiusB = 250;
			};
			class Sara_Modesta
			{
				name = "Modesta";
				position[] = {14372.4,9428.12};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 200;
			};
			class Forest_Boscas
			{
				name = "Boscas";
				position[] = {13169.7,12714.8};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_MatoVirgo
			{
				name = "Mato Virgo";
				position[] = {17011.8,10153};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Valor
			{
				name = "Valor";
				position[] = {15343.3,9895.96};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Gaula
			{
				name = "Gaula";
				position[] = {14503.5,8538.8};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 200;
			};
			class Forest_Hiccoras
			{
				name = "Hiccoras";
				position[] = {12021.3,9317.88};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Mataredo
			{
				name = "Mataredo";
				position[] = {10653,16265};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Benoma
			{
				name = "Benoma";
				position[] = {15383.1,13768.5};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Tandag
			{
				name = "Tandag";
				position[] = {11856.1,14418.3};
				type = "NameVillage";
				radiusA = 150;
				radiusB = 150;
			};
			class Hill_SierraCresta
			{
				name = "Sierra Cresta";
				position[] = {7491.75,16549};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_MonteAcequero
			{
				name = "Monte Acequero";
				position[] = {7380.65,16028.5};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_PuntoPrecito
			{
				name = "Punto Precito";
				position[] = {8776.64,15871.8};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_Rocaloso
			{
				name = "Rocaloso";
				position[] = {9143.21,15417.3};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_PuntoPacamac
			{
				name = "Punto Pacamac";
				position[] = {9900.11,14893.7};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_BicoDoPapageo
			{
				name = "Bico Do Papageo";
				position[] = {10021,13428.9};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_PuntoMorton
			{
				name = "Punto Morton";
				position[] = {11107.5,13381.6};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_PicoDeRevolucion
			{
				name = "Pico de Revolucion";
				position[] = {13118.7,16529};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_PicoDePerez
			{
				name = "Pico de Perez";
				position[] = {14260.1,15181.7};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_MonteLiberacion
			{
				name = "Monte Liberacion";
				position[] = {15624.3,11386.1};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_MonteValor
			{
				name = "Monte Valor";
				position[] = {16203.4,10347.2};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_SanEsteban
			{
				name = "San Esteban";
				position[] = {11430.1,8584.35};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_MontePesto
			{
				name = "Monte Pesto";
				position[] = {10699.6,8267.5};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_MonteYorito
			{
				name = "Monte Yorito";
				position[] = {9389.91,8668.93};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_PlayaRiscal
			{
				name = "Playa Riscal";
				position[] = {6499.31,8134.06};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_PlayaDePalomas
			{
				name = "Playa de Palomas";
				position[] = {8351.01,9717.7};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_AbraDaBoca
			{
				name = "Abra da Boca";
				position[] = {11603.3,10973.6};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_BahiaCorazol
			{
				name = "Bahia Corazol";
				position[] = {12736.2,9377.89};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_BahiaGatun
			{
				name = "Bahia Gatun";
				position[] = {13536.3,8428.03};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_BahiaSeca
			{
				name = "Bahia Seca";
				position[] = {13042.7,6134.3};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_GolfoDeDolores
			{
				name = "Golfo de Dolores";
				position[] = {11932.8,5994.65};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_CalaDeIguana
			{
				name = "Cala de Iguana";
				position[] = {10875.7,4618.57};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_AnconEverone
			{
				name = "Ancon Everone";
				position[] = {16859.4,9267};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_AnconDePita
			{
				name = "Ancon de Pita";
				position[] = {19424.1,13706.5};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_AnconDeAmanitas
			{
				name = "Ancon de Amanitas";
				position[] = {15697.6,15177.1};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_PortoDePerolas
			{
				name = "Porto de Perolas";
				position[] = {10842.6,16594.6};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_GolfoValiente
			{
				name = "Golfo Valiente";
				position[] = {6464.89,17140.2};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_AnconDeHunapu
			{
				name = "Ancon de Hunapu";
				position[] = {7410.73,15283};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_EstrechoDeTrelobada
			{
				name = "Estrecho de Trelobada";
				position[] = {7744.55,14702.4};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_PlayaGyron
			{
				name = "Playa Gyron";
				position[] = {10215.2,13192.2};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CaboValiente
			{
				name = "Cabo Valiente";
				position[] = {6204.28,17398.8};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaDeMatey
			{
				name = "Isla de Matey";
				position[] = {5810.74,16137.8};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Trelobada
			{
				name = "Trelobada";
				position[] = {7589.66,14400.3};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_PassoSanAndres
			{
				name = "Passo San Andres";
				position[] = {10714.4,14236.6};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_PuntasOccidental
			{
				name = "Puntas Occidental";
				position[] = {8958.57,15608.6};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CaboJuventudo
			{
				name = "Cabo Juventudo";
				position[] = {7800.52,17794.3};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CaboIndice
			{
				name = "Cabo Indice";
				position[] = {10573.7,17190.2};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaDeVictoria
			{
				name = "Isla de Victoria";
				position[] = {11206.7,16884.9};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaDesCompadres
			{
				name = "Isla des Compadres";
				position[] = {10688.7,16764.2};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Pesadas
			{
				name = "Pesadas";
				position[] = {11663.2,15366.1};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_PassoEpone
			{
				name = "Passo Epone";
				position[] = {13625.7,15536.5};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_SierraMasbete
			{
				name = "Sierra Masbete";
				position[] = {15113.8,14709.8};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_TerraMarismo
			{
				name = "Terra Marismo";
				position[] = {14038.7,13908.7};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_ValleDeCarmen
			{
				name = "Valle de Carmen";
				position[] = {13160.4,13428.4};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_PuntasOriental
			{
				name = "Puntas Oriental";
				position[] = {11415.7,13058.6};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaDeLibertad
			{
				name = "Isla de Libertad";
				position[] = {12521.9,10925.8};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaVerda
			{
				name = "Isla Verda";
				position[] = {12385.2,10296.3};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_BajoValor
			{
				name = "Bajo Valor";
				position[] = {15504.5,8889.9};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslasGatunas
			{
				name = "Islas Gatunas";
				position[] = {13952.8,8009.48};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_SierraDeLosPinos
			{
				name = "Sierra de los Pinos";
				position[] = {16774.3,11163.3};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_TresValles
			{
				name = "Tres Valles";
				position[] = {17695.9,11920.1};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_SierraPita
			{
				name = "Sierra Pita";
				position[] = {18357.3,13220.9};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_SanPeregrino
			{
				name = "San Peregrino";
				position[] = {6325.16,7383.88};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CalhetaDeCedras
			{
				name = "Calheta de Cedras";
				position[] = {7031.63,8494.87};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CaboCanino
			{
				name = "Cabo Canino";
				position[] = {7813.09,9692.49};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Matas
			{
				name = "Matas";
				position[] = {9771.83,10650.3};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_ValleAzul
			{
				name = "Valle Azul";
				position[] = {10972.8,7553.93};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Vallejo
			{
				name = "Vallejo";
				position[] = {10260.6,7084};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_SierraMadre
			{
				name = "Sierra Madre";
				position[] = {11078,8347.44};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_PlatoDeCayo
			{
				name = "Plato de Cayo";
				position[] = {8702.53,6070.69};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_TerraAcorcha
			{
				name = "Terra Acorcha";
				position[] = {10157.6,5852.48};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CalhaDeCayo
			{
				name = "Calha de Cayo";
				position[] = {8393.4,5388.08};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CalhetaSeca
			{
				name = "Calheta Seca";
				position[] = {13107.8,6434.37};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Tiberia
			{
				name = "";
				position[] = {9152.83,5396.48};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Parato
			{
				name = "";
				position[] = {11303.1,5422.35};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Ortego
			{
				name = "";
				position[] = {11885.8,6956.45};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Yoro_1
			{
				name = "";
				position[] = {9715.85,8531.93};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Yoro_2
			{
				name = "";
				position[] = {9773.73,8998.93};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Peregrino_1
			{
				name = "";
				position[] = {6159.45,7399.45};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_SanEsteban
			{
				name = "";
				position[] = {12005.9,8286.43};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Mercalillo
			{
				name = "";
				position[] = {12004.4,11911.4};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Pacamac
			{
				name = "";
				position[] = {9510.84,14901.3};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Hunapu_1
			{
				name = "";
				position[] = {7468.89,16130};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Hunapu_2
			{
				name = "";
				position[] = {8205,15941.1};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Revolucion_1
			{
				name = "";
				position[] = {13749.9,16418.3};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Revolucion_2
			{
				name = "";
				position[] = {14946.7,15955};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_LosPinos_2
			{
				name = "";
				position[] = {18480.4,10926.8};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_LosPinos_1
			{
				name = "";
				position[] = {17889.7,12162.4};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Boscas_2
			{
				name = "";
				position[] = {13327.6,12740.8};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_SelvaDeCresta_2
			{
				name = "";
				position[] = {7999.67,17400.6};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_SelvaDeCresta_3
			{
				name = "";
				position[] = {8806.92,16797.9};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_PuntasOccidental_2
			{
				name = "";
				position[] = {8460.83,15278.2};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_PuntasOccidental_1
			{
				name = "";
				position[] = {9564.05,14722.8};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Rocaloso
			{
				name = "";
				position[] = {9831.58,15640};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_PassoSanAndres_1
			{
				name = "";
				position[] = {10721.2,14813.2};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_PassoSanAndres_2
			{
				name = "";
				position[] = {11401.6,14283.9};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Boscas_3
			{
				name = "";
				position[] = {13262.8,12515.1};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Boscas_4
			{
				name = "";
				position[] = {13507.5,12404.4};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Bagango
			{
				name = "";
				position[] = {14665.9,12841.1};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Benoma
			{
				name = "";
				position[] = {15096.7,13505};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Assombracao_2
			{
				name = "";
				position[] = {12783.8,15799.9};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Assombracao_3
			{
				name = "";
				position[] = {14227.9,14694.6};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Arcadia
			{
				name = "";
				position[] = {7892.86,6081.78};
				type = "VegetationPalm";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Peregrino_2
			{
				name = "";
				position[] = {7070.53,7571.6};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Vallejo_1
			{
				name = "";
				position[] = {9865.81,7245.49};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Somato
			{
				name = "";
				position[] = {9624.54,8002.14};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Bonanza_1
			{
				name = "";
				position[] = {10917.8,8615.46};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Paraiso
			{
				name = "";
				position[] = {10016.9,9624.97};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_ValleAzul
			{
				name = "";
				position[] = {11462.3,7838.9};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Bonanza_3
			{
				name = "";
				position[] = {10320.3,8783.98};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Tiberia_2
			{
				name = "";
				position[] = {9460.94,5303.13};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Matas
			{
				name = "";
				position[] = {10328.8,10526.4};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Chantico
			{
				name = "";
				position[] = {8899.35,9096.94};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Peregrino_3
			{
				name = "";
				position[] = {6825.93,6872.29};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Vallejo_2
			{
				name = "";
				position[] = {9193.7,7231.04};
				type = "VegetationBroadleaf";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_PlayaDePalomas
			{
				name = "";
				position[] = {8349.87,9628.09};
				type = "VegetationPalm";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Tiberia_3
			{
				name = "";
				position[] = {9472.58,5260.04};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Tiberia_4
			{
				name = "";
				position[] = {9261.16,5437.93};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Tiberia_5
			{
				name = "";
				position[] = {9299.01,5385.59};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Parato_2
			{
				name = "";
				position[] = {11493.2,5503.59};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Parato_3
			{
				name = "";
				position[] = {11436.5,5500.09};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Parato_5
			{
				name = "";
				position[] = {11370.8,5459.28};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Parato_4
			{
				name = "";
				position[] = {11214.9,5346.55};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Ortego_2
			{
				name = "";
				position[] = {12033.6,7029.35};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Ortego_3
			{
				name = "";
				position[] = {12032,6939.95};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Yoro_3
			{
				name = "";
				position[] = {9643.9,8623.2};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Vineyard_Yoro_4
			{
				name = "";
				position[] = {9670.65,8447.77};
				type = "VegetationVineyard";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_LaCorona
			{
				name = "La Corona";
				position[] = {9912.99,4931.83};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CaboDeFidel
			{
				name = "Cabo de Fidel";
				position[] = {5676.9,16462.7};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class View_Dolores
			{
				name = "";
				position[] = {12028.1,6254.58};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class View_CaboCanino
			{
				name = "";
				position[] = {7864.87,9722.09};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class Marine_BahiaSanGeraldo
			{
				name = "Bahia San Geraldo";
				position[] = {13578.3,6865.16};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CalhetaDemiseca
			{
				name = "Calheta Demiseca";
				position[] = {12382.8,6243.52};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_CalaDeParato
			{
				name = "Cala de Parato";
				position[] = {11500.4,5120.27};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Balmopan
			{
				name = "";
				position[] = {8133.45,9448.72};
				type = "VegetationPalm";
				radiusA = 100;
				radiusB = 100;
			};
			class View_Ortego
			{
				name = "";
				position[] = {11981.6,7180.67};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class Local_RocaDror
			{
				name = "Roca del Dror";
				position[] = {14101,17032.8};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Border_1
			{
				name = "";
				position[] = {13255.2,8987.48};
				type = "BorderCrossing";
				radiusA = 50;
				radiusB = 50;
			};
			class Border_2
			{
				name = "";
				position[] = {13309.2,8849};
				type = "BorderCrossing";
				radiusA = 50;
				radiusB = 50;
			};
			class Border_3
			{
				name = "";
				position[] = {13377.5,8752.81};
				type = "BorderCrossing";
				radiusA = 50;
				radiusB = 50;
			};
			class View_MontePesto
			{
				name = "";
				position[] = {10678.7,8390.43};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class Local_PassoSanMarco
			{
				name = "Passo San Marco";
				position[] = {15061.4,12392.5};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class View_Ortego02
			{
				name = "";
				position[] = {13987.8,13068.5};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class Hill_PuntoArgente
			{
				name = "Punto Argente";
				position[] = {8060.15,16267.9};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class RockArea_Hunapu
			{
				name = "";
				position[] = {7611.09,15924.9};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SCaza
			{
				name = "";
				position[] = {9675.31,16291.7};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Merc
			{
				name = "";
				position[] = {12902.9,11671.5};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Valor
			{
				name = "";
				position[] = {14780.7,10015.4};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class Hill_CerroObrego
			{
				name = "Cerro Obrego";
				position[] = {14798.5,10053.8};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class RockArea_MonteLiber01
			{
				name = "";
				position[] = {15714.4,11163.2};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_MonteLiber02
			{
				name = "";
				position[] = {15665,11474.6};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_MonteLiber03
			{
				name = "";
				position[] = {15989.9,11390.8};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_MonteLiber04
			{
				name = "";
				position[] = {16397.4,11460.7};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_MonteLiber05
			{
				name = "";
				position[] = {16187,11583.9};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SierraPinos01
			{
				name = "";
				position[] = {16888.2,11207.1};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SierraPinos02
			{
				name = "";
				position[] = {17346.3,10972.3};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SierraPinos03
			{
				name = "";
				position[] = {17696.2,10863.7};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SierraPinos04
			{
				name = "";
				position[] = {17889,10988.6};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SierraPinos05
			{
				name = "";
				position[] = {18089,11261.3};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SierraPinos06
			{
				name = "";
				position[] = {18265.1,11457.7};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SierraPinos07
			{
				name = "";
				position[] = {18340.7,11399.5};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_SierraPinos08
			{
				name = "";
				position[] = {18012.7,11468.8};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Victoria01
			{
				name = "";
				position[] = {12681.3,17945.1};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Victoria02
			{
				name = "";
				position[] = {11687.5,17735};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Victoria03
			{
				name = "";
				position[] = {11695.5,17340.2};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Victoria04
			{
				name = "";
				position[] = {12176.8,17017.1};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Ortego01
			{
				name = "";
				position[] = {13020.3,7717.54};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Ortego02
			{
				name = "";
				position[] = {12806.6,7905.33};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Ortego03
			{
				name = "";
				position[] = {12976.1,7079.35};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Ortego04
			{
				name = "";
				position[] = {12620.3,7529.75};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Acorcha01
			{
				name = "";
				position[] = {10381.8,6594.61};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Acorcha02
			{
				name = "";
				position[] = {10594.8,6235.98};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Acorcha03
			{
				name = "";
				position[] = {10111.3,6156.88};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Acorcha04
			{
				name = "";
				position[] = {10513.8,5695.48};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Acorcha05
			{
				name = "";
				position[] = {9711.3,5616.95};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Acorcha06
			{
				name = "";
				position[] = {9301.45,6282.04};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Iguana01
			{
				name = "";
				position[] = {10820.5,5128.34};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Bonanza
			{
				name = "";
				position[] = {11454.6,8913.92};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_Hiccoras
			{
				name = "";
				position[] = {11976.1,8923.12};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class Local_IslaDeVida
			{
				name = "Isla del Vida";
				position[] = {5221.15,15942.8};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaDeVassal
			{
				name = "Isla del Vassal";
				position[] = {4459.34,15180.1};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_MonteGalassi
			{
				name = "Monte Galassi";
				position[] = {4799.28,14985.4};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class View_Vallejo
			{
				name = "";
				position[] = {10759.6,7005.35};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class RockArea_PMarco2
			{
				name = "";
				position[] = {15107.2,12277.7};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class RockArea_PMarco1
			{
				name = "";
				position[] = {15096.1,12406.1};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class Marine_GolaYennda
			{
				name = "Gola Yennda";
				position[] = {5124.36,16271.6};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CaboSantaLucia
			{
				name = "Cabo Santa Lucia";
				position[] = {12214.7,18350.2};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CaboGavio
			{
				name = "Cabo Gavio";
				position[] = {9771.65,4484.46};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Alcazar
			{
				name = "Alcazar";
				position[] = {14726.7,13979.3};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class View_Mercalillo
			{
				name = "";
				position[] = {12917.7,11606.4};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class Forest_MatoVirgo2
			{
				name = "";
				position[] = {16335.3,10655.7};
				type = "VegetationFir";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_PassoParadiso
			{
				name = "Passo Paradiso";
				position[] = {10132.7,15479.7};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Parvulo
			{
				name = "Parvulo";
				position[] = {2236.76,18809.8};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Rocara
			{
				name = "Rocara";
				position[] = {1760.09,17907.5};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_CimasD
			{
				name = "Cimas Dobles";
				position[] = {1621.65,17136.1};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Gordo
			{
				name = "El Gordo";
				position[] = {16022.8,4044.62};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaZorra
			{
				name = "Isla del Zorra";
				position[] = {16485.1,4664.54};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaTojos
			{
				name = "Isla de los Tojos";
				position[] = {17623.8,4797.19};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Asharah
			{
				name = "Monte Asharah";
				position[] = {17982.3,3163.18};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_GolaLaras
			{
				name = "Gola de Laras";
				position[] = {17143.2,4461.75};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_RioPallido
			{
				name = "Rio Pallido";
				position[] = {17476.9,18560.6};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_Antigua
			{
				name = "Antigua";
				position[] = {17887.2,18324.9};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_Virgo
			{
				name = "Virgo";
				position[] = {17539.4,17941.3};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_Vieja
			{
				name = "Vieja";
				position[] = {17413.5,18075.3};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaCaja
			{
				name = "Isla de la Caja";
				position[] = {1511.29,1691.15};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_IslaArimar
			{
				name = "Isla Arimar";
				position[] = {1545.04,2296.35};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_SanTomas
			{
				name = "San Tomas";
				position[] = {9455.59,3510.17};
				type = "NameLocal";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_AngraCaridad
			{
				name = "Angra del Caridad";
				position[] = {1930.62,1990.73};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_CalaBarca
			{
				name = "Cala Barca";
				position[] = {2843.61,1880.42};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Marine_CalaMarisca
			{
				name = "Cala Marisca";
				position[] = {2707.13,3251.19};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Desert1
			{
				name = "";
				position[] = {2443.92,3023.21};
				type = "VegetationPalm";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Desert2
			{
				name = "";
				position[] = {2715.73,2146.69};
				type = "VegetationPalm";
				radiusA = 100;
				radiusB = 100;
			};
			class Forest_Desert3
			{
				name = "";
				position[] = {2942.03,2923.72};
				type = "VegetationPalm";
				radiusA = 100;
				radiusB = 100;
			};
			class Sara_Rahmadi
			{
				name = "Rahmadi";
				position[] = {2931.13,2798.62};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_CerraBorra
			{
				name = "Cerra Borra";
				position[] = {3368.48,2933.15};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class Hill_Tapial
			{
				name = "Tapial";
				position[] = {5967.18,16431.1};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class RockArea_Hunapu2
			{
				name = "";
				position[] = {6704.33,16028.5};
				type = "RockArea";
				radiusA = 40;
				radiusB = 40;
			};
			class Marine_BajoEstrecho
			{
				name = "Bajo Estrecho";
				position[] = {9431.54,4116.36};
				type = "NameMarine";
				radiusA = 100;
				radiusB = 100;
			};
			class Local_kju
			{
				name = "Isle de kju";
				position[] = {17355.5,19312.7};
				type = "NameLocal";
				radiusA = 75;
				radiusB = 75;
			};
			class Local_michellero
			{
				name = "Isle de Michellero";
				position[] = {16844.1,19645.2};
				type = "NameLocal";
				radiusA = 75;
				radiusB = 75;
			};
			class Local_mapori
			{
				name = "Isle de Mapori";
				position[] = {17699.4,19369.8};
				type = "NameLocal";
				radiusA = 50;
				radiusB = 50;
			};
			class Local_Cabo
			{
				name = "Cabo Base Militar";
				position[] = {12134,17665.4};
				type = "NameLocal";
				radiusA = 50;
				radiusB = 50;
			};
			class Local_Selva
			{
				name = "Selva Base Militar";
				position[] = {8161.75,17005.7};
				type = "NameLocal";
				radiusA = 50;
				radiusB = 50;
			};
			class Sara_Rashidah_CC
			{
				name = "";
				position[] = {9585.79,11109.2};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Paraiso_CC","Sara_Balmopan_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Balmopan_CC
			{
				name = "";
				position[] = {8035.76,9456.25};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Chantico_CC","Sara_Ambergris_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Estrella_CC
			{
				name = "";
				position[] = {6785.26,8139.76};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Cedras_CC","Sara_Arcadia_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Chantico_CC
			{
				name = "";
				position[] = {8221.84,9087.71};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Balmopan_CC","Sara_Ambergris_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Cedras_CC
			{
				name = "";
				position[] = {7379.13,8687.78};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Estrella_CC","Sara_Ambergris_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Ambergris_CC
			{
				name = "";
				position[] = {7669.62,9181.86};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Balmopan_CC","Sara_Cedras_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Ortego_CC
			{
				name = "";
				position[] = {12355.6,7095.83};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Dolores_CC","Sara_Geraldo_CC","Sara_Corazol_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Cayo_CC
			{
				name = "";
				position[] = {9324.67,5982.79};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Tiberia_CC","Sara_Arcadia_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Iguana_CC
			{
				name = "";
				position[] = {10730.4,4827.97};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Tiberia_CC","Sara_Parato_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Dolores_CC
			{
				name = "";
				position[] = {11613.6,6018.85};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Parato_CC","Sara_Ortego_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Parato_CC
			{
				name = "";
				position[] = {11367.6,5290.51};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Dolores_CC","Sara_Iguana_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Tiberia_CC
			{
				name = "";
				position[] = {9406.45,5145.5};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Iguana_CC","Sara_Cayo_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Geraldo_CC
			{
				name = "";
				position[] = {13276.7,6966.06};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Ortego_CC","Sara_Corazol_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Corazol_CC
			{
				name = "";
				position[] = {13191.7,8793.91};
				type = "CityCenter";
				radiusA = 300;
				radiusB = 300;
				neighbors[] = {"Sara_Ortego_CC","Sara_Modesta_CC","Sara_Gaula_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Gulan_CC
			{
				name = "";
				position[] = {8803.67,7733.56};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Somato_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Somato_CC
			{
				name = "";
				position[] = {9199.74,8273.56};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Gulan_CC","Sara_Chantico_CC","Sara_Yoro_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Bonanza_CC
			{
				name = "";
				position[] = {11211.5,8858.06};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Corinto_CC","Sara_Pesto_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Corinto_CC
			{
				name = "";
				position[] = {11567.7,9144.12};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Bonanza_CC","Sara_Paraiso_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Yoro_CC
			{
				name = "";
				position[] = {9750.97,8723.95};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Somato_CC","Sara_Pesto_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Pesto_CC
			{
				name = "";
				position[] = {10179.7,8432.19};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Yoro_CC","Sara_Bonanza_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Paraiso_CC
			{
				name = "";
				position[] = {10612.3,9412.9};
				type = "CityCenter";
				radiusA = 300;
				radiusB = 300;
				neighbors[] = {"Sara_Yoro_CC","Sara_Rashidah_CC","Sara_Corinto_CC","Sara_Bonanza_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Arcadia_CC
			{
				name = "";
				position[] = {7600.91,6435.52};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Cayo_CC","Sara_Estrella_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Masbete_CC
			{
				name = "";
				position[] = {17231.4,14339.1};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Pita_CC","Sara_Ixel_CC","Sara_Benoma_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Pita_CC
			{
				name = "";
				position[] = {18941,13888.9};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Masbete_CC","Sara_Ixel_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Bagango_CC
			{
				name = "";
				position[] = {14240.3,12534};
				type = "CityCenter";
				radiusA = 300;
				radiusB = 300;
				neighbors[] = {"Sara_Obregan_CC","Sara_Carmen_CC","Sara_Benoma_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Eponia_CC
			{
				name = "";
				position[] = {12447.7,15099};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Tandag_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Everon_CC
			{
				name = "";
				position[] = {16514.2,9300.35};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Valor_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Hunapu_CC
			{
				name = "";
				position[] = {7737.76,15755.6};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Pacamac_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Pacamac_CC
			{
				name = "";
				position[] = {9713.48,14448.7};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Hunapu_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Tlaloc_CC
			{
				name = "";
				position[] = {10857.5,12628.6};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Carmen_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Obregan_CC
			{
				name = "";
				position[] = {14520.1,10877.6};
				type = "CityCenter";
				radiusA = 300;
				radiusB = 300;
				neighbors[] = {"Sara_Valor_CC","Sara_Bagango_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Carmen_CC
			{
				name = "";
				position[] = {12436.1,13303.1};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Bagango_CC","Sara_Tlaloc_CC","Sara_Tandag_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Ixel_CC
			{
				name = "";
				position[] = {17480.5,13564.6};
				type = "CityCenter";
				radiusA = 150;
				radiusB = 150;
				neighbors[] = {"Sara_Benoma_CC","Sara_Masbete_CC","Sara_Pita_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Mercalillo_CC
			{
				name = "";
				position[] = {13250,11292.9};
				type = "CityCenter";
				radiusA = 250;
				radiusB = 250;
				neighbors[] = {"Sara_Tlaloc_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Modesta_CC
			{
				name = "";
				position[] = {14372.4,9428.12};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Valor_CC","Sara_Gaula_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Valor_CC
			{
				name = "";
				position[] = {15343.3,9895.96};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Modesta_CC","Sara_Obregan_CC","Sara_Everon_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Gaula_CC
			{
				name = "";
				position[] = {14503.5,8538.8};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"Sara_Modesta_CC","Sara_Corazol_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Mataredo_CC
			{
				name = "";
				position[] = {10653,16265};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Tandag_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Benoma_CC
			{
				name = "";
				position[] = {15383.1,13768.5};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {"Sara_Bagango_CC","Sara_Masbete_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Tandag_CC
			{
				name = "";
				position[] = {11856.1,14418.3};
				type = "CityCenter";
				radiusA = 150;
				radiusB = 150;
				neighbors[] = {"Sara_Carmen_CC","Sara_Eponia_CC"};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
			class Sara_Rahmadi_CC
			{
				name = "";
				position[] = {2931.13,2798.62};
				type = "CityCenter";
				radiusA = 100;
				radiusB = 100;
				neighbors[] = {};
				demography[] = {"CIV",1,"CIV_RU",0};
				angle = 0;
			};
		};
		class Armory
		{
			disabled = 0;
			positionStart[] = {9422.75,6965.58};
			positionAdmin[] = {1823.66,17866.4};
			positionStartWater[] = {10077.8,12002};
			positionsViewer[] = {{ 10049.3,7941.1 },{ 10564,9421.82 },{ 13358.8,8832.33 }};
			positionBlacklist[] = {{ { 10106,9069.18 },{ 12300.8,7279.66 } },{ { 7793.81,15624.3 },{ 13863.4,11595.7 } },{ { 11609,17278.4 },{ 16584.8,13903.5 } }};
			disableShips = 0;
			class Challenges
			{
				class CheckpointRace
				{
					backUpRoute[] = {{ 12631.5,9091.17 },{ 11587,10385.3 },{ 11233.6,10356.3 },{ 10518.7,10376.3 },{ 10501.6,9902.88 },{ 10161.8,9855.42 },{ 10062.9,9995.42 }};
				};
				class FiringRange
				{
					positionsStart[] = {{ 9548.27,10087.3 }};
					directionsStart[] = {90};
					positionsStartWater[] = {{ 12246.8,5769.53 }};
					directionsStartWater[] = {180};
				};
			};
		};
		class Clutter
		{
			class Sara_A2_c_stubble
			{
				model = "ca\plants2\clutter\c_stubble.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.3;
			};
			class Sara_A2_TreeSmallForest
			{
				model = "ca\plants2\clutter\c_TreeSmallForest.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.3;
			};
			class Sara_A2_WeedSedge: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed3.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class Sara_A2_WeedDeadSmall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WeedDead2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.7;
			};
			class Sara_A2_HeatherBrush: DefaultClutter
			{
				model = "ca\plants2\clutter\c_caluna.p3d";
				affectedByWind = 0.15;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.0;
				surfaceColor[] = {0.33,0.3,0.17,1};
			};
			class Sara_A2_GrassCrookedForest: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.3;
			};
			class Sara_A2_GrassBunch: DefaultClutter
			{
				model = "ca\plants2\clutter\c_grassBunch.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.3;
				scaleMax = 0.5;
			};
			class Sara_A2_BlueBerry: DefaultClutter
			{
				model = "ca\plants2\clutter\c_blueBerry.p3d";
				affectedByWind = 0.05;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.1;
			};
			class Sara_A2_RaspBerry: DefaultClutter
			{
				model = "ca\plants2\clutter\c_raspBerry.p3d";
				affectedByWind = 0.05;
				swLighting = 1;
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Sara_A2_GrassAutumn: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassAutumn.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 0.9;
			};
			class Sara_A2_GrassTall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassTall.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Sara_A2_SmallLeafPlant: DefaultClutter
			{
				model = "ca\plants2\clutter\C_SmallLeafPlant.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.1;
			};
			class Sara_A2_GrassAutumnLong: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassAutumn.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.4;
			};
			class Sara_A2_GrassAutumnBrown: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassAutumnBrown.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 0.9;
			};
			class Sara_A2_GrassAutumnBrownS: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassAutumnBrown.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.4;
				scaleMax = 0.6;
			};
			class Sara_A2_Weed3: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed3.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.7;
			};
			class Sara_A2_Weed3small: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed3.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.4;
				scaleMax = 0.5;
			};
			class Sara_A2_Fern: DefaultClutter
			{
				model = "ca\plants2\clutter\c_fern.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.9;
			};
			class Sara_A2_Ferntall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_fernTall.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.3;
				scaleMax = 0.5;
			};
			class Sara_A2_SmallPicea: DefaultClutter
			{
				model = "ca\plants2\clutter\c_picea.p3d";
				affectedByWind = 0.05;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.25;
			};
			class Sara_A2_PlantWideLeaf: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WideLeafPlant.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.0;
			};
			class Sara_A2_MushroomsHorcak: DefaultClutter
			{
				model = "ca\plants2\clutter\c_mushroomhorcak.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.25;
			};
			class Sara_A2_Plants_Yellow_EP1: DefaultClutter
			{
				model = "ca\plants_e\clutter\c_Plants_Yellow_EP1.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class Sara_A2_Plants_Violet_EP1: DefaultClutter
			{
				model = "ca\plants_e\clutter\c_Plants_Violet_EP1.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class Sara_A2_Plants_White_EP1: DefaultClutter
			{
				model = "ca\plants_e\clutter\c_Plants_White_EP1.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class Sara_A2_GrassDesertBunch_EP1: DefaultClutter
			{
				model = "ca\plants_e\clutter\c_Grass_desert_bunch_EP1.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.0;
			};
			class Sara_A2_GrassDesert_EP1: DefaultClutter
			{
				model = "ca\plants_e\clutter\c_Grass_desert_EP1.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.0;
			};
			class Sara_A2_GrassDesertSoft_EP1: DefaultClutter
			{
				model = "ca\plants_e\clutter\c_GrassDesert_GroupSoft_EP1.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.0;
			};
			class Sara_A2_StoneDesert_EP1: DefaultClutter
			{
				model = "ca\plants_e\clutter\c_StoneMiddleSharpSingle_EP1.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.0;
			};
			class Sara_A2_StoneDesert2_EP1: DefaultClutter
			{
				model = "ca\plants_e\clutter\c_StoneMiddleGroupMount_EP1.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.0;
			};
			class Sara_A2_Clutter_grass_desert: DefaultClutter
			{
				model = "smd_sahrani_veg\clutter\clutter_grass_desert.p3d";
				affectedByWind = 1;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class Sara_A2_Clutter_grass_desert2: DefaultClutter
			{
				model = "smd_sahrani_veg\clutter\clutter_grass_desert2.p3d";
				affectedByWind = 1;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
		};
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = 0.0;
			minSlope = 0.02;
		};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class smd_sahrani_a2Intro1
		{
			directory = "sahrani_fix\Scenes\intro.smd_sahrani_A2";
		};
	};
};
class cfgSurfaces
{
	class Default{};
	class Sara_A2asphaltSurface: Default
	{
		files = "smd_sara_a2_asphalt_*";
		rough = 0.12;
		dust = 0.2;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class Sara_A2dirtgrassSurface: Default
	{
		files = "smd_sara_a2_dirtgrass2_*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "grass";
		character = "Sara_A2_dirtgrass2Clutter";
		soundHit = "soft_ground";
	};
	class Sara_A2forrestfloorSurface: Default
	{
		files = "smd_sara_a2_forrestfloor_*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "dirt";
		character = "Sara_A2_forrestClutter";
		soundHit = "soft_ground";
	};
	class Sara_A2forrestfloor2Surface: Default
	{
		files = "smd_sara_a2_forrestfloor2_*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "dirt";
		character = "Sara_A2_forrest2Clutter";
		soundHit = "soft_ground";
	};
	class Sara_A2grassSurface: Default
	{
		files = "smd_sara_a2_grass_*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "grass";
		character = "Sara_A2_grassClutter";
		soundHit = "soft_ground";
	};
	class Sara_A2grass2Surface: Default
	{
		files = "smd_sara_a2_grass2_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "grass";
		character = "Sara_A2_grass2Clutter";
		soundHit = "soft_ground";
	};
	class Sara_A2grassdirtSurface: Default
	{
		files = "smd_sara_a2_grassdirt_*";
		rough = 0.11;
		dust = 0.25;
		soundEnviron = "dirt";
		character = "Sara_A2_grassdirtClutter";
		soundHit = "soft_ground";
	};
	class Sara_A2sand1Surface: Default
	{
		files = "smd_sara_a2_sand1_*";
		rough = 0.1;
		dust = 0.3;
		soundEnviron = "sand";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class Sara_A2sand2Surface: Default
	{
		files = "smd_sara_a2_sand2_*";
		rough = 0.1;
		dust = 0.3;
		soundEnviron = "sand";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class Sara_A2clifffaceSurface: Default
	{
		files = "smd_sara_a2_cliffface_*";
		rough = 0.16;
		dust = 0.05;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class Sara_A2cliffface2Surface: Default
	{
		files = "smd_sara_a2_cliffface2_*";
		rough = 0.16;
		dust = 0.05;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class Sara_A2cliffface3Surface: Default
	{
		files = "smd_sara_a2_cliffface3_*";
		rough = 0.16;
		dust = 0.05;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class Sara_A2sandgrassSurface: Default
	{
		files = "smd_sara_a2_sandgrass_*";
		rough = 0.1;
		dust = 0.005;
		soundEnviron = "sand";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class Sara_A2uwsandSurface: Default
	{
		files = "smd_sara_a2_uwsand_*";
		rough = 0.1;
		dust = 0.5;
		soundEnviron = "sand";
		character = "Sara_A2_sandgrassClutter";
		soundHit = "soft_ground";
	};
};
class CfgSurfaceCharacters
{
	class Sara_A2_grassClutter
	{
		probability[] = {0.3,0.05,0.25,0.001,0.002,0.001,0.05,0.01,0.001,0.001,0.06,0.03,0.01,""};
		names[] = {"Sara_A2_GrassAutumnLong","Sara_A2_GrassAutumnBrownS","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall","Sara_A2_SmallLeafPlant","Sara_A2_Weed3Small","Sara_A2_BlueBerry","Sara_A2_WeedSedge","Sara_A2_Weed3","Sara_A2_MushroomsHorcak","Sara_A2_Plants_Yellow_EP1","Sara_A2_Plants_Violet_EP1","Sara_A2_Plants_White_EP1",""};
	};
	class Sara_A2_grass2Clutter
	{
		probability[] = {0.5,0.05,0.15,0.1,0.002,0.001,0.05,0.01,0.06,0.03,0.01};
		names[] = {"Sara_A2_GrassAutumnLong","Sara_A2_GrassAutumnBrownS","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall","Sara_A2_SmallLeafPlant","Sara_A2_Weed3Small","Sara_A2_BlueBerry","Sara_A2_WeedSedge","Sara_A2_Plants_Yellow_EP1","Sara_A2_Plants_Violet_EP1","Sara_A2_Plants_White_EP1"};
	};
	class Sara_A2_forrestClutter
	{
		probability[] = {0.45,0.04,0.15,0.25,0.001,0.001,0.001,0.001,0.1,0.03,0.02,0.01};
		names[] = {"Sara_A2_GrassAutumnLong","Sara_A2_GrassAutumnBrownS","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall","Sara_A2_SmallLeafPlant","Sara_A2_Weed3","Sara_A2_SmallPicea","Sara_A2_Fern","Sara_A2_GrassBunch","Sara_A2_c_stubble","Sara_A2_Plants_Violet_EP1","Sara_A2_Plants_White_EP1"};
	};
	class Sara_A2_forrest2Clutter
	{
		probability[] = {0.001,0.002,0.001,0.001,0.005,0.005,0.001,0.001,0.001,0.15,0.3,0.5};
		names[] = {"Sara_A2_MushroomsHorcak","Sara_A2_Ferntall","Sara_A2_Fern","Sara_A2_SmallPicea","Sara_A2_Weed3","Sara_A2_Weed3small","Sara_A2_BlueBerry","Sara_A2_RaspBerry","Sara_A2_TreeSmallForest","Sara_A2_GrassBunch","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall"};
	};
	class Sara_A2_grassdirtClutter
	{
		probability[] = {0.001,0.006,0.006,0.02,0.05,0.03,0.01};
		names[] = {"Sara_A2_MushroomsHorcak","Sara_A2_Weed3","Sara_A2_Weed3small","Sara_A2_GrassBunch","Sara_A2_GrassCrookedForest","Sara_A2_WeedDeadSmall","Sara_A2_GrassAutumnBrownS"};
	};
	class Sara_A2_dirtgrass2Clutter
	{
		probability[] = {0.5,0.05,0.3,0.001,0.002,0.001,0.05,0.01,0.001};
		names[] = {"Sara_A2_GrassAutumnLong","Sara_A2_GrassAutumnBrownS","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall","Sara_A2_SmallLeafPlant","Sara_A2_Weed3Small","Sara_A2_BlueBerry","Sara_A2_WeedSedge","Sara_A2_Weed3"};
	};
	class Sara_A2_sandgrassClutter
	{
		probability[] = {0.002,0.001,0.003,0.005,0.01,0.03};
		names[] = {"Sara_A2_GrassDesert_EP1","Sara_A2_GrassDesertSoft_EP1","Sara_A2_StoneDesert_EP1","Sara_A2_StoneDesert2_EP1","Sara_A2_Clutter_grass_desert","Sara_A2_Clutter_grass_desert2"};
	};
};