class CfgPatches
{
	class ascz_fallujah_fix
	{
		units[] = {"fallujah"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fallujah_hou","Utes"};
		fileName = "fallujah1_2.pbo";
		author = "Shezan74";
		mail = "shezan74@pisto.it";
	};
};
class CfgVehicles{};
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
	class Utes: CAWorld{};
	class fallujah: Utes
	{
		access = 3;
		author = "Shezan74";
		worldId = 4;
		cutscenes[] = {"FallujahIntro"};
		description = "Fallujah";
		icon = "";
		worldName = "shez\fallujah\fallujah.wrp";
		pictureMap = "\ascz_fallujah_fix\Data\Fallujah_ca.paa";
		pictureShot = "\ascz_fallujah_fix\Data\ui_fallujah_ca.paa";
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 25;
		latitude = -36;
		class Grid: Grid
		{
			class Zoom1
			{
				zoomMax = 0.0001;
				format = "XY";
				formatX = "0000";
				formatY = "0000";
				stepX = 10;
				stepY = -10;
			};
			class Zoom2
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom3
			{
				zoomMax = 1;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
		};
		startTime = "12:00";
		startDate = "11/01/2010";
		startWeather = 0.0;
		startFog = 0.0;
		forecastWeather = 0.0;
		forecastFog = 0.0;
		centerPosition[] = {8554,1055,20};
		seagullPos[] = {8554,1055,20};
		ilsPosition[] = {8447,1354};
		ilsDirection[] = {0.5,0.08,-0.866};
		ilsTaxiIn[] = {8136,1751,8300,1488,8336,1486,8366,1492};
		ilsTaxiOff[] = {8447,1354,7965,2184,7923,2160,7976,2028,8136,1751};
		drawTaxiway = "true";
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
			earlyMorning[] = {3,{ { 0.65,0.55,0.55 },"6.04+(-4)" },{ { 0.08,0.09,0.11 },"4.5+(-4)" },{ { 0.55,0.47,0.25 },"5.54+(-4)" },{ { 0.1,0.09,0.1 },"5.02+(-4)" },{ { 0.5,0.4,0.4 },"7.05+(-4)" },{ { 0.88,0.51,0.24 },"8.88+(-4)" },1};
			midMorning[] = {8,{ { 0.98,0.85,0.8 },"8.37+(-4)" },{ { 0.08,0.09,0.11 },"6.42+(-4)" },{ { 0.87,0.47,0.25 },"7.87+(-4)" },{ { 0.09,0.09,0.1 },"6.89+(-4)" },{ { 0.5,0.4,0.4 },"8.9+(-4)" },{ { 0.88,0.51,0.24 },"10.88+(-4)" },1};
			morning[] = {16,{ { 1,1,0.9 },"13.17+(-4)" },{ { 0.17,0.18,0.19 },"10.26+(-4)" },{ { 1,1,0.9 },"12.67+(-4)" },{ { 0.17,0.18,0.19 },"11.71+(-4)" },{ { 0.15,0.15,0.15 },"12.42+(-4)" },{ { 0.17,0.17,0.15 },"14.42+(-4)" },1};
			noon[] = {45,{ { 1,1,1 },"17+(-4)" },{ { 1,1.3,1.55 },"13.5+(-4)" },{ { 1,1,1 },"15+(-4)" },{ { 0.36,0.37,0.38 },"13.5+(-4)" },{ { 1,1,1 },"16+(-4)" },{ { 1,1,1 },"17+(-4)" },1};
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
					overcast = 1;
				};
			};
		};
		clutterGrid = 1.0;
		clutterDist = 150;
		noDetailDist = 95;
		fullDetailDist = 55;
		midDetailTexture = "shez\fallujah\data\si_middle_mco.paa";
		minTreesInForestSquare = 5;
		minRocksInRockSquare = 4;
		class Clutter
		{
			class si_GrassTall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassTall.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 0.9;
			};
			class si_StubbleClutter: DefaultClutter
			{
				model = "ca\plants2\clutter\c_stubble.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.5;
			};
			class si_AutumnFlowers: DefaultClutter
			{
				model = "ca\plants2\clutter\c_autumn_flowers.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class si_GrassBunch: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassBunch.p3d";
				affectedByWind = 0.55;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.5;
			};
			class si_GrassCrooked: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrooked.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 2.5;
			};
			class si_GrassCrookedGreen: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrookedGreen.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 2.5;
			};
			class si_GrassCrookedForest: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.4;
			};
			class si_WeedDead: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WeedDead.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.1;
			};
			class si_WeedDeadSmall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WeedDead2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 0.9;
			};
			class si_HeatherBrush: DefaultClutter
			{
				model = "ca\plants2\clutter\c_caluna.p3d";
				affectedByWind = 0.15;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.8;
				surfaceColor[] = {0.53,0.5,0.37,1};
			};
			class si_WeedSedge: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed3.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.85;
			};
			class si_WeedTall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.1;
			};
			class si_BlueBerry: DefaultClutter
			{
				model = "ca\plants2\clutter\c_BlueBerry.p3d";
				affectedByWind = 0.05;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.3;
			};
			class si_RaspBerry: DefaultClutter
			{
				model = "ca\plants2\clutter\c_raspBerry.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class si_FernAutumn: DefaultClutter
			{
				model = "ca\plants2\clutter\c_fern.p3d";
				affectedByWind = 0.1;
				scaleMin = 0.6;
				scaleMax = 1.2;
			};
			class si_FernAutumnTall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_fernTall.p3d";
				affectedByWind = 0.15;
				scaleMin = 0.25;
				scaleMax = 0.5;
			};
			class si_SmallPicea: DefaultClutter
			{
				model = "ca\plants2\clutter\c_picea.p3d";
				affectedByWind = 0.05;
				scaleMin = 0.75;
				scaleMax = 1.25;
			};
			class si_PlantWideLeaf: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WideLeafPlant.p3d";
				affectedByWind = 0.1;
				scaleMin = 1.0;
				scaleMax = 1.0;
			};
			class si_MushroomsHorcak: DefaultClutter
			{
				model = "ca\plants2\clutter\c_MushroomHorcak.p3d";
				affectedByWind = 0;
				scaleMin = 0.85;
				scaleMax = 1.25;
			};
			class si_MushroomsPrasivka: si_MushroomsHorcak
			{
				model = "ca\plants2\clutter\c_MushroomPrasivky.p3d";
			};
			class si_MushroomsBabka: si_MushroomsHorcak
			{
				model = "ca\plants2\clutter\c_MushroomBabka.p3d";
			};
			class si_MushroomsMuchomurka: si_MushroomsHorcak
			{
				model = "ca\plants2\clutter\c_MushroomMuchomurka.p3d";
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
		class Armory{};
		safePositionAnchor[] = {10000.0,10000.0};
		safePositionRadius = 2000;
		class Names
		{
			class Fallujah_text
			{
				name = "Al-Fallujah";
				position[] = {5479.22,5103.31};
				type = "NameCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class Jolan_text
			{
				name = "Jolan";
				position[] = {3314.38,5335.33};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Mualimeen_text
			{
				name = "Mualimeen";
				position[] = {4311.12,6338.87};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Muhandisin_text
			{
				name = "Muhandisin";
				position[] = {4387.96,5428.25};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Shurta_text
			{
				name = "Shurta";
				position[] = {5273.68,6270.66};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Jeghaifi_text
			{
				name = "Jeghaifi";
				position[] = {6014.57,6381.35};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Askari_text
			{
				name = "Askari";
				position[] = {6691.42,5709.56};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Resafa_text
			{
				name = "Resafa";
				position[] = {3866.08,3968.87};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Nazal_text
			{
				name = "Nazal Old City";
				position[] = {4668.68,4416.84};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Industrial_text
			{
				name = "Industrial Park";
				position[] = {5945.92,4683.81};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Sinai_text
			{
				name = "Sinai";
				position[] = {5325.3,3169.46};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Shuhada_text
			{
				name = "Shuhada";
				position[] = {5591.6,2971.24};
				type = "NameCity";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Euphrate_text
			{
				name = "Euphrate River";
				position[] = {2919.81,3540.17};
				type = "NameMarine";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 90.0;
			};
			class Barrage_text
			{
				name = "Fallujah Barrage";
				position[] = {3579.99,749.265};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Dam1_text
			{
				name = "Dam";
				position[] = {3893.95,634.479};
				type = "NameMarine";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Dam2_text
			{
				name = "Dam";
				position[] = {3507.43,627.376};
				type = "NameMarine";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Airport_text
			{
				name = "Airport";
				position[] = {7901.88,1740.11};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class TrainStation_text
			{
				name = "Train Station";
				position[] = {3561.1,6771.74};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class FOB_text
			{
				name = "FOB";
				position[] = {5613.58,9850.35};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Highway_text
			{
				name = "Highway 11";
				position[] = {8937.01,5339.63};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class GasStation_text
			{
				name = "Gas Station";
				position[] = {8300,3393.85};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Old_Bridge_text
			{
				name = "Old Bridge";
				position[] = {2729.41,4815.84};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class New_Bridge_text
			{
				name = "New Bridge";
				position[] = {2861.74,4245.68};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Hospital_text
			{
				name = "Hospital";
				position[] = {2425.13,4912.08};
				type = "ViewPoint";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class Jolan_Park_text
			{
				name = "Park";
				position[] = {3617.48,5231.02};
				type = "VegetationPalm";
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class fal_a1
			{
				name = "";
				position[] = {3063.78,6021.65};
				type = "CityCenter";
				neighbors[] = {"fal_a2","fal_a7","fal_a8"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a2
			{
				name = "";
				position[] = {3891.9,6126.04};
				type = "CityCenter";
				neighbors[] = {"fal_a1","fal_a3","fal_a7","fal_a8","fal_a9"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a3
			{
				name = "";
				position[] = {4575.85,6191.3};
				type = "CityCenter";
				neighbors[] = {"fal_a2","fal_a4","fal_a8","fal_a9","fal_a10"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a4
			{
				name = "";
				position[] = {5367.35,6269.2};
				type = "CityCenter";
				neighbors[] = {"fal_a3","fal_a5","fal_a9","fal_a10","fal_a11"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a5
			{
				name = "";
				position[] = {6129.34,6222.91};
				type = "CityCenter";
				neighbors[] = {"fal_a4","fal_a6","fal_a10","fal_a11","fal_a12"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a6
			{
				name = "";
				position[] = {6854.72,6149.23};
				type = "CityCenter";
				neighbors[] = {"fal_a5","fal_a11","fal_a12"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a7
			{
				name = "";
				position[] = {3292.83,5300.94};
				type = "CityCenter";
				neighbors[] = {"fal_a1","fal_a2","fal_a8","fal_a13","fal_a14"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a8
			{
				name = "";
				position[] = {3956.5,5376.98};
				type = "CityCenter";
				neighbors[] = {"fal_a1","fal_a2","fal_a3","fal_a7","fal_a9","fal_a13","fal_a14","fal_a15"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a9
			{
				name = "";
				position[] = {4650.66,5458.93};
				type = "CityCenter";
				neighbors[] = {"fal_a2","fal_a3","fal_a4","fal_a8","fal_a10","fal_a14","fal_a15","fal_a16"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a10
			{
				name = "";
				position[] = {5327.71,5500.99};
				type = "CityCenter";
				neighbors[] = {"fal_a3","fal_a4","fal_a5","fal_a9","fal_a11","fal_a15","fal_a16","fal_a17"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a11
			{
				name = "";
				position[] = {6043.49,5551.87};
				type = "CityCenter";
				neighbors[] = {"fal_a4","fal_a5","fal_a6","fal_a10","fal_a12","fal_a16","fal_a17"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a12
			{
				name = "";
				position[] = {6758.91,5468.5};
				type = "CityCenter";
				neighbors[] = {"fal_a5","fal_a6","fal_a11","fal_a16","fal_a17"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a13
			{
				name = "";
				position[] = {3500.77,4463.94};
				type = "CityCenter";
				neighbors[] = {"fal_a7","fal_a8","fal_a14","fal_a18"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a14
			{
				name = "";
				position[] = {4224.04,4555.15};
				type = "CityCenter";
				neighbors[] = {"fal_a7","fal_a8","fal_a9","fal_a13","fal_a15","fal_a18","fal_a19"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a15
			{
				name = "";
				position[] = {4875.02,4639.3};
				type = "CityCenter";
				neighbors[] = {"fal_a8","fal_a9","fal_a10","fal_a14","fal_a16","fal_a19","fal_a20"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a16
			{
				name = "";
				position[] = {5610.22,4745.5};
				type = "CityCenter";
				neighbors[] = {"fal_a9","fal_a10","fal_a11","fal_a15","fal_a17","fal_a19","fal_a20"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a17
			{
				name = "";
				position[] = {6256.53,4655.66};
				type = "CityCenter";
				neighbors[] = {"fal_a9","fal_a10","fal_a11","fal_a16","fal_a20"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a18
			{
				name = "";
				position[] = {4077.09,3630.37};
				type = "CityCenter";
				neighbors[] = {"fal_a13","fal_a14","fal_a19","fal_a21","fal_a22"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a19
			{
				name = "";
				position[] = {4804.14,3861.21};
				type = "CityCenter";
				neighbors[] = {"fal_a14","fal_a15","fal_a16","fal_a18","fal_a20","fal_a21","fal_a22","fal_a23"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a20
			{
				name = "";
				position[] = {5634.78,4013.73};
				type = "CityCenter";
				neighbors[] = {"fal_a15","fal_a16","fal_a17","fal_a19","fal_a22","fal_a23"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a21
			{
				name = "";
				position[] = {3755.73,3021.51};
				type = "CityCenter";
				neighbors[] = {"fal_a18","fal_a22"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a22
			{
				name = "";
				position[] = {4693.29,3057.42};
				type = "CityCenter";
				neighbors[] = {"fal_a18","fal_a19","fal_a20","fal_a21","fal_a23","fal_a24"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a23
			{
				name = "";
				position[] = {5659.27,3227.32};
				type = "CityCenter";
				neighbors[] = {"fal_a19","fal_a20","fal_a22","fal_a24"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class fal_a24
			{
				name = "";
				position[] = {5426.05,2598.98};
				type = "CityCenter";
				neighbors[] = {"fal_a22","fal_a23"};
				radiusA = 10.0;
				radiusB = 10.0;
				angle = 0.0;
			};
			class FlatArea1
			{
				name = "";
				position[] = {4766.24,2838.28};
				type = "FlatArea";
				radiusA = 200;
				radiusB = 200;
			};
			class FlatArea2
			{
				name = "";
				position[] = {4481.42,2548.39};
				type = "FlatArea";
				radiusA = 200;
				radiusB = 200;
			};
			class FlatArea3
			{
				name = "";
				position[] = {4230.4,1597.94};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea4
			{
				name = "";
				position[] = {5869.16,411.352};
				type = "FlatArea";
				radiusA = 200;
				radiusB = 200;
			};
			class FlatArea5
			{
				name = "";
				position[] = {6516.22,537.556};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea6
			{
				name = "";
				position[] = {6500.05,877};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea7
			{
				name = "";
				position[] = {8813.97,3277.61};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea8
			{
				name = "";
				position[] = {8578.45,4855.28};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea9
			{
				name = "";
				position[] = {9068.85,7404.07};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea10
			{
				name = "";
				position[] = {9210.81,8330.02};
				type = "FlatArea";
				radiusA = 150;
				radiusB = 150;
			};
			class FlatArea11
			{
				name = "";
				position[] = {6845.92,9139.83};
				type = "FlatArea";
				radiusA = 150;
				radiusB = 150;
			};
			class FlatArea12
			{
				name = "";
				position[] = {8681.69,8820.42};
				type = "FlatArea";
				radiusA = 200;
				radiusB = 200;
			};
			class FlatArea13
			{
				name = "";
				position[] = {5064.99,9514.08};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea14
			{
				name = "";
				position[] = {1667.68,7968.67};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea15
			{
				name = "";
				position[] = {741.731,7562.16};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea16
			{
				name = "";
				position[] = {2119.37,4151.94};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea17
			{
				name = "";
				position[] = {1261.17,1932.24};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea18
			{
				name = "";
				position[] = {325.537,325.536};
				type = "FlatArea";
				radiusA = 100;
				radiusB = 100;
			};
			class FlatArea19
			{
				name = "";
				position[] = {4490.71,848.199};
				type = "FlatArea";
				radiusA = 200;
				radiusB = 200;
			};
			class FlatArea20
			{
				name = "";
				position[] = {3832.54,2016.12};
				type = "FlatArea";
				radiusA = 200;
				radiusB = 200;
			};
			class FlatAreaCity1
			{
				name = "";
				position[] = {3904.93,3837.65};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity2
			{
				name = "";
				position[] = {3767.14,4007.52};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity3
			{
				name = "";
				position[] = {3405.58,4018.04};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity4
			{
				name = "";
				position[] = {3409.53,4614.89};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity5
			{
				name = "";
				position[] = {2969.21,4606.2};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity6
			{
				name = "";
				position[] = {2758.14,5061.54};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity7
			{
				name = "";
				position[] = {2844.3,5734.28};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity8
			{
				name = "";
				position[] = {2926.52,5772.23};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity9
			{
				name = "";
				position[] = {2871.97,5658.39};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity10
			{
				name = "";
				position[] = {2702.01,5862.35};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity11
			{
				name = "";
				position[] = {2525.72,5929.54};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity12
			{
				name = "";
				position[] = {2549.44,6296.35};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity13
			{
				name = "";
				position[] = {1926.5,6602.28};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity14
			{
				name = "";
				position[] = {3159.72,6570.66};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity15
			{
				name = "";
				position[] = {3502.81,6610.19};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity16
			{
				name = "";
				position[] = {3901.24,6667.9};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity17
			{
				name = "";
				position[] = {4200.85,6308.21};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity18
			{
				name = "";
				position[] = {5205.61,6312.16};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity19
			{
				name = "";
				position[] = {5581.91,6009.39};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity20
			{
				name = "";
				position[] = {5512.34,5628.35};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity21
			{
				name = "";
				position[] = {5725.19,5715.69};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity22
			{
				name = "";
				position[] = {6143.18,5470.24};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity23
			{
				name = "";
				position[] = {6665.72,5354.04};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity24
			{
				name = "";
				position[] = {6735.29,5675.78};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity25
			{
				name = "";
				position[] = {6651.49,5643.37};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity26
			{
				name = "";
				position[] = {6858.05,5734.45};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity27
			{
				name = "";
				position[] = {7374.95,5641.3};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity28
			{
				name = "";
				position[] = {6723.43,6202.27};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity29
			{
				name = "";
				position[] = {6668.88,6195.95};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity30
			{
				name = "";
				position[] = {6721.85,6292.39};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity31
			{
				name = "";
				position[] = {6810.39,6378.56};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity32
			{
				name = "";
				position[] = {6626.19,6269.47};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity33
			{
				name = "";
				position[] = {6848.33,6213.34};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity34
			{
				name = "";
				position[] = {6006.42,6519.28};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity35
			{
				name = "";
				position[] = {6238.84,6532.72};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity37
			{
				name = "";
				position[] = {5241.98,6818.89};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity36
			{
				name = "";
				position[] = {6418.29,6724.02};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity38
			{
				name = "";
				position[] = {4222.85,6798.33};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity39
			{
				name = "";
				position[] = {4289.95,6908.47};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity40
			{
				name = "";
				position[] = {3540.76,6925.61};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity41
			{
				name = "";
				position[] = {2530.35,7037.59};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity42
			{
				name = "";
				position[] = {904.021,6367.97};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity43
			{
				name = "";
				position[] = {1661.71,7570.16};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity44
			{
				name = "";
				position[] = {637.314,8196.52};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity45
			{
				name = "";
				position[] = {328.178,8715.79};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity46
			{
				name = "";
				position[] = {4183.4,9695.56};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity47
			{
				name = "";
				position[] = {3044.51,8950.28};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity48
			{
				name = "";
				position[] = {7374.46,6560.11};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity49
			{
				name = "";
				position[] = {7886.58,5371.54};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity50
			{
				name = "";
				position[] = {8085.19,3824.57};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity51
			{
				name = "";
				position[] = {8650.55,3520.46};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity52
			{
				name = "";
				position[] = {6821.8,2418.31};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity53
			{
				name = "";
				position[] = {6015.6,660.989};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity54
			{
				name = "";
				position[] = {9399.61,1093.68};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity55
			{
				name = "";
				position[] = {8805.67,2265.23};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity56
			{
				name = "";
				position[] = {5651.52,1486.43};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatAreaCity57
			{
				name = "";
				position[] = {651.116,2076.64};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatCityArea58
			{
				name = "";
				position[] = {2290.59,2932.45};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatCityArea59
			{
				name = "";
				position[] = {513.4,3352.16};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class FlatCityArea60
			{
				name = "";
				position[] = {493.727,5109.67};
				type = "FlatAreaCity";
				radiusA = 50;
				radiusB = 50;
			};
			class StrongPointArea1
			{
				name = "";
				position[] = {492.002,8370.3};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea2
			{
				name = "";
				position[] = {729.923,8213.15};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea3
			{
				name = "";
				position[] = {255.792,8667.36};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea4
			{
				name = "";
				position[] = {1035.12,7767.71};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea5
			{
				name = "";
				position[] = {1385.74,7471.27};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea6
			{
				name = "";
				position[] = {1712.45,7317.48};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea7
			{
				name = "";
				position[] = {1557.06,7157.31};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea8
			{
				name = "";
				position[] = {1530.77,6534.96};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea9
			{
				name = "";
				position[] = {2058.29,6550.9};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea10
			{
				name = "";
				position[] = {2307.7,6456.87};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea11
			{
				name = "";
				position[] = {2691.79,6491.93};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea12
			{
				name = "";
				position[] = {2545.17,5990.71};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea13
			{
				name = "";
				position[] = {3021.69,5599.45};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea14
			{
				name = "";
				position[] = {2761.91,5681.53};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea15
			{
				name = "";
				position[] = {2727.65,5369.16};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea16
			{
				name = "";
				position[] = {2982.64,5285.49};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea17
			{
				name = "";
				position[] = {3053.56,5252.02};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea18
			{
				name = "";
				position[] = {2771.48,5119.74};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea19
			{
				name = "";
				position[] = {2867.1,4809.76};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea20
			{
				name = "";
				position[] = {2628.84,4777.89};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea21
			{
				name = "";
				position[] = {2677.45,4623.3};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea22
			{
				name = "";
				position[] = {2699.76,4367.51};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea23
			{
				name = "";
				position[] = {2672.67,4241.6};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea24
			{
				name = "";
				position[] = {2691.79,4175.46};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea25
			{
				name = "";
				position[] = {3358.76,4349.18};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea26
			{
				name = "";
				position[] = {3118.91,4071.87};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea27
			{
				name = "";
				position[] = {3350.79,4034.42};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea28
			{
				name = "";
				position[] = {3703,4025.65};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea29
			{
				name = "";
				position[] = {3694.62,4100};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea30
			{
				name = "";
				position[] = {3775.71,3875.12};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea31
			{
				name = "";
				position[] = {4054.82,3879.1};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea32
			{
				name = "";
				position[] = {3977.21,3712.93};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea33
			{
				name = "";
				position[] = {3995.12,3592.53};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea34
			{
				name = "";
				position[] = {4028.12,3376.21};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea35
			{
				name = "";
				position[] = {3948.85,3183.56};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea36
			{
				name = "";
				position[] = {4100.64,2931.57};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea37
			{
				name = "";
				position[] = {4361.21,2985.75};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea38
			{
				name = "";
				position[] = {3793.85,2670.99};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea39
			{
				name = "";
				position[] = {4513.41,2837.54};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea40
			{
				name = "";
				position[] = {4636.13,2949.1};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea41
			{
				name = "";
				position[] = {4710.23,3113.25};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea42
			{
				name = "";
				position[] = {4635.33,2589.71};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea43
			{
				name = "";
				position[] = {4484.72,2304.44};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea44
			{
				name = "";
				position[] = {4989.13,2524.37};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea45
			{
				name = "";
				position[] = {5229.79,2799.29};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea46
			{
				name = "";
				position[] = {5279.99,2562.62};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea47
			{
				name = "";
				position[] = {5850.54,2859.05};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea48
			{
				name = "";
				position[] = {5045.71,3015.24};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea49
			{
				name = "";
				position[] = {5886.4,2510.03};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea50
			{
				name = "";
				position[] = {5741.37,2381.73};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea51
			{
				name = "";
				position[] = {6249.77,2740.32};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea52
			{
				name = "";
				position[] = {5533.93,3317.68};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea53
			{
				name = "";
				position[] = {5388.7,3669.29};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea54
			{
				name = "";
				position[] = {4723.71,3819.61};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea55
			{
				name = "";
				position[] = {4342.81,3340.61};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea56
			{
				name = "";
				position[] = {4616.7,4271.85};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea57
			{
				name = "";
				position[] = {4316.06,4280.77};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea58
			{
				name = "";
				position[] = {4276.57,4837.48};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea59
			{
				name = "";
				position[] = {4735.18,4673.14};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea60
			{
				name = "";
				position[] = {5071.5,4880.79};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea61
			{
				name = "";
				position[] = {5136.46,4218.35};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea62
			{
				name = "";
				position[] = {5378.51,4536.83};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea63
			{
				name = "";
				position[] = {5579.79,4822.19};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea64
			{
				name = "";
				position[] = {5674.06,4589.06};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea65
			{
				name = "";
				position[] = {5575.97,4278.22};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea66
			{
				name = "";
				position[] = {5387.43,4333};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea67
			{
				name = "";
				position[] = {5595.08,4107.52};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea68
			{
				name = "";
				position[] = {5830.75,4066.75};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea69
			{
				name = "";
				position[] = {5973.43,4306.25};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea70
			{
				name = "";
				position[] = {5968.34,4683.33};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea71
			{
				name = "";
				position[] = {5894.45,4893.53};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea72
			{
				name = "";
				position[] = {5848.59,4390.33};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea73
			{
				name = "";
				position[] = {6384.91,4366.12};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea74
			{
				name = "";
				position[] = {6607.85,4670.59};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea75
			{
				name = "";
				position[] = {6270.26,4885.89};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea76
			{
				name = "";
				position[] = {6732.69,4964.87};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea77
			{
				name = "";
				position[] = {5519.92,4545.75};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea78
			{
				name = "";
				position[] = {5569.6,5012};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea79
			{
				name = "";
				position[] = {5248.57,5186.53};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea80
			{
				name = "";
				position[] = {5572.15,5232.39};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea81
			{
				name = "";
				position[] = {4670.21,5371.25};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea82
			{
				name = "";
				position[] = {4309.69,5627.31};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea83
			{
				name = "";
				position[] = {4221.79,5727.95};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea84
			{
				name = "";
				position[] = {4941.55,5659.16};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea85
			{
				name = "";
				position[] = {3711.44,5779.51};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea86
			{
				name = "";
				position[] = {3151.62,5625.12};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea87
			{
				name = "";
				position[] = {3117.96,5746.85};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea88
			{
				name = "";
				position[] = {3009.4,5909.84};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea89
			{
				name = "";
				position[] = {3401.08,6149.3};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea90
			{
				name = "";
				position[] = {3398.09,6252.29};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea91
			{
				name = "";
				position[] = {3565.26,6265.23};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea92
			{
				name = "";
				position[] = {3629.44,6248.31};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea93
			{
				name = "";
				position[] = {3524.96,6460.26};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea94
			{
				name = "";
				position[] = {3617.5,6343.84};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea95
			{
				name = "";
				position[] = {3698.1,6460.26};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea96
			{
				name = "";
				position[] = {2969.72,6118.95};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea97
			{
				name = "";
				position[] = {2775.19,5835.37};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea98
			{
				name = "";
				position[] = {2713,5748.8};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea99
			{
				name = "";
				position[] = {2304.04,5664.22};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea100
			{
				name = "";
				position[] = {1844.73,5374.74};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea101
			{
				name = "";
				position[] = {1272.58,5157.19};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea102
			{
				name = "";
				position[] = {1053.45,4792.23};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea103
			{
				name = "";
				position[] = {593.66,4973.12};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea104
			{
				name = "";
				position[] = {1424.25,3492.21};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea105
			{
				name = "";
				position[] = {766.903,2874.36};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea106
			{
				name = "";
				position[] = {1323.61,2204.27};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea107
			{
				name = "";
				position[] = {589.827,2218.29};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea108
			{
				name = "";
				position[] = {1439.54,1213.16};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea109
			{
				name = "";
				position[] = {1101.94,755.821};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea110
			{
				name = "";
				position[] = {2089.24,656.455};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea111
			{
				name = "";
				position[] = {2275.23,1261.57};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea112
			{
				name = "";
				position[] = {1729.99,169.815};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea113
			{
				name = "";
				position[] = {3627.3,646.972};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea114
			{
				name = "";
				position[] = {3362.75,620.676};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea115
			{
				name = "";
				position[] = {4041.67,654.144};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea116
			{
				name = "";
				position[] = {5941.59,810.599};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea117
			{
				name = "";
				position[] = {6365.8,690.851};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea118
			{
				name = "";
				position[] = {6740.34,302.303};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea119
			{
				name = "";
				position[] = {7458.83,1028.44};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea120
			{
				name = "";
				position[] = {8265.22,1033.54};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea121
			{
				name = "";
				position[] = {7322.52,1781.33};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea122
			{
				name = "";
				position[] = {6712.31,2173.7};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea123
			{
				name = "";
				position[] = {6331.41,1256.47};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea124
			{
				name = "";
				position[] = {9309.09,1186.24};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea125
			{
				name = "";
				position[] = {10143.9,1633.23};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea126
			{
				name = "";
				position[] = {9588.71,3217.06};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea127
			{
				name = "";
				position[] = {8287.33,3608.9};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea128
			{
				name = "";
				position[] = {8384.55,3236.76};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea129
			{
				name = "";
				position[] = {6044.77,3451.45};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea130
			{
				name = "";
				position[] = {5996.51,3835.49};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea131
			{
				name = "";
				position[] = {7102.75,4880.49};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea132
			{
				name = "";
				position[] = {7078.25,5284.61};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea133
			{
				name = "";
				position[] = {6657.81,5253.99};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea134
			{
				name = "";
				position[] = {6227.15,5188.68};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea135
			{
				name = "";
				position[] = {8325.32,5390.74};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea136
			{
				name = "";
				position[] = {8735.56,5253.99};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea137
			{
				name = "";
				position[] = {8721.28,6723.53};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea138
			{
				name = "";
				position[] = {7978.34,6807.21};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea139
			{
				name = "";
				position[] = {8968.24,7527.69};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea140
			{
				name = "";
				position[] = {9160.09,8846.19};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea141
			{
				name = "";
				position[] = {9200.92,9342.16};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea142
			{
				name = "";
				position[] = {7398.69,9968.75};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea143
			{
				name = "";
				position[] = {6649.64,9685.05};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea144
			{
				name = "";
				position[] = {5398.5,9229.9};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class StrongPointArea145
			{
				name = "";
				position[] = {3751.39,9605.45};
				type = "StrongPointArea";
				radiusA = 20;
				radiusB = 20;
			};
			class FlatAreaCitySmall1
			{
				name = "";
				position[] = {2648.27,6363.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall2
			{
				name = "";
				position[] = {2595.56,6069.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall3
			{
				name = "";
				position[] = {2910.99,6102.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall4
			{
				name = "";
				position[] = {2677.65,5945.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall5
			{
				name = "";
				position[] = {2778.65,5867.73};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall6
			{
				name = "";
				position[] = {2829.4,5647.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall7
			{
				name = "";
				position[] = {3045.32,5655.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall8
			{
				name = "";
				position[] = {2899.55,5474.69};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall9
			{
				name = "";
				position[] = {2899.55,5323.94};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall10
			{
				name = "";
				position[] = {2912.48,5290.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall11
			{
				name = "";
				position[] = {3007.51,5206.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall12
			{
				name = "";
				position[] = {2768.7,5166.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall13
			{
				name = "";
				position[] = {2802.53,5006.51};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall14
			{
				name = "";
				position[] = {2854.77,4933.38};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall15
			{
				name = "";
				position[] = {2998.56,4955.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall16
			{
				name = "";
				position[] = {2909,5113.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall17
			{
				name = "";
				position[] = {3216.97,4977.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall18
			{
				name = "";
				position[] = {2919.45,4695.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall19
			{
				name = "";
				position[] = {2944.82,4629.39};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall20
			{
				name = "";
				position[] = {3091.59,4575.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall21
			{
				name = "";
				position[] = {3052.79,4794.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall22
			{
				name = "";
				position[] = {3097.07,4670.69};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall23
			{
				name = "";
				position[] = {3155.28,4495.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall24
			{
				name = "";
				position[] = {3045.82,4374.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall25
			{
				name = "";
				position[] = {3253.29,4208.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall26
			{
				name = "";
				position[] = {3412.5,4306};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall27
			{
				name = "";
				position[] = {3392.1,4431.87};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall28
			{
				name = "";
				position[] = {3322.94,4155.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall29
			{
				name = "";
				position[] = {3186.12,4065.7};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall30
			{
				name = "";
				position[] = {3121.44,4173.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall31
			{
				name = "";
				position[] = {3415.98,4174.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall32
			{
				name = "";
				position[] = {3442.35,4079.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall33
			{
				name = "";
				position[] = {3632.4,4064.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall34
			{
				name = "";
				position[] = {3628.42,4197.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall35
			{
				name = "";
				position[] = {3630.91,4332.87};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall36
			{
				name = "";
				position[] = {3598.07,4247.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall37
			{
				name = "";
				position[] = {3535.88,4357.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall38
			{
				name = "";
				position[] = {3498.57,4208.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall39
			{
				name = "";
				position[] = {3744.34,4178.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall40
			{
				name = "";
				position[] = {3863.75,4296.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall41
			{
				name = "";
				position[] = {3824.45,4395.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall42
			{
				name = "";
				position[] = {3958.78,4266.7};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall43
			{
				name = "";
				position[] = {3998.08,4263.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall44
			{
				name = "";
				position[] = {4079.18,4289.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall45
			{
				name = "";
				position[] = {3987.14,4142.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall46
			{
				name = "";
				position[] = {4102.06,4128.38};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall47
			{
				name = "";
				position[] = {3883.65,4086.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall48
			{
				name = "";
				position[] = {3700.07,4297.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall49
			{
				name = "";
				position[] = {4140.38,4290.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall50
			{
				name = "";
				position[] = {4164.26,4163.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall51
			{
				name = "";
				position[] = {4227.44,4144.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall52
			{
				name = "";
				position[] = {4193.61,4319.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall53
			{
				name = "";
				position[] = {4159.28,4456.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall54
			{
				name = "";
				position[] = {4145.85,4522.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall55
			{
				name = "";
				position[] = {3979.67,4543.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall56
			{
				name = "";
				position[] = {3998.08,4373.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall57
			{
				name = "";
				position[] = {4337.39,4399.54};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall58
			{
				name = "";
				position[] = {4367.74,4499.54};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall59
			{
				name = "";
				position[] = {4387.64,4444.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall60
			{
				name = "";
				position[] = {4407.54,4343.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall61
			{
				name = "";
				position[] = {4241.37,4492.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall62
			{
				name = "";
				position[] = {4272.72,4551.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall63
			{
				name = "";
				position[] = {4212.02,4533.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall64
			{
				name = "";
				position[] = {4448.34,4481.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall65
			{
				name = "";
				position[] = {4477.2,4420.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall66
			{
				name = "";
				position[] = {4565.76,4404.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall67
			{
				name = "";
				position[] = {4291.62,4285.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall68
			{
				name = "";
				position[] = {4582.67,4265.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall69
			{
				name = "";
				position[] = {4634.42,4171.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall70
			{
				name = "";
				position[] = {4733.42,4244.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall71
			{
				name = "";
				position[] = {4722.98,4375.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall72
			{
				name = "";
				position[] = {4625.46,4365.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall73
			{
				name = "";
				position[] = {4714.52,4527.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall74
			{
				name = "";
				position[] = {4847.36,4278.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall75
			{
				name = "";
				position[] = {4816.51,4122.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall76
			{
				name = "";
				position[] = {4732.93,4105.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall77
			{
				name = "";
				position[] = {4625.96,4211.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall78
			{
				name = "";
				position[] = {5098.61,4208.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall79
			{
				name = "";
				position[] = {4993.13,4193.56};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall80
			{
				name = "";
				position[] = {4992.63,4310.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall81
			{
				name = "";
				position[] = {4812.03,4338.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall82
			{
				name = "";
				position[] = {5092.14,4372.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall83
			{
				name = "";
				position[] = {5039.9,4361.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall84
			{
				name = "";
				position[] = {5232.94,4268.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall85
			{
				name = "";
				position[] = {5129.45,4036.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall86
			{
				name = "";
				position[] = {5513.54,4136.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall87
			{
				name = "";
				position[] = {5219.01,4084.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall88
			{
				name = "";
				position[] = {5291.65,4004.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall89
			{
				name = "";
				position[] = {5135.42,3999.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall90
			{
				name = "";
				position[] = {5096.62,3964.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall91
			{
				name = "";
				position[] = {5042.88,3911.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall92
			{
				name = "";
				position[] = {4941.89,3946.79};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall93
			{
				name = "";
				position[] = {5141.39,3883.1};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall94
			{
				name = "";
				position[] = {5268.26,3819.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall95
			{
				name = "";
				position[] = {5366.77,3904.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall97
			{
				name = "";
				position[] = {5132.44,3720.91};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall98
			{
				name = "";
				position[] = {5011.54,3751.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall99
			{
				name = "";
				position[] = {4862.78,3697.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1000
			{
				name = "";
				position[] = {4712.53,3574.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall101
			{
				name = "";
				position[] = {4658.3,3730.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall102
			{
				name = "";
				position[] = {4689.64,3843.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall103
			{
				name = "";
				position[] = {4724.97,3769.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall104
			{
				name = "";
				position[] = {4774.72,3890.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall105
			{
				name = "";
				position[] = {4945.37,3897.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall106
			{
				name = "";
				position[] = {4543.37,3817.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall107
			{
				name = "";
				position[] = {4453.81,3682.1};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall108
			{
				name = "";
				position[] = {4404.56,3611.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall109
			{
				name = "";
				position[] = {4343.86,3534.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall110
			{
				name = "";
				position[] = {4290.63,3559.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall112
			{
				name = "";
				position[] = {4298.09,3616.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall111
			{
				name = "";
				position[] = {4263.26,3592.05};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall113
			{
				name = "";
				position[] = {4139.88,3675.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall114
			{
				name = "";
				position[] = {4188.14,3606.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall115
			{
				name = "";
				position[] = {4138.88,3517.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall116
			{
				name = "";
				position[] = {3918.48,3374.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall117
			{
				name = "";
				position[] = {3862.76,3396.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall118
			{
				name = "";
				position[] = {3768.72,3421.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall119
			{
				name = "";
				position[] = {3796.09,3506.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall120
			{
				name = "";
				position[] = {3695.59,3573.15};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall121
			{
				name = "";
				position[] = {3607.53,3439.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall122
			{
				name = "";
				position[] = {3614.99,3568.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall123
			{
				name = "";
				position[] = {3813.5,3600.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall124
			{
				name = "";
				position[] = {4016.75,3438.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall125
			{
				name = "";
				position[] = {4266.17,3831.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall126
			{
				name = "";
				position[] = {4011.97,3903.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall127
			{
				name = "";
				position[] = {3937.06,3931.05};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall128
			{
				name = "";
				position[] = {4092.45,4051.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall129
			{
				name = "";
				position[] = {4022.33,4009.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall130
			{
				name = "";
				position[] = {3794.42,3971.69};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall131
			{
				name = "";
				position[] = {4433.5,4009.94};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall132
			{
				name = "";
				position[] = {4304.41,4025.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall133
			{
				name = "";
				position[] = {4168.15,4049.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall134
			{
				name = "";
				position[] = {4070.93,3842.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall135
			{
				name = "";
				position[] = {4517.18,3974.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall136
			{
				name = "";
				position[] = {4667.78,4102.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall137
			{
				name = "";
				position[] = {4455.02,4301.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall138
			{
				name = "";
				position[] = {4853.45,4021.09};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall139
			{
				name = "";
				position[] = {4773.76,3930.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall140
			{
				name = "";
				position[] = {5201.68,4505.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall141
			{
				name = "";
				position[] = {5121.2,4556.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall142
			{
				name = "";
				position[] = {5090.91,4641.05};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall143
			{
				name = "";
				position[] = {4984.14,4410.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall144
			{
				name = "";
				position[] = {5072.59,4501.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall145
			{
				name = "";
				position[] = {4866.2,4478.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall146
			{
				name = "";
				position[] = {4861.42,4642.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall147
			{
				name = "";
				position[] = {5351.49,4543.83};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall148
			{
				name = "";
				position[] = {5595.33,4514.35};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall149
			{
				name = "";
				position[] = {5639.95,4592.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall150
			{
				name = "";
				position[] = {5759.48,4567.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall151
			{
				name = "";
				position[] = {5377.78,4639.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall152
			{
				name = "";
				position[] = {5543.53,4739.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall153
			{
				name = "";
				position[] = {5489.34,4903.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall154
			{
				name = "";
				position[] = {5314.04,4889.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall155
			{
				name = "";
				position[] = {5041.51,4836.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall156
			{
				name = "";
				position[] = {4975.37,4643.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall157
			{
				name = "";
				position[] = {5694.93,4762.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall158
			{
				name = "";
				position[] = {5829.6,4647.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall159
			{
				name = "";
				position[] = {5882.2,4511.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall160
			{
				name = "";
				position[] = {5812.07,4377.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall161
			{
				name = "";
				position[] = {6081.41,4317.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall162
			{
				name = "";
				position[] = {5684.57,4359.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall163
			{
				name = "";
				position[] = {5742.75,4204.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall164
			{
				name = "";
				position[] = {5571.42,4252.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall165
			{
				name = "";
				position[] = {5630.39,4043.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall166
			{
				name = "";
				position[] = {5400.89,4121.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall167
			{
				name = "";
				position[] = {5486.16,4294.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall168
			{
				name = "";
				position[] = {5922.04,4112.73};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall169
			{
				name = "";
				position[] = {5943.55,4303.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall170
			{
				name = "";
				position[] = {6061.49,4199.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall171
			{
				name = "";
				position[] = {6254.33,4502.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall172
			{
				name = "";
				position[] = {6059.89,4492.83};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall173
			{
				name = "";
				position[] = {6364.29,4578.1};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall174
			{
				name = "";
				position[] = {6287,4674.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall175
			{
				name = "";
				position[] = {6130.02,4757.39};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall176
			{
				name = "";
				position[] = {5986.58,4715.95};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall177
			{
				name = "";
				position[] = {6530.84,4719.94};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall178
			{
				name = "";
				position[] = {6443.18,4623.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall179
			{
				name = "";
				position[] = {6574.67,4619.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall180
			{
				name = "";
				position[] = {6255.13,4599.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall181
			{
				name = "";
				position[] = {6660.73,4786.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall182
			{
				name = "";
				position[] = {6805.75,4850.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall183
			{
				name = "";
				position[] = {6796.19,4952.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall184
			{
				name = "";
				position[] = {6576.26,4996.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall185
			{
				name = "";
				position[] = {6090.18,4796.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall186
			{
				name = "";
				position[] = {6012.08,4894.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall187
			{
				name = "";
				position[] = {5861.48,4944.65};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall188
			{
				name = "";
				position[] = {6051.13,5008.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall189
			{
				name = "";
				position[] = {6218.47,5111.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall190
			{
				name = "";
				position[] = {6357.12,5162.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall191
			{
				name = "";
				position[] = {6462.31,5068.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall192
			{
				name = "";
				position[] = {5795.34,5157.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall193
			{
				name = "";
				position[] = {5616.04,5130.32};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall194
			{
				name = "";
				position[] = {5435.16,5109.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall195
			{
				name = "";
				position[] = {5345.11,5007.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall196
			{
				name = "";
				position[] = {5307.66,5080.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall197
			{
				name = "";
				position[] = {5451.09,4996.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall198
			{
				name = "";
				position[] = {5171.4,4900.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall199
			{
				name = "";
				position[] = {5259.05,4892.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall200
			{
				name = "";
				position[] = {4887.71,5037.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall201
			{
				name = "";
				position[] = {4544.27,4965.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall202
			{
				name = "";
				position[] = {4524.35,4775.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall203
			{
				name = "";
				position[] = {4714,4996.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall204
			{
				name = "";
				position[] = {4743.48,4722.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall205
			{
				name = "";
				position[] = {4956.25,4790.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall206
			{
				name = "";
				position[] = {4474.94,4637.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall207
			{
				name = "";
				position[] = {4305.21,4732.69};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall208
			{
				name = "";
				position[] = {4455.02,4776.51};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall209
			{
				name = "";
				position[] = {4153.81,4739.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall210
			{
				name = "";
				position[] = {3942.64,4613.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall211
			{
				name = "";
				position[] = {3850.32,4645.81};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall212
			{
				name = "";
				position[] = {3958.28,4716.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall213
			{
				name = "";
				position[] = {4033.41,4780.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall214
			{
				name = "";
				position[] = {3921.96,4761.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall215
			{
				name = "";
				position[] = {3775.69,4777.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall216
			{
				name = "";
				position[] = {3712.01,4796.56};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall217
			{
				name = "";
				position[] = {3723.95,4705.51};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall218
			{
				name = "";
				position[] = {3845.34,4722.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall219
			{
				name = "";
				position[] = {3721.46,4727.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall220
			{
				name = "";
				position[] = {3648.32,4708};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall221
			{
				name = "";
				position[] = {3521.45,4697.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall222
			{
				name = "";
				position[] = {3508.02,4783.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall223
			{
				name = "";
				position[] = {3593.59,4787.11};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall224
			{
				name = "";
				position[] = {3442.84,4773.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall225
			{
				name = "";
				position[] = {3358.76,4772.68};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall226
			{
				name = "";
				position[] = {3412.99,4740.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall227
			{
				name = "";
				position[] = {3295.58,4672.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall228
			{
				name = "";
				position[] = {3327.92,4621.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall229
			{
				name = "";
				position[] = {3345.83,4579.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall230
			{
				name = "";
				position[] = {3355.78,4521.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall231
			{
				name = "";
				position[] = {3344.33,4487.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall232
			{
				name = "";
				position[] = {3413.49,4548.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall233
			{
				name = "";
				position[] = {3435.38,4671.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall234
			{
				name = "";
				position[] = {3639.86,4586.11};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall235
			{
				name = "";
				position[] = {3580.66,4522.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall236
			{
				name = "";
				position[] = {3682.65,4553.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall237
			{
				name = "";
				position[] = {3537.37,4587.1};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall238
			{
				name = "";
				position[] = {3757.28,4605.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall239
			{
				name = "";
				position[] = {3754.79,4573.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall240
			{
				name = "";
				position[] = {3754.3,4664.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall241
			{
				name = "";
				position[] = {3893.1,4690.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall242
			{
				name = "";
				position[] = {3540.86,4472.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall243
			{
				name = "";
				position[] = {3484.64,4461.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall244
			{
				name = "";
				position[] = {3454.29,4483.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall245
			{
				name = "";
				position[] = {3377.17,4455.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall246
			{
				name = "";
				position[] = {3310.5,4744.32};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall247
			{
				name = "";
				position[] = {3247.82,4663.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall248
			{
				name = "";
				position[] = {3177.66,4655.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall249
			{
				name = "";
				position[] = {3226.92,4485.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall250
			{
				name = "";
				position[] = {3204.53,4427.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall251
			{
				name = "";
				position[] = {3061.74,4600.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall252
			{
				name = "";
				position[] = {3038.36,4701.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall253
			{
				name = "";
				position[] = {3024.43,4537.85};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall254
			{
				name = "";
				position[] = {3068.71,4736.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall255
			{
				name = "";
				position[] = {3155.28,4407};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall256
			{
				name = "";
				position[] = {3148.81,4802.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall257
			{
				name = "";
				position[] = {3180.15,4836.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall258
			{
				name = "";
				position[] = {3214.48,4794.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall259
			{
				name = "";
				position[] = {2914.47,4886.11};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall260
			{
				name = "";
				position[] = {3024.43,4903.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall261
			{
				name = "";
				position[] = {2970.2,4992.09};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall262
			{
				name = "";
				position[] = {3121.94,4931.39};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall263
			{
				name = "";
				position[] = {3209.51,5045.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall264
			{
				name = "";
				position[] = {3244.33,5048.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall265
			{
				name = "";
				position[] = {3302.54,5098.56};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall266
			{
				name = "";
				position[] = {3300.55,4951.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall267
			{
				name = "";
				position[] = {3343.84,4985.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall268
			{
				name = "";
				position[] = {3372.69,5044.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall269
			{
				name = "";
				position[] = {3395.58,5098.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall270
			{
				name = "";
				position[] = {3415.48,4983.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall271
			{
				name = "";
				position[] = {3406.53,4862.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall272
			{
				name = "";
				position[] = {3327.92,4810.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall273
			{
				name = "";
				position[] = {3494.09,4958.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall274
			{
				name = "";
				position[] = {3550.81,5024.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall275
			{
				name = "";
				position[] = {3607.03,4987.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall276
			{
				name = "";
				position[] = {3693.6,5094.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall277
			{
				name = "";
				position[] = {3689.62,4973.68};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall278
			{
				name = "";
				position[] = {3529.91,4857.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall279
			{
				name = "";
				position[] = {3644.84,4872.68};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall280
			{
				name = "";
				position[] = {3723.95,4881.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall281
			{
				name = "";
				position[] = {3513.99,5177.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall282
			{
				name = "";
				position[] = {3467.22,5166.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall283
			{
				name = "";
				position[] = {3852.81,5096.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall284
			{
				name = "";
				position[] = {3911.02,4994.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall285
			{
				name = "";
				position[] = {3976.19,4952.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall286
			{
				name = "";
				position[] = {4013.01,4996.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall287
			{
				name = "";
				position[] = {4058.78,5057.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall288
			{
				name = "";
				position[] = {3918.98,4908.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall289
			{
				name = "";
				position[] = {4013.51,4909.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall290
			{
				name = "";
				position[] = {4116.49,4921.94};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall291
			{
				name = "";
				position[] = {4130.42,4968.7};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall292
			{
				name = "";
				position[] = {4115.5,4869.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall293
			{
				name = "";
				position[] = {4081.67,4799.05};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall294
			{
				name = "";
				position[] = {4175.2,4953.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall295
			{
				name = "";
				position[] = {4117.49,5031.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall296
			{
				name = "";
				position[] = {4164.75,5057.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall297
			{
				name = "";
				position[] = {4214.5,5046.81};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall298
			{
				name = "";
				position[] = {4260.77,5041.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall299
			{
				name = "";
				position[] = {4334.41,5048.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall300
			{
				name = "";
				position[] = {4369.24,5085.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall301
			{
				name = "";
				position[] = {4296.6,4969.7};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall302
			{
				name = "";
				position[] = {4396.1,4994.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall303
			{
				name = "";
				position[] = {4102.06,5173.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall304
			{
				name = "";
				position[] = {3959.28,5143.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall305
			{
				name = "";
				position[] = {4190.62,5113.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall306
			{
				name = "";
				position[] = {4299.08,5157.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall307
			{
				name = "";
				position[] = {4350.33,5199.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall308
			{
				name = "";
				position[] = {4389.14,5138.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall309
			{
				name = "";
				position[] = {4473.22,5220.95};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall310
			{
				name = "";
				position[] = {4469.74,5094.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall311
			{
				name = "";
				position[] = {4564.27,5068.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall312
			{
				name = "";
				position[] = {4628.94,5093.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall313
			{
				name = "";
				position[] = {4682.68,5138.36};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall314
			{
				name = "";
				position[] = {4669.74,5238.36};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall315
			{
				name = "";
				position[] = {4757.8,5212.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall316
			{
				name = "";
				position[] = {4756.81,5269.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall317
			{
				name = "";
				position[] = {4824.47,5315.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall318
			{
				name = "";
				position[] = {4944.37,5218.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall319
			{
				name = "";
				position[] = {4819,5254.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall320
			{
				name = "";
				position[] = {4890.64,5368.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall321
			{
				name = "";
				position[] = {4813.03,5381.15};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall322
			{
				name = "";
				position[] = {4741.38,5324.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall323
			{
				name = "";
				position[] = {4811.53,5133.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall324
			{
				name = "";
				position[] = {4948.85,5142.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall325
			{
				name = "";
				position[] = {5025.47,5180.15};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall326
			{
				name = "";
				position[] = {5032.44,5050.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall327
			{
				name = "";
				position[] = {5026.46,4988.11};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall328
			{
				name = "";
				position[] = {5027.96,4919.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall329
			{
				name = "";
				position[] = {5113.03,4954.27};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall330
			{
				name = "";
				position[] = {5172.24,5046.81};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall331
			{
				name = "";
				position[] = {5232.44,5081.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall332
			{
				name = "";
				position[] = {5144.88,4981.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall333
			{
				name = "";
				position[] = {5113.03,5098.56};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall334
			{
				name = "";
				position[] = {5013.03,5276.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall335
			{
				name = "";
				position[] = {5147.36,5305.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall336
			{
				name = "";
				position[] = {5231.94,5296.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall337
			{
				name = "";
				position[] = {5297.12,5325.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall338
			{
				name = "";
				position[] = {5400.11,5320.95};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall339
			{
				name = "";
				position[] = {5477.72,5202.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall340
			{
				name = "";
				position[] = {5494.64,5271.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall341
			{
				name = "";
				position[] = {5455.83,5375.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall342
			{
				name = "";
				position[] = {5473.74,5425.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall343
			{
				name = "";
				position[] = {5384.68,5494.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall344
			{
				name = "";
				position[] = {5305.58,5485.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall345
			{
				name = "";
				position[] = {5205.57,5387.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall346
			{
				name = "";
				position[] = {5160.3,5386.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall347
			{
				name = "";
				position[] = {5194.63,5487.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall348
			{
				name = "";
				position[] = {5588.17,5396.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall349
			{
				name = "";
				position[] = {5785.69,5260.75};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall350
			{
				name = "";
				position[] = {5930.47,5272.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall351
			{
				name = "";
				position[] = {5827.48,5312.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall352
			{
				name = "";
				position[] = {5755.34,5343.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall353
			{
				name = "";
				position[] = {5907.58,5360.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall354
			{
				name = "";
				position[] = {6010.57,5300.05};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall355
			{
				name = "";
				position[] = {6143.91,5311.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall356
			{
				name = "";
				position[] = {6234.45,5313.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall357
			{
				name = "";
				position[] = {6262.81,5376.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall358
			{
				name = "";
				position[] = {6139.43,5370.7};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall359
			{
				name = "";
				position[] = {6001.12,5348.81};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall360
			{
				name = "";
				position[] = {6356.85,5388.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall361
			{
				name = "";
				position[] = {6440.93,5329.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall362
			{
				name = "";
				position[] = {6530.98,5333.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall363
			{
				name = "";
				position[] = {6442.92,5376.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall364
			{
				name = "";
				position[] = {6503.12,5450.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall365
			{
				name = "";
				position[] = {6407.1,5473.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall366
			{
				name = "";
				position[] = {6497.65,5551.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall367
			{
				name = "";
				position[] = {6417.54,5611.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall368
			{
				name = "";
				position[] = {6271.27,5505.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall369
			{
				name = "";
				position[] = {6221.02,5455.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall370
			{
				name = "";
				position[] = {6190.67,5496.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall371
			{
				name = "";
				position[] = {6123.51,5517.47};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall372
			{
				name = "";
				position[] = {6084.7,5480.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall373
			{
				name = "";
				position[] = {6350.88,5446.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall374
			{
				name = "";
				position[] = {6445.9,5559.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall375
			{
				name = "";
				position[] = {6330.97,5577.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall376
			{
				name = "";
				position[] = {6249.38,5579.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall377
			{
				name = "";
				position[] = {6655.86,5580.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall378
			{
				name = "";
				position[] = {6749.89,5567.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall379
			{
				name = "";
				position[] = {6479.73,5648.32};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall380
			{
				name = "";
				position[] = {6546.4,5605.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall381
			{
				name = "";
				position[] = {6800.64,5532.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall382
			{
				name = "";
				position[] = {6686.21,5474.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall383
			{
				name = "";
				position[] = {6894.17,5500.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall384
			{
				name = "";
				position[] = {6847.4,5455.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall385
			{
				name = "";
				position[] = {6861.83,5598.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall386
			{
				name = "";
				position[] = {6869.79,5658.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall387
			{
				name = "";
				position[] = {6955.87,5440.36};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall388
			{
				name = "";
				position[] = {7001.64,5516.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall389
			{
				name = "";
				position[] = {6981.74,5554.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall400
			{
				name = "";
				position[] = {7084.23,5562.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall401
			{
				name = "";
				position[] = {7122.04,5499.56};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall403
			{
				name = "";
				position[] = {7130.99,5586.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall404
			{
				name = "";
				position[] = {7196.17,5552.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall405
			{
				name = "";
				position[] = {7070.79,5134.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall406
			{
				name = "";
				position[] = {7108.11,5411};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall407
			{
				name = "";
				position[] = {7271.79,5698.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall408
			{
				name = "";
				position[] = {7434.98,5841.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall409
			{
				name = "";
				position[] = {7466.82,5526.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall410
			{
				name = "";
				position[] = {7022.53,5764.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall411
			{
				name = "";
				position[] = {7102.64,5726.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall412
			{
				name = "";
				position[] = {7140.94,5739.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall413
			{
				name = "";
				position[] = {7107.11,5666.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall414
			{
				name = "";
				position[] = {7179.75,5678.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall415
			{
				name = "";
				position[] = {6955.37,5748.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall416
			{
				name = "";
				position[] = {6775.26,5726.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall417
			{
				name = "";
				position[] = {6608.1,5664.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall418
			{
				name = "";
				position[] = {6532.47,5715.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall419
			{
				name = "";
				position[] = {6360.33,5667.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall420
			{
				name = "";
				position[] = {6179.23,5616.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall421
			{
				name = "";
				position[] = {6289.18,5709.02};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall422
			{
				name = "";
				position[] = {6416.55,5770.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall423
			{
				name = "";
				position[] = {6345.4,5778.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall424
			{
				name = "";
				position[] = {6406.1,5833.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall425
			{
				name = "";
				position[] = {6464.31,5859.27};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall426
			{
				name = "";
				position[] = {6508.09,5826.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall427
			{
				name = "";
				position[] = {6594.17,5813};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall428
			{
				name = "";
				position[] = {6669.79,5829.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall429
			{
				name = "";
				position[] = {6662.33,5877.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall430
			{
				name = "";
				position[] = {6569.79,5906.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall431
			{
				name = "";
				position[] = {6744.92,5888.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall432
			{
				name = "";
				position[] = {6796.16,5856.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall433
			{
				name = "";
				position[] = {6877.26,5907.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall434
			{
				name = "";
				position[] = {6907.61,5820.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall435
			{
				name = "";
				position[] = {6979.25,5861.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall436
			{
				name = "";
				position[] = {7075.27,5856.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall437
			{
				name = "";
				position[] = {7124.53,5890.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall438
			{
				name = "";
				position[] = {7023.03,5923.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall439
			{
				name = "";
				position[] = {7107.61,5930.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall440
			{
				name = "";
				position[] = {7242.44,5974.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall441
			{
				name = "";
				position[] = {7045.42,5986.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall442
			{
				name = "";
				position[] = {6899.15,5978.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall443
			{
				name = "";
				position[] = {6802.63,5910.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall444
			{
				name = "";
				position[] = {6745.91,5947.83};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall445
			{
				name = "";
				position[] = {6751.88,5969.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall446
			{
				name = "";
				position[] = {6713.07,6028.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall447
			{
				name = "";
				position[] = {6644.91,6047.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall448
			{
				name = "";
				position[] = {6851.39,6060.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall449
			{
				name = "";
				position[] = {6896.16,6120.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall450
			{
				name = "";
				position[] = {7114.08,6059.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall451
			{
				name = "";
				position[] = {7067.81,6112.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall452
			{
				name = "";
				position[] = {7000.14,6109.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall453
			{
				name = "";
				position[] = {6997.66,6185.15};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall454
			{
				name = "";
				position[] = {7128.51,6207.54};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall455
			{
				name = "";
				position[] = {7049.9,6222.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall456
			{
				name = "";
				position[] = {7011.09,6257.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall457
			{
				name = "";
				position[] = {6813.57,6197.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall458
			{
				name = "";
				position[] = {6958.85,6313.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall459
			{
				name = "";
				position[] = {7005.12,6363.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall460
			{
				name = "";
				position[] = {6950.89,6412.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall461
			{
				name = "";
				position[] = {7107.11,6347.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall462
			{
				name = "";
				position[] = {7074.28,6464.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall463
			{
				name = "";
				position[] = {7052.88,6524.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall464
			{
				name = "";
				position[] = {6988.7,6546.35};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall465
			{
				name = "";
				position[] = {7005.12,6484.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall466
			{
				name = "";
				position[] = {6922.53,6478.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall467
			{
				name = "";
				position[] = {6916.06,6525.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall469
			{
				name = "";
				position[] = {6859.84,6549.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall470
			{
				name = "";
				position[] = {6815.56,6521.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall471
			{
				name = "";
				position[] = {6742.43,6472.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall472
			{
				name = "";
				position[] = {6650.88,6450.83};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall473
			{
				name = "";
				position[] = {6604.61,6497.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall474
			{
				name = "";
				position[] = {6625.51,6406.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall475
			{
				name = "";
				position[] = {6708.6,6104.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall476
			{
				name = "";
				position[] = {6664.81,6081.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall477
			{
				name = "";
				position[] = {6622.03,6141.87};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall478
			{
				name = "";
				position[] = {6741.93,6154.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall479
			{
				name = "";
				position[] = {6526.5,6302.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall480
			{
				name = "";
				position[] = {6539.93,6179.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall481
			{
				name = "";
				position[] = {6458.84,6179.68};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall482
			{
				name = "";
				position[] = {6439.44,6254.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall483
			{
				name = "";
				position[] = {6547.9,6111.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall484
			{
				name = "";
				position[] = {6562.82,6015.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall485
			{
				name = "";
				position[] = {6485.7,5983.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall486
			{
				name = "";
				position[] = {6463.32,6083.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall487
			{
				name = "";
				position[] = {6405.11,6306.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall488
			{
				name = "";
				position[] = {6335.45,6288.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall489
			{
				name = "";
				position[] = {6304.61,6232.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall490
			{
				name = "";
				position[] = {6297.64,6147.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall491
			{
				name = "";
				position[] = {6433.46,5963.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall492
			{
				name = "";
				position[] = {6452.37,5907.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall493
			{
				name = "";
				position[] = {6367.29,5946.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall494
			{
				name = "";
				position[] = {6342.92,6004.05};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall495
			{
				name = "";
				position[] = {6304.11,6007.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall496
			{
				name = "";
				position[] = {6263.31,5885.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall497
			{
				name = "";
				position[] = {6394.16,5876.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall498
			{
				name = "";
				position[] = {6224.01,5802.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall499
			{
				name = "";
				position[] = {6165.8,5731.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall500
			{
				name = "";
				position[] = {6104.6,5762.75};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall501
			{
				name = "";
				position[] = {6191.67,5828.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall502
			{
				name = "";
				position[] = {6139.43,5880.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall503
			{
				name = "";
				position[] = {6188.19,5907.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall504
			{
				name = "";
				position[] = {6203.11,5950.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall506
			{
				name = "";
				position[] = {6388.19,6052.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall507
			{
				name = "";
				position[] = {6245.4,6033.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall508
			{
				name = "";
				position[] = {6108.08,5972.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall509
			{
				name = "";
				position[] = {6082.21,5944.85};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall510
			{
				name = "";
				position[] = {6028.98,5961.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall511
			{
				name = "";
				position[] = {5999.13,5754.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall512
			{
				name = "";
				position[] = {5947.88,5692.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall513
			{
				name = "";
				position[] = {6078.73,5666.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall514
			{
				name = "";
				position[] = {6091.67,5623.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall515
			{
				name = "";
				position[] = {6069.28,5556.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall516
			{
				name = "";
				position[] = {6034.95,5520.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall517
			{
				name = "";
				position[] = {5970.77,5399.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall518
			{
				name = "";
				position[] = {5976.74,5532.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall519
			{
				name = "";
				position[] = {5847.88,5498.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall520
			{
				name = "";
				position[] = {5777.23,5427.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall521
			{
				name = "";
				position[] = {5759.82,5518.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall522
			{
				name = "";
				position[] = {5834.44,5668.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall523
			{
				name = "";
				position[] = {5873.75,5797.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall524
			{
				name = "";
				position[] = {5819.52,5634.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall525
			{
				name = "";
				position[] = {5953.35,5739.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall526
			{
				name = "";
				position[] = {5953.35,5894.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall527
			{
				name = "";
				position[] = {5878.72,5933.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall528
			{
				name = "";
				position[] = {5774.24,5969.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall529
			{
				name = "";
				position[] = {5808.08,5834.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall530
			{
				name = "";
				position[] = {5688.17,5936.39};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall531
			{
				name = "";
				position[] = {5709.57,5802.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall532
			{
				name = "";
				position[] = {5664.79,5796.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall533
			{
				name = "";
				position[] = {5617.52,5878.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall534
			{
				name = "";
				position[] = {5645.39,5943.35};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall535
			{
				name = "";
				position[] = {5562.3,5945.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall536
			{
				name = "";
				position[] = {5531.45,5788.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall537
			{
				name = "";
				position[] = {5464.29,5807.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall538
			{
				name = "";
				position[] = {5401.6,5924.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall539
			{
				name = "";
				position[] = {5337.92,5899.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall540
			{
				name = "";
				position[] = {5284.18,5823.95};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall541
			{
				name = "";
				position[] = {5291.15,5735.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall542
			{
				name = "";
				position[] = {5332.94,5826.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall543
			{
				name = "";
				position[] = {5221,5781.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall544
			{
				name = "";
				position[] = {5118.51,5855.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall545
			{
				name = "";
				position[] = {5149.85,5725.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall546
			{
				name = "";
				position[] = {5076.22,5761.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall547
			{
				name = "";
				position[] = {5078.21,5851.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall548
			{
				name = "";
				position[] = {5020,5845.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall549
			{
				name = "";
				position[] = {5002.09,5757.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall550
			{
				name = "";
				position[] = {5440.9,5719.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall551
			{
				name = "";
				position[] = {5416.03,5676.68};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall552
			{
				name = "";
				position[] = {5335.43,5690.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall553
			{
				name = "";
				position[] = {5284.68,5691.11};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall554
			{
				name = "";
				position[] = {5355.83,5586.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall555
			{
				name = "";
				position[] = {5446.87,5570.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall556
			{
				name = "";
				position[] = {5267.27,5591.11};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall557
			{
				name = "";
				position[] = {5210.05,5553.79};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall558
			{
				name = "";
				position[] = {5192.14,5609.02};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall559
			{
				name = "";
				position[] = {5101.09,5550.81};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall560
			{
				name = "";
				position[] = {5019.5,5471.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall561
			{
				name = "";
				position[] = {5027.46,5540.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall562
			{
				name = "";
				position[] = {5017.01,5656.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall563
			{
				name = "";
				position[] = {4994.13,5788.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall564
			{
				name = "";
				position[] = {4893.13,5817.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall565
			{
				name = "";
				position[] = {4882.18,5586.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall566
			{
				name = "";
				position[] = {4723.97,5503.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall567
			{
				name = "";
				position[] = {4846.86,5467.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall568
			{
				name = "";
				position[] = {4831.93,5734.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall569
			{
				name = "";
				position[] = {4705.06,5760.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall570
			{
				name = "";
				position[] = {6137.94,6099.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall571
			{
				name = "";
				position[] = {5991.17,6121.47};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall572
			{
				name = "";
				position[] = {6122.01,6219.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall573
			{
				name = "";
				position[] = {6260.33,6270.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall574
			{
				name = "";
				position[] = {6037.44,6271.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall575
			{
				name = "";
				position[] = {5967.28,6232.91};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall576
			{
				name = "";
				position[] = {5862.31,6195.6};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall577
			{
				name = "";
				position[] = {5824.99,6169.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall578
			{
				name = "";
				position[] = {6553.87,6416.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall579
			{
				name = "";
				position[] = {6445.41,6466.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall580
			{
				name = "";
				position[] = {6368.29,6373.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall581
			{
				name = "";
				position[] = {6290.67,6427.94};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall582
			{
				name = "";
				position[] = {6156.34,6432.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall583
			{
				name = "";
				position[] = {5991.66,6376.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall584
			{
				name = "";
				position[] = {5970.27,6329.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall585
			{
				name = "";
				position[] = {6525.51,6557.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall586
			{
				name = "";
				position[] = {6408.59,6673.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall587
			{
				name = "";
				position[] = {6403.12,6561.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall588
			{
				name = "";
				position[] = {6321.02,6518.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall589
			{
				name = "";
				position[] = {6170.27,6532.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall590
			{
				name = "";
				position[] = {6103.11,6508.54};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall591
			{
				name = "";
				position[] = {5915.54,6467.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall592
			{
				name = "";
				position[] = {5941.41,6588.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall593
			{
				name = "";
				position[] = {6006.59,6630.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall594
			{
				name = "";
				position[] = {5945.89,6663.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall595
			{
				name = "";
				position[] = {5856.83,6660.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall596
			{
				name = "";
				position[] = {5849.87,6606.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall597
			{
				name = "";
				position[] = {5868.28,6390.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall598
			{
				name = "";
				position[] = {5857.83,6315};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall599
			{
				name = "";
				position[] = {5752.35,6266.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall600
			{
				name = "";
				position[] = {5748.37,6360.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall601
			{
				name = "";
				position[] = {5704.09,6409.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall602
			{
				name = "";
				position[] = {5656.83,6347.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall603
			{
				name = "";
				position[] = {5616.03,6241.87};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall604
			{
				name = "";
				position[] = {5507.07,6316};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall605
			{
				name = "";
				position[] = {5600.11,6248.83};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall606
			{
				name = "";
				position[] = {5580.21,6144.85};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall607
			{
				name = "";
				position[] = {5639.91,6120.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall608
			{
				name = "";
				position[] = {5697.13,6143.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall609
			{
				name = "";
				position[] = {5759.32,6141.87};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall610
			{
				name = "";
				position[] = {5677.23,6064.75};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall611
			{
				name = "";
				position[] = {5541.4,6045.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall612
			{
				name = "";
				position[] = {5490.16,6118.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall613
			{
				name = "";
				position[] = {5480.21,6026.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall614
			{
				name = "";
				position[] = {5430.46,6054.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall615
			{
				name = "";
				position[] = {5386.67,6100.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall616
			{
				name = "";
				position[] = {5324.98,6132.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall617
			{
				name = "";
				position[] = {5393.64,6192.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall618
			{
				name = "";
				position[] = {5330.95,6230.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall619
			{
				name = "";
				position[] = {5539.41,6215};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall620
			{
				name = "";
				position[] = {5609.07,6331.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall621
			{
				name = "";
				position[] = {5438.91,6369.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall622
			{
				name = "";
				position[] = {5695.64,6634.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall623
			{
				name = "";
				position[] = {5692.65,6559.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall624
			{
				name = "";
				position[] = {5608.07,6551.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall625
			{
				name = "";
				position[] = {5490.16,6551.83};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall626
			{
				name = "";
				position[] = {5442.4,6472.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall627
			{
				name = "";
				position[] = {5352.34,6500.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall628
			{
				name = "";
				position[] = {5269.75,6395.11};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall629
			{
				name = "";
				position[] = {5262.79,6545.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall630
			{
				name = "";
				position[] = {5305.58,6606.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall631
			{
				name = "";
				position[] = {5401.1,6661.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall632
			{
				name = "";
				position[] = {5445.38,6774.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall633
			{
				name = "";
				position[] = {5515.53,6769.24};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall634
			{
				name = "";
				position[] = {5554.34,6744.87};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall635
			{
				name = "";
				position[] = {5699.12,6732.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall636
			{
				name = "";
				position[] = {5561.8,6625.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall637
			{
				name = "";
				position[] = {5434.44,6609.54};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall638
			{
				name = "";
				position[] = {5216.52,6422.47};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall639
			{
				name = "";
				position[] = {5041.39,6414.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall640
			{
				name = "";
				position[] = {5043.88,6467.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall641
			{
				name = "";
				position[] = {5109.05,6513.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall643
			{
				name = "";
				position[] = {5188.66,6535.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall644
			{
				name = "";
				position[] = {5092.14,6581.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall645
			{
				name = "";
				position[] = {5064.77,6626.95};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall646
			{
				name = "";
				position[] = {5073.73,6696.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall647
			{
				name = "";
				position[] = {5146.37,6686.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall648
			{
				name = "";
				position[] = {5241.4,6675.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall649
			{
				name = "";
				position[] = {4933.43,6502.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall650
			{
				name = "";
				position[] = {4892.13,6530.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall651
			{
				name = "";
				position[] = {4843.87,6543.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall652
			{
				name = "";
				position[] = {4806.06,6475.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall653
			{
				name = "";
				position[] = {4874.72,6374.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall654
			{
				name = "";
				position[] = {4941.89,6297.09};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall655
			{
				name = "";
				position[] = {4825.96,6256.79};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall656
			{
				name = "";
				position[] = {4929.95,6409.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall657
			{
				name = "";
				position[] = {4786.16,6388.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall658
			{
				name = "";
				position[] = {4736.91,6429.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall659
			{
				name = "";
				position[] = {4796.61,6320.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall660
			{
				name = "";
				position[] = {4772.73,6268.73};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall661
			{
				name = "";
				position[] = {4982.68,6193.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall662
			{
				name = "";
				position[] = {4993.13,6110.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall663
			{
				name = "";
				position[] = {4863.28,6119.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall664
			{
				name = "";
				position[] = {4859.79,6022.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall665
			{
				name = "";
				position[] = {4936.41,5986.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall666
			{
				name = "";
				position[] = {5005.07,5951.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall667
			{
				name = "";
				position[] = {4785.66,6050.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall668
			{
				name = "";
				position[] = {4826.96,5927.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall669
			{
				name = "";
				position[] = {4676.21,5917.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall670
			{
				name = "";
				position[] = {4608.05,5958.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall671
			{
				name = "";
				position[] = {4518.49,5904.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall672
			{
				name = "";
				position[] = {4415.01,5882.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall673
			{
				name = "";
				position[] = {4491.63,5991.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall674
			{
				name = "";
				position[] = {4459.29,6017.98};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall675
			{
				name = "";
				position[] = {4514.02,6083.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall676
			{
				name = "";
				position[] = {4591.13,6149.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall677
			{
				name = "";
				position[] = {4536.4,6171.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall678
			{
				name = "";
				position[] = {4406.05,6044.85};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall679
			{
				name = "";
				position[] = {4581.18,6244.85};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall680
			{
				name = "";
				position[] = {4740.39,6325.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall681
			{
				name = "";
				position[] = {4683.67,6382.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall682
			{
				name = "";
				position[] = {4618.5,6338.39};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall683
			{
				name = "";
				position[] = {4585.16,6406.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall684
			{
				name = "";
				position[] = {4476.2,6096.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall685
			{
				name = "";
				position[] = {4362.27,5885.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall686
			{
				name = "";
				position[] = {4286.65,5927.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall687
			{
				name = "";
				position[] = {4234.9,5882.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall688
			{
				name = "";
				position[] = {4144.85,5877.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall689
			{
				name = "";
				position[] = {4088.13,5941.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall690
			{
				name = "";
				position[] = {4046.84,5881.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall691
			{
				name = "";
				position[] = {4033.9,5822.95};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall692
			{
				name = "";
				position[] = {3966.24,5872.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall693
			{
				name = "";
				position[] = {3870.72,5885.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall694
			{
				name = "";
				position[] = {3884.65,5759.27};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall695
			{
				name = "";
				position[] = {3681.66,5794.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall696
			{
				name = "";
				position[] = {3704.05,5848.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall697
			{
				name = "";
				position[] = {3579.66,5945.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall698
			{
				name = "";
				position[] = {3707.03,6087.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall699
			{
				name = "";
				position[] = {3811.01,6059.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall700
			{
				name = "";
				position[] = {3763.25,6158.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall701
			{
				name = "";
				position[] = {3608.52,6117.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall702
			{
				name = "";
				position[] = {3777.18,6267.24};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall703
			{
				name = "";
				position[] = {3907.53,6315.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall704
			{
				name = "";
				position[] = {4001.56,6360.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall705
			{
				name = "";
				position[] = {3980.67,6296.1};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall706
			{
				name = "";
				position[] = {3989.13,6422.47};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall707
			{
				name = "";
				position[] = {4169.73,6461.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall708
			{
				name = "";
				position[] = {4067.24,6418.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall709
			{
				name = "";
				position[] = {4025.45,6484.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall710
			{
				name = "";
				position[] = {4058.78,6573.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall711
			{
				name = "";
				position[] = {4107.54,6523.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall712
			{
				name = "";
				position[] = {4017.98,6521.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall713
			{
				name = "";
				position[] = {4298.09,6542.87};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall714
			{
				name = "";
				position[] = {4354.31,6437.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall715
			{
				name = "";
				position[] = {4403.07,6564.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall716
			{
				name = "";
				position[] = {4444.86,6452.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall717
			{
				name = "";
				position[] = {4455.8,6605.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall718
			{
				name = "";
				position[] = {4352.82,6643.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall719
			{
				name = "";
				position[] = {4249.33,6640.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall720
			{
				name = "";
				position[] = {4423.47,6507.05};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall721
			{
				name = "";
				position[] = {4656.8,6689.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall722
			{
				name = "";
				position[] = {4583.17,6588.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall723
			{
				name = "";
				position[] = {4763.27,6635.91};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall724
			{
				name = "";
				position[] = {4849.35,6687.65};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall725
			{
				name = "";
				position[] = {4881.19,6658.79};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall727
			{
				name = "";
				position[] = {4953.33,6717};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall728
			{
				name = "";
				position[] = {4985.17,6630.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall729
			{
				name = "";
				position[] = {5020.99,6550.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall730
			{
				name = "";
				position[] = {4506.05,6590.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall731
			{
				name = "";
				position[] = {4235.9,6565.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall732
			{
				name = "";
				position[] = {4215.5,6205.05};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall733
			{
				name = "";
				position[] = {4139.38,6264.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall734
			{
				name = "";
				position[] = {4027.44,6216.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall735
			{
				name = "";
				position[] = {4119.48,6168.24};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall736
			{
				name = "";
				position[] = {3921.46,6185.65};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall737
			{
				name = "";
				position[] = {4139.38,6091.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall738
			{
				name = "";
				position[] = {4186.64,6031.91};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall739
			{
				name = "";
				position[] = {4258.29,6083.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall740
			{
				name = "";
				position[] = {4235.9,6035.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall741
			{
				name = "";
				position[] = {4218.49,6144.85};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall742
			{
				name = "";
				position[] = {4019.48,6004.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall743
			{
				name = "";
				position[] = {3929.42,6099.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall744
			{
				name = "";
				position[] = {3849.82,5994.1};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall745
			{
				name = "";
				position[] = {3719.47,5922.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall746
			{
				name = "";
				position[] = {3597.08,5990.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall747
			{
				name = "";
				position[] = {3296.57,5805.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall748
			{
				name = "";
				position[] = {3268.21,5678.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall749
			{
				name = "";
				position[] = {3112.99,5718.47};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall750
			{
				name = "";
				position[] = {3138.86,5855.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall751
			{
				name = "";
				position[] = {3276.17,6038.38};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall752
			{
				name = "";
				position[] = {3200.55,6102.56};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall753
			{
				name = "";
				position[] = {3382.64,6050.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall754
			{
				name = "";
				position[] = {3412,6111.02};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall755
			{
				name = "";
				position[] = {3366.72,6251.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall756
			{
				name = "";
				position[] = {3301.05,6152.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall757
			{
				name = "";
				position[] = {3151.3,6278.69};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall758
			{
				name = "";
				position[] = {3410.51,6330.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall759
			{
				name = "";
				position[] = {3534.89,6233.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall760
			{
				name = "";
				position[] = {3539.86,6316};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall761
			{
				name = "";
				position[] = {3463.24,6379.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall762
			{
				name = "";
				position[] = {3489.61,6468.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall763
			{
				name = "";
				position[] = {3640.86,6501.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall764
			{
				name = "";
				position[] = {3765.24,6440.38};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall765
			{
				name = "";
				position[] = {3850.81,6508.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall766
			{
				name = "";
				position[] = {3834.4,6379.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall767
			{
				name = "";
				position[] = {3715.99,6204.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall768
			{
				name = "";
				position[] = {3554.29,6189.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall769
			{
				name = "";
				position[] = {3589.12,6056.29};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall770
			{
				name = "";
				position[] = {3003.03,5889.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall771
			{
				name = "";
				position[] = {3065.72,5746.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall772
			{
				name = "";
				position[] = {3126.42,5780.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall773
			{
				name = "";
				position[] = {3235.38,5760.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall774
			{
				name = "";
				position[] = {3338.36,5711.51};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall775
			{
				name = "";
				position[] = {3029.9,5581.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall777
			{
				name = "";
				position[] = {2820.44,5514.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall778
			{
				name = "";
				position[] = {2799.55,5343.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall779
			{
				name = "";
				position[] = {2967.21,5374.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall780
			{
				name = "";
				position[] = {2904.03,5216.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall781
			{
				name = "";
				position[] = {3047.31,5173.68};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall782
			{
				name = "";
				position[] = {3177.17,5161.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall783
			{
				name = "";
				position[] = {3269.71,5158.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall784
			{
				name = "";
				position[] = {3102.04,5102.54};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall785
			{
				name = "";
				position[] = {2915.47,5030.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall786
			{
				name = "";
				position[] = {3057.26,5124.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall787
			{
				name = "";
				position[] = {2806.51,5226.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall788
			{
				name = "";
				position[] = {2888.1,5362.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall789
			{
				name = "";
				position[] = {3168.21,5456.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall790
			{
				name = "";
				position[] = {3142.84,5361.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall791
			{
				name = "";
				position[] = {3087.11,5498.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall792
			{
				name = "";
				position[] = {3247.82,5442.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall793
			{
				name = "";
				position[] = {3236.37,5517.47};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall794
			{
				name = "";
				position[] = {3371.7,5507.02};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall795
			{
				name = "";
				position[] = {3430.9,5367.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall796
			{
				name = "";
				position[] = {3275.18,5329.91};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall797
			{
				name = "";
				position[] = {3375.18,5230.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall798
			{
				name = "";
				position[] = {3409.01,5202.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall799
			{
				name = "";
				position[] = {3480.16,5307.52};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall800
			{
				name = "";
				position[] = {3196.57,5278.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall801
			{
				name = "";
				position[] = {2951.29,5636.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall802
			{
				name = "";
				position[] = {2853.28,5834.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall803
			{
				name = "";
				position[] = {2969.7,5939.37};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall804
			{
				name = "";
				position[] = {3070.2,5998.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall805
			{
				name = "";
				position[] = {2905.52,6036.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall806
			{
				name = "";
				position[] = {2827.9,6073.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall807
			{
				name = "";
				position[] = {2706.51,5995.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall808
			{
				name = "";
				position[] = {2662.73,5979.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall809
			{
				name = "";
				position[] = {2606.51,5896.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall810
			{
				name = "";
				position[] = {2601.03,5789.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall811
			{
				name = "";
				position[] = {2680.14,5748.32};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall812
			{
				name = "";
				position[] = {2549.29,6087.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall813
			{
				name = "";
				position[] = {2616.95,6179.68};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall814
			{
				name = "";
				position[] = {2754.27,6290.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall815
			{
				name = "";
				position[] = {2745.81,6225.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall816
			{
				name = "";
				position[] = {2935.37,6136.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall817
			{
				name = "";
				position[] = {3017.46,6050.82};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall818
			{
				name = "";
				position[] = {3103.53,6227.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall819
			{
				name = "";
				position[] = {3156.27,6366.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall820
			{
				name = "";
				position[] = {3212.49,6430.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall821
			{
				name = "";
				position[] = {3202.04,6502.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall822
			{
				name = "";
				position[] = {3502.05,6556.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall823
			{
				name = "";
				position[] = {3422.14,5746.56};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall824
			{
				name = "";
				position[] = {3484.97,5699.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall825
			{
				name = "";
				position[] = {3414.05,5590.73};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall826
			{
				name = "";
				position[] = {3440.8,5503.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall827
			{
				name = "";
				position[] = {3593.22,5504.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall828
			{
				name = "";
				position[] = {3539.72,5632.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall829
			{
				name = "";
				position[] = {3614.99,5630.23};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall830
			{
				name = "";
				position[] = {3625.88,5531.94};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall831
			{
				name = "";
				position[] = {3584.51,5419.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall832
			{
				name = "";
				position[] = {3759.01,5455.73};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall833
			{
				name = "";
				position[] = {3836.46,5401.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall834
			{
				name = "";
				position[] = {3714.84,5314.51};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall835
			{
				name = "";
				position[] = {3782.65,5208.14};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall836
			{
				name = "";
				position[] = {3950.61,5243.91};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall837
			{
				name = "";
				position[] = {4036.77,5214.36};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall838
			{
				name = "";
				position[] = {4019.66,5406.27};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall839
			{
				name = "";
				position[] = {3926.35,5401.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall840
			{
				name = "";
				position[] = {4136,5305.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall841
			{
				name = "";
				position[] = {4216.56,5319.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall842
			{
				name = "";
				position[] = {4296.81,5354.95};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall843
			{
				name = "";
				position[] = {4328.54,5254.79};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall844
			{
				name = "";
				position[] = {4236.15,5192.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall845
			{
				name = "";
				position[] = {4459.18,5331.31};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall846
			{
				name = "";
				position[] = {4372.08,5323.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall847
			{
				name = "";
				position[] = {4404.12,5432.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall848
			{
				name = "";
				position[] = {4411.9,5487.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall849
			{
				name = "";
				position[] = {4505.83,5503.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall850
			{
				name = "";
				position[] = {4526.99,5554.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall851
			{
				name = "";
				position[] = {4496.19,5640.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall852
			{
				name = "";
				position[] = {4311.12,5598.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall853
			{
				name = "";
				position[] = {4265.7,5482.79};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall854
			{
				name = "";
				position[] = {4036.15,5500.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall855
			{
				name = "";
				position[] = {3927.59,5474.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall856
			{
				name = "";
				position[] = {3975.5,5531.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall857
			{
				name = "";
				position[] = {3693.69,5400.36};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall858
			{
				name = "";
				position[] = {3648.58,5261.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall859
			{
				name = "";
				position[] = {3600.37,5364.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall861
			{
				name = "";
				position[] = {4322.97,3188.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall862
			{
				name = "";
				position[] = {4210.53,3084.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall863
			{
				name = "";
				position[] = {4293.11,3004.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall864
			{
				name = "";
				position[] = {4158.78,2903.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall865
			{
				name = "";
				position[] = {4056.29,2872.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall866
			{
				name = "";
				position[] = {3898.08,2909.45};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall867
			{
				name = "";
				position[] = {3819.47,2986.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall868
			{
				name = "";
				position[] = {3941.86,2841.79};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall869
			{
				name = "";
				position[] = {3821.46,2732.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall870
			{
				name = "";
				position[] = {3752.8,2786.56};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall871
			{
				name = "";
				position[] = {3765.24,2858.2};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall872
			{
				name = "";
				position[] = {3801.56,2943.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall873
			{
				name = "";
				position[] = {3912.01,2706.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall874
			{
				name = "";
				position[] = {4188.14,2769.15};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall875
			{
				name = "";
				position[] = {4234.9,2829.84};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall876
			{
				name = "";
				position[] = {4277.19,2775.12};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall877
			{
				name = "";
				position[] = {4301.08,2613.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall878
			{
				name = "";
				position[] = {4367.25,2815.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall879
			{
				name = "";
				position[] = {4451.33,2943.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall880
			{
				name = "";
				position[] = {4583.67,2865.67};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall881
			{
				name = "";
				position[] = {4632.43,2793.53};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall882
			{
				name = "";
				position[] = {4287.64,2656.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall883
			{
				name = "";
				position[] = {4853.82,2619.39};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall884
			{
				name = "";
				position[] = {4847.85,2696.51};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall885
			{
				name = "";
				position[] = {4809.05,2566.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall886
			{
				name = "";
				position[] = {4913.03,2515.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall887
			{
				name = "";
				position[] = {4889.65,2414.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall888
			{
				name = "";
				position[] = {5104.08,2393.02};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall889
			{
				name = "";
				position[] = {5145.87,2433.32};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall890
			{
				name = "";
				position[] = {5271.25,2436.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall891
			{
				name = "";
				position[] = {5198.11,2496.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall892
			{
				name = "";
				position[] = {5063.78,2645.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall893
			{
				name = "";
				position[] = {4932.43,2631.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall894
			{
				name = "";
				position[] = {5157.31,2654.22};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall895
			{
				name = "";
				position[] = {5311.55,2617.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall896
			{
				name = "";
				position[] = {5271.25,2526.36};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall897
			{
				name = "";
				position[] = {5377.72,2409.93};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall898
			{
				name = "";
				position[] = {5463.29,2511.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall899
			{
				name = "";
				position[] = {5458.32,2583.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall900
			{
				name = "";
				position[] = {5568.27,2537.8};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall901
			{
				name = "";
				position[] = {5544.39,2435.81};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall902
			{
				name = "";
				position[] = {5651.36,2488.54};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall903
			{
				name = "";
				position[] = {5701.11,2452.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall904
			{
				name = "";
				position[] = {5683.2,2582.58};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall905
			{
				name = "";
				position[] = {5636.93,2655.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall906
			{
				name = "";
				position[] = {5559.81,2648.75};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall907
			{
				name = "";
				position[] = {5461.3,2682.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall908
			{
				name = "";
				position[] = {5556.33,2699.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall909
			{
				name = "";
				position[] = {5629.96,2726.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall910
			{
				name = "";
				position[] = {5698.12,2757.7};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall911
			{
				name = "";
				position[] = {5809.07,2744.27};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall912
			{
				name = "";
				position[] = {5754.34,2838.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall913
			{
				name = "";
				position[] = {5609.56,2844.27};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall914
			{
				name = "";
				position[] = {5469.26,2822.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall915
			{
				name = "";
				position[] = {5345.38,2738.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall916
			{
				name = "";
				position[] = {5250.35,2717.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall917
			{
				name = "";
				position[] = {5285.68,2826.86};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall918
			{
				name = "";
				position[] = {5342.89,2854.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall919
			{
				name = "";
				position[] = {5389.16,2861.19};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall920
			{
				name = "";
				position[] = {5152.84,2765.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall921
			{
				name = "";
				position[] = {5031.94,2793.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall922
			{
				name = "";
				position[] = {5154.83,2848.25};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall923
			{
				name = "";
				position[] = {4986.66,2722.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall924
			{
				name = "";
				position[] = {4907.56,2876.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall925
			{
				name = "";
				position[] = {4969.25,2894.03};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall926
			{
				name = "";
				position[] = {4919,2957.71};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall927
			{
				name = "";
				position[] = {5020.5,2984.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall928
			{
				name = "";
				position[] = {5074.73,2928.85};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall929
			{
				name = "";
				position[] = {5150.85,3005.97};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall930
			{
				name = "";
				position[] = {5216.52,2914.92};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall931
			{
				name = "";
				position[] = {5128.46,2885.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall932
			{
				name = "";
				position[] = {5412.54,3000.99};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall933
			{
				name = "";
				position[] = {5477.22,2996.02};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall934
			{
				name = "";
				position[] = {5516.03,3018.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall935
			{
				name = "";
				position[] = {5431.95,2920.89};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall936
			{
				name = "";
				position[] = {5640.91,2992.04};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall937
			{
				name = "";
				position[] = {5455.83,3117.91};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall938
			{
				name = "";
				position[] = {5876.73,3118.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall939
			{
				name = "";
				position[] = {5946.39,3212.94};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall940
			{
				name = "";
				position[] = {6103.11,3098.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall941
			{
				name = "";
				position[] = {6090.17,3204.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall942
			{
				name = "";
				position[] = {6122.51,3271.15};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall943
			{
				name = "";
				position[] = {6172.26,3181.1};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall944
			{
				name = "";
				position[] = {6199.13,3089.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall945
			{
				name = "";
				position[] = {6233.96,2966.66};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall946
			{
				name = "";
				position[] = {6195.15,2780.59};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall947
			{
				name = "";
				position[] = {6019.52,2642.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall948
			{
				name = "";
				position[] = {6157.84,2515.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall950
			{
				name = "";
				position[] = {5975.24,2447.75};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall951
			{
				name = "";
				position[] = {5825.99,2572.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall952
			{
				name = "";
				position[] = {6209.7,2308.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall953
			{
				name = "";
				position[] = {5747.53,2235.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall954
			{
				name = "";
				position[] = {5471.02,2207.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall955
			{
				name = "";
				position[] = {5549.91,1898.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall956
			{
				name = "";
				position[] = {4329.91,2919.83};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall957
			{
				name = "";
				position[] = {4397.65,2942.15};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall958
			{
				name = "";
				position[] = {4539.89,2998.51};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall959
			{
				name = "";
				position[] = {4453.32,3000};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall960
			{
				name = "";
				position[] = {4425.95,3088.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall961
			{
				name = "";
				position[] = {4508.04,3134.33};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall962
			{
				name = "";
				position[] = {4576.21,3096.02};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall963
			{
				name = "";
				position[] = {4815.02,3048.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall964
			{
				name = "";
				position[] = {4754.82,3112.94};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall965
			{
				name = "";
				position[] = {4727.95,3219.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall966
			{
				name = "";
				position[] = {4784.17,3147.76};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall967
			{
				name = "";
				position[] = {4864.27,3074.63};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall968
			{
				name = "";
				position[] = {4912.03,3086.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall969
			{
				name = "";
				position[] = {5044.87,3223.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall970
			{
				name = "";
				position[] = {4841.88,3256.72};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall971
			{
				name = "";
				position[] = {4884.67,3290.55};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall972
			{
				name = "";
				position[] = {4827.95,3318.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall973
			{
				name = "";
				position[] = {4948.35,3307.47};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall974
			{
				name = "";
				position[] = {4988.16,3219.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall975
			{
				name = "";
				position[] = {4988.16,3099.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall976
			{
				name = "";
				position[] = {5132.44,3097.02};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall977
			{
				name = "";
				position[] = {5235.92,3236.32};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall978
			{
				name = "";
				position[] = {5285.18,3166.17};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall979
			{
				name = "";
				position[] = {5352.34,3111.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall980
			{
				name = "";
				position[] = {5382.2,3233.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall981
			{
				name = "";
				position[] = {5499.11,3186.57};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall982
			{
				name = "";
				position[] = {5766.78,3232.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall983
			{
				name = "";
				position[] = {5499.61,3276.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall984
			{
				name = "";
				position[] = {5218.51,3309.96};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall985
			{
				name = "";
				position[] = {5111.54,3502.5};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall986
			{
				name = "";
				position[] = {3600.99,2930.01};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall987
			{
				name = "";
				position[] = {3518.25,3022.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall988
			{
				name = "";
				position[] = {3563.98,2845.41};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall989
			{
				name = "";
				position[] = {3313.58,3028.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall990
			{
				name = "";
				position[] = {3153.39,3018.35};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall991
			{
				name = "";
				position[] = {3286.82,3125.42};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall992
			{
				name = "";
				position[] = {1699.52,4229.88};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall993
			{
				name = "";
				position[] = {644.44,8353.62};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall994
			{
				name = "";
				position[] = {3430.26,9889.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall995
			{
				name = "";
				position[] = {3620.71,9928.21};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall996
			{
				name = "";
				position[] = {6155.52,10011.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall997
			{
				name = "";
				position[] = {6288.59,9662.06};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall998
			{
				name = "";
				position[] = {6662.32,9794.34};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall999
			{
				name = "";
				position[] = {6965.92,9872.43};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1001
			{
				name = "";
				position[] = {7192.23,9859.68};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1002
			{
				name = "";
				position[] = {7406.59,10021.4};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1003
			{
				name = "";
				position[] = {7773.14,9996.74};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1004
			{
				name = "";
				position[] = {7889.48,9503.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1005
			{
				name = "";
				position[] = {9289.56,9897.13};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1006
			{
				name = "";
				position[] = {9308.69,9991.16};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1007
			{
				name = "";
				position[] = {9583.61,10164.9};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1008
			{
				name = "";
				position[] = {9860.12,10214.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1009
			{
				name = "";
				position[] = {9045.47,9007.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1010
			{
				name = "";
				position[] = {8993.73,9068.3};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1011
			{
				name = "";
				position[] = {9106.66,8906.11};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1012
			{
				name = "";
				position[] = {9133.53,9240.95};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1013
			{
				name = "";
				position[] = {9022.08,9231.49};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1014
			{
				name = "";
				position[] = {9055.42,9115.07};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1015
			{
				name = "";
				position[] = {9177.81,8937.46};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1016
			{
				name = "";
				position[] = {8979.99,8949.61};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1017
			{
				name = "";
				position[] = {9233.53,9859.87};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1018
			{
				name = "";
				position[] = {7202.64,8686.7};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1019
			{
				name = "";
				position[] = {8219.38,5438.7};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1020
			{
				name = "";
				position[] = {8220.18,5597.28};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1021
			{
				name = "";
				position[] = {8135.71,5520.78};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1022
			{
				name = "";
				position[] = {8301.46,5524.77};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1023
			{
				name = "";
				position[] = {8424.56,4808.08};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1024
			{
				name = "";
				position[] = {7738.88,4825.54};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1025
			{
				name = "";
				position[] = {7734.83,4891.18};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1027
			{
				name = "";
				position[] = {7872.31,3815.44};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1028
			{
				name = "";
				position[] = {8089.23,3607.48};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1029
			{
				name = "";
				position[] = {8261.37,3450.26};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
			class FlatAreaCitySmall1030
			{
				name = "";
				position[] = {8334.51,3273.64};
				type = "FlatAreaCitySmall";
				radiusA = 10;
				radiusB = 10;
			};
		};
	};
};
class CfgWorldList
{
	class fallujah{};
};
class CfgMissions
{
	class Cutscenes
	{
		class FallujahIntro
		{
			directory = "ascz_fallujah_fix\Scenes\intro.fallujah";
		};
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class siFallujahTerra: Default
	{
		access = 2;
		files = "fallujah_d2mesto_*";
		rough = 0.05;
		dust = 0.3;
		soundEnviron = "dirt";
		character = "siFallujahStubbleClutter";
		soundHit = "hard_ground";
	};
	class siFallujahAcqua: Default
	{
		access = 2;
		files = "fallujah_ut_hlina_*";
		rough = 0.05;
		dust = 0.1;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class siFallujahErba: Default
	{
		access = 2;
		files = "fallujah_d2trava_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "grass";
		character = "siFallujahErbaClutter";
		soundHit = "soft_ground";
	};
	class siFallujahSabbia: Default
	{
		access = 2;
		files = "fallujah_d2pisek_*";
		rough = 0.03;
		dust = 0.7;
		soundEnviron = "rock";
		character = "siFallujahStubbleClutter";
		soundHit = "soft_ground";
	};
	class siFallujahCitta: Default
	{
		access = 2;
		files = "fallujah_pisek_*";
		rough = 0.03;
		dust = 0.7;
		soundEnviron = "rock";
		character = "siFallujahStubbleClutter";
		soundHit = "soft_ground";
	};
};
class CfgSurfaceCharacters
{
	class siFallujahErbaClutter
	{
		probability[] = {0.1,0.05,0.05,0.05};
		names[] = {"si_StubbleClutter","si_GrassCrooked","si_WeedDeadSmall","si_WeedDead"};
	};
	class siTallGrassClutter
	{
		probability[] = {0.4,0.2,0.3,0.07,0.02,0.01};
		names[] = {"si_GrassTall","si_AutumnFlowers","si_GrassBunch","si_GrassCrooked","si_WeedDead","si_WeedDeadSmall"};
	};
	class siGrassWClutter
	{
		probability[] = {0.65,0.17,0.1,0.05,0.03};
		names[] = {"si_GrassCrooked","si_GrassCrookedGreen","si_AutumnFlowers","si_WeedDead","si_WeedDeadSmall"};
	};
	class siFallujahTallGrassWClutter
	{
		probability[] = {0.1,0.05,0.05,0.05,0.2};
		names[] = {"si_GrassTall","si_GrassBunch","si_GrassCrookedGreen","si_GrassCrooked","si_StubbleClutter"};
	};
	class siForestMixedClutter
	{
		probability[] = {0.2,0.1,0.2,0.001,0.003};
		names[] = {"si_GrassCrookedForest","si_FernAutumn","si_FernAutumnTall","si_MushroomsHorcak","si_MushroomsPrasivka"};
	};
	class siForestFirClutter
	{
		probability[] = {0.4,0.1,0.1,0.15,0.05,0.003,0.005,0.008,0.004};
		names[] = {"si_BlueBerry","si_FernAutumn","si_FernAutumnTall","si_SmallPicea","si_RaspBerry","si_MushroomsHorcak","si_MushroomsPrasivka","si_MushroomsBabka","si_MushroomsMuchomurka"};
	};
	class siHeatherClutter
	{
		probability[] = {0.15,0.5,0.3,0.1};
		names[] = {"si_BlueBerry","si_HeatherBrush","si_GrassCrooked","si_WeedSedge"};
	};
	class siFallujahStubbleClutter
	{
		probability[] = {0.1,0.005,0.005,0.005};
		names[] = {"si_StubbleClutter","si_AutumnFlowers","si_WeedDeadSmall","si_WeedDead"};
	};
};