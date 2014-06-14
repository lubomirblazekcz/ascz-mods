class CfgPatches
{
	class namalsk_fix
	{
		units[] = {"namalsk"};
		worlds[] = {"namalsk"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"namalsk","Utes","NS","NS2","NS_plants","NS_rocks","ns_sounds"};
		fileName = "namalsk.pbo";
		author[] = {"Sumrak"};
	};
};
class CfgVehicles
{
	class House;
	class Land_bspawn: House
	{
		scope = 1;
		model = "\nst\namalsk\data\bspawn.p3d";
		displayName = "";
	};
	class Land_zspawn: House
	{
		scope = 1;
		model = "\nst\namalsk\data\zspawn.p3d";
		displayName = "";
	};
	class Land_espawn: House
	{
		scope = 1;
		model = "\nst\namalsk\data\espawn.p3d";
		displayName = "";
	};
	class Land_wreck_c130j_ep1: House
	{
		scope = 1;
		model = "\nst\namalsk\data\Wreck_C130J_ep1";
		displayName = "";
	};
};
class DefaultClutter;
class DefaultLighting;
class Weather;
class CfgWorlds
{
	initWorld = "namalsk";
	demoWorld = "namalsk";
	class Utes;
	class namalsk: Utes
	{
		author = "Sumrak";
		cutscenes[] = {"full_intro","full_intro2","full_intro3"};
		description = "Namalsk";
		worldName = "\nst\namalsk\namalsk.wrp";
		pictureMap = "\namalsk_fix\Data\namalsk_ca.paa";
		pictureShot = "\namalsk_fix\Data\ui_namalsk_ca.paa";
		midDetailTexture = "nst\namalsk\data\midTex_mco.paa";
		latitude = 40;
		longitude = 20;
		landGrid = 50;
		startTime = "15:25";
		startDate = "10/7/2011";
		startWeather = 0;
		startFog = 0;
		forecastWeather = 0;
		forecastFog = 0;
		centerPosition[] = {4352,7348,10};
		center[] = {5508,9034};
		SWcorner[] = {0,0};
		NEcorner[] = {12800,12800};
		spawnRadius = 4000;
		ilsPosition[] = {6235,9513,44};
		ilsDirection[] = {0,0.08,1};
		ilsTaxiIn[] = {6252,9231,6244,9323,6241,9410,6238,9484,6236,9565,6230,9630};
		ilsTaxiOff[] = {6230,9630,6236,9565,6238,9484,6241,9410,6244,9323,6252,9231};
		class SecondaryAirports{};
		class CfgEnvSounds;
		class EnvSounds: CfgEnvSounds
		{
			class Default
			{
				name = "$STR_CFG_ENVSOUNDS_DEFAULT";
				sound[] = {"$DEFAULT$",0,1};
				soundNight[] = {"$DEFAULT$",0,1};
			};
			class Rain
			{
				name = "Rain";
				volume = "rain";
				sound[] = {"\nst\ns_sounds\zonesounds\fx_rain1.ogg",0.877828,1};
				soundNight[] = {"\nst\ns_sounds\zonesounds\fx_rain1.ogg",0.877828,1};
			};
			class Sea
			{
				name = "Sea";
				volume = "sea";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_sea.ogg",0.3,1};
				soundNight[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_sea.ogg",0.3,1};
			};
			class WindForestHigh
			{
				name = "Wind";
				volume = "forest*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_hills.ogg",0.3,1};
			};
			class WindNoForestHigh
			{
				name = "Wind";
				volume = "(1-forest)*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_3.ogg",0.3,1};
			};
			class Forest
			{
				name = "Forest";
				volume = "forest*(1-night)";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_3.ogg",0.3,1};
			};
			class ForestNight
			{
				name = "Forest";
				volume = "forest*night";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_town_01.ogg",0.3,1};
			};
			class Houses
			{
				name = "Houses";
				volume = "(houses*0.75)*4";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_houses_true.ogg",0.5,1};
			};
			class Meadows
			{
				name = "Meadows";
				volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_3.ogg",0.3,1};
			};
			class MeadowsNight
			{
				name = "Meadows";
				volume = "(1-forest)*(1-houses)*night*(1-sea)";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_town_01.ogg",0.3,1};
			};
			class Hills
			{
				name = "Hills";
				volume = "hills";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_hills.ogg",0.4,1};
				soundNight[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_hills.ogg",0.4,1};
			};
			class Combat
			{
				name = "Combat";
				sound[] = {"\ca\Sounds\Enviroment\battle1",0.056234,1};
				soundNight[] = {"\ca\Sounds\Enviroment\battle2",0.056234,1};
			};
		};
		class Weather: Weather
		{
			class ThunderboltNorm
			{
				model = "\ca\data\blesk1.p3d";
				soundNear[] = {"\nst\ns_sounds\zonesounds\fx_thunder5.ogg",31.622776,1};
				soundFar[] = {"\nst\ns_sounds\zonesounds\fx_thunder5.ogg",10,1};
			};
			class ThunderboltHeavy
			{
				model = "\ca\data\blesk2.p3d";
				soundNear[] = {"\nst\ns_sounds\zonesounds\fx_thunder4.ogg",31.622776,1};
				soundFar[] = {"\nst\ns_sounds\zonesounds\fx_thunder8.ogg",10,1};
			};
			temperatureDayMax[] = {-2,0,1,1,2,3,3,3,2,1,0,-1};
			temperatureDayMin[] = {-10,-6,-5,-1,0,0,0,0,-1,-2,-5,-10};
			temperatureNightMax[] = {-6,-7,-8,-10,-13,-14,-15,-14,-13,-10,-8,-4};
			temperatureNightMin[] = {-25,-21,-18,-16,-13,-10,-13,-16,-19,-21,-24,-27};
		};
		clutterGrid = 1.25;
		class Clutter
		{
			class bis_SmallPicea: DefaultClutter
			{
				model = "ca\plants2\clutter\c_picea.p3d";
				affectedByWind = 0.05;
				scaleMin = 0.75;
				scaleMax = 1;
			};
			class drnecgrass: DefaultClutter
			{
				model = "nst\ns_plants\clutter\grass_drnec.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.7";
				scaleMax = "1.0";
			};
			class rakos_1: DefaultClutter
			{
				model = "nst\ns_plants\clutter\grass_rakos1.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.9 * 0.85";
				scaleMax = "1 * 0.85";
			};
			class rakos_2: DefaultClutter
			{
				model = "nst\ns_plants\clutter\grass_rakos2.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.9 * 0.85";
				scaleMax = "1 * 0.85";
			};
			class forestclutter: DefaultClutter
			{
				model = "nst\ns_plants\clutter\grass_forest.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.7";
				scaleMax = "1.0";
			};
			class shlakClutter: DefaultClutter
			{
				model = "ca\plants2\clutter\c_caluna.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = "0.9 * 0.90";
				scaleMax = "1 * 0.90";
			};
			class kytkyclutter: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WeedDead2.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.9 * 0.90";
				scaleMax = "1 * 0.90";
			};
		};
		class Names
		{
			class OldHospital
			{
				name = "Old Hospital";
				position[] = {7376.9,7925.86};
				type = "NameVillage";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class Tara
			{
				name = "Tara";
				position[] = {7357.73,6986.28};
				type = "Hill";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class OldSawmill
			{
				name = "Old Sawmill";
				position[] = {7052.72,5717.69};
				type = "NameVillage";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class TaraHarbor
			{
				name = "Tara harbor";
				position[] = {7962.25,7537.0};
				type = "NameCity";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class TaraPass
			{
				name = "Tara strait";
				position[] = {6309.09,7926.94};
				type = "NameLocal";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class Nemsk
			{
				name = "Nemsk";
				position[] = {9110.72,10160.72};
				type = "NameVillage";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class NemskFactory
			{
				name = "Nemsk factory";
				position[] = {7765.43,8698.98};
				type = "NameVillage";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class Jalovisko
			{
				name = "Jalovisko";
				position[] = {8422.33,10730.88};
				type = "NameCity";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class Vorkuta
			{
				name = "Vorkuta";
				position[] = {7120.02,11253.12};
				type = "NameCityCapital";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class VorkutaOut
			{
				name = "Vorkuta outskirts";
				position[] = {7112.88,10712.47};
				type = "NameCity";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class OldYard
			{
				name = "Old Yard";
				position[] = {6306.13,10921.47};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class Alakit
			{
				name = "Alakit";
				position[] = {5752.66,10837.94};
				type = "NameVillage";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class SebjanDam
			{
				name = "Sebjan dam";
				position[] = {5822.72,9806.5};
				type = "NameVillage";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class SebjanAIR
			{
				name = "Sebjan field airport";
				position[] = {6298.97,9426.06};
				type = "NameVillage";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class SebjanCHEM
			{
				name = "Sebjan chemical factory";
				position[] = {6535.38,9227.56};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class Sebjan
			{
				name = "Sebjan";
				position[] = {5677.55,8746.13};
				type = "NameCity";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class SebjanMINE
			{
				name = "Sebjan mine";
				position[] = {5129.63,8182.28};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class SebjanWAR
			{
				name = "Sebjan warehouse";
				position[] = {4717.47,8867.66};
				type = "NameVillage";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class SebjanMarsh
			{
				name = "Sebjan marsh";
				position[] = {6191.91,9917.04};
				type = "VegetationFir";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class GrayForest
			{
				name = "Gray forest";
				position[] = {5431.25,10871.31};
				type = "VegetationFir";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class VorMar
			{
				name = "Vorkuta marsh";
				position[] = {5998.36,11388.73};
				type = "VegetationFir";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class NAB
			{
				name = "Northen army base";
				position[] = {4651.3,10754.64};
				type = "NameLocal";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class Lubjansk
			{
				name = "Lubjansk";
				position[] = {4566.48,11149.98};
				type = "NameVillage";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class TaraRAIL
			{
				name = "Tara railway station";
				position[] = {7680.19,7497.94};
				type = "NameVillage";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class TaraBridge
			{
				name = "Tara bridge";
				position[] = {6441.34,5811.34};
				type = "NameLocal";
				radiusA = 211.14;
				radiusB = 140.9;
				angle = 0.0;
			};
			class TaraMarsh
			{
				name = "Tara marsh";
				position[] = {6213.08,5645.76};
				type = "VegetationFir";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class NitijaTower
			{
				name = "Nitija tower";
				position[] = {5625.78,5983.25};
				type = "RockArea";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class BrenskBridge
			{
				name = "Brensk bridge";
				position[] = {5033.77,6069.3};
				type = "NameLocal";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class BrenskRAIL
			{
				name = "Brensk railway station";
				position[] = {4933.25,6237.41};
				type = "NameVillage";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class AII
			{
				name = "Object A2";
				position[] = {5103.51,6656.99};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class AI
			{
				name = "Object A1";
				position[] = {3985.51,8544.12};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class Brensk
			{
				name = "Brensk";
				position[] = {4396.13,4727.53};
				type = "NameVillage";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class BTE
			{
				name = "Brensk tunnel entrance";
				position[] = {3751.71,6276.83};
				type = "NameLocal";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class NTE
			{
				name = "Norinsk tunnel entrance";
				position[] = {3626.63,7116.78};
				type = "NameLocal";
				radiusA = 44.28;
				radiusB = 29.55;
				angle = 0.0;
			};
			class SAB
			{
				name = "Southern army base";
				position[] = {3614.59,6682.03};
				type = "NameLocal";
				radiusA = 35.42;
				radiusB = 23.64;
				angle = 0.0;
			};
			class SEAB
			{
				name = "Seraja army base";
				position[] = {4209.94,6724.4};
				type = "NameLocal";
				radiusA = 44.28;
				radiusB = 29.55;
				angle = 0.0;
			};
			class Ledjanaja
			{
				name = "Ledjanaja";
				position[] = {2939.72,6435.97};
				type = "Hill";
				radiusA = 515.46;
				radiusB = 344.0;
				angle = 0.0;
			};
			class Norinsk
			{
				name = "Norinsk";
				position[] = {4065.09,7540.41};
				type = "NameCity";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class WP
			{
				name = "West point";
				position[] = {2217.78,5745.97};
				type = "NameLocal";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class WACH
			{
				name = "Western army checkpoint";
				position[] = {4020.28,9181.18};
				type = "NameLocal";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class Nitija
			{
				name = "Nitija";
				position[] = {5331.44,7183.34};
				type = "Hill";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class OS
			{
				name = "Old spruce";
				position[] = {3481.19,7150.28};
				type = "VegetationFir";
				radiusA = 25.6;
				radiusB = 17.09;
				angle = 0.0;
			};
			class BB
			{
				name = "Brensk bay";
				position[] = {5200.67,5374.27};
				type = "NameLocal";
				radiusA = 465.73;
				radiusB = 310.8;
				angle = 0.0;
			};
			class SB
			{
				name = "Seraja bay";
				position[] = {3407.38,5570.66};
				type = "NameLocal";
				radiusA = 727.69;
				radiusB = 485.63;
				angle = 0.0;
			};
			class LB
			{
				name = "Lubjansk bay";
				position[] = {5066.58,10273.06};
				type = "NameLocal";
				radiusA = 298.06;
				radiusB = 198.91;
				angle = 0.0;
			};
			class NB
			{
				name = "Nemsk bay";
				position[] = {8013.81,9685.13};
				type = "NameLocal";
				radiusA = 1137.01;
				radiusB = 758.79;
				angle = 0.0;
			};
			class NRP
			{
				name = "Norinsk pass";
				position[] = {4585.78,7240.0};
				type = "NameLocal";
				radiusA = 122.09;
				radiusB = 81.47;
				angle = 0.0;
			};
			class NTPB
			{
				name = "Nitija army base";
				position[] = {6065.74,6722.6};
				type = "NameLocal";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class c130j
			{
				name = "C-130J Mohawk crash site";
				position[] = {3191.67,7536.39};
				type = "NameLocal";
				radiusA = 55.31;
				radiusB = 36.94;
				angle = 0.0;
			};
		};
		class Armory
		{
			disabled = 1;
			positionAdmin[] = {1956.25,84.1508};
			positionsViewer[] = {{ 1346.67,1428.27 },{ 1086.33,1548.77 }};
			disableShips = 1;
			class Challenges
			{
				class FiringRange
				{
					positionsStart[] = {{ 976.631,1569.39 }};
					directionsStart[] = {245};
				};
			};
		};
	};
};
class CfgWorldList
{
	class namalsk{};
};
class CfgMissions
{
	class Cutscenes
	{
		class full_intro
		{
			directory = "namalsk_fix\CutScenes\full_intro.namalsk";
		};
		class full_intro2
		{
			directory = "namalsk_fix\CutScenes\full_intro2.namalsk";
		};
		class full_intro3
		{
			directory = "namalsk_fix\CutScenes\full_intro3.namalsk";
		};
	};
};
class CfgSurfaces
{
	class Default;
	class nam_obyczem: Default
	{
		access = 2;
		files = "obyczem_*";
		rough = 0.01;
		dust = 0.1;
		soundEnviron = "forest";
		character = "obyczemClutter";
		soundHit = "soft_ground";
	};
	class nam_snow: Default
	{
		access = 2;
		files = "snih_*";
		rough = 0.01;
		dust = 0;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class nam_shlak: Default
	{
		access = 2;
		files = "shlak_*";
		rough = 0.01;
		dust = 0.8;
		soundEnviron = "gravel";
		character = "shlakClutter";
	};
	class nam_sutina2: Default
	{
		access = 2;
		files = "sutina2_*";
		rough = 0.2;
		dust = 0.15;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class nam_sutina3: Default
	{
		access = 2;
		files = "sutina3_*";
		rough = 0.1;
		dust = 0.25;
		soundEnviron = "gravel";
		character = "sutina3Clutter";
		soundHit = "hard_ground";
	};
	class nam_beton: Default
	{
		access = 2;
		files = "beton_*";
		rough = 0.08;
		dust = 0.05;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
};
class CfgSurfaceCharacters
{
	class obyczemClutter
	{
		probability[] = {0.36,0.3,0.02,0.1};
		names[] = {"forestclutter","drnecgrass","rakos_2","bis_SmallPicea"};
	};
	class shlakClutter
	{
		probability[] = {0.09,0.08,0.05,0.02};
		names[] = {"drnecgrass","shlakClutter","kytkyclutter","rakos_2"};
	};
	class sutina3Clutter
	{
		probability[] = {0.55,0.3,0.15};
		names[] = {"forestclutter","kytkyclutter","bis_SmallPicea"};
	};
	class sutina2Clutter
	{
		probability[] = {0.7,0.15,0.15};
		names[] = {"forestclutter","kytkyclutter","bis_SmallPicea"};
	};
};
class CfgTownGeneratorNamalsk{};