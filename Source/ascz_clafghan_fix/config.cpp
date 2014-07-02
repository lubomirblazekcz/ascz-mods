class CfgPatches
{
	class ascz_clafghan_fix
	{
		units[] = {};
		weapons[] = {};
		worlds[] = {"Clafghan"};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAmisc3","CAbuildings","CA_E","CARoads_E","CARocks_E","CAStructures_E","CAMisc_E","opxbuildings","opxmisc","opxplants","opxroads","razmisc"};
		version = "2012-02-11";
		fileName = "clafghan.pbo";
		author = "Minimalaco+Robster";
		mail = "rinostroh@gmail.com";
	};
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
		class EnvSounds;
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
	class clafghan: CAWorld
	{
		cutscenes[] = {"clafghanIntro"};
		description = "Clafghan";
		icon = "";
		worldName = "cla\clafghan\clafghan.wrp";
		author = "Minimalaco + Robster";
		pictureMap = "\ascz_clafghan_fix\Data\Clafghan_ca.paa";
		pictureShot = "\ascz_clafghan_fix\Data\ui_clafghan_ca.paa";
		centerPosition[] = {10240,10240,500};
		seagullPos[] = {10933,16143,500};
		longitude = 69;
		latitude = -34;
		elevationOffset = 640;
		class EnvSounds: EnvSounds
		{
			class Sea
			{
				name = "$STR_DN_SEA";
				sound[] = {"\ca\Sounds_E\sfx\lake_1",0.1,1};
				soundNight[] = {"\ca\Sounds_E\sfx\lake_3",0.177828,1};
				volume = "sea";
			};
		};
		class OutsideTerrain
		{
			satellite = "cla\clafghan\data\cla_cg_satout_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "cla\clafghan\data\cla_cg_terron_nopx.paa";
					texture = "cla\clafghan\data\cla_cg_terron_co.paa";
				};
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
		startTime = "15:00";
		startDate = "10/04/2011";
		startWeather = 0.45;
		startFog = 0;
		forecastWeather = 0.45;
		forecastFog = 0;
		ilsPosition[] = {15864,374};
		ilsDirection[] = {0.5,0.08,-0.866};
		ilsTaxiIn[] = {15864,374,15579,870,15542,885,15528,857,15657,650};
		ilsTaxiOff[] = {15657,650,15722,536,15747,529,15758,535,15760,555};
		drawTaxiway = 1;
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
			groundReflection[] = {0.132,0.133,0.122};
			moonObjectColorFull[] = {550,500,450,1.0};
			moonHaloObjectColorFull[] = {20,20,20,0.5};
			moonsetObjectColor[] = {275,250,225,1.0};
			moonsetHaloObjectColor[] = {10,10,10,0.25};
			class ThunderBoltLight
			{
				diffuse[] = {2120,2170,8550};
				ambient[] = {0.001,0.001,0.001};
				intensity = 120000;
				class Attenuation
				{
					start = 0.0;
					constant = 0.0;
					linear = 0.0;
					quadratic = 1.0;
				};
			};
			starEmissivity = 60.0;
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{ 0.005,0.01,0.01 },{ 0.0,0.002,0.003 },{ 0.0,0.0,0.0 },{ 0.0,0.0,0.0 },{ 0.0,0.002,0.003 },{ 0.0,0.002,0.003 },0};
			fullNight[] = {-5,{ 0.182,0.213,0.25 },{ 0.05,0.111,0.221 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.082,0.128,0.185 },{ 0.283,0.35,0.431 },0};
			sunMoon[] = {-3.75,{ 0.377,0.441,0.518 },{ 0.103,0.227,0.453 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.174,0.274,0.395 },{ 0.582,0.72,0.887 },0.5};
			earlySun[] = {-2.5,{ 0.675,0.69,0.784 },{ 0.22,0.322,0.471 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.424,0.549,0.745 },{ 0.698,0.753,0.894 },1};
			sunrise[] = {0,{ 0.675,0.69,0.784 },{ 0.478,0.51,0.659 },{ 0.2,0.19,0.07 },{ 0.124,0.161,0.236 },{ { 0.847,0.855,0.965 },0.2 },{ { 0.933,0.949,0.996 },2 },1};
			earlyMorning[] = {3,{ { 0.844,0.61,0.469 },0.8 },{ 0.424,0.557,0.651 },{ { 1,0.45,0.2 },1 },{ 0.12,0.26,0.38 },{ { 0.428,0.579,0.743 },2 },{ { 0.844,0.61,0.469 },2.7 },1};
			midMorning[] = {8,{ { 0.822,0.75,0.646 },3.8 },{ { 0.383,0.58,0.858 },1.3 },{ { 1.3,0.9,0.61 },2.8 },{ { 0.12,0.18,0.28 },0.5 },{ { 0.322,0.478,0.675 },3.5 },{ { 1.0,0.929,0.815 },4.7 },1};
			morning[] = {16,{ { 1,0.95,0.91 },12.2 },{ { 0.12,0.18,0.28 },9.2 },{ { 1,0.95,0.91 },11.2 },{ { 0.12,0.18,0.28 },8.5 },{ { 0.14,0.18,0.24 },11.0 },{ { 0.5,0.6,0.9 },13.2 },1};
			noon[] = {45,{ { 0.98,0.94,0.94 },13.8 },{ { 0.2,0.27,0.35 },10.8 },{ { 0.98,0.94,0.94 },13.8 },{ { 0.2,0.27,0.35 },10.8 },{ { 0.5,0.64,1.0 },12.0 },{ { 0.5,0.5,0.5 },14.8 },1,0.5,0.4,0.5,0.4};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{ 0.005,0.01,0.01 },{ 0.0,0.002,0.003 },{ 0.0,0.0,0.0 },{ 0.0,0.0,0.0 },{ 0.0,0.002,0.003 },{ 0.0,0.002,0.003 },0};
			fullNight[] = {-5,{ 0.023,0.023,0.023 },{ 0.02,0.02,0.02 },{ 0.023,0.023,0.023 },{ 0.02,0.02,0.02 },{ 0.01,0.01,0.02 },{ 0.08,0.06,0.06 },0};
			sunMoon[] = {-3.75,{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.035,0.04 },{ 0.11,0.08,0.09 },0.5};
			earlySun[] = {-2.5,{ 0.0689,0.0689,0.0804 },{ 0.06,0.06,0.07 },{ 0.0689,0.0689,0.0804 },{ 0.06,0.06,0.07 },{ 0.08,0.07,0.08 },{ 0.14,0.1,0.12 },0.5};
			earlyMorning[] = {3,{ { 1,1,1 },"(-4)+3.95" },{ { 1,1,1 },"(-4)+3.0" },{ { 1,1,1 },"(-4)+3.95" },{ { 1,1,1 },"(-4)+3.0" },{ { 1,1,1 },"(-4)+4" },{ { 1,1,1 },"(-4)+5.5" },1};
			morning[] = {16,{ { 1,1,1 },"(-4)+5.7" },{ { 1,1,1 },"(-4)+4.5" },{ { 1,1,1 },"(-4)+5.7" },{ { 1,1,1 },"(-4)+4.5" },{ { 1,1,1 },"(-4)+7" },{ { 1,1,1 },"(-4)+8" },1};
			lateMorning[] = {25,{ { 1,1,1 },"(-4)+10.45" },{ { 1,1,1 },"(-4)+9.75" },{ { 1,1,1 },"(-4)+10.45" },{ { 1,1,1 },"(-4)+9.75" },{ { 1,1,1 },"(-4)+12" },{ { 1,1,1 },"(-4)+12.75" },1};
			noon[] = {45,{ { 1,1,1 },10.0 },{ { 1,1,1 },9.0 },{ { 1,1,1 },9.0 },{ { 1,1,1 },8.0 },{ { 0.5,0.64,1 },12.0 },{ { 0.5,0.5,0.5 },14.8 },1};
		};
		class Weather: Weather
		{
			class LightingNew
			{
				class Lighting0
				{
					height = 0;
					overcast = 0.4;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {{ 0.11,0.2744,0.97 },3};
					diffuseCloud[] = {{ 0.099,0.24696,0.873 },2.7};
					ambient[] = {0.02,0.11,0.54};
					ambientCloud[] = {0.018,0.099,0.486};
					ambientMid[] = {0.018,0.099,0.486};
					ambientMidCloud[] = {0.0162,0.0891,0.4374};
					groundReflection[] = {0.0162,0.0891,0.4374};
					groundReflectionCloud[] = {0.01458,0.08019,0.39366};
					bidirect[] = {0.0284,0.02712,0.0254};
					bidirectCloud[] = {0.02556,0.024408,0.02286};
					sky[] = {{ 0.001273,0.001838,0.004057 },0.001404};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {0.1,0.2,0.4};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0.118098;
					desiredLuminanceCoefCloud = 0.059049;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.3,0.4,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting1
				{
					height = 0;
					overcast = 0.4;
					sunAngle = -10;
					sunOrMoon = 0;
					diffuse[] = {{ 0.11,0.2744,0.97 },2.8};
					diffuseCloud[] = {{ 0.11,0.2744,0.97 },2.52};
					ambient[] = {0.02,0.11,0.54};
					ambientCloud[] = {0.018,0.099,0.486};
					ambientMid[] = {0.032,0.176,0.864};
					ambientMidCloud[] = {0.0288,0.1584,0.7776};
					groundReflection[] = {0.0224,0.1232,0.6048};
					groundReflectionCloud[] = {0.02016,0.11088,0.54432};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.004316,0.006232,0.013752 },0.014036};
					skyAroundSun[] = {0.004332,0.005212,0.009138};
					fogColor[] = {0.09,0.18,0.32};
					apertureMin = 7.39508;
					apertureStandard = 7.22;
					apertureMax = 18.05;
					standardAvgLum = 1.8;
					desiredLuminanceCoef = 0.13122;
					desiredLuminanceCoefCloud = 0.06561;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting2
				{
					height = 0;
					overcast = 0.4;
					sunAngle = -9;
					sunOrMoon = 0;
					diffuse[] = {{ 0.11,0.2744,0.97 },2.4};
					diffuseCloud[] = {{ 0.11,0.2744,0.97 },2.16};
					ambient[] = {0.02,0.11,0.16};
					ambientCloud[] = {0.018,0.099,0.144};
					ambientMid[] = {0.028,0.154,0.224};
					ambientMidCloud[] = {0.0252,0.1386,0.2016};
					groundReflection[] = {0.0168,0.0924,0.1344};
					groundReflectionCloud[] = {0.01512,0.08316,0.12096};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.014632,0.021125,0.034815 },0.14036};
					skyAroundSun[] = {{ 0.00456,0.005486,0.009619 },0.4};
					fogColor[] = {0.085,0.12,0.15};
					apertureMin = 7.546;
					apertureStandard = 7.6;
					apertureMax = 19;
					standardAvgLum = 3;
					desiredLuminanceCoef = 0.1458;
					desiredLuminanceCoefCloud = 0.0729;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting3
				{
					height = 0;
					overcast = 0.4;
					sunAngle = -8;
					sunOrMoon = 0;
					diffuse[] = {{ 0.11,0.2744,0.97 },2};
					diffuseCloud[] = {{ 0.099,0.24696,0.873 },1.8};
					ambient[] = {0.04,0.077,0.153};
					ambientCloud[] = {0.036,0.0693,0.1377};
					ambientMid[] = {0.048,0.0924,0.1836};
					ambientMidCloud[] = {0.0432,0.08316,0.16524};
					groundReflection[] = {0.024,0.0462,0.0918};
					groundReflectionCloud[] = {0.0216,0.04158,0.08262};
					bidirect[] = {0.000213,0.000203,0.000191};
					bidirectCloud[] = {0.000192,0.000183,0.000171};
					sky[] = {{ 0.0496,0.07161,0.118017 },1.4036};
					skyAroundSun[] = {{ 0.0048,0.005775,0.010125 },1.8183};
					fogColor[] = {0.07,0.08,0.12};
					apertureMin = 7.7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 5;
					desiredLuminanceCoef = 0.13122;
					desiredLuminanceCoefCloud = 0.06561;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 4;
				};
				class Lighting4
				{
					height = 0;
					overcast = 0.4;
					sunAngle = -6;
					sunOrMoon = 0;
					diffuse[] = {{ 0.11,0.2744,0.97 },1.7};
					diffuseCloud[] = {{ 0.099,0.24696,0.873 },1.53};
					ambient[] = {{ 0.06,0.11,0.225 },0.48488};
					ambientCloud[] = {{ 0.054,0.099,0.2025 },0.436392};
					ambientMid[] = {{ 0.06,0.11,0.225 },0.339416};
					ambientMidCloud[] = {{ 0.054,0.099,0.2025 },0.305474};
					groundReflection[] = {{ 0.03,0.055,0.1125 },0.237591};
					groundReflectionCloud[] = {{ 0.027,0.0495,0.10125 },0.213832};
					bidirect[] = {0.00213,0.002034,0.001905};
					bidirectCloud[] = {0.001917,0.001831,0.001715};
					sky[] = {{ 0.16,0.231,0.3807 },4.2108};
					skyAroundSun[] = {{ 0.048,0.05775,0.10125 },4.8488};
					fogColor[] = {0.0532,0.0639,0.089242};
					apertureMin = 7.8;
					apertureStandard = 9;
					apertureMax = 20;
					standardAvgLum = 10;
					desiredLuminanceCoef = 0.1458;
					desiredLuminanceCoefCloud = 0.0729;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.00368,0.0046,0.00552};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 3;
				};
				class Lighting5
				{
					height = 0;
					overcast = 0.4;
					sunAngle = -2;
					sunOrMoon = 0.5;
					diffuse[] = {{ 0.22,0.1764,0.3007 },1.595};
					diffuseCloud[] = {{ 0.198,0.15876,0.27063 },1.4355};
					ambient[] = {{ 0.2,0.275,0.54 },4.60636};
					ambientCloud[] = {{ 0.18,0.2475,0.486 },4.145724};
					ambientMid[] = {{ 0.2,0.275,0.54 },3.45477};
					ambientMidCloud[] = {{ 0.18,0.2475,0.486 },3.109293};
					groundReflection[] = {{ 0.1,0.1375,0.27 },2.418339};
					groundReflectionCloud[] = {{ 0.09,0.12375,0.243 },2.176505};
					bidirect[] = {0.00497,0.004746,0.004445};
					bidirectCloud[] = {0.004473,0.004271,0.004001};
					sky[] = {{ 0.32,0.33,0.423 },8.70232};
					skyAroundSun[] = {{ 0.12,0.1155,0.1125 },9.0915};
					fogColor[] = {0.056,0.071,0.111552};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0.162;
					desiredLuminanceCoefCloud = 0.081;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0023,0.0046,0.0069};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 2;
				};
				class Lighting6
				{
					height = 0;
					overcast = 0.4;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{ 0.99,0.2744,0.2134 },6.061};
					diffuseCloud[] = {{ 0.891,0.24696,0.19206 },5.4549};
					ambient[] = {{ 0.4,0.42735,0.6777 },4.8488};
					ambientCloud[] = {{ 0.36,0.384615,0.60993 },4.36392};
					ambientMid[] = {{ 0.4512,0.485775,0.7608 },3.87904};
					ambientMidCloud[] = {{ 0.40608,0.437198,0.68472 },3.491136};
					groundReflection[] = {{ 0.28187,0.2712,0.37973 },3.801459};
					groundReflectionCloud[] = {{ 0.253683,0.24408,0.341757 },3.421313};
					bidirect[] = {0.0142,0.01356,0.0127};
					bidirectCloud[] = {0.01278,0.012204,0.01143};
					sky[] = {{ 0.52,0.44,0.4239 },9.1234};
					skyAroundSun[] = {{ 0.3,0.1925,0.0999 },9.849125};
					fogColor[] = {0.1644,0.100485,0.13944};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0.18;
					desiredLuminanceCoefCloud = 0.09;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.00046,0.00322,0.0092};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 1;
				};
				class Lighting7
				{
					height = 0;
					overcast = 0.4;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{ 1.1,0.4116,0.194 },8.7725};
					diffuseCloud[] = {{ 0.99,0.37044,0.1746 },7.89525};
					ambient[] = {{ 0.354,0.463,0.746 },5.702125};
					ambientCloud[] = {{ 0.3186,0.4167,0.6714 },5.131913};
					ambientMid[] = {{ 0.4782,0.52197,0.784 },4.5617};
					ambientMidCloud[] = {{ 0.43038,0.469773,0.7056 },4.10553};
					groundReflection[] = {{ 0.3692,0.35256,0.438785 },4.333615};
					groundReflectionCloud[] = {{ 0.33228,0.317304,0.394907 },3.900254};
					bidirect[] = {0.0213,0.02034,0.01905};
					bidirectCloud[] = {0.01917,0.018306,0.017145};
					sky[] = {{ 0.4312,0.4433,0.5175 },10.94808};
					skyAroundSun[] = {{ 0.4392,0.32186,0.3609 },12.122};
					fogColor[] = {0.137,0.11165,0.1743};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 20;
					standardAvgLum = 70;
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.4;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0023,0.00322,0.00552};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting8
				{
					height = 0;
					overcast = 0.4;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{ 1.1,0.588,0.291 },12.76};
					diffuseCloud[] = {{ 0.99,0.5292,0.2619 },11.484};
					ambient[] = {{ 0.38,0.491,0.798 },7.975};
					ambientCloud[] = {{ 0.342,0.4419,0.7182 },7.1775};
					ambientMid[] = {{ 0.522,0.56134,0.796 },6.77875};
					ambientMidCloud[] = {{ 0.4698,0.505206,0.7164 },6.100875};
					groundReflection[] = {{ 0.48635,0.467142,0.509905 },6.100875};
					groundReflectionCloud[] = {{ 0.437715,0.420428,0.458915 },5.490788};
					bidirect[] = {0.02485,0.02373,0.022225};
					bidirectCloud[] = {0.022365,0.021357,0.020003};
					sky[] = {{ 0.42,0.46255,0.6507 },12.6324};
					skyAroundSun[] = {{ 0.424,0.344575,0.396 },13.3342};
					fogColor[] = {0.275,0.2475,0.315};
					apertureMin = 15;
					apertureStandard = 28;
					apertureMax = 40;
					standardAvgLum = 120;
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.4;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting9
				{
					height = 0;
					overcast = 0.4;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{ 1.1,0.7252,0.485 },14.355};
					diffuseCloud[] = {{ 0.99,0.65268,0.4365 },12.9195};
					ambient[] = {{ 0.42,0.52195,0.855 },8.971875};
					ambientCloud[] = {{ 0.378,0.469755,0.7695 },8.074688};
					ambientMid[] = {{ 0.5652,0.600075,0.796 },8.074688};
					ambientMidCloud[] = {{ 0.50868,0.540068,0.7164 },7.267219};
					groundReflection[] = {{ 0.6035,0.575622,0.575945 },6.45975};
					groundReflectionCloud[] = {{ 0.54315,0.51806,0.518351 },5.813775};
					bidirect[] = {0.0284,0.02712,0.0254};
					bidirectCloud[] = {0.02556,0.024408,0.02286};
					sky[] = {{ 0.408,0.48565,0.62163 },13.47456};
					skyAroundSun[] = {{ 0.412,0.36498,0.42435 },13.9403};
					fogColor[] = {0.29,0.319,0.406};
					apertureMin = 20;
					apertureStandard = 35;
					apertureMax = 85;
					standardAvgLum = 450;
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.4;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting10
				{
					height = 0;
					overcast = 0.4;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{ 1.1,0.98,0.97 },15.95};
					diffuseCloud[] = {{ 0.99,0.882,0.873 },14.355};
					ambient[] = {{ 0.4,0.55,0.9 },9.96875};
					ambientCloud[] = {{ 0.36,0.495,0.81 },8.971875};
					ambientMid[] = {{ 0.84,0.73025,0.8 },10.96562};
					ambientMidCloud[] = {{ 0.756,0.657225,0.72 },9.869062};
					groundReflection[] = {{ 0.71,0.678,0.635 },8.224218};
					groundReflectionCloud[] = {{ 0.639,0.6102,0.5715 },7.401797};
					bidirect[] = {0.0284,0.02712,0.0254};
					bidirectCloud[] = {0.02556,0.024408,0.02286};
					sky[] = {{ 0.4,0.55,0.9 },14.036};
					skyAroundSun[] = {{ 0.4,0.385,0.45 },15.1525};
					fogColor[] = {0.5,0.55,0.816};
					apertureMin = 45;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.4;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 1;
				};
				class Lighting11
				{
					height = 0;
					overcast = 0.95;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.0135,0.07425,0.3645};
					ambientCloud[] = {0.010125,0.055688,0.273375};
					ambientMid[] = {0.0081,0.04455,0.2187};
					ambientMidCloud[] = {0.006075,0.033413,0.164025};
					groundReflection[] = {0.00486,0.02673,0.13122};
					groundReflectionCloud[] = {0.003645,0.020048,0.098415};
					bidirect[] = {0.01917,0.018306,0.017145};
					bidirectCloud[] = {0.014378,0.01373,0.012859};
					sky[] = {{ 0.001273,0.001838,0.004057 },0.001404};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {5e-005,5e-005,5.1e-005};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0.118098;
					desiredLuminanceCoefCloud = 0.059049;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.3,0.4,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting12
				{
					height = 0;
					overcast = 0.95;
					sunAngle = -10;
					sunOrMoon = 0;
					diffuse[] = {0.0825,0.2058,0.7275};
					diffuseCloud[] = {0.061875,0.15435,0.545625};
					ambient[] = {0.004,0.008,0.018};
					ambientCloud[] = {0.003,0.006,0.0135};
					ambientMid[] = {0.0024,0.0048,0.0108};
					ambientMidCloud[] = {0.0018,0.0036,0.0081};
					groundReflection[] = {0.00144,0.00288,0.00648};
					groundReflectionCloud[] = {0.00108,0.00216,0.00486};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.004316,0.006232,0.013752 },0.014036};
					skyAroundSun[] = {0.004332,0.005212,0.009138};
					fogColor[] = {0.0001,0.0001,0.000102};
					apertureMin = 6.517;
					apertureStandard = 7.448;
					apertureMax = 11.7;
					standardAvgLum = 0.001;
					desiredLuminanceCoef = 0.13122;
					desiredLuminanceCoefCloud = 0.06561;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting13
				{
					height = 0;
					overcast = 0.95;
					sunAngle = -9;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.029,0.028,0.134};
					ambientCloud[] = {0.02175,0.021,0.1005};
					ambientMid[] = {0.0174,0.0168,0.0804};
					ambientMidCloud[] = {0.01305,0.0126,0.0603};
					groundReflection[] = {0.01044,0.01008,0.04824};
					groundReflectionCloud[] = {0.00783,0.00756,0.03618};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.014632,0.021125,0.034815 },0.14036};
					skyAroundSun[] = {{ 0.00456,0.005486,0.009619 },0.4};
					fogColor[] = {0.000199,0.000199,0.000203};
					apertureMin = 6.86;
					apertureStandard = 7.84;
					apertureMax = 13;
					standardAvgLum = 0.002;
					desiredLuminanceCoef = 0.1458;
					desiredLuminanceCoefCloud = 0.0729;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting14
				{
					height = 0;
					overcast = 0.95;
					sunAngle = -8;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.047,0.051,0.183};
					ambientCloud[] = {0.03525,0.03825,0.13725};
					ambientMid[] = {0.0282,0.0306,0.1098};
					ambientMidCloud[] = {0.02115,0.02295,0.08235};
					groundReflection[] = {0.01692,0.01836,0.06588};
					groundReflectionCloud[] = {0.01269,0.01377,0.04941};
					bidirect[] = {0.000144,0.000137,0.000129};
					bidirectCloud[] = {0.000108,0.000103,9.6e-005};
					sky[] = {{ 0.0496,0.07161,0.118017 },1.4036};
					skyAroundSun[] = {{ 0.0048,0.005775,0.010125 },1.8183};
					fogColor[] = {0.000398,0.000398,0.000406};
					apertureMin = 7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 0.003;
					desiredLuminanceCoef = 0.13122;
					desiredLuminanceCoefCloud = 0.06561;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },10.8};
					swBrightness = 4;
				};
				class Lighting15
				{
					height = 0;
					overcast = 0.95;
					sunAngle = -6;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{ 0.047,0.091,0.4 },0.460636};
					ambientCloud[] = {{ 0.03525,0.06825,0.3 },0.345477};
					ambientMid[] = {{ 0.0282,0.0546,0.24 },0.230318};
					ambientMidCloud[] = {{ 0.02115,0.04095,0.18 },0.172739};
					groundReflection[] = {{ 0.01692,0.03276,0.144 },0.172739};
					groundReflectionCloud[] = {{ 0.01269,0.02457,0.108 },0.129554};
					bidirect[] = {0.001438,0.001373,0.001286};
					bidirectCloud[] = {0.001078,0.00103,0.000964};
					sky[] = {{ 0.16,0.231,0.3807 },4.2108};
					skyAroundSun[] = {{ 0.048,0.05775,0.10125 },4.8488};
					fogColor[] = {0.000797,0.000797,0.000813};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 20;
					standardAvgLum = 0.006;
					desiredLuminanceCoef = 0.1458;
					desiredLuminanceCoefCloud = 0.0729;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.2};
					swBrightness = 3;
				};
				class Lighting16
				{
					height = 0;
					overcast = 0.95;
					sunAngle = -2;
					sunOrMoon = 0.5;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{ 0.07,0.155,0.43 },4.376042};
					ambientCloud[] = {{ 0.0525,0.11625,0.3225 },3.282032};
					ambientMid[] = {{ 0.042,0.093,0.258 },2.625625};
					ambientMidCloud[] = {{ 0.0315,0.06975,0.1935 },1.969219};
					groundReflection[] = {{ 0.0252,0.0558,0.1548 },1.575375};
					groundReflectionCloud[] = {{ 0.0189,0.04185,0.1161 },1.181531};
					bidirect[] = {0.003355,0.003204,0.003};
					bidirectCloud[] = {0.002516,0.002403,0.00225};
					sky[] = {{ 0.32,0.33,0.423 },8.70232};
					skyAroundSun[] = {{ 0.12,0.1155,0.1125 },9.0915};
					fogColor[] = {0.001594,0.001594,0.001625};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 20;
					standardAvgLum = 0.01;
					desiredLuminanceCoef = 0.162;
					desiredLuminanceCoefCloud = 0.081;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11.437};
					swBrightness = 2;
				};
				class Lighting17
				{
					height = 0;
					overcast = 0.95;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{ 1,1,1 },0.54549};
					diffuseCloud[] = {{ 0.75,0.75,0.75 },0.409118};
					ambient[] = {{ 0.207,0.26,0.43 },4.60636};
					ambientCloud[] = {{ 0.15525,0.195,0.3225 },3.45477};
					ambientMid[] = {{ 0.1242,0.156,0.258 },3.224452};
					ambientMidCloud[] = {{ 0.09315,0.117,0.1935 },2.418339};
					groundReflection[] = {{ 0.07452,0.0936,0.1548 },1.773449};
					groundReflectionCloud[] = {{ 0.05589,0.0702,0.1161 },1.330086};
					bidirect[] = {0.009585,0.009153,0.008573};
					bidirectCloud[] = {0.007189,0.006865,0.006429};
					sky[] = {{ 0.52,0.44,0.4239 },9.1234};
					skyAroundSun[] = {{ 0.3,0.1925,0.0999 },9.849125};
					fogColor[] = {0.003188,0.003188,0.00325};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 1;
					desiredLuminanceCoef = 0.18;
					desiredLuminanceCoefCloud = 0.09;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },8.612};
					swBrightness = 1;
				};
				class Lighting18
				{
					height = 0;
					overcast = 0.95;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{ 1,1,1 },1.184288};
					diffuseCloud[] = {{ 0.75,0.75,0.75 },0.888216};
					ambient[] = {{ 0.297,0.347,0.522 },5.417019};
					ambientCloud[] = {{ 0.22275,0.26025,0.3915 },4.062764};
					ambientMid[] = {{ 0.2376,0.2776,0.4176 },4.333615};
					ambientMidCloud[] = {{ 0.1782,0.2082,0.3132 },3.250211};
					groundReflection[] = {{ 0.16632,0.19432,0.29232 },2.166807};
					groundReflectionCloud[] = {{ 0.12474,0.14574,0.21924 },1.625106};
					bidirect[] = {0.014378,0.01373,0.012859};
					bidirectCloud[] = {0.010783,0.010297,0.009644};
					sky[] = {{ 0.4312,0.4433,0.5175 },10.94808};
					skyAroundSun[] = {{ 0.4392,0.32186,0.3609 },12.122};
					fogColor[] = {0.006375,0.006375,0.0065};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 20;
					standardAvgLum = 5;
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.4;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },8.78};
					swBrightness = 1;
				};
				class Lighting19
				{
					height = 0;
					overcast = 0.95;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{ 1,1,1 },2.2968};
					diffuseCloud[] = {{ 0.75,0.75,0.75 },1.7226};
					ambient[] = {{ 0.396,0.443,0.623 },7.57625};
					ambientCloud[] = {{ 0.297,0.33225,0.46725 },5.682188};
					ambientMid[] = {{ 0.3168,0.3544,0.4984 },6.061};
					ambientMidCloud[] = {{ 0.2376,0.2658,0.3738 },4.54575};
					groundReflection[] = {{ 0.22176,0.24808,0.34888 },2.72745};
					groundReflectionCloud[] = {{ 0.16632,0.18606,0.26166 },2.045588};
					bidirect[] = {0.016774,0.016018,0.015002};
					bidirectCloud[] = {0.01258,0.012013,0.011251};
					sky[] = {{ 0.42,0.46255,0.6507 },12.6324};
					skyAroundSun[] = {{ 0.424,0.344575,0.396 },13.3342};
					fogColor[] = {0.01275,0.01275,0.013};
					apertureMin = 15;
					apertureStandard = 20;
					apertureMax = 40;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.4;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },10.106};
					swBrightness = 1;
				};
				class Lighting20
				{
					height = 0;
					overcast = 0.95;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{ 1,1,1 },3.87585};
					diffuseCloud[] = {{ 0.75,0.75,0.75 },2.906888};
					ambient[] = {{ 0.477,0.52,0.706 },8.523281};
					ambientCloud[] = {{ 0.35775,0.39,0.5295 },6.392461};
					ambientMid[] = {{ 0.3816,0.416,0.5648 },6.818625};
					ambientMidCloud[] = {{ 0.2862,0.312,0.4236 },5.113969};
					groundReflection[] = {{ 0.26712,0.2912,0.39536 },2.72745};
					groundReflectionCloud[] = {{ 0.20034,0.2184,0.29652 },2.045588};
					bidirect[] = {0.01917,0.018306,0.017145};
					bidirectCloud[] = {0.014378,0.01373,0.012859};
					sky[] = {{ 0.408,0.48565,0.62163 },13.47456};
					skyAroundSun[] = {{ 0.412,0.36498,0.42435 },13.9403};
					fogColor[] = {0.0255,0.0255,0.026};
					apertureMin = 15;
					apertureStandard = 25;
					apertureMax = 85;
					standardAvgLum = 30;
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.4;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },10.78};
					swBrightness = 1;
				};
				class Lighting21
				{
					height = 0;
					overcast = 0.95;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{ 1,1,1 },5.742};
					diffuseCloud[] = {{ 0.75,0.75,0.75 },4.3065};
					ambient[] = {{ 0.60325,0.594,0.6592 },10.96562};
					ambientCloud[] = {{ 0.452438,0.4455,0.4944 },8.224218};
					ambientMid[] = {{ 0.4826,0.4752,0.52736 },9.869062};
					ambientMidCloud[] = {{ 0.36195,0.3564,0.39552 },7.401797};
					groundReflection[] = {{ 0.33782,0.33264,0.369152 },8.882156};
					groundReflectionCloud[] = {{ 0.253365,0.24948,0.276864 },6.661617};
					bidirect[] = {0.0284,0.02712,0.0254};
					bidirectCloud[] = {0.0213,0.02034,0.01905};
					sky[] = {{ 0.4,0.55,0.9 },14.036};
					skyAroundSun[] = {{ 0.4,0.385,0.45 },15.1525};
					fogColor[] = {0.051,0.051,0.052};
					apertureMin = 15;
					apertureStandard = 35;
					apertureMax = 85;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.4;
					luminanceRectCoef = 0.4;
					luminanceRectCoefCloud = 0.2;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{ 0.8,0.81,1 },14.036};
					swBrightness = 1;
				};
				class Lighting22
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {{ 0.033,0.19208,0.679 },2.1};
					diffuseCloud[] = {{ 0.033,0.19208,0.679 },2.1};
					ambient[] = {0.015,0.121,0.4482};
					ambientCloud[] = {0.015,0.121,0.4482};
					ambientMid[] = {0.015,0.121,0.4482};
					ambientMidCloud[] = {0.015,0.121,0.4482};
					groundReflection[] = {0.015,0.1452,0.4482};
					groundReflectionCloud[] = {0.015,0.1452,0.4482};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.001273,0.000735,0.004057 },0.001123};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.3,0.4,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting23
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = -10;
					sunOrMoon = 0;
					diffuse[] = {{ 0.077,0.24696,0.97 },2.24};
					diffuseCloud[] = {{ 0.077,0.24696,0.97 },2.24};
					ambient[] = {0.015,0.121,0.4482};
					ambientCloud[] = {0.015,0.121,0.4482};
					ambientMid[] = {0.015,0.121,0.4482};
					ambientMidCloud[] = {0.015,0.121,0.4482};
					groundReflection[] = {0.015,0.1452,0.4482};
					groundReflectionCloud[] = {0.015,0.1452,0.4482};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.004316,0.002493,0.013752 },0.011229};
					skyAroundSun[] = {0.004332,0.005212,0.009138};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.39508;
					apertureStandard = 7.22;
					apertureMax = 18.05;
					standardAvgLum = 1.8;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting24
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = -9;
					sunOrMoon = 0;
					diffuse[] = {{ 0.077,0.24696,0.97 },1.92};
					diffuseCloud[] = {{ 0.077,0.24696,0.97 },1.92};
					ambient[] = {{ 0.015,0.121,0.1328 },1.536};
					ambientCloud[] = {{ 0.015,0.121,0.1328 },1.536};
					ambientMid[] = {{ 0.015,0.121,0.1328 },1.6128};
					ambientMidCloud[] = {{ 0.015,0.121,0.1328 },1.6128};
					groundReflection[] = {{ 0.015,0.1452,0.1328 },1.29024};
					groundReflectionCloud[] = {{ 0.015,0.1452,0.1328 },1.29024};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.014632,0.00845,0.034815};
					skyAroundSun[] = {{ 0.00456,0.005486,0.009619 },0.4};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.546;
					apertureStandard = 7.6;
					apertureMax = 19;
					standardAvgLum = 3;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting25
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = -8;
					sunOrMoon = 0;
					diffuse[] = {{ 0.077,0.24696,0.97 },1.6};
					diffuseCloud[] = {{ 0.077,0.24696,0.97 },1.6};
					ambient[] = {{ 0.03,0.0847,0.12699 },1.28};
					ambientCloud[] = {{ 0.03,0.0847,0.12699 },1.28};
					ambientMid[] = {{ 0.03,0.0847,0.12699 },1.344};
					ambientMidCloud[] = {{ 0.03,0.0847,0.12699 },1.344};
					groundReflection[] = {{ 0.03,0.10164,0.12699 },1.0752};
					groundReflectionCloud[] = {{ 0.03,0.10164,0.12699 },1.0752};
					bidirect[] = {3.2e-005,5.1e-005,7.2e-005};
					bidirectCloud[] = {3.2e-005,5.1e-005,7.2e-005};
					sky[] = {{ 0.0496,0.028644,0.118017 },0.014036};
					skyAroundSun[] = {{ 0.0048,0.005775,0.010125 },1.8183};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 5;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 4;
				};
				class Lighting26
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = -6;
					sunOrMoon = 0;
					diffuse[] = {{ 0.077,0.24696,0.97 },1.36};
					diffuseCloud[] = {{ 0.077,0.24696,0.97 },1.36};
					ambient[] = {{ 0.045,0.121,0.18675 },1.088};
					ambientCloud[] = {{ 0.045,0.121,0.18675 },1.088};
					ambientMid[] = {{ 0.045,0.121,0.18675 },1.1424};
					ambientMidCloud[] = {{ 0.045,0.121,0.18675 },1.1424};
					groundReflection[] = {{ 0.045,0.1452,0.18675 },0.91392};
					groundReflectionCloud[] = {{ 0.045,0.1452,0.18675 },0.91392};
					bidirect[] = {0.00032,0.000509,0.000724};
					bidirectCloud[] = {0.00032,0.000509,0.000724};
					sky[] = {{ 0.16,0.0924,0.3807 },0.84216};
					skyAroundSun[] = {{ 0.048,0.05775,0.10125 },4.8488};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.8;
					apertureStandard = 9;
					apertureMax = 20;
					standardAvgLum = 10;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 3;
				};
				class Lighting27
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = -2;
					sunOrMoon = 0.5;
					diffuse[] = {{ 0.154,0.15876,0.3007 },1.276};
					diffuseCloud[] = {{ 0.154,0.15876,0.3007 },1.276};
					ambient[] = {{ 0.15,0.3025,0.4482 },1.276};
					ambientCloud[] = {{ 0.15,0.3025,0.4482 },1.276};
					ambientMid[] = {{ 0.15,0.3025,0.4482 },1.3398};
					ambientMidCloud[] = {{ 0.15,0.3025,0.4482 },1.3398};
					groundReflection[] = {{ 0.15,0.363,0.4482 },1.07184};
					groundReflectionCloud[] = {{ 0.15,0.363,0.4482 },1.07184};
					bidirect[] = {0.000746,0.001187,0.001689};
					bidirectCloud[] = {0.000746,0.001187,0.001689};
					sky[] = {{ 0.16,0.165,0.2115 },3.045812};
					skyAroundSun[] = {{ 0.12,0.10395,0.09 },9.0915};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 2;
				};
				class Lighting28
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{ 0.693,0.24696,0.2134 },4.8488};
					diffuseCloud[] = {{ 0.693,0.24696,0.2134 },4.8488};
					ambient[] = {{ 0.3,0.470085,0.562491 },4.36392};
					ambientCloud[] = {{ 0.3,0.470085,0.562491 },4.36392};
					ambientMid[] = {{ 0.3,0.470085,0.562491 },4.582116};
					ambientMidCloud[] = {{ 0.3,0.470085,0.562491 },4.582116};
					groundReflection[] = {{ 0.3,0.564102,0.562491 },3.665693};
					groundReflectionCloud[] = {{ 0.3,0.564102,0.562491 },3.665693};
					bidirect[] = {0.00213,0.00339,0.004826};
					bidirectCloud[] = {0.00213,0.00339,0.004826};
					sky[] = {{ 0.52,0.264,0.4239 },4.10553};
					skyAroundSun[] = {{ 0.3,0.09625,0.02997 },9.849125};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 1;
				};
				class Lighting29
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{ 0.77,0.37044,0.194 },7.018};
					diffuseCloud[] = {{ 0.77,0.37044,0.194 },7.018};
					ambient[] = {{ 0.2655,0.5093,0.61918 },5.6144};
					ambientCloud[] = {{ 0.2655,0.5093,0.61918 },5.6144};
					ambientMid[] = {{ 0.2655,0.5093,0.61918 },5.89512};
					ambientMidCloud[] = {{ 0.2655,0.5093,0.61918 },5.89512};
					groundReflection[] = {{ 0.2655,0.61116,0.61918 },4.716096};
					groundReflectionCloud[] = {{ 0.2655,0.61116,0.61918 },4.716096};
					bidirect[] = {0.003195,0.005085,0.007239};
					bidirectCloud[] = {0.003195,0.005085,0.007239};
					sky[] = {{ 0.4312,0.31031,0.5175 },6.568848};
					skyAroundSun[] = {{ 0.4392,0.128744,0.03609 },13.3342};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 20;
					standardAvgLum = 70;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting30
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{ 0.77,0.5292,0.291 },10.208};
					diffuseCloud[] = {{ 0.77,0.5292,0.291 },10.208};
					ambient[] = {{ 0.285,0.5401,0.66234 },8.1664};
					ambientCloud[] = {{ 0.285,0.5401,0.66234 },8.1664};
					ambientMid[] = {{ 0.285,0.5401,0.66234 },8.57472};
					ambientMidCloud[] = {{ 0.285,0.5401,0.66234 },8.57472};
					groundReflection[] = {{ 0.285,0.64812,0.66234 },6.859776};
					groundReflectionCloud[] = {{ 0.285,0.64812,0.66234 },6.859776};
					bidirect[] = {0.003728,0.005933,0.008446};
					bidirectCloud[] = {0.003728,0.005933,0.008446};
					sky[] = {{ 0.42,0.37004,0.6507 },8.84268};
					skyAroundSun[] = {{ 0.424,0.206745,0.1188 },13.3342};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 20;
					apertureMax = 40;
					standardAvgLum = 120;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting31
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{ 0.77,0.65268,0.485 },11.484};
					diffuseCloud[] = {{ 0.77,0.65268,0.485 },11.484};
					ambient[] = {{ 0.315,0.574145,0.70965 },9.1872};
					ambientCloud[] = {{ 0.315,0.574145,0.70965 },9.1872};
					ambientMid[] = {{ 0.315,0.574145,0.70965 },9.64656};
					ambientMidCloud[] = {{ 0.315,0.574145,0.70965 },9.64656};
					groundReflection[] = {{ 0.315,0.688974,0.70965 },7.717248};
					groundReflectionCloud[] = {{ 0.315,0.688974,0.70965 },7.717248};
					bidirect[] = {0.00426,0.00678,0.009652};
					bidirectCloud[] = {0.00426,0.00678,0.009652};
					sky[] = {{ 0.408,0.437085,0.62163 },10.77965};
					skyAroundSun[] = {{ 0.412,0.437976,0.42435 },13.9403};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 25;
					apertureMax = 85;
					standardAvgLum = 450;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting32
				{
					height = -0.001;
					overcast = 0.4;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{ 0.77,0.882,0.97 },12.76};
					diffuseCloud[] = {{ 0.77,0.882,0.97 },12.76};
					ambient[] = {{ 0.3,0.605,0.747 },10.208};
					ambientCloud[] = {{ 0.3,0.605,0.747 },10.208};
					ambientMid[] = {{ 0.3,0.605,0.747 },10.7184};
					ambientMidCloud[] = {{ 0.3,0.605,0.747 },10.7184};
					groundReflection[] = {{ 0.3,0.726,0.747 },8.57472};
					groundReflectionCloud[] = {{ 0.3,0.726,0.747 },8.57472};
					bidirect[] = {0.00426,0.00678,0.009652};
					bidirectCloud[] = {0.00426,0.00678,0.009652};
					sky[] = {{ 0.4,0.55,0.9 },11.2288};
					skyAroundSun[] = {{ 0.4,0.385,0.45 },15.1525};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 1;
				};
				class Lighting33
				{
					height = -60;
					overcast = 0.4;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0.0165,0.19208,0.679};
					diffuseCloud[] = {0.0165,0.19208,0.679};
					ambient[] = {0.0075,0.0968,0.4482};
					ambientCloud[] = {0.0075,0.0968,0.4482};
					ambientMid[] = {0.0075,0.0968,0.4482};
					ambientMidCloud[] = {0.0075,0.0968,0.4482};
					groundReflection[] = {0.0075,0.0968,0.4482};
					groundReflectionCloud[] = {0.0075,0.0968,0.4482};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.001273,0.001838,0.004057};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.3,0.4,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting34
				{
					height = -60;
					overcast = 0.4;
					sunAngle = -10;
					sunOrMoon = 0;
					diffuse[] = {{ 0.0385,0.24696,0.97 },1.12};
					diffuseCloud[] = {{ 0.0385,0.24696,0.97 },1.12};
					ambient[] = {0.0075,0.0968,0.4482};
					ambientCloud[] = {0.0075,0.0968,0.4482};
					ambientMid[] = {0.0075,0.0968,0.4482};
					ambientMidCloud[] = {0.0075,0.0968,0.4482};
					groundReflection[] = {0.0075,0.0968,0.4482};
					groundReflectionCloud[] = {0.0075,0.0968,0.4482};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.004316,0.006232,0.013752 },0.011229};
					skyAroundSun[] = {0.004332,0.005212,0.009138};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.39508;
					apertureStandard = 7.22;
					apertureMax = 18.05;
					standardAvgLum = 1.8;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting35
				{
					height = -60;
					overcast = 0.4;
					sunAngle = -9;
					sunOrMoon = 0;
					diffuse[] = {{ 0.0385,0.24696,0.97 },0.96};
					diffuseCloud[] = {{ 0.0385,0.24696,0.97 },0.96};
					ambient[] = {{ 0.0075,0.0968,0.1328 },1.3824};
					ambientCloud[] = {{ 0.0075,0.0968,0.1328 },1.3824};
					ambientMid[] = {{ 0.0075,0.0968,0.1328 },1.10592};
					ambientMidCloud[] = {{ 0.0075,0.0968,0.1328 },1.10592};
					groundReflection[] = {{ 0.0075,0.0968,0.1328 },0.884736};
					groundReflectionCloud[] = {{ 0.0075,0.0968,0.1328 },0.884736};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.014632,0.021125,0.034815};
					skyAroundSun[] = {{ 0.00456,0.005486,0.009619 },0.392};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.546;
					apertureStandard = 7.6;
					apertureMax = 19;
					standardAvgLum = 3;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting36
				{
					height = -60;
					overcast = 0.4;
					sunAngle = -8;
					sunOrMoon = 0;
					diffuse[] = {{ 0.0385,0.24696,0.97 },0.8};
					diffuseCloud[] = {{ 0.0385,0.24696,0.97 },0.8};
					ambient[] = {{ 0.015,0.06776,0.12699 },1.152};
					ambientCloud[] = {{ 0.015,0.06776,0.12699 },1.152};
					ambientMid[] = {{ 0.015,0.06776,0.12699 },0.9216};
					ambientMidCloud[] = {{ 0.015,0.06776,0.12699 },0.9216};
					groundReflection[] = {{ 0.015,0.06776,0.12699 },0.73728};
					groundReflectionCloud[] = {{ 0.015,0.06776,0.12699 },0.73728};
					bidirect[] = {1.6e-005,2.5e-005,3.6e-005};
					bidirectCloud[] = {1.6e-005,2.5e-005,3.6e-005};
					sky[] = {{ 0.0496,0.07161,0.118017 },0.014036};
					skyAroundSun[] = {{ 0.0048,0.005775,0.010125 },1.781934};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 5;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 4;
				};
				class Lighting37
				{
					height = -60;
					overcast = 0.4;
					sunAngle = -6;
					sunOrMoon = 0;
					diffuse[] = {{ 0.0385,0.24696,0.97 },0.68};
					diffuseCloud[] = {{ 0.0385,0.24696,0.97 },0.68};
					ambient[] = {{ 0.0225,0.0968,0.18675 },0.9792};
					ambientCloud[] = {{ 0.0225,0.0968,0.18675 },0.9792};
					ambientMid[] = {{ 0.0225,0.0968,0.18675 },0.78336};
					ambientMidCloud[] = {{ 0.0225,0.0968,0.18675 },0.78336};
					groundReflection[] = {{ 0.0225,0.0968,0.18675 },0.626688};
					groundReflectionCloud[] = {{ 0.0225,0.0968,0.18675 },0.626688};
					bidirect[] = {0.00016,0.000254,0.000362};
					bidirectCloud[] = {0.00016,0.000254,0.000362};
					sky[] = {{ 0.16,0.231,0.3807 },0.84216};
					skyAroundSun[] = {{ 0.048,0.05775,0.10125 },4.751824};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.8;
					apertureStandard = 9;
					apertureMax = 20;
					standardAvgLum = 10;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 3;
				};
				class Lighting38
				{
					height = -60;
					overcast = 0.4;
					sunAngle = -2;
					sunOrMoon = 0.5;
					diffuse[] = {{ 0.077,0.15876,0.3007 },0.638};
					diffuseCloud[] = {{ 0.077,0.15876,0.3007 },0.638};
					ambient[] = {{ 0.075,0.242,0.4482 },1.1484};
					ambientCloud[] = {{ 0.075,0.242,0.4482 },1.1484};
					ambientMid[] = {{ 0.075,0.242,0.4482 },0.91872};
					ambientMidCloud[] = {{ 0.075,0.242,0.4482 },0.91872};
					groundReflection[] = {{ 0.075,0.242,0.4482 },0.734976};
					groundReflectionCloud[] = {{ 0.075,0.242,0.4482 },0.734976};
					bidirect[] = {0.000373,0.000593,0.000845};
					bidirectCloud[] = {0.000373,0.000593,0.000845};
					sky[] = {{ 0.32,0.33,0.423 },3.045812};
					skyAroundSun[] = {{ 0.12,0.10395,0.09 },8.90967};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 2;
				};
				class Lighting39
				{
					height = -60;
					overcast = 0.4;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{ 0.3465,0.24696,0.2134 },2.4244};
					diffuseCloud[] = {{ 0.3465,0.24696,0.2134 },2.4244};
					ambient[] = {{ 0.15,0.376068,0.562491 },3.927528};
					ambientCloud[] = {{ 0.15,0.376068,0.562491 },3.927528};
					ambientMid[] = {{ 0.15,0.376068,0.562491 },3.142022};
					ambientMidCloud[] = {{ 0.15,0.376068,0.562491 },3.142022};
					groundReflection[] = {{ 0.15,0.376068,0.562491 },2.513618};
					groundReflectionCloud[] = {{ 0.15,0.376068,0.562491 },2.513618};
					bidirect[] = {0.001065,0.001695,0.002413};
					bidirectCloud[] = {0.001065,0.001695,0.002413};
					sky[] = {{ 0.52,0.44,0.4239 },4.10553};
					skyAroundSun[] = {{ 0.3,0.09625,0.02997 },9.652143};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 1;
				};
				class Lighting40
				{
					height = -60;
					overcast = 0.4;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{ 0.385,0.37044,0.194 },3.509};
					diffuseCloud[] = {{ 0.385,0.37044,0.194 },3.509};
					ambient[] = {{ 0.13275,0.40744,0.61918 },5.05296};
					ambientCloud[] = {{ 0.13275,0.40744,0.61918 },5.05296};
					ambientMid[] = {{ 0.13275,0.40744,0.61918 },4.042368};
					ambientMidCloud[] = {{ 0.13275,0.40744,0.61918 },4.042368};
					groundReflection[] = {{ 0.13275,0.40744,0.61918 },3.233894};
					groundReflectionCloud[] = {{ 0.13275,0.40744,0.61918 },3.233894};
					bidirect[] = {0.001598,0.002543,0.00362};
					bidirectCloud[] = {0.001598,0.002543,0.00362};
					sky[] = {{ 0.4312,0.4433,0.5175 },6.568848};
					skyAroundSun[] = {{ 0.4392,0.128744,0.03609 },11.87956};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 20;
					standardAvgLum = 70;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting41
				{
					height = -60;
					overcast = 0.4;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{ 0.385,0.5292,0.291 },5.104};
					diffuseCloud[] = {{ 0.385,0.5292,0.291 },5.104};
					ambient[] = {{ 0.1425,0.43208,0.66234 },7.34976};
					ambientCloud[] = {{ 0.1425,0.43208,0.66234 },7.34976};
					ambientMid[] = {{ 0.1425,0.43208,0.66234 },5.879808};
					ambientMidCloud[] = {{ 0.1425,0.43208,0.66234 },5.879808};
					groundReflection[] = {{ 0.1425,0.43208,0.66234 },4.703846};
					groundReflectionCloud[] = {{ 0.1425,0.43208,0.66234 },4.703846};
					bidirect[] = {0.001864,0.002966,0.004223};
					bidirectCloud[] = {0.001864,0.002966,0.004223};
					sky[] = {{ 0.42,0.46255,0.6507 },8.84268};
					skyAroundSun[] = {{ 0.424,0.206745,0.1188 },13.06752};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 20;
					apertureMax = 40;
					standardAvgLum = 120;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting42
				{
					height = -60;
					overcast = 0.4;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{ 0.385,0.65268,0.485 },5.742};
					diffuseCloud[] = {{ 0.385,0.65268,0.485 },5.742};
					ambient[] = {{ 0.1575,0.459316,0.70965 },8.26848};
					ambientCloud[] = {{ 0.1575,0.459316,0.70965 },8.26848};
					ambientMid[] = {{ 0.1575,0.459316,0.70965 },6.614784};
					ambientMidCloud[] = {{ 0.1575,0.459316,0.70965 },6.614784};
					groundReflection[] = {{ 0.1575,0.459316,0.70965 },5.291827};
					groundReflectionCloud[] = {{ 0.1575,0.459316,0.70965 },5.291827};
					bidirect[] = {0.00213,0.00339,0.004826};
					bidirectCloud[] = {0.00213,0.00339,0.004826};
					sky[] = {{ 0.408,0.48565,0.62163 },10.77965};
					skyAroundSun[] = {{ 0.412,0.437976,0.42435 },13.66149};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 25;
					apertureMax = 85;
					standardAvgLum = 450;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 1;
				};
				class Lighting43
				{
					height = -60;
					overcast = 0.4;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{ 0.385,0.882,0.97 },6.38};
					diffuseCloud[] = {{ 0.385,0.882,0.97 },6.38};
					ambient[] = {{ 0.15,0.484,0.747 },9.1872};
					ambientCloud[] = {{ 0.15,0.484,0.747 },9.1872};
					ambientMid[] = {{ 0.15,0.484,0.747 },7.34976};
					ambientMidCloud[] = {{ 0.15,0.484,0.747 },7.34976};
					groundReflection[] = {{ 0.15,0.484,0.747 },5.879808};
					groundReflectionCloud[] = {{ 0.15,0.484,0.747 },5.879808};
					bidirect[] = {0.00213,0.00339,0.004826};
					bidirectCloud[] = {0.00213,0.00339,0.004826};
					sky[] = {{ 0.4,0.55,0.9 },11.2288};
					skyAroundSun[] = {{ 0.4,0.385,0.45 },14.84945};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 1;
				};
				class Lighting44
				{
					height = -160;
					overcast = 0.4;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0.00825,0.19208,0.679};
					diffuseCloud[] = {0.00825,0.19208,0.679};
					ambient[] = {0.00375,0.07744,0.4482};
					ambientCloud[] = {0.00375,0.07744,0.4482};
					ambientMid[] = {0.00375,0.07744,0.4482};
					ambientMidCloud[] = {0.00375,0.07744,0.4482};
					groundReflection[] = {0.00375,0.07744,0.4482};
					groundReflectionCloud[] = {0.00375,0.07744,0.4482};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.001273,0.001838,0.004057};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.3,0.4,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting45
				{
					height = -160;
					overcast = 0.4;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{ 0.03465,0.148176,0.2134 },0.72732};
					diffuseCloud[] = {{ 0.03465,0.148176,0.2134 },0.72732};
					ambient[] = {{ 0.01,0.300854,0.562491 },2.552893};
					ambientCloud[] = {{ 0.01,0.300854,0.562491 },2.552893};
					ambientMid[] = {{ 0.01,0.300854,0.562491 },2.042315};
					ambientMidCloud[] = {{ 0.01,0.300854,0.562491 },2.042315};
					groundReflection[] = {{ 0.01,0.300854,0.562491 },1.633852};
					groundReflectionCloud[] = {{ 0.01,0.300854,0.562491 },1.633852};
					bidirect[] = {0,0.05,0.07};
					bidirectCloud[] = {0,0.05,0.07};
					sky[] = {{ 0.52,0.44,0.4239 },1.642212};
					skyAroundSun[] = {{ 0.3,0.09625,0.02997 },9.652143};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 1;
				};
				class Lighting46
				{
					height = -160;
					overcast = 0.4;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{ 0.0385,0.5292,0.97 },1.914};
					diffuseCloud[] = {{ 0.0385,0.5292,0.97 },1.914};
					ambient[] = {{ 0.01,0.3872,0.747 },5.97168};
					ambientCloud[] = {{ 0.01,0.3872,0.747 },5.97168};
					ambientMid[] = {{ 0.01,0.3872,0.747 },4.777344};
					ambientMidCloud[] = {{ 0.01,0.3872,0.747 },4.777344};
					groundReflection[] = {{ 0.01,0.3872,0.747 },3.821875};
					groundReflectionCloud[] = {{ 0.01,0.3872,0.747 },3.821875};
					bidirect[] = {0,0.05,0.07};
					bidirectCloud[] = {0,0.05,0.07};
					sky[] = {{ 0.4,0.55,0.9 },7.29872};
					skyAroundSun[] = {{ 0.4,0.385,0.45 },14.84945};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 1;
				};
				class Lighting47
				{
					height = -250;
					overcast = 0.4;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0.0005,0.001,0.001};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.0004,0.0008,0.0008};
					ambientCloud[] = {0,0,0};
					ambientMid[] = {0.000375,0.00075,0.00075};
					ambientMidCloud[] = {0,0,0};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0,0.002,0.003};
					skyAroundSun[] = {0,0.002,0.003};
					fogColor[] = {0,0,0};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.3,0.4,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting48
				{
					height = -250;
					overcast = 0.4;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {0.4,0.5,0.5};
					diffuseCloud[] = {0.2,0.5,0.5};
					ambient[] = {0.1,0.2,0.2};
					ambientCloud[] = {0,0.5,1};
					ambientMid[] = {0.1,0.2,0.2};
					ambientMidCloud[] = {0,0.5,1};
					groundReflection[] = {0,0.45,0.4};
					groundReflectionCloud[] = {0.3,0.3,0.3};
					bidirect[] = {0,0.05,0.07};
					bidirectCloud[] = {0.03,0.03,0.03};
					sky[] = {{ 0.1,0.64,1 },0.164221};
					skyAroundSun[] = {{ 0.5,0.64,1 },0.965214};
					fogColor[] = {0.05,0.05,0.05};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0.02;
					desiredLuminanceCoefCloud = 0.02;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 1;
				};
				class Lighting49
				{
					height = -250;
					overcast = 0.4;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {0,1,1};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0,0,0};
					ambientCloud[] = {0,0,0};
					ambientMid[] = {0,0,0};
					ambientMidCloud[] = {0,0,0};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.4,0.55,0.9 },7.29872};
					skyAroundSun[] = {{ 0.4,0.385,0.45 },18.94062};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 1;
				};
				class Lighting50
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.006372,0.056282,0.354294};
					ambientCloud[] = {0.005735,0.050653,0.318865};
					ambientMid[] = {0.005098,0.045025,0.283435};
					ambientMidCloud[] = {0.005098,0.045025,0.283435};
					groundReflection[] = {0.003008,0.041873,0.283435};
					groundReflectionCloud[] = {0.003008,0.041873,0.283435};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },0.000898};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.3,0.4,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting51
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -10;
					sunOrMoon = 0;
					diffuse[] = {0.05775,0.18522,0.7275};
					diffuseCloud[] = {0.051975,0.166698,0.65475};
					ambient[] = {0.001888,0.006064,0.017496};
					ambientCloud[] = {0.001699,0.005458,0.015746};
					ambientMid[] = {0.00151,0.004851,0.013997};
					ambientMidCloud[] = {0.00151,0.004851,0.013997};
					groundReflection[] = {0.000891,0.004512,0.013997};
					groundReflectionCloud[] = {0.000891,0.004512,0.013997};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },0.008983};
					skyAroundSun[] = {0.004332,0.005212,0.009138};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.39508;
					apertureStandard = 7.22;
					apertureMax = 18.05;
					standardAvgLum = 1.8;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 0;
				};
				class Lighting52
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -9;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.013688,0.021224,0.130248};
					ambientCloud[] = {0.012319,0.019102,0.117223};
					ambientMid[] = {0.01095,0.016979,0.104198};
					ambientMidCloud[] = {0.01095,0.016979,0.104198};
					groundReflection[] = {0.006461,0.015791,0.104198};
					groundReflectionCloud[] = {0.006461,0.015791,0.104198};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.32,0.2,0.25};
					skyAroundSun[] = {{ 0.00456,0.005486,0.009619 },0.4};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.546;
					apertureStandard = 7.6;
					apertureMax = 19;
					standardAvgLum = 3;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 0;
				};
				class Lighting53
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -8;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.022184,0.0306,0.0549};
					ambientCloud[] = {0.019966,0.02754,0.04941};
					ambientMid[] = {0.017747,0.02448,0.04392};
					ambientMidCloud[] = {0.017747,0.02448,0.04392};
					groundReflection[] = {0.010471,0.022766,0.04392};
					groundReflectionCloud[] = {0.010471,0.022766,0.04392};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },0.011229};
					skyAroundSun[] = {{ 0.0048,0.005775,0.010125 },1.8183};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 5;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 0;
				};
				class Lighting54
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -6;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{ 0.022184,0.0455,0.08 },0.368509};
					ambientCloud[] = {{ 0.019966,0.04095,0.072 },0.331658};
					ambientMid[] = {{ 0.017747,0.0364,0.064 },0.331658};
					ambientMidCloud[] = {{ 0.017747,0.0364,0.064 },0.331658};
					groundReflection[] = {{ 0.010471,0.033852,0.064 },0.265326};
					groundReflectionCloud[] = {{ 0.010471,0.033852,0.064 },0.265326};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },0.757944};
					skyAroundSun[] = {{ 0.048,0.05775,0.10125 },4.8488};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.8;
					apertureStandard = 9;
					apertureMax = 20;
					standardAvgLum = 10;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 0;
				};
				class Lighting55
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -2;
					sunOrMoon = 0.5;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{ 0.07,0.0775,0.086 },3.938438};
					ambientCloud[] = {{ 0.063,0.06975,0.0774 },3.544594};
					ambientMid[] = {{ 0.056,0.062,0.0688 },3.544594};
					ambientMidCloud[] = {{ 0.056,0.062,0.0688 },3.544594};
					groundReflection[] = {{ 0.03304,0.05766,0.0688 },2.835675};
					groundReflectionCloud[] = {{ 0.03304,0.05766,0.0688 },2.835675};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },2.893521};
					skyAroundSun[] = {{ 0.12,0.10395,0.09 },9.0915};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 0;
				};
				class Lighting56
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{ 0,0,0 },0.436392};
					diffuseCloud[] = {{ 0,0,0 },0.392753};
					ambient[] = {{ 0.097704,0.13,0.215 },4.145724};
					ambientCloud[] = {{ 0.087934,0.117,0.1935 },3.731152};
					ambientMid[] = {{ 0.078163,0.104,0.172 },3.731152};
					ambientMidCloud[] = {{ 0.078163,0.104,0.172 },3.731152};
					groundReflection[] = {{ 0.046116,0.09672,0.172 },2.984921};
					groundReflectionCloud[] = {{ 0.046116,0.09672,0.172 },2.984921};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },4.10553};
					skyAroundSun[] = {{ 0.3,0.09625,0.02997 },9.849125};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 1;
				};
				class Lighting57
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{ 0.7,0.9,1 },0.94743};
					diffuseCloud[] = {{ 0.63,0.81,0.9 },0.852687};
					ambient[] = {{ 0.140184,0.2082,0.3654 },4.875317};
					ambientCloud[] = {{ 0.126166,0.18738,0.32886 },4.387785};
					ambientMid[] = {{ 0.112147,0.16656,0.29232 },4.387785};
					ambientMidCloud[] = {{ 0.112147,0.16656,0.29232 },4.387785};
					groundReflection[] = {{ 0.066167,0.154901,0.29232 },3.510228};
					groundReflectionCloud[] = {{ 0.066167,0.154901,0.29232 },3.510228};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },6.240406};
					skyAroundSun[] = {{ 0.4392,0.128744,0.03609 },13.3342};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 20;
					standardAvgLum = 70;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 0;
				};
				class Lighting58
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{ 0.7,0.9,1 },1.83744};
					diffuseCloud[] = {{ 0.63,0.81,0.9 },1.653696};
					ambient[] = {{ 0.186912,0.28795,0.4361 },6.818625};
					ambientCloud[] = {{ 0.168221,0.259155,0.39249 },6.136763};
					ambientMid[] = {{ 0.14953,0.23036,0.34888 },6.136763};
					ambientMidCloud[] = {{ 0.14953,0.23036,0.34888 },6.136763};
					groundReflection[] = {{ 0.088222,0.214235,0.34888 },4.90941};
					groundReflectionCloud[] = {{ 0.088222,0.214235,0.34888 },4.90941};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },7.958412};
					skyAroundSun[] = {{ 0.424,0.206745,0.1188 },13.3342};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 20;
					apertureMax = 40;
					standardAvgLum = 120;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 0;
				};
				class Lighting59
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{ 0.7,0.9,1 },3.10068};
					diffuseCloud[] = {{ 0.63,0.81,0.9 },2.790612};
					ambient[] = {{ 0.225144,0.364,0.4942 },6.818625};
					ambientCloud[] = {{ 0.20263,0.3276,0.44478 },6.136763};
					ambientMid[] = {{ 0.180115,0.2912,0.39536 },6.136763};
					ambientMidCloud[] = {{ 0.180115,0.2912,0.39536 },6.136763};
					groundReflection[] = {{ 0.106268,0.270816,0.39536 },4.90941};
					groundReflectionCloud[] = {{ 0.106268,0.270816,0.39536 },4.90941};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },9.162701};
					skyAroundSun[] = {{ 0.412,0.437976,0.42435 },13.9403};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 25;
					apertureMax = 85;
					standardAvgLum = 450;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 0;
				};
				class Lighting60
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{ 0.7,0.9,1 },4.5936};
					diffuseCloud[] = {{ 0.63,0.81,0.9 },4.13424};
					ambient[] = {{ 0.284734,0.4158,0.46144 },8.7725};
					ambientCloud[] = {{ 0.256261,0.37422,0.415296 },7.89525};
					ambientMid[] = {{ 0.227787,0.33264,0.369152 },7.89525};
					ambientMidCloud[] = {{ 0.227787,0.33264,0.369152 },7.89525};
					groundReflection[] = {{ 0.134395,0.309355,0.369152 },6.3162};
					groundReflectionCloud[] = {{ 0.134395,0.309355,0.369152 },6.3162};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },8.98304};
					skyAroundSun[] = {{ 0.4,0.385,0.45 },15.1525};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 1;
				};
				class Lighting61
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.003186,0.028141,0.177147};
					ambientCloud[] = {0.003186,0.028141,0.177147};
					ambientMid[] = {0.002549,0.022513,0.141718};
					ambientMidCloud[] = {0.002549,0.022513,0.141718};
					groundReflection[] = {0.001504,0.020937,0.141718};
					groundReflectionCloud[] = {0.001504,0.020937,0.141718};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },0.000629};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.3,0.4,1 },13.61492};
					swBrightness = 5;
				};
				class Lighting62
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -10;
					sunOrMoon = 0;
					diffuse[] = {0.028875,0.18522,0.7275};
					diffuseCloud[] = {0.028875,0.18522,0.7275};
					ambient[] = {0.000944,0.003032,0.008748};
					ambientCloud[] = {0.000944,0.003032,0.008748};
					ambientMid[] = {0.000755,0.002426,0.006998};
					ambientMidCloud[] = {0.000755,0.002426,0.006998};
					groundReflection[] = {0.000446,0.002256,0.006998};
					groundReflectionCloud[] = {0.000446,0.002256,0.006998};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },0.006288};
					skyAroundSun[] = {0.004332,0.005212,0.009138};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.39508;
					apertureStandard = 7.22;
					apertureMax = 18.05;
					standardAvgLum = 1.8;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 0;
				};
				class Lighting63
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -9;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.006844,0.010612,0.065124};
					ambientCloud[] = {0.006844,0.010612,0.065124};
					ambientMid[] = {0.005475,0.00849,0.052099};
					ambientMidCloud[] = {0.005475,0.00849,0.052099};
					groundReflection[] = {0.00323,0.007895,0.052099};
					groundReflectionCloud[] = {0.00323,0.007895,0.052099};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.32,0.2,0.25};
					skyAroundSun[] = {{ 0.00456,0.005486,0.009619 },0.392};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.546;
					apertureStandard = 7.6;
					apertureMax = 19;
					standardAvgLum = 3;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 0;
				};
				class Lighting64
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -8;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.011092,0.0153,0.02745};
					ambientCloud[] = {0.011092,0.0153,0.02745};
					ambientMid[] = {0.008874,0.01224,0.02196};
					ambientMidCloud[] = {0.008874,0.01224,0.02196};
					groundReflection[] = {0.005235,0.011383,0.02196};
					groundReflectionCloud[] = {0.005235,0.011383,0.02196};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },0.00786};
					skyAroundSun[] = {{ 0.0048,0.005775,0.010125 },1.781934};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 5;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 0;
				};
				class Lighting65
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -6;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{ 0.011092,0.02275,0.04 },0.294807};
					ambientCloud[] = {{ 0.011092,0.02275,0.04 },0.294807};
					ambientMid[] = {{ 0.008874,0.0182,0.032 },0.265326};
					ambientMidCloud[] = {{ 0.008874,0.0182,0.032 },0.265326};
					groundReflection[] = {{ 0.005235,0.016926,0.032 },0.159196};
					groundReflectionCloud[] = {{ 0.005235,0.016926,0.032 },0.159196};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },0.530561};
					skyAroundSun[] = {{ 0.048,0.05775,0.10125 },4.751824};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.8;
					apertureStandard = 9;
					apertureMax = 20;
					standardAvgLum = 10;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 0;
				};
				class Lighting66
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -2;
					sunOrMoon = 0.5;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{ 0.035,0.03875,0.043 },3.15075};
					ambientCloud[] = {{ 0.035,0.03875,0.043 },3.15075};
					ambientMid[] = {{ 0.028,0.031,0.0344 },2.835675};
					ambientMidCloud[] = {{ 0.028,0.031,0.0344 },2.835675};
					groundReflection[] = {{ 0.01652,0.02883,0.0344 },1.701405};
					groundReflectionCloud[] = {{ 0.01652,0.02883,0.0344 },1.701405};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },2.025465};
					skyAroundSun[] = {{ 0.12,0.10395,0.09 },8.90967};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },11};
					swBrightness = 0;
				};
				class Lighting67
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{ 0,0,0 },0.218196};
					diffuseCloud[] = {{ 0,0,0 },0.218196};
					ambient[] = {{ 0.048852,0.065,0.1075 },3.316579};
					ambientCloud[] = {{ 0.048852,0.065,0.1075 },3.316579};
					ambientMid[] = {{ 0.039082,0.052,0.086 },2.984921};
					ambientMidCloud[] = {{ 0.039082,0.052,0.086 },2.984921};
					groundReflection[] = {{ 0.023058,0.04836,0.086 },1.790953};
					groundReflectionCloud[] = {{ 0.023058,0.04836,0.086 },1.790953};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },2.873871};
					skyAroundSun[] = {{ 0.3,0.09625,0.02997 },9.652143};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },12};
					swBrightness = 1;
				};
				class Lighting68
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{ 0.35,0.9,1 },0.473715};
					diffuseCloud[] = {{ 0.35,0.9,1 },0.473715};
					ambient[] = {{ 0.070092,0.1041,0.1827 },3.900254};
					ambientCloud[] = {{ 0.070092,0.1041,0.1827 },3.900254};
					ambientMid[] = {{ 0.056074,0.08328,0.14616 },3.510228};
					ambientMidCloud[] = {{ 0.056074,0.08328,0.14616 },3.510228};
					groundReflection[] = {{ 0.033083,0.07745,0.14616 },2.106137};
					groundReflectionCloud[] = {{ 0.033083,0.07745,0.14616 },2.106137};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },4.368284};
					skyAroundSun[] = {{ 0.4392,0.128744,0.03609 },11.87956};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 20;
					standardAvgLum = 70;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 0;
				};
				class Lighting69
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{ 0.35,0.9,1 },0.91872};
					diffuseCloud[] = {{ 0.35,0.9,1 },0.91872};
					ambient[] = {{ 0.093456,0.143975,0.21805 },5.4549};
					ambientCloud[] = {{ 0.093456,0.143975,0.21805 },5.4549};
					ambientMid[] = {{ 0.074765,0.11518,0.17444 },4.90941};
					ambientMidCloud[] = {{ 0.074765,0.11518,0.17444 },4.90941};
					groundReflection[] = {{ 0.044111,0.107117,0.17444 },2.945646};
					groundReflectionCloud[] = {{ 0.044111,0.107117,0.17444 },2.945646};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },5.570889};
					skyAroundSun[] = {{ 0.424,0.206745,0.1188 },13.06752};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 20;
					apertureMax = 40;
					standardAvgLum = 120;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 0;
				};
				class Lighting70
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{ 0.35,0.9,1 },1.55034};
					diffuseCloud[] = {{ 0.35,0.9,1 },1.55034};
					ambient[] = {{ 0.112572,0.182,0.2471 },5.4549};
					ambientCloud[] = {{ 0.112572,0.182,0.2471 },5.4549};
					ambientMid[] = {{ 0.090058,0.1456,0.19768 },4.90941};
					ambientMidCloud[] = {{ 0.090058,0.1456,0.19768 },4.90941};
					groundReflection[] = {{ 0.053134,0.135408,0.19768 },2.945646};
					groundReflectionCloud[] = {{ 0.053134,0.135408,0.19768 },2.945646};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },6.41389};
					skyAroundSun[] = {{ 0.412,0.437976,0.42435 },13.66149};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 25;
					apertureMax = 85;
					standardAvgLum = 450;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{ 0.8,0.81,1 },13};
					swBrightness = 0;
				};
				class Lighting71
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{ 0.35,0.9,1 },2.2968};
					diffuseCloud[] = {{ 0.35,0.9,1 },2.2968};
					ambient[] = {{ 0.142367,0.2079,0.23072 },7.018};
					ambientCloud[] = {{ 0.142367,0.2079,0.23072 },7.018};
					ambientMid[] = {{ 0.113894,0.16632,0.184576 },6.3162};
					ambientMidCloud[] = {{ 0.113894,0.16632,0.184576 },6.3162};
					groundReflection[] = {{ 0.067197,0.154678,0.184576 },3.78972};
					groundReflectionCloud[] = {{ 0.067197,0.154678,0.184576 },3.78972};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{ 0.32,0.2,0.25 },6.288128};
					skyAroundSun[] = {{ 0.4,0.385,0.45 },14.84945};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{ 0.8,0.81,1 },13.61492};
					swBrightness = 1;
				};
			};
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0.0;
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
					sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_veryclear_lco.paa";
					horizon = "A3\Map_Stratis\Data\sky_veryclear_horizont_sky.paa";
				};
				class Weather7: Weather1
				{
					sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
					horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
				};
				class Weather2: Weather2
				{
					sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_almostclear_lco.paa";
					horizon = "A3\Map_Stratis\Data\sky_almostclear_horizont_sky.paa";
				};
				class Weather3: Weather3
				{
					sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_semicloudy_lco.paa";
					horizon = "A3\Map_Stratis\Data\sky_semicloudy_horizont_sky.paa";
				};
				class Weather4: Weather4
				{
					sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
					horizon = "A3\Map_Stratis\Data\sky_cloudy_horizont_sky.paa";
				};
				class Weather5: Weather5
				{
					sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_mostlycloudy_lco.paa";
					horizon = "A3\Map_Stratis\Data\sky_mostlycloudy_horizont_sky.paa";
				};
				class Weather6: Weather6
				{
					sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
					horizon = "A3\Map_Stratis\Data\sky_overcast_horizont_sky.paa";
				};
			};
		};
		humidityUpCoef = 0.1;
		humidityDownCoef = 0.05;
		class SimulWeather
		{
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000.0;
			fadeMaxAltitudeKm = 15.0;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 0;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 64;
			cloudGridLength = 64;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 160000;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 10;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4.0;
			opticalDensity = 1.5;
			alphaSharpness = 0.5;
			selfShadowScale = 0.05;
			mieAsymmetry = 0.87;
			minimumLightElevationDegrees = 1.0;
			directLightCoef = 0.25;
			indirectLightCoef = 0.025;
			fogStart = 0;
			fogEnd = 2000;
			fogHeight = 2000;
			class DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 30;
				hazeBaseKm = 5.0;
				hazeScaleKm = 1.0;
				hazeEccentricity = 1;
				brightnessAdjustment = 1.0;
				cloudiness = 0.6;
				cloudBaseKm = 0.85;
				cloudHeightKm = 8.0;
				directLight = 0.4;
				indirectLight = 1.0;
				ambientLight = 3.0;
				noiseOctaves = 5;
				noisePersistence = 1.0;
				fractalAmplitude = 2.8;
				fractalWavelength = 190.0;
				extinction = 5.0;
				diffusivity = 0.001;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0.0;
					cloudiness = 0.0;
					seqFileKeyframe = 0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
					cloudiness = 0.3;
					diffusivity = 0.5;
					seqFileKeyframe = 0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					cloudiness = 0.3;
					seqFileKeyframe = 3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.5;
					cloudiness = 0.4;
					seqFileKeyframe = 4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					cloudiness = 0.9;
					seqFileKeyframe = 5;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1.0;
					cloudiness = 1.0;
					seqFileKeyframe = 7;
				};
			};
		};
		clutterGrid = 1.0;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "cla\clafghan\data\cla_cg_middle_mco.paa";
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 3;
		class Clutter
		{
			class cla_cg_grassautumn: DefaultClutter
			{
				model = "ca\plants2\clutter\c_grassautumn_t.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.0;
			};
			class cla_cg_GrassGreen: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_GrassGreen_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.1;
			};
			class cla_cg_GrassGreenLong: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_GrassGreenLong_EP1.p3d";
				affectedByWind = 0.8;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.0;
			};
			class cla_cg_GrassDry: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_GrassDesert_GroupSoft_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class cla_cg_GrassDryLong: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_GrassDryLong_EP1.p3d";
				affectedByWind = 0.85;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.0;
			};
			class cla_cg_Plants_HSS: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Plants_HightSingleSoft_EP1.p3d";
				affectedByWind = 0.85;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.0;
			};
			class cla_cg_BrushSoft: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d";
				affectedByWind = 0.8;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.4;
			};
			class cla_cg_PlantsViolet: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Plants_Violet_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.25;
			};
			class cla_cg_PlantsWhite: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Plants_White_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.1;
			};
			class cla_cg_SMGC: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_StoneMiddleGroupCamp_EP1.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.4;
			};
			class cla_cg_grassclump: DefaultClutter
			{
				model = "razmisc\grassclump.p3d";
				affectedByWind = 0.1;
				scaleMin = 0.3;
				scaleMax = 0.9;
			};
			class cla_cg_browngrassClutter: DefaultClutter
			{
				model = "razmisc\clutter_grass_brown.p3d";
				affectedByWind = 0.1;
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			class cla_cg_riverbedClutter: DefaultClutter
			{
				model = "razmisc\Stone6_clutter.p3d";
				affectedByWind = 0;
				scaleMin = 0.5;
				scaleMax = 1.3;
			};
			class cla_cg_riverbedClutter2: DefaultClutter
			{
				model = "razmisc\Stone5_clutter.p3d";
				affectedByWind = 0;
				scaleMin = 0.5;
				scaleMax = 1.2;
			};
			class cla_cg_grass_desert_mix: DefaultClutter
			{
				model = "opxplants\grass_desert_mix.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class cla_cg_grass_desert: DefaultClutter
			{
				model = "opxplants\grass_desert.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class cla_cg_grass_desert2: DefaultClutter
			{
				model = "opxplants\grass_desert2.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class cla_cg_GrassLush01: DefaultClutter
			{
				model = "mikebart\mb_veg\mb_clutter\mb_c_grassLush01.p3d";
				affectedByWind = 0.6;
				scaleMin = 0.6;
				scaleMax = 1;
			};
			class cla_cg_GrassShort01: DefaultClutter
			{
				model = "mikebart\mb_veg\mb_clutter\mb_c_grassShort01.p3d";
				affectedByWind = 0.6;
				scaleMin = 0.6;
				scaleMax = 1;
			};
			class cla_cg_GrassTall01: DefaultClutter
			{
				model = "mikebart\mb_veg\mb_clutter\mb_c_grassTall01.p3d";
				affectedByWind = 0.6;
				scaleMin = 0.6;
				scaleMax = 1;
			};
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
		class Names
		{
			class Ovallestan
			{
				name = "OvallestĂˇn";
				position[] = {12564.8,16557.6};
				type = "NameCityCapital";
				radiusA = 1500;
				radiusB = 1500;
			};
			class AcityC_Ovallestan
			{
				name = "";
				position[] = {12564.8,16557.6};
				type = "CityCenter";
				radiusA = 1500;
				radiusB = 1500;
				neighbors[] = {"AcityC_Kepsora","AcityC_Sulakhira","AcityC_Agresoran","AcityC_Lotohafaz"};
			};
			class Camp_Branca
			{
				name = "Camp Branca";
				position[] = {15653.8,17235.4};
				type = "Name";
				radiusA = 250;
				radiusB = 350;
			};
			class Yanotabir
			{
				name = "Yanotabir";
				position[] = {9646.43,16449.7};
				type = "NameVillage";
				radiusA = 750;
				radiusB = 750;
			};
			class AcityC_Yanotabir
			{
				name = "";
				position[] = {9646.43,16449.7};
				type = "CityCenter";
				radiusA = 750;
				radiusB = 750;
				neighbors[] = {"AcityC_Gonzalabad","AcityC_Sulakhira","AcityC_Agresoran","AcityC_Scarzirah","AcityC_Demenazhir"};
			};
			class Lotohafaz
			{
				name = "Lotohafaz";
				position[] = {18713.1,19266.8};
				type = "NameVillage";
				radiusA = 450;
				radiusB = 300;
			};
			class AcityC_Lotohafaz
			{
				name = "";
				position[] = {18713.1,19266.8};
				type = "CityCenter";
				radiusA = 450;
				radiusB = 300;
				neighbors[] = {"AcityC_Ovallestan"};
			};
			class Agresoran
			{
				name = "AgresorĂˇn";
				position[] = {10483.3,16737};
				type = "NameVillage";
				radiusA = 1000;
				radiusB = 1200;
			};
			class AcityC_Agresoran
			{
				name = "";
				position[] = {10483.3,16737};
				type = "CityCenter";
				radiusA = 1000;
				radiusB = 1200;
				neighbors[] = {"AcityC_Yanotabir","AcityC_Scarzirah","AcityC_Ovallestan"};
			};
			class Sulakhira
			{
				name = "Sulakhira";
				position[] = {10505.6,15950.2};
				type = "NameVillage";
				radiusA = 350;
				radiusB = 300;
			};
			class AcityC_Sulakhira
			{
				name = "";
				position[] = {10505.6,15950.2};
				type = "CityCenter";
				radiusA = 350;
				radiusB = 300;
				neighbors[] = {"AcityC_Ovallestan","AcityC_Yanotabir"};
			};
			class Guyosabir
			{
				name = "Guyosabir";
				position[] = {7383.61,19928.8};
				type = "NameVillage";
				radiusA = 550;
				radiusB = 900;
			};
			class AcityC_Guyosabir
			{
				name = "";
				position[] = {7383.61,19928.8};
				type = "CityCenter";
				radiusA = 550;
				radiusB = 900;
				neighbors[] = {"AcityC_Demenazhir"};
			};
			class Kepsora
			{
				name = "Kepsora";
				position[] = {14198.1,16898.3};
				type = "NameVillage";
				radiusA = 800;
				radiusB = 500;
			};
			class AcityC_Kepsora
			{
				name = "";
				position[] = {14198.1,16898.3};
				type = "CityCenter";
				radiusA = 800;
				radiusB = 500;
				neighbors[] = {"AcityC_Ovallestan","AcityC_Mini_Al_Malak"};
			};
			class Mandingara
			{
				name = "Mandingara";
				position[] = {18553.9,9114.7};
				type = "NameVillage";
				radiusA = 500;
				radiusB = 300;
			};
			class AcityC_Mandingara
			{
				name = "";
				position[] = {18553.9,9114.7};
				type = "CityCenter";
				radiusA = 500;
				radiusB = 300;
				neighbors[] = {"AcityC_Marmakur","AcityC_Kenykmheni"};
			};
			class Prozakhar
			{
				name = "Prozakhar";
				position[] = {15589.6,861.315};
				type = "Name";
				radiusA = 1150;
				radiusB = 1150;
			};
			class Hysad
			{
				name = "Hysad";
				position[] = {9459.87,12439.1};
				type = "NameVillage";
				radiusA = 400;
				radiusB = 350;
			};
			class AcityC_Hysad
			{
				name = "";
				position[] = {9459.87,12439.1};
				type = "CityCenter";
				radiusA = 400;
				radiusB = 350;
				neighbors[] = {"AcityC_Etnikora"};
			};
			class Robstrepo
			{
				name = "Robstrepo";
				position[] = {8185.86,8665.02};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class Mini_Al_Malak
			{
				name = "Mini Al Malak";
				position[] = {17496,18142.8};
				type = "NameCity";
				radiusA = 1600;
				radiusB = 800;
			};
			class AcityC_Mini_Al_Malak
			{
				name = "";
				position[] = {17496,18142.8};
				type = "CityCenter";
				radiusA = 1600;
				radiusB = 800;
				neighbors[] = {"AcityC_Kepsora"};
			};
			class Gonzalabad
			{
				name = "Gonzalabad";
				position[] = {9606.88,15381.4};
				type = "NameVillage";
				radiusA = 400;
				radiusB = 300;
			};
			class AcityC_Gonzalabad
			{
				name = "";
				position[] = {9606.88,15381.4};
				type = "CityCenter";
				radiusA = 400;
				radiusB = 300;
				neighbors[] = {"AcityC_Yanotabir","AcityC_Etnikora"};
			};
			class Etnikora
			{
				name = "Etnikora";
				position[] = {9684.99,14393.5};
				type = "NameVillage";
				radiusA = 400;
				radiusB = 300;
			};
			class AcityC_Etnikora
			{
				name = "";
				position[] = {9684.99,14393.5};
				type = "CityCenter";
				radiusA = 400;
				radiusB = 300;
				neighbors[] = {"AcityC_Gonzalabad","AcityC_Hysad"};
			};
			class Demenazhir
			{
				name = "Demenazhir";
				position[] = {7855.74,18082.1};
				type = "NameVillage";
				radiusA = 800;
				radiusB = 500;
			};
			class AcityC_Demenazhir
			{
				name = "Demenazhir";
				position[] = {7855.74,18082.1};
				type = "CityCenter";
				radiusA = 800;
				radiusB = 500;
				neighbors[] = {"AcityC_Guyosabir","AcityC_Yanotabir","AcityC_Scarzirah","AcityC_Fareldraguz","AcityC_Al_Jebel"};
			};
			class Baker_Outpost
			{
				name = "Baker Outpost";
				position[] = {11006.5,19646.1};
				type = "StrongpointArea";
				radiusA = 150;
				radiusB = 100;
			};
			class Scarzirah
			{
				name = "Scarzirah";
				position[] = {9478.47,17026.4};
				type = "NameVillage";
				radiusA = 300;
				radiusB = 200;
			};
			class AcityC_Scarzirah
			{
				name = "";
				position[] = {9478.47,17026.4};
				type = "CityCenter";
				radiusA = 300;
				radiusB = 200;
				neighbors[] = {"AcityC_Yanotabir","AcityC_Agresoran","AcityC_Demenazhir"};
			};
			class Camp_Kinno
			{
				name = "Camp Kinno";
				position[] = {14184.5,8344.31};
				type = "StrongpointArea";
				radiusA = 200;
				radiusB = 200;
			};
			class Punta_Cuervo
			{
				name = "Punta Cuervo";
				position[] = {8443.04,10575.1};
				type = "StrongpointArea";
				radiusA = 100;
				radiusB = 100;
			};
			class Spetzyahir
			{
				name = "Spetzyahir";
				position[] = {13836.5,8043.68};
				type = "NameVillage";
				radiusA = 250;
				radiusB = 150;
			};
			class AcityC_Spetzyahir
			{
				name = "";
				position[] = {13836.5,8043.68};
				type = "CityCenter";
				radiusA = 250;
				radiusB = 150;
				neighbors[] = {"AcityC_Lolosalam"};
			};
			class Lolosalam
			{
				name = "Lolosalam";
				position[] = {15610.2,8991.99};
				type = "NameVillage";
				radiusA = 350;
				radiusB = 250;
			};
			class AcityC_Lolosalam
			{
				name = "";
				position[] = {15610.2,8991.99};
				type = "CityCenter";
				radiusA = 350;
				radiusB = 250;
				neighbors[] = {"AcityC_Spetzyahir","AcityC_Kenykmheni"};
			};
			class Kenykmheni
			{
				name = "Kenykmheni";
				position[] = {17154.1,11352.2};
				type = "NameVillage";
				radiusA = 250;
				radiusB = 300;
			};
			class AcityC_Kenykmheni
			{
				name = "";
				position[] = {17154.1,11352.2};
				type = "CityCenter";
				radiusA = 250;
				radiusB = 300;
				neighbors[] = {"AcityC_Lolosalam","AcityC_Mandingara"};
			};
			class Machifazar
			{
				name = "Machifazar";
				position[] = {17086.3,5960.12};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 150;
			};
			class AcityC_Machifazar
			{
				name = "";
				position[] = {17086.3,5960.12};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 150;
				neighbors[] = {};
			};
			class Marmakur
			{
				name = "Marmakur";
				position[] = {19548.4,11809.3};
				type = "NameVillage";
				radiusA = 150;
				radiusB = 250;
			};
			class AcityC_Marmakur
			{
				name = "";
				position[] = {19548.4,11809.3};
				type = "CityCenter";
				radiusA = 150;
				radiusB = 250;
				neighbors[] = {"AcityC_Al_Riyal","AcityC_Mandingara"};
			};
			class Al_Riyal
			{
				name = "Al_Riyal";
				position[] = {18527.5,12533.7};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 200;
			};
			class AcityC_Al_Riyal
			{
				name = "";
				position[] = {18527.5,12533.7};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"AcityC_Marmakur"};
			};
			class Al_Jebel
			{
				name = "Al_Jebel";
				position[] = {3962.49,13656.8};
				type = "NameVillage";
				radiusA = 250;
				radiusB = 400;
			};
			class AcityC_Al_Jebel
			{
				name = "";
				position[] = {3962.49,13656.8};
				type = "CityCenter";
				radiusA = 250;
				radiusB = 400;
				neighbors[] = {"AcityC_Alkhemora","AcityC_Demenazhir"};
			};
			class Alkhemora
			{
				name = "Alkhemora";
				position[] = {6019.96,17139.1};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 200;
			};
			class AcityC_Alkhemora
			{
				name = "";
				position[] = {6019.96,17139.1};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"AcityC_Fareldraguz","AcityC_Al_Jebel"};
			};
			class Fareldraguz
			{
				name = "Fareldraguz";
				position[] = {6188.59,17413.3};
				type = "NameVillage";
				radiusA = 200;
				radiusB = 200;
			};
			class AcityC_Fareldraguz
			{
				name = "";
				position[] = {6188.59,17413.3};
				type = "CityCenter";
				radiusA = 200;
				radiusB = 200;
				neighbors[] = {"AcityC_Demenazhir","AcityC_Alkhemora"};
			};
			class Mike1
			{
				name = "Mike 1";
				position[] = {4891.17,13769.8};
				type = "StrongpointArea";
				radiusA = 250;
				radiusB = 150;
			};
			class Mike2
			{
				name = "Mike 2";
				position[] = {17482.1,6064.28};
				type = "StrongpointArea";
				radiusA = 120;
				radiusB = 120;
			};
		};
		skyObject = "ca\Takistan\Data\obloha.p3d";
		horizontObject = "ca\Takistan\Data\horizont.p3d";
		skyTexture = "ca\Takistan\Data\sky_semicloudy_sky.paa";
		skyTextureR = "ca\Takistan\Data\sky_semicloudy_lco.paa";
	};
};
class CfgWorldList
{
	class clafghan{};
};
class CfgMissions
{
	class Cutscenes
	{
		class clafghanIntro
		{
			directory = "ascz_clafghan_fix\Scenes\intro.Clafghan";
		};
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class cla_cg_tpatio2: Default
	{
		access = 2;
		files = "cla_cg_tpatio2_*";
		rough = 0.2;
		dust = 0.7;
		soundEnviron = "grass";
		character = "cla_cg_VerdeClutter";
		soundHit = "soft_ground";
	};
	class cla_cg_pebbs1: Default
	{
		access = 2;
		files = "cla_cg_pebbs1_*";
		rough = 0.2;
		dust = 0.7;
		soundEnviron = "dirt";
		character = "cla_cg_pebbs1Clutter";
		soundHit = "hard_ground";
	};
	class cla_cg_tied: Default
	{
		access = 2;
		files = "cla_cg_tied_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "cla_cg_Verde1Clutter";
		soundHit = "soft_ground";
	};
	class cla_cg_tied2: Default
	{
		access = 2;
		files = "cla_cg_tied_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class cla_cg_tierra: Default
	{
		access = 2;
		files = "cla_cg_tierra2_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "cla_cg_Secano2Clutter";
		soundHit = "soft_ground";
	};
	class cla_cg_tierra2: Default
	{
		access = 2;
		files = "cla_cg_tierra2_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class cla_cg_barrito: Default
	{
		access = 2;
		files = "cla_cg_barrito_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "mud";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class cla_cg_mscrac: Default
	{
		access = 2;
		files = "cla_cg_mscrac_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "cla_cg_SecanoClutter";
		soundHit = "soft_ground";
	};
	class cla_cg_terron: Default
	{
		access = 2;
		files = "cla_cg_terron_*";
		rough = 0.1;
		dust = 0.9;
		soundEnviron = "gravel";
		character = "cla_cg_terronClutter";
		soundHit = "soft_ground";
	};
	class cla_cg_terron2: Default
	{
		access = 2;
		files = "cla_cg_terron2_*";
		rough = 0.1;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "cla_cg_terron2Clutter";
		soundHit = "soft_ground";
	};
	class cla_cg_terron3: Default
	{
		access = 2;
		files = "cla_cg_terron2_*";
		rough = 0.1;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "cla_cg_Verde1Clutter";
		soundHit = "soft_ground";
	};
	class cla_cg_terruno: Default
	{
		access = 2;
		files = "cla_cg_terruno_*";
		rough = 0.1;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "cla_cg_terrunoClutter";
		soundHit = "soft_ground";
	};
	class cla_cg_ripiado: Default
	{
		access = 2;
		files = "cla_cg_terruno_*";
		rough = 0.1;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "cla_cg_ripiadoClutter";
		soundHit = "soft_ground";
	};
	class cla_cg_tmount: Default
	{
		access = 2;
		files = "cla_cg_tmount_*";
		rough = 0.2;
		dust = 0.7;
		soundEnviron = "dirt";
		character = "cla_cg_tmountClutter";
		soundHit = "hard_ground";
	};
	class cla_cg_tcura5: Default
	{
		access = 2;
		files = "cla_cg_tcura5_*";
		rough = 0.2;
		dust = 0.7;
		soundEnviron = "dirt";
		character = "cla_cg_tmountClutter";
		soundHit = "hard_ground";
	};
	class cla_cg_stones: Default
	{
		access = 2;
		files = "cla_cg_stones_*";
		rough = 0.4;
		dust = 0.0;
		soundEnviron = "mud";
		character = "cla_cg_stonesClutter";
		soundHit = "hard_ground";
	};
	class cla_cg_nieve: Default
	{
		access = 2;
		files = "cla_cg_nieve_*";
		rough = 0.1;
		dust = 0.01;
		soundEnviron = "snow";
		character = "Empty";
		soundHit = "soft_ground";
	};
};
class CfgSurfaceCharacters
{
	class cla_cg_pebbs1Clutter
	{
		probability[] = {0.3,0.2,0.1};
		names[] = {"cla_cg_GrassLush01","cla_cg_GrassShort01","cla_cg_GrassTall01"};
	};
	class cla_cg_VerdeClutter
	{
		probability[] = {0.1,0.1,0.1,0.01,0.3};
		names[] = {"cla_cg_GrassLush01","cla_cg_GrassShort01","cla_cg_GrassTall01","cla_cg_browngrassClutter","cla_cg_grassautumn"};
	};
	class cla_cg_Verde1Clutter
	{
		probability[] = {0.1,0.1,0.1,0.6};
		names[] = {"cla_cg_GrassDry","cla_cg_GrassDryLong","cla_cg_Plants_HSS","cla_cg_GrassShort01"};
	};
	class cla_cg_SecanoClutter
	{
		probability[] = {0.2,0.1,0.01};
		names[] = {"cla_cg_GrassDry","cla_cg_browngrassClutter","cla_cg_BrushSoft"};
	};
	class cla_cg_ripiadoClutter
	{
		probability[] = {0.1,0.1};
		names[] = {"cla_cg_GrassDry","cla_cg_browngrassClutter"};
	};
	class cla_cg_Secano2Clutter
	{
		probability[] = {0.1,0.2,0.3,0.1,0.1};
		names[] = {"cla_cg_GrassDry","cla_cg_browngrassClutter","cla_cg_grassautumn","cla_cg_riverbedClutter","cla_cg_riverbedClutter2"};
	};
	class cla_cg_terronClutter
	{
		probability[] = {0.03,0.03,0.1,0.2,0.15,0.15};
		names[] = {"cla_cg_BrushSoft","cla_cg_grassclump","cla_cg_grass_desert2","cla_cg_grass_desert_mix","cla_cg_riverbedClutter","cla_cg_riverbedClutter2"};
	};
	class cla_cg_terron2Clutter
	{
		probability[] = {0.05,0.01,0.01,0.4,0.3,0.1,0.1,0.1};
		names[] = {"cla_cg_grassautumn","cla_cg_BrushSoft","cla_cg_grassclump","cla_cg_grass_desert2","cla_cg_grass_desert_mix","cla_cg_riverbedClutter","cla_cg_riverbedClutter2","cla_cg_grassautumn"};
	};
	class cla_cg_terrunoClutter
	{
		probability[] = {0.05,0.2,0.1,0.2,0.1,0.01,0.01};
		names[] = {"cla_cg_GrassDryLong","cla_cg_grass_desert","cla_cg_grass_desert2","cla_cg_grass_desert_mix","cla_cg_GrassGreen","cla_cg_GrassGreenLong","cla_cg_GrassTall01"};
	};
	class cla_cg_tmountClutter
	{
		probability[] = {0.3,0.1};
		names[] = {"cla_cg_grass_desert","cla_cg_grass_desert_mix"};
	};
	class cla_cg_stonesClutter
	{
		probability[] = {0.6,0.1,0.1};
		names[] = {"cla_cg_SMGC","cla_cg_riverbedClutter","cla_cg_riverbedClutter2"};
	};
};