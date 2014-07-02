class CfgPatches
{
	class ascz_vostok_fix
	{
		units[] = {"Vostok"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"bet_militia"};
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather;
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
		};
	};
	class DefaultLighting;
	class Vostok: CAWorld
	{
		access = 3;
		author = "Old Bear";
		worldId = 1;
		cutscenes[] = {"VostokIntro"};
		description = "Vostok";
		icon = "";
		worldName = "\OLDBR\Vostok\Vostok.wrp";
		pictureMap = "\ascz_vostok_fix\Data\Vostok_ca.paa";
		pictureShot = "\ascz_vostok_fix\Data\ui_vostok_ca.paa";
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 20;
		latitude = -50;
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 20500;
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
		startTime = "8:30";
		startDate = "22/10/1985";
		startWeather = 0.2;
		startFog = 0.0;
		forecastWeather = 0.2;
		forecastFog = 0.0;
		seagullPos[] = {3022,150.0,16876};
		centerPosition[] = {10240,10240};
		ilsPosition[] = {5010.41,17818,6.86};
		ilsDirection[] = {-0.5,0.08,0.866};
		ilsTaxiIn[] = {5201.35,17603.4,5052.55,17845.1,5024.24,17882.5,5000.91,17874.1,4990.96,17857.9};
		ilsTaxiOff[] = {5208.69,17472.8,5235.44,17467.9,5250.37,17497.1,5250.06,17504.6,5201.35,17603.4};
		drawTaxiway = 1;
		class SecondaryAirports
		{
			class Vostok_Airstrip1
			{
				ilsPosition[] = {16182,4861,5.2};
				ilsDirection[] = {-1,0.08,0};
				ilsTaxiIn[] = {};
				ilsTaxiOff[] = {};
				drawTaxiway = 0;
			};
			class Vostok_Airstrip2
			{
				ilsPosition[] = {9348.86,9401.84,29};
				ilsDirection[] = {-0.6293,0.08,-0.7771};
				ilsTaxiIn[] = {};
				ilsTaxiOff[] = {};
				drawTaxiway = 0;
			};
		};
		class ReplaceObjects{};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
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
			earlyMorning[] = {5,{ { 0.65,0.55,0.55 },"6.04+(-4)" },{ { 0.08,0.09,0.11 },"4.5+(-4)" },{ { 0.55,0.47,0.25 },"5.54+(-4)" },{ { 0.1,0.09,0.1 },"5.02+(-4)" },{ { 0.5,0.4,0.4 },"7.05+(-4)" },{ { 0.88,0.51,0.24 },"8.88+(-4)" },1};
			midMorning[] = {15,{ { 0.98,0.85,0.8 },"8.37+(-4)" },{ { 0.08,0.09,0.11 },"6.42+(-4)" },{ { 0.87,0.47,0.25 },"7.87+(-4)" },{ { 0.09,0.09,0.1 },"6.89+(-4)" },{ { 0.5,0.4,0.4 },"8.9+(-4)" },{ { 0.88,0.51,0.24 },"10.88+(-4)" },1};
			morning[] = {25,{ { 1,1,0.9 },"13.17+(-4)" },{ { 0.17,0.18,0.19 },"10.26+(-4)" },{ { 1,1,0.9 },"12.67+(-4)" },{ { 0.17,0.18,0.19 },"11.71+(-4)" },{ { 0.15,0.15,0.15 },"12.42+(-4)" },{ { 0.17,0.17,0.15 },"14.42+(-4)" },1};
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
		};
		clutterGrid = 1.0;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "OLDBR\Vostok\data\vos_middle_mco.paa";
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 3;
		class clutter
		{
			class vos_GrassCrookedforest: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class vos_GrassCrooked: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrooked.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class vos_AutumnFlowers: DefaultClutter
			{
				model = "ca\plants2\clutter\c_autumn_flowers.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class vos_GrassTall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassTall.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.3;
				scaleMax = 0.75;
			};
			class vos_WeedDead: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WeedDead.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class vos_WeedDeadSmall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WeedDead2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class vos_HeatherBrush: DefaultClutter
			{
				model = "ca\plants2\clutter\c_caluna.p3d";
				affectedByWind = 0.15;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1;
				surfaceColor[] = {0.53,0.5,0.37,1};
			};
			class vos_WeedSedge: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed3.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class vos_BlueBerry: DefaultClutter
			{
				model = "ca\plants2\clutter\c_BlueBerry.p3d";
				affectedByWind = 0.05;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.3;
			};
		};
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.25;
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
		};
		class Names
		{
			class Zvezda_Cmy
			{
				name = "Zvezda STou";
				position[] = {5276.13,18122.5};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Vostok_Airbase
			{
				name = "Vostok Airbase";
				position[] = {5242.56,17552.7};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Zvezda_Base
			{
				name = "Zvezda Base";
				position[] = {6310.15,16353.3};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Vostok_Harbor
			{
				name = "Vostok Harbor";
				position[] = {4124.2,15659.9};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Vostok
			{
				name = "Vostok";
				position[] = {3104.4,16855.2};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Surfong_Ri_Ruins
			{
				name = "Surfong-Ri Ruins";
				position[] = {1957.54,16591.4};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Surfon_Ostrov
			{
				name = "Surfon Ostrov";
				position[] = {3058.24,15895.3};
				type = "NameLocal";
				radiusA = 400;
				radiusB = 400;
			};
			class Surovy_Ostrov
			{
				name = "Surovy Ostrov";
				position[] = {16693.9,16541};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Bezvet_Cape
			{
				name = "Bezvet Cape";
				position[] = {15151,15731.6};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Nitchevo
			{
				name = "Nitchevo";
				position[] = {14959.2,15612.3};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Nitchevo_Base
			{
				name = "Nitchevo Base";
				position[] = {14744.5,15374.8};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class 665
			{
				name = 665;
				position[] = {15128,14090.8};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Tchevo_Ruins
			{
				name = "Tchevo Ruins";
				position[] = {12332.1,14877.5};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class 664
			{
				name = 664;
				position[] = {11995.1,13248.7};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Ruins_1
			{
				name = "Ruins";
				position[] = {14486.7,12639.5};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Mine
			{
				name = "Mine";
				position[] = {10831.6,12556.2};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class 662
			{
				name = 662;
				position[] = {10182.7,11459.6};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class 663
			{
				name = 663;
				position[] = {8113.24,13163};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class 659
			{
				name = 659;
				position[] = {7416.26,11022.8};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Ruined_Fishery
			{
				name = "Ruined_Fishery";
				position[] = {7305.55,10661};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Ruins_2
			{
				name = "Ruins";
				position[] = {10326.6,10424.8};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class 661
			{
				name = 661;
				position[] = {13024.2,10419.4};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class 660
			{
				name = 660;
				position[] = {10304.5,9079.25};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Ruins_3
			{
				name = "Ruins";
				position[] = {13808.9,9127.38};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Ruins_4
			{
				name = "Ruins";
				position[] = {11469.8,6833.53};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Sawmill
			{
				name = "Sawmill";
				position[] = {11009,8065.58};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Rezetz
			{
				name = "Rezetz";
				position[] = {10975.6,7779.35};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Ruins_5
			{
				name = "Ruins";
				position[] = {9919.69,6056.67};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class 658
			{
				name = 658;
				position[] = {8496.17,7284.75};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Nikto_Ruins
			{
				name = "Nikto Ruins";
				position[] = {7960.64,5285.97};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Nikagda
			{
				name = "Nikagda";
				position[] = {5442.44,7934.12};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Nikagda_Base
			{
				name = "Nikagda Base";
				position[] = {5861.75,7390.25};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Bezoravan_Cape
			{
				name = "Bezoravan Cape";
				position[] = {5477.23,5196.97};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Predel_Ostrov
			{
				name = "Predel Ostrov";
				position[] = {3791.38,3858.28};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Aurora_Cape
			{
				name = "Aurora Cape";
				position[] = {18496.2,6357.91};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Karantin
			{
				name = "Karantin";
				position[] = {18023.5,6061.12};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Esly_Ostrov
			{
				name = "Esly Ostrov";
				position[] = {18733.5,5401.31};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Zadrovie
			{
				name = "Zadrovie";
				position[] = {16546.8,5342.17};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Zadrovie_Harbour
			{
				name = "Zadrovie Harbour";
				position[] = {17144.6,5410.59};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Zadrovie_Airbase
			{
				name = "Zadrovie Airbase";
				position[] = {16866,4767.43};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Ho_Ostrov
			{
				name = "Ho Ostrov";
				position[] = {14310,5276.64};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Stary_Cyelo
			{
				name = "Stary Cyelo";
				position[] = {15659.6,3756.92};
				type = "NameCity";
				radiusA = 200;
				radiusB = 200;
			};
			class Konec_Cape
			{
				name = "Konec Cape";
				position[] = {14692.1,2398.52};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Pomegratskaya
			{
				name = "Pomegratskaya";
				position[] = {16493.5,3917.45};
				type = "NameLocal";
				radiusA = 400;
				radiusB = 400;
			};
			class Nikto_Ostrov
			{
				name = "Nikto Ostrov";
				position[] = {16000.2,10689.1};
				type = "NameLocal";
				radiusA = 400;
				radiusB = 400;
			};
			class Nitchevo_Airstrip
			{
				name = "Nitchevo Airstrip";
				position[] = {13984.5,15681.9};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Nikto_Airstrip
			{
				name = "Nikto Airstrip";
				position[] = {9424.58,9419.15};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Nikagda_Airstrip
			{
				name = "Nikagda Airstrip";
				position[] = {5938.53,5692.38};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Elektro_1
			{
				name = "Elektro 1";
				position[] = {14101.1,14284.9};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Elektro_2
			{
				name = "Elektro 2";
				position[] = {11271.8,9023.62};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Elektro_3
			{
				name = "Elektro 3";
				position[] = {7530.02,7370.65};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Starika_kabina
			{
				name = "Starika kabina";
				position[] = {9696.98,5859.8};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Drou_kabina
			{
				name = "Drou kabina";
				position[] = {12009.7,9544.04};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Leko_kabina
			{
				name = "Leko kabina";
				position[] = {7975.38,11828.5};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Traking_1
			{
				name = "";
				position[] = {5645.6,18200.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Traking_2
			{
				name = "";
				position[] = {5383.4,18253.8};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Traking_3
			{
				name = "";
				position[] = {5352.69,18124.6};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Traking_4
			{
				name = "";
				position[] = {5042.6,18013.5};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Vostok_Airbase_1
			{
				name = "";
				position[] = {5609.06,16894.8};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Base_3
			{
				name = "";
				position[] = {4947.57,16580.7};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Base_1
			{
				name = "";
				position[] = {6417.54,16578};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Base_4
			{
				name = "";
				position[] = {5531.04,16068.1};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Base_5
			{
				name = "";
				position[] = {4665.44,15747.2};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zvezda_Base_2
			{
				name = "";
				position[] = {6598.78,16405.4};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Vostok_Harbor_2
			{
				name = "";
				position[] = {4531.8,16514.3};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Vostok_3
			{
				name = "";
				position[] = {3105.81,16763.6};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Vostok_4
			{
				name = "";
				position[] = {2669.91,16840.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Vostok_1
			{
				name = "";
				position[] = {3011.42,17160.6};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Surfong_1
			{
				name = "";
				position[] = {2173.88,16558.8};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Surfong_2
			{
				name = "";
				position[] = {1805.21,16639.4};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Vostok_Harbor_1
			{
				name = "";
				position[] = {4209.37,15752.5};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Vostok_2
			{
				name = "";
				position[] = {3133.6,16957.8};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nitchevo_1
			{
				name = "";
				position[] = {15094.4,15695.8};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nitchevo_2
			{
				name = "";
				position[] = {14926.4,15428.4};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nitchevo_3
			{
				name = "";
				position[] = {14664.4,15138.2};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nitchevo_Air_1
			{
				name = "";
				position[] = {14077.6,15690.1};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Tchevo_ruins_1
			{
				name = "";
				position[] = {12495.5,14887.1};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_665_1
			{
				name = "";
				position[] = {15152.8,14222.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Electro_1_1
			{
				name = "";
				position[] = {14369.2,14666.2};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Electro_1_2
			{
				name = "";
				position[] = {14194.3,14398.7};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_664_3
			{
				name = "";
				position[] = {12218.4,12954.2};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_661_1
			{
				name = "";
				position[] = {12824.4,12044.2};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_664_1
			{
				name = "";
				position[] = {11748.9,13142.2};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_664_2
			{
				name = "";
				position[] = {12149.4,13198.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Mine_1
			{
				name = "";
				position[] = {10769.5,12454.5};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Mine_2
			{
				name = "";
				position[] = {10519.3,12177.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_663_1
			{
				name = "";
				position[] = {8254.34,13238.6};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_663_2
			{
				name = "";
				position[] = {8145.35,13054.1};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_663_3
			{
				name = "";
				position[] = {8378.49,12820.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Leko_kabina_1
			{
				name = "";
				position[] = {8023.26,11902.5};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Leko_kabina_2
			{
				name = "";
				position[] = {7660.56,11413.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_659_2
			{
				name = "";
				position[] = {7317.77,10926.8};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_659_1
			{
				name = "";
				position[] = {7515.78,11155.2};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_659_3
			{
				name = "";
				position[] = {7455.41,10705.3};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_662_2
			{
				name = "";
				position[] = {9909.87,11214.4};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_662_1
			{
				name = "";
				position[] = {10340.2,11608.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_665_3
			{
				name = "";
				position[] = {14699.5,13656.8};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_665_4
			{
				name = "";
				position[] = {14380,12767.6};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_665_5
			{
				name = "";
				position[] = {14074.8,12303};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_661_2
			{
				name = "";
				position[] = {13618.2,10957.9};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_661_4
			{
				name = "";
				position[] = {12832.5,10425.6};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_661_3
			{
				name = "";
				position[] = {13101,10529.2};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_661_5
			{
				name = "";
				position[] = {11951.7,10516.8};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Drou_Kabina_1
			{
				name = "";
				position[] = {11926.8,9530.41};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_661_6
			{
				name = "";
				position[] = {13844.3,9224.28};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_661_7
			{
				name = "";
				position[] = {13764.2,8961.09};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_660_1
			{
				name = "";
				position[] = {10424.4,9188.95};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_660_2
			{
				name = "";
				position[] = {10032.4,8894.91};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Electro_2_1
			{
				name = "";
				position[] = {11263.1,9032.43};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Rezetz_1
			{
				name = "";
				position[] = {10915.2,8008.6};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Rezetz_2
			{
				name = "";
				position[] = {10897.8,7615.18};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikto_Airstrip_1
			{
				name = "";
				position[] = {9479.51,9440.71};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikto_Airstrip_2
			{
				name = "";
				position[] = {9969.57,10079.5};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Rezetz_4
			{
				name = "";
				position[] = {11386,6754.08};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Rezetz_3
			{
				name = "";
				position[] = {11803.8,7398.44};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Starika_kabina_1
			{
				name = "";
				position[] = {10071.6,6215.76};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Starika_kabina_2
			{
				name = "";
				position[] = {9768.57,5907.79};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_658_1
			{
				name = "";
				position[] = {8248.64,7411.31};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_658_2
			{
				name = "";
				position[] = {8771.79,7486.89};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Electro_3_1
			{
				name = "";
				position[] = {7371.5,7513.3};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Electro_3_2
			{
				name = "";
				position[] = {7201.22,7128.31};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_659_4
			{
				name = "";
				position[] = {6780.4,9290.7};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_659_5
			{
				name = "";
				position[] = {6287.39,9243.56};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_3
			{
				name = "";
				position[] = {6041.59,7794.78};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_5
			{
				name = "";
				position[] = {6243.42,7545.06};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_4
			{
				name = "";
				position[] = {5606.74,7482.11};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_2
			{
				name = "";
				position[] = {5448.17,7802.44};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_1
			{
				name = "";
				position[] = {5392.39,8128.35};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikto_Ruins_1
			{
				name = "";
				position[] = {7875.99,5330.66};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_Air_3
			{
				name = "";
				position[] = {5514.75,5180.41};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_Air_1
			{
				name = "";
				position[] = {5914.75,5594.35};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_Air_2
			{
				name = "";
				position[] = {5719.97,5933.19};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nikagda_6
			{
				name = "";
				position[] = {6078.46,7020.54};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Aurora_1
			{
				name = "";
				position[] = {18404.8,6338.64};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Karantin_2
			{
				name = "";
				position[] = {17874.1,6092.42};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Karantin_1
			{
				name = "";
				position[] = {18082.2,6191.88};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Camp_1_2
			{
				name = "";
				position[] = {17342.4,5851.57};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Camp_1_1
			{
				name = "";
				position[] = {17137.9,5895.85};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Radio_1_
			{
				name = "";
				position[] = {16914.5,5943.61};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Radio_1_2
			{
				name = "";
				position[] = {16696.1,5902.32};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_1
			{
				name = "";
				position[] = {16613.8,5620.86};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_2
			{
				name = "";
				position[] = {16536,5470.06};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_3
			{
				name = "";
				position[] = {16340.1,5281.56};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Camp_3_1
			{
				name = "";
				position[] = {15972.7,5476.44};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Camp_3_2
			{
				name = "";
				position[] = {15396,5378.44};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Harbour_1
			{
				name = "";
				position[] = {17355.8,5648.08};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Sawmill_1
			{
				name = "";
				position[] = {17113.5,5750.08};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Harbour_2
			{
				name = "";
				position[] = {17274.2,5451.07};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Camp_4_1
			{
				name = "";
				position[] = {16817.1,4516};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Stary_Cyelo_1
			{
				name = "";
				position[] = {15932.5,4146.87};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Stary_Cyelo_2
			{
				name = "";
				position[] = {15720.9,3947.55};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Stary_Cyelo_3
			{
				name = "";
				position[] = {15527.4,3739.59};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Stary_Cyelo_4
			{
				name = "";
				position[] = {15259.7,3526.15};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Camp_5_1
			{
				name = "";
				position[] = {15249.1,3263.88};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Camp_6_1
			{
				name = "";
				position[] = {14775.1,3171.38};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AFlatV_Zvezda_Traking
			{
				name = "";
				position[] = {5083.86,18155.5};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AStrong_Zadrovie_Camp_7_1
			{
				name = "";
				position[] = {14634.2,2812.62};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Konec_1_1
			{
				name = "";
				position[] = {14620.6,2537.71};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Vostok_Airbase_2
			{
				name = "";
				position[] = {5312.5,17731.4};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_665_2
			{
				name = "";
				position[] = {14962.5,14016.3};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Nitchevo_Air_2
			{
				name = "";
				position[] = {13447.3,15367.6};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AStrong_Zadrovie_Camp_2_1
			{
				name = "";
				position[] = {16204,6008.41};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class AFlatV_Vostok_Airport
			{
				name = "";
				position[] = {5043.76,17599.7};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Zvezda_Base
			{
				name = "";
				position[] = {6361.28,16409.1};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Vostok_Harbor
			{
				name = "";
				position[] = {3931.04,15496.2};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class ACityCenterV_Vostok
			{
				name = "";
				position[] = {2941.8,16898.5};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
				neighbors[] = {"ACityCenterV_Harbor","ACityCenterV_Vostok_Airport"};
				demography[] = {"CIV_RU",1.0};
			};
			class AFlatV_Vostok_1
			{
				name = "";
				position[] = {3029.17,17045.8};
				type = "FlatAreaCitySmall";
				radiusA = 25;
				radiusB = 25;
			};
			class AFlatV_Vostok_2
			{
				name = "";
				position[] = {3000.42,16913.4};
				type = "FlatAreaCitySmall";
				radiusA = 25;
				radiusB = 25;
			};
			class AFlat_CityV_Nitchevo
			{
				name = "";
				position[] = {15058.7,15592.5};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
			};
			class ACityCenterV_Nitchevo
			{
				name = "";
				position[] = {14948.9,15532.7};
				type = "FlatAreaCitySmall";
				radiusA = 50;
				radiusB = 50;
				neighbors[] = {"ACityCenterV_Rezetz","ACityCenterV_Nikagda"};
				demography[] = {"CIV_RU",1.0};
			};
			class ACityCenterV_Rezetz
			{
				name = "";
				position[] = {11035.8,7870.83};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
				neighbors[] = {"ACityCenterV_Nitchevo","ACityCenterV_Nikagda"};
				demography[] = {"CIV_RU",1.0};
			};
			class AFlat_CityV_Rezetz
			{
				name = "";
				position[] = {10921.8,7673.03};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
			};
			class ACityCenterV_Nikagda
			{
				name = "";
				position[] = {5366.34,7889.08};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
				neighbors[] = {"ACityCenterV_Rezetz","ACityCenterV_Nitchevo"};
				demography[] = {"CIV_RU",1.0};
			};
			class AFlat_CityV_Nikagda
			{
				name = "";
				position[] = {5494.89,8028.85};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
			};
			class ACityCenterV_Zadrovie
			{
				name = "";
				position[] = {16414.5,5320.69};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
				neighbors[] = {"ACityCenterV_Stary_Cyelo"};
				demography[] = {"CIV_RU",1.0};
			};
			class AFlat_CityV_Zadrovie
			{
				name = "";
				position[] = {16624.3,5425.25};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
			};
			class ACityCenterV_Stary_Cyelo
			{
				name = "";
				position[] = {15727,3683.63};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlat_CityV_Stary_Cyelo
			{
				name = "";
				position[] = {15558.8,3822.09};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
				neighbors[] = {"ACityCenterV_Zadrovie"};
				demography[] = {"CIV_RU",1.0};
			};
			class AFlatV_Nitchevo_Base
			{
				name = "";
				position[] = {14866.5,15330.4};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Nitchevo_AirStrip
			{
				name = "";
				position[] = {13936.8,15602.8};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_665
			{
				name = "";
				position[] = {15032.6,14166.8};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_664
			{
				name = "";
				position[] = {12007.8,13165.1};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_662
			{
				name = "";
				position[] = {10055.2,11377};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_663
			{
				name = "";
				position[] = {8065.91,13229};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_661
			{
				name = "";
				position[] = {12970.6,10510};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_660
			{
				name = "";
				position[] = {10178.1,8993.23};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_658
			{
				name = "";
				position[] = {8478.35,7376.93};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Nikagda_Airstrip
			{
				name = "";
				position[] = {5922.72,5813.24};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Nikto_AirStrip
			{
				name = "";
				position[] = {9317.58,9549.92};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_659
			{
				name = "";
				position[] = {7466.73,10963.4};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Nikagda_Base
			{
				name = "";
				position[] = {5787.54,7236.75};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class ACityCenterV_Vostok_Harbor
			{
				name = "";
				position[] = {4054.99,16020.8};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
				neighbors[] = {"ACityCenterV_Vostok","ACityCenterV_Vostok_Airport"};
				demography[] = {"CIV_RU",1.0};
			};
			class ACityCenterV_Vostok_Airport
			{
				name = "";
				position[] = {4964.42,17408.8};
				type = "CityCenter";
				radiusA = 50;
				radiusB = 50;
				neighbors[] = {"ACityCenterV_Vostok","ACityCenterV_Vostok_Harbor"};
				demography[] = {"CIV_RU",1.0};
			};
			class AFlatV_N_Bay
			{
				name = "";
				position[] = {17408.8,6222.57};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Radio
			{
				name = "";
				position[] = {16824.4,6022.13};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Camp_1
			{
				name = "";
				position[] = {17218.1,5852.9};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Zadrovie_Harbour
			{
				name = "";
				position[] = {17242.8,5553.18};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_NW_Bay
			{
				name = "";
				position[] = {16488,5733.41};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Camp_3
			{
				name = "";
				position[] = {15659.2,5323.24};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_W_Bay
			{
				name = "";
				position[] = {16182.4,5382.56};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Zadrovie_AirBase
			{
				name = "";
				position[] = {16781.8,4701.9};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Camp_4
			{
				name = "";
				position[] = {16651.5,4498.12};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Camp_5
			{
				name = "";
				position[] = {15074.2,3212.04};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Camp_6
			{
				name = "";
				position[] = {14793.6,2984.07};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_SW_bay
			{
				name = "";
				position[] = {14551.6,3229.35};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_Konec
			{
				name = "";
				position[] = {14667.1,2465.02};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
			};
			class AFlatV_SE_Bay
			{
				name = "";
				position[] = {15859,3799.02};
				type = "FlatArea";
				radiusA = 50;
				radiusB = 50;
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
				class FxCrWindLeaf1
				{
					probability = "0.2 * trees";
					cost = 1;
				};
				class FxCrWindLeaf2
				{
					probability = "0.1 * trees + 0.2";
					cost = 1;
				};
				class FxCrWindLeaf3
				{
					probability = "0.1 * trees";
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
				class FxCrWindLeaf1
				{
					probability = "0.2 * trees";
					cost = 1;
				};
				class FxCrWindLeaf2
				{
					probability = "0.1 * trees + 0.2";
					cost = 1;
				};
				class FxCrWindLeaf3
				{
					probability = "0.1 * trees";
					cost = 1;
				};
			};
		};
	};
};
class CfgWorldList
{
	class Vostok{};
};
class CfgMissions
{
	class Cutscenes
	{
		class VostokIntro
		{
			directory = "ascz_vostok_fix\Scenes\intro.Vostok";
		};
	};
};
class CfgSurfaces
{
	class Default;
	class Water;
	class vos_trava: Default
	{
		access = 2;
		files = "vos_trava_*";
		rough = 0.1;
		dust = 0.01;
		soundEnviron = "grass";
		character = "vos_grassClutter";
		soundHit = "soft_ground";
	};
	class vos_lesjeh: Default
	{
		access = 2;
		files = "vos_lesjeh_*";
		rough = 0.1;
		dust = 0.01;
		soundEnviron = "grass";
		character = "vos_HillClutter";
		soundHit = "soft_ground";
	};
	class vos_skala: Default
	{
		access = 2;
		files = "vos_skala_*";
		rough = 0.1;
		dust = 0.01;
		soundEnviron = "rock";
		character = "vos_RockyCoastClutter";
		soundHit = "hard_ground";
	};
	class vos_pisek: Default
	{
		access = 2;
		files = "vos_valouny_*";
		rough = 0.1;
		dust = 0.09;
		soundEnviron = "gravel";
		character = "empty";
		soundHit = "soft_ground";
	};
	class vos_beton: Default
	{
		access = 2;
		files = "vos_beton_*";
		rough = 0.1;
		dust = 0.05;
		soundEnviron = "concrete_ext";
		character = "empty";
		soundHit = "hard_ground";
	};
};
class CfgSurfaceCharacters
{
	class vos_grassClutter
	{
		probability[] = {0.9,0.09,0.01};
		names[] = {"vos_GrassCrookedforest","vos_GrassTall","vos_WeedSedge"};
	};
	class vos_HillClutter
	{
		probability[] = {0.01,0.4,0.5};
		names[] = {"vos_HeatherBrush","vos_GrassCrookedforest","vos_BlueBerry"};
	};
	class vos_BeachClutter
	{
		probability[] = {0.0};
		names[] = {"vos_GrassCrookedforest"};
	};
	class vos_RockyCoastClutter
	{
		probability[] = {0.0};
		names[] = {"vos_GrassCrookedforest"};
	};
};