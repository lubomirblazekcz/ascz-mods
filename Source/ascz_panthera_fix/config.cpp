class CfgPatches
{
	class ascz_panthera_fix
	{
		units[] = {"panthera2"};
		weapons[] = {};
		requiredVersion = 1.03;
		requiredAddons[] = {"Chernarus","CAData","CABuildings","CAMisc","CABuildings2","CARoads2","CARocks2","CAStructures","ibr_plants","ibr_rn"};
		fileName = "Panthera2.pbo";
		author = "IceBreakr";
		mail = "ice@icebreakr.info";
	};
};
class DayLightingBrightAlmost;
class DefaultClutter;
class Grid;
class CfgWorlds
{
	class Chernarus;
	class Panthera2: Chernarus
	{
		class Sea
		{
			seaTexture = "a3\data_f\seatexture_co.paa";
			seaMaterial = "#water";
			shoreMaterial = "#shore";
			shoreFoamMaterial = "#shorefoam";
			shoreWetMaterial = "#shorewet";
			WaterMapScale = 20;
			WaterGrid = 50;
			MaxTide = 0;
			MaxWave = 0.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1.0;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater
		{
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 200;
			waterFogDistanceNear = 10;
			waterFogDistance = 40;
			waterColor[] = {0.04,0.16,0.22};
			deepWaterColor[] = {0.0,0.001,0.009};
			surfaceColor[] = {0.04,0.16,0.22};
			deepSurfaceColor[] = {0.0,0.001,0.009};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0.0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98;
		hazeBaseHeight = 150;
		hazeBaseBeta0 = 6e-005;
		hazeDensityDecay = 0.0006;
		horizonParallaxCoef = 0.045;
		horizonFogColorationStart = "0.8f";
		skyFogColorationStart = "0.7f";
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		worldId = 3;
		author = "IceBreakr";
		cutscenes[] = {"Panthera2Intro"};
		description = "Panthera";
		icon = "";
		worldName = "\ibr\Panthera2\panthera2.wrp";
		pictureMap = "\ascz_panthera_fix\Data\Panthera_ca.paa";
		pictureShot = "\ascz_panthera_fix\Data\ui_panthera_ca.paa";
		plateFormat = "PT$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 13;
		latitude = -46;
		landGrid = 12.5;
		startTime = "13:37";
		startDate = "24/06/2012";
		startWeather = 0.1;
		startFog = 0.0;
		forecastWeather = 0.0;
		forecastFog = 0.0;
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 0;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		class Sounds
		{
			sounds[] = {};
		};
		seagullPos[] = {1272.842,150.0,14034.962};
		centerPosition[] = {4400,4400,300};
		ilsPosition[] = {4138,7612,24.7};
		ilsDirection[] = {-1,0.08,0};
		ilsTaxiOff[] = {4776,7613,4834,7611,4869,7580,4871,7543,4843,7521,4649,7519};
		ilsTaxiIn[] = {4649,7519,4115,7523,4068,7532,4054,7563,4065,7595};
		drawTaxiway = "true";
		class OutsideTerrain
		{
			satellite = "ca\CHERNARUS\data\s_satout_co.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "ca\CHERNARUS\data\cr_trava1_detail_nopx.paa";
					texture = "ca\CHERNARUS\data\cr_trava1_detail_co.paa";
				};
			};
		};
		class SecondaryAirports
		{
			class PantheraBoryanaStrip
			{
				ilsPosition[] = {1872,3449};
				ilsDirection[] = {-1,0.08,0};
				ilsTaxiOff[] = {2477,3450,2582,3452,2610,3491,2585,3525,2481,3531,2426,3532};
				ilsTaxiIn[] = {1872,3532,1845,3523,1840,3501,1851,3457,1868,3449};
				drawTaxiway = "true";
			};
			class PantheraVatraStrip
			{
				ilsPosition[] = {596,8887};
				ilsDirection[] = {0,0.08,-1};
				ilsTaxiOff[] = {596,9684,604,9705,620,9716,650,9717,679,9711,686,9544};
				ilsTaxiIn[] = {686,8947,681,8903,653,8894,623,8893,597,8903};
				drawTaxiway = "true";
			};
		};
		clutterGrid = 1.0;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "ca\chernarus\data\cr_trava1_mco.paa";
		minTreesInForestSquare = 6;
		minRocksInRockSquare = 3;
		class Clutter
		{
			class ibr_PantheraGrassWeed: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed2.p3d";
				affectedByWind = 0.1;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class ibr_PantheraGrassFlowers: DefaultClutter
			{
				model = "ibr\ibr_plants\clutter_grass_flowers.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class ibr_PantheraGrassDlouha: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassAutumn_t.p3d";
				affectedByWind = 0.1;
				scaleMin = 0.5;
				scaleMax = 0.9;
			};
			class ibr_PantheraStoneRocks: DefaultClutter
			{
				model = "ibr\ibr_plants\clutter_stone_small.p3d";
				affectedByWind = 0;
				scaleMin = 0.8;
				scaleMax = 1.1;
			};
			class ibr_PantheraGrass: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrooked.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.9;
				scaleMax = 1.4;
			};
			class ibr_PantheraWoodGrass: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.1;
				swLighting = "true";
				scaleMin = 0.8;
				scaleMax = 1.5;
			};
			class ibr_PantheraGrassBunch: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassTall.p3d";
				affectedByWind = 0.2;
				swLighting = "true";
				scaleMin = 0.5;
				scaleMax = 0.8;
			};
			class ibr_PantheraWoodFern: DefaultClutter
			{
				model = "ca\plants2\clutter\c_fern.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.75;
				scaleMax = 1.5;
			};
			class ibr_goban: DefaultClutter
			{
				model = "ca\plants2\clutter\c_MushroomBabka.p3d";
				affectedByWind = 0;
				swLighting = "true";
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class ibr_musnica: DefaultClutter
			{
				model = "ca\plants2\clutter\c_MushroomMuchomurka.p3d";
				affectedByWind = 0;
				swLighting = "true";
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class ibr_smreka: DefaultClutter
			{
				model = "ca\plants2\clutter\c_picea.p3d";
				affectedByWind = 0.1;
				swLighting = "true";
				scaleMin = 0.45;
				scaleMax = 1.5;
			};
		};
		class Names
		{
			class jesenice
			{
				name = "Jesenice";
				position[] = {7461.03,5799.64};
				type = "NameCity";
				radiusA = 100;
				radiusB = 100;
			};
			class bled
			{
				name = "Bled";
				position[] = {7913.81,4937.32};
				type = "NameCity";
				radiusA = 100;
				radiusB = 100;
			};
			class mojstrana
			{
				name = "Mojstrana";
				position[] = {6375.11,6105.47};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class kranjskagora
			{
				name = "Kranjska Gora";
				position[] = {5067.66,6418.56};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class ribcevlaz
			{
				name = "Ribcev Laz";
				position[] = {5985.29,3759.13};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class ukanc
			{
				name = "Ukanc";
				position[] = {5404.55,3882.18};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class bohbistrica
			{
				name = "Boh. Bistrica";
				position[] = {6523.38,3735.46};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class Tolmin
			{
				name = "Tolmin";
				position[] = {4593.39,2620.7};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class kobarid
			{
				name = "Kobarid";
				position[] = {3217.66,3344.35};
				type = "NameCity";
				radiusA = 100;
				radiusB = 100;
			};
			class bovec
			{
				name = "Bovec";
				position[] = {3024.39,4563.32};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class cavepredil
			{
				name = "Cave del Predil";
				position[] = {3172.45,5879.04};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class tarvisio
			{
				name = "Tarvisio";
				position[] = {3321.08,6670.45};
				type = "NameCity";
				radiusA = 120;
				radiusB = 120;
			};
			class ratece
			{
				name = "Ratece";
				position[] = {4462.63,6557.2};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class korsedlo
			{
				name = "BC Wurzenpass";
				position[] = {4767.08,6827.88};
				type = "BorderCrossing";
				radiusA = 20;
				radiusB = 20;
			};
			class trenta
			{
				name = "Trenta";
				position[] = {4846.34,5232.24};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class predillake2
			{
				name = "Lake Raibl";
				position[] = {3119.64,5572.43};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class triglav
			{
				name = "Triglav";
				position[] = {5485.09,5055.14};
				type = "Hill";
				radiusA = 60;
				radiusB = 60;
			};
			class radovljica
			{
				name = "Radovljica";
				position[] = {8432.93,4647.76};
				type = "NameCity";
				radiusA = 100;
				radiusB = 100;
			};
			class lesce
			{
				name = "Lesce";
				position[] = {8283.25,4875.39};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class airport
			{
				name = "Airport Lesce";
				position[] = {8622.31,4784.41};
				type = "Name";
				radiusA = 50;
				radiusB = 50;
			};
			class airbovec
			{
				name = "Airport Bovec";
				position[] = {3057.6,4456.56};
				type = "Name";
				radiusA = 50;
				radiusB = 50;
			};
			class KozlovRob
			{
				name = "Kozlov Rob";
				position[] = {4525.55,2691.73};
				type = "Hill";
				radiusA = 40;
				radiusB = 40;
			};
			class mns
			{
				name = "Most na Soci";
				position[] = {4704.55,2194.99};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class zelezniki
			{
				name = "Zelezniki";
				position[] = {8405,3146.5};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class kamna
			{
				name = "Kamna Gorica";
				position[] = {8585.82,4281.64};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class bohbela
			{
				name = "Boh. Bela";
				position[] = {7451.89,4661.87};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class gozdmar
			{
				name = "Gozd Mar.";
				position[] = {5511.51,6402.3};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class arnol
			{
				name = "Arnoldstein";
				position[] = {4546.69,8052.63};
				type = "NameCity";
				radiusA = 100;
				radiusB = 100;
			};
			class bledlake
			{
				name = "Lake Bled";
				position[] = {7740.29,4887.48};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class ajdna
			{
				name = "Ajdna Ruins";
				position[] = {8054.01,5612.85};
				type = "Hill";
				radiusA = 20;
				radiusB = 20;
			};
			class valdom
			{
				name = "Valvazorjev Dom";
				position[] = {8193.38,5673.55};
				type = "ViewPoint";
				radiusA = 20;
				radiusB = 20;
			};
			class gradkamn
			{
				name = "Grad Kamen";
				position[] = {8705.87,5169.98};
				type = "ViewPoint";
				radiusA = 20;
				radiusB = 20;
			};
			class stol
			{
				name = "Stol";
				position[] = {8435.16,5742.8};
				type = "Hill";
				radiusA = 20;
				radiusB = 20;
			};
			class laghi
			{
				name = "Laghi Di Fusine (Belopeska jezera)";
				position[] = {4030.06,6309.8};
				type = "ViewPoint";
				radiusA = 25;
				radiusB = 25;
			};
			class prehratece
			{
				name = "Ratece CP";
				position[] = {4346.49,6547.28};
				type = "BorderCrossing";
				radiusA = 50;
				radiusB = 50;
			};
			class fusine
			{
				name = "Fusine";
				position[] = {4055.74,6553.04};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class mangart
			{
				name = "Mangart";
				position[] = {3908.24,5817.16};
				type = "Hill";
				radiusA = 50;
				radiusB = 50;
			};
			class mojstrovka
			{
				name = "Mojstrovka";
				position[] = {4475.64,5757.65};
				type = "Hill";
				radiusA = 20;
				radiusB = 20;
			};
			class vrsic
			{
				name = "Vrsic";
				position[] = {4692.6,5756.11};
				type = "ViewPoint";
				radiusA = 45;
				radiusB = 45;
			};
			class matajur
			{
				name = "Matajur";
				position[] = {2921.83,3126.99};
				type = "Hill";
				radiusA = 20;
				radiusB = 20;
			};
			class vogel
			{
				name = "Vogel";
				position[] = {5404.21,3346.54};
				type = "Hill";
				radiusA = 25;
				radiusB = 25;
			};
			class sija
			{
				name = "Shija";
				position[] = {5635.58,3255.68};
				type = "Hill";
				radiusA = 25;
				radiusB = 25;
			};
			class skrlatica
			{
				name = "Skrlatica";
				position[] = {5348.66,5765.12};
				type = "Hill";
				radiusA = 30;
				radiusB = 30;
			};
			class spik
			{
				name = "Spik";
				position[] = {5351.84,5927.63};
				type = "Hill";
				radiusA = 30;
				radiusB = 30;
			};
			class sporthotel
			{
				name = "Sport Hotel";
				position[] = {6579.59,4543.85};
				type = "ViewPoint";
				radiusA = 20;
				radiusB = 20;
			};
			class modrej
			{
				name = "Modrej";
				position[] = {4761.15,2271.17};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class hrusica
			{
				name = "Hrusica";
				position[] = {6970.59,6016.83};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class dovje
			{
				name = "Dovje";
				position[] = {6436.35,6213.7};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class podkoren
			{
				name = "Podkoren";
				position[] = {4812.96,6522.85};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class kocna
			{
				name = "Kocna";
				position[] = {7617.99,5515.96};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class ribno
			{
				name = "Ribno";
				position[] = {8009.67,4717.66};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class lancovo
			{
				name = "Lancovo";
				position[] = {8314.93,4582.73};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class kropa
			{
				name = "Kropa";
				position[] = {8692.2,3982.73};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class obrne
			{
				name = "Obrne";
				position[] = {7404.96,4451.87};
				type = "NameVillage";
				radiusA = 20;
				radiusB = 20;
			};
			class krnjezero
			{
				name = "Krn Lake";
				position[] = {4165.74,3890.92};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class dreznica
			{
				name = "Dreznica";
				position[] = {3570.13,3534.46};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class krn
			{
				name = "Krn";
				position[] = {3952.71,3639.64};
				type = "Hill";
				radiusA = 55;
				radiusB = 55;
			};
			class kluze
			{
				name = "Kluze Fortress";
				position[] = {3364.84,4880.37};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class prehpredel
			{
				name = "Predel CP";
				position[] = {3267.18,5572.31};
				type = "BorderCrossing";
				radiusA = 50;
				radiusB = 50;
			};
			class kolovrat
			{
				name = "Kolovrat";
				position[] = {3368.5,5513.52};
				type = "Hill";
				radiusA = 30;
				radiusB = 30;
			};
			class logmangart
			{
				name = "Log Pod Mangartom";
				position[] = {3473.41,5421.4};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class strmec
			{
				name = "Strmec";
				position[] = {3523.11,5549.25};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class volnik
			{
				name = "Volnik";
				position[] = {3422.15,3484.76};
				type = "Hill";
				radiusA = 40;
				radiusB = 40;
			};
			class ladrvrh
			{
				name = "Ladrski vrh";
				position[] = {3491.16,3367.79};
				type = "Hill";
				radiusA = 35;
				radiusB = 35;
			};
			class domtamar
			{
				name = "Dom v Tamarju";
				position[] = {4429.56,5916};
				type = "ViewPoint";
				radiusA = 40;
				radiusB = 40;
			};
			class jalovec
			{
				name = "Jalovec";
				position[] = {4121.92,5582.1};
				type = "Hill";
				radiusA = 50;
				radiusB = 50;
			};
			class kocamangsed
			{
				name = "Log Cabin Sedlo";
				position[] = {3797.95,5833.74};
				type = "ViewPoint";
				radiusA = 40;
				radiusB = 40;
			};
			class stenar
			{
				name = "Stenar";
				position[] = {5343.17,5412.54};
				type = "Hill";
				radiusA = 30;
				radiusB = 30;
			};
			class razor
			{
				name = "Razor";
				position[] = {5108.74,5466.7};
				type = "Hill";
				radiusA = 30;
				radiusB = 30;
			};
			class prisojnik
			{
				name = "Prisojnik";
				position[] = {4907.07,5650.21};
				type = "Hill";
				radiusA = 30;
				radiusB = 30;
			};
			class pogacnikovdom
			{
				name = "Pogacnikov Dom";
				position[] = {5167.07,5383.71};
				type = "ViewPoint";
				radiusA = 40;
				radiusB = 40;
			};
			class aljazevdom
			{
				name = "Aljazev Dom";
				position[] = {5544.91,5440.52};
				type = "ViewPoint";
				radiusA = 40;
				radiusB = 40;
			};
			class kocaizvirsoce
			{
				name = "Dom Soca";
				position[] = {4537.95,5449.57};
				type = "ViewPoint";
				radiusA = 40;
				radiusB = 40;
			};
			class tkkserp
			{
				name = "Factory";
				position[] = {2717.44,3875.44};
				type = "ViewPoint";
				radiusA = 15;
				radiusB = 15;
			};
			class srpenica
			{
				name = "Srpenica";
				position[] = {2560.76,3965.96};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class trnovo
			{
				name = "Trnovo";
				position[] = {2974.97,3821.69};
				type = "NameVillage";
				radiusA = 35;
				radiusB = 35;
			};
			class cezsoca
			{
				name = "Cezsoca";
				position[] = {3002.2,4324.77};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class riofreddo
			{
				name = "Riofreddo";
				position[] = {3148.69,6238.14};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class sela
			{
				name = "Sela";
				position[] = {5325.73,2553.98};
				type = "NameVillage";
				radiusA = 20;
				radiusB = 20;
			};
			class selca
			{
				name = "Selca";
				position[] = {8708.46,3122.03};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class planica
			{
				name = "Planica Skijump";
				position[] = {4490.1,6300.2};
				type = "ViewPoint";
				radiusA = 40;
				radiusB = 40;
			};
			class krnkoca
			{
				name = "Krnska koca";
				position[] = {4250,3911.58};
				type = "ViewPoint";
				radiusA = 40;
				radiusB = 40;
			};
			class kreda
			{
				name = "Kredarica";
				position[] = {5630.11,5046.96};
				type = "ViewPoint";
				radiusA = 20;
				radiusB = 20;
			};
			class domplan
			{
				name = "Dom Planika";
				position[] = {5593.76,4974.37};
				type = "ViewPoint";
				radiusA = 20;
				radiusB = 20;
			};
			class sobec
			{
				name = "Camping Sobec";
				position[] = {8231.89,4768.17};
				type = "ViewPoint";
				radiusA = 20;
				radiusB = 20;
			};
			class rudnopolje
			{
				name = "Rudno Polje";
				position[] = {6220.73,4662.68};
				type = "ViewPoint";
				radiusA = 20;
				radiusB = 20;
			};
			class mrzlistud
			{
				name = "Mrzli Studenec";
				position[] = {6807.58,4710.77};
				type = "NameVillage";
				radiusA = 20;
				radiusB = 20;
			};
			class mesnovec
			{
				name = "Mesnovec";
				position[] = {6394.01,4549.5};
				type = "Hill";
				radiusA = 10;
				radiusB = 10;
			};
			class starfuz
			{
				name = "Stara Fuzina";
				position[] = {6025.19,3915.89};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class sredvas
			{
				name = "Srednja Vas";
				position[] = {6267.85,4032.63};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class Studor
			{
				name = "Studor";
				position[] = {6186.02,3984.98};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class jereka
			{
				name = "Jereka";
				position[] = {6537.15,4140.98};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class cesnjica
			{
				name = "Cesnjica";
				position[] = {6456.72,4014.89};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class bitnje
			{
				name = "Bitnje";
				position[] = {6570.37,3860.54};
				type = "NameVillage";
				radiusA = 10;
				radiusB = 10;
			};
			class nomenj
			{
				name = "Nomenj";
				position[] = {6954.81,3968.41};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class koprivnik
			{
				name = "Koprivnik";
				position[] = {6772.28,4175.26};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class gorjuse
			{
				name = "Gorjuse";
				position[] = {7047.45,4256.04};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class goreljek
			{
				name = "Goreljek";
				position[] = {6699.78,4489.36};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class drazgose
			{
				name = "Drazgose";
				position[] = {8480.49,3479.68};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class jelovica
			{
				name = "Jelovica";
				position[] = {8147.29,4258.56};
				type = "Hill";
				radiusA = 70;
				radiusB = 70;
			};
			class ratit
			{
				name = "Ratitovec";
				position[] = {7739.84,3271.51};
				type = "Hill";
				radiusA = 50;
				radiusB = 50;
			};
			class sorica
			{
				name = "Sorica";
				position[] = {7189.11,3130.39};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class podbrdo
			{
				name = "Podbrdo";
				position[] = {6711.47,3021.71};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class koritnica
			{
				name = "Koritnica";
				position[] = {5814.73,2375.8};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class kneza
			{
				name = "Kneza";
				position[] = {5424.25,2343.28};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class klavze
			{
				name = "Klavze";
				position[] = {5284.91,2330.45};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class baca
			{
				name = "Baca";
				position[] = {4891.38,2163.99};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class senica
			{
				name = "Senica";
				position[] = {4886.6,2295.12};
				type = "Hill";
				radiusA = 60;
				radiusB = 60;
			};
			class mrzlivrh
			{
				name = "Mrzli Vrh";
				position[] = {4545.71,2222.12};
				type = "Hill";
				radiusA = 60;
				radiusB = 60;
			};
			class volce
			{
				name = "Volce";
				position[] = {4375.63,2517.76};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class podljubinj
			{
				name = "Podljubinj";
				position[] = {4789.51,2581.26};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class selavolcah
			{
				name = "Sela Pri Volcah";
				position[] = {4472.15,2055.48};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class idrsko
			{
				name = "Idrsko";
				position[] = {3384.46,3212.58};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class borjana
			{
				name = "FOB Boriana";
				position[] = {2672.54,3403.99};
				type = "NameVillage";
				radiusA = 90;
				radiusB = 90;
			};
			class malivrh
			{
				name = "Mali Vrh";
				position[] = {2747.74,3639.78};
				type = "Hill";
				radiusA = 35;
				radiusB = 35;
			};
			class stol2
			{
				name = "Stol 2";
				position[] = {2546.28,3713.51};
				type = "Hill";
				radiusA = 35;
				radiusB = 35;
			};
			class selvanevea
			{
				name = "Sella Nevea";
				position[] = {2338.6,5203.74};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class montecanin
			{
				name = "Mt. Kanin";
				position[] = {2177.02,4884.28};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class modeondelbuinz
			{
				name = "Modeon del Buinz";
				position[] = {2305,5550.11};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class puntaplagnis
			{
				name = "Punta Plagnis";
				position[] = {2419.65,5521.22};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class cimec
			{
				name = "Cime Castrein";
				position[] = {2467.09,5622.68};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class joffuart
			{
				name = "Jof Fuart";
				position[] = {2480.23,5716.85};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class montepoviz
			{
				name = "Monte Poviz";
				position[] = {2470.62,5166.18};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class montelopa
			{
				name = "Monte Lopa";
				position[] = {2641.39,5018.8};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class colrotondo
			{
				name = "Colrotondo";
				position[] = {3919.99,6322.79};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class kopa
			{
				name = "Picco di Mezzodi (Kopa)";
				position[] = {3754.81,6065.72};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class rombon
			{
				name = "Rombon";
				position[] = {3027.41,4934.03};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class domkrnica
			{
				name = "Dom Krnica";
				position[] = {5074.23,5735.52};
				type = "ViewPoint";
				radiusA = 40;
				radiusB = 40;
			};
			class begunje
			{
				name = "Begunje";
				position[] = {8655.94,5026.98};
				type = "NameVillage";
				radiusA = 70;
				radiusB = 70;
			};
			class gorje
			{
				name = "Gorje";
				position[] = {7485.91,5083.95};
				type = "NameVillage";
				radiusA = 70;
				radiusB = 70;
			};
			class bdobrava
			{
				name = "Blejska Dobrava";
				position[] = {7800.64,5459.8};
				type = "NameVillage";
				radiusA = 70;
				radiusB = 70;
			};
			class zirovnica
			{
				name = "Zirovnica";
				position[] = {8111.18,5418.37};
				type = "NameVillage";
				radiusA = 70;
				radiusB = 70;
			};
			class breg
			{
				name = "Breg";
				position[] = {8034.04,5270.52};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class vrba
			{
				name = "Vrba";
				position[] = {8209.23,5195.33};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class kbela
			{
				name = "Koroska Bela";
				position[] = {7798.07,5671.63};
				type = "NameCity";
				radiusA = 60;
				radiusB = 60;
			};
			class belca
			{
				name = "Belca";
				position[] = {6143.95,6299.91};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class lescestables
			{
				name = "Stables";
				position[] = {8196.92,4864.65};
				type = "ViewPoint";
				radiusA = 15;
				radiusB = 15;
			};
			class zaha
			{
				name = "Zaga";
				position[] = {2379.23,4195.34};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class fisher
			{
				name = "Fishers Corner";
				position[] = {6946.01,1879};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class waterfact
			{
				name = "Factory";
				position[] = {7637.64,1910.27};
				type = "ViewPoint";
				radiusA = 15;
				radiusB = 15;
			};
			class smugden
			{
				name = "Smugglers Den";
				position[] = {7867.08,1943.23};
				type = "NameVillage";
				radiusA = 80;
				radiusB = 80;
			};
			class airportsmug
			{
				name = "Smugglers Airport";
				position[] = {7988.78,1965.18};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class suzid
			{
				name = "Suzid";
				position[] = {3013.04,3329.57};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class sseloo
			{
				name = "Staro Selo";
				position[] = {2858.47,3396.1};
				type = "NameVillage";
				radiusA = 35;
				radiusB = 35;
			};
			class skooma
			{
				name = "New Skooma";
				position[] = {7876.93,1406.76};
				type = "NameVillage";
				radiusA = 90;
				radiusB = 90;
			};
			class capegoat
			{
				name = "Cape Goat";
				position[] = {3513.52,1495.69};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class bfuerta
			{
				name = "Bajo Fuerta";
				position[] = {3709.67,2069.44};
				type = "NameVillage";
				radiusA = 70;
				radiusB = 70;
			};
			class ditchwood
			{
				name = "Ditchwood";
				position[] = {3854.39,1976.79};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class chabola
			{
				name = "Chabola";
				position[] = {3630.24,1662.09};
				type = "NameVillage";
				radiusA = 75;
				radiusB = 75;
			};
			class bolhowo
			{
				name = "Bolhowo";
				position[] = {3988.49,2121.51};
				type = "NameVillage";
				radiusA = 50;
				radiusB = 50;
			};
			class livek
			{
				name = "Livek";
				position[] = {3420.58,2830.72};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class radovna
			{
				name = "Radovna";
				position[] = {6381.86,5740.02};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class TaffGrove
			{
				name = "Taff Grove";
				position[] = {4780.08,1845.9};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class ramons
			{
				name = "Ramon's Villa";
				position[] = {4776.17,1556.29};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class Pikia
			{
				name = "Pikia";
				position[] = {4496.82,1818.65};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class Kelch
			{
				name = "Kelch";
				position[] = {5788.94,7136.95};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class Mork
			{
				name = "Mork";
				position[] = {5995.37,7143.97};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class Senzatoka
			{
				name = "Senzatoka";
				position[] = {6118.58,7371.2};
				type = "NameVillage";
				radiusA = 35;
				radiusB = 35;
			};
			class Kleinfort
			{
				name = "Kleinfort";
				position[] = {7043.22,7147.45};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class Freckle
			{
				name = "Freckle";
				position[] = {7204.62,7054.3};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class Hoopsberg
			{
				name = "Hoopsberg";
				position[] = {5539.39,7238.79};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class panractrack
			{
				name = "Pantherion Racing Park";
				position[] = {6744.52,7342.79};
				type = "ViewPoint";
				radiusA = 50;
				radiusB = 50;
			};
			class tocahotel
			{
				name = "Toca Hotel";
				position[] = {7944.33,1397.91};
				type = "ViewPoint";
				radiusA = 15;
				radiusB = 15;
			};
			class zuma
			{
				name = "Zuma Park";
				position[] = {7819.47,1380.01};
				type = "VegetationPalm";
				radiusA = 15;
				radiusB = 15;
			};
			class ladra
			{
				name = "Ladra";
				position[] = {3503.04,3278.31};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class dolje
			{
				name = "Dolje";
				position[] = {4429.37,2757.99};
				type = "NameVillage";
				radiusA = 20;
				radiusB = 20;
			};
			class Zappado
			{
				name = "Zappado";
				position[] = {5966.72,926.039};
				type = "NameVillage";
				radiusA = 75;
				radiusB = 75;
			};
			class Belley
			{
				name = "Belley";
				position[] = {6750.56,1563.33};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class Foxhill
			{
				name = "Foxhill";
				position[] = {7019.83,1134.1};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class Rockburn
			{
				name = "Rockburn";
				position[] = {7312.22,1403.54};
				type = "NameVillage";
				radiusA = 60;
				radiusB = 60;
			};
			class Cato
			{
				name = "Cato";
				position[] = {6672.41,432.199};
				type = "NameVillage";
				radiusA = 65;
				radiusB = 65;
			};
			class asabana
			{
				name = "Asabana Desert";
				position[] = {6651.21,883.801};
				type = "NameLocal";
				radiusA = 35;
				radiusB = 35;
			};
			class westor
			{
				name = "Villa Westor";
				position[] = {5787.16,795.539};
				type = "ViewPoint";
				radiusA = 10;
				radiusB = 10;
			};
			class supplybase
			{
				name = "Sunset Supply Base";
				position[] = {5660.87,870.329};
				type = "ViewPoint";
				radiusA = 10;
				radiusB = 10;
			};
			class aff
			{
				name = "AFF HQ";
				position[] = {6668.35,570.03};
				type = "ViewPoint";
				radiusA = 10;
				radiusB = 10;
			};
			class asabarmy
			{
				name = "Asabana Armybase";
				position[] = {6920.15,779.311};
				type = "ViewPoint";
				radiusA = 10;
				radiusB = 10;
			};
			class brown
			{
				name = "FOB Brown";
				position[] = {6445.73,2123.21};
				type = "ViewPoint";
				radiusA = 10;
				radiusB = 10;
			};
			class airmaleficio
			{
				name = "Airport Vatra";
				position[] = {734.457,9510.76};
				type = "Name";
				radiusA = 50;
				radiusB = 50;
			};
			class drulovka
			{
				name = "Drulovka Army Depot";
				position[] = {3495.12,8019.63};
				type = "NameLocal";
				radiusA = 7;
				radiusB = 7;
			};
			class hoherinn
			{
				name = "Hoher Inn";
				position[] = {2281.83,8551.57};
				type = "NameLocal";
				radiusA = 5;
				radiusB = 5;
			};
			class volkovo
			{
				name = "Volkovo";
				position[] = {2270.1,7867.52};
				type = "NameVillage";
				radiusA = 100;
				radiusB = 100;
			};
			class mello
			{
				name = "Mello";
				position[] = {2262.18,9076.93};
				type = "NameVillage";
				radiusA = 70;
				radiusB = 70;
			};
			class gazetovo
			{
				name = "Gazetovo";
				position[] = {1827.64,9429};
				type = "NameVillage";
				radiusA = 40;
				radiusB = 40;
			};
			class borna
			{
				name = "Borna";
				position[] = {1628.08,8851.74};
				type = "NameVillage";
				radiusA = 30;
				radiusB = 30;
			};
			class vatra
			{
				name = "Vatra";
				position[] = {1036.78,9370.18};
				type = "NameCity";
				radiusA = 70;
				radiusB = 70;
			};
			class malef
			{
				name = "Mt. Maleficio";
				position[] = {2104.22,8640.35};
				type = "Hill";
				radiusA = 100;
				radiusB = 100;
			};
			class maleficio
			{
				name = "Maleficio Island";
				position[] = {1751.19,9012.22};
				type = "NameLocal";
				radiusA = 60;
				radiusB = 60;
			};
			class ACityC_Jesenice
			{
				name = "";
				position[] = {7468,5793};
				type = "CityCenter";
				neighbors[] = {"ACityC_Bled","ACityC_Mojstrana","ACityC_Lesce"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Lesce
			{
				name = "";
				position[] = {8282,4878};
				type = "CityCenter";
				neighbors[] = {"ACityC_Bled","ACityC_BBist","ACityC_Jesenice"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Mojstrana
			{
				name = "";
				position[] = {6375,6109};
				type = "CityCenter";
				neighbors[] = {"ACityC_Jesenice","ACityC_Kgora","ACityC_Bled"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Bled
			{
				name = "";
				position[] = {7919,4934};
				type = "CityCenter";
				neighbors[] = {"ACityC_Jesenice","ACityC_BBist","ACityC_Mojstrana"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_KGora
			{
				name = "";
				position[] = {5070,6416};
				type = "CityCenter";
				neighbors[] = {"ACityC_Mojstrana","ACityC_Tarvisio","ACityC_Bovec"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Tarvisio
			{
				name = "";
				position[] = {3286,6640};
				type = "CityCenter";
				neighbors[] = {"ACityC_Arnold","ACityC_KGora","ACityC_Bovec"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Arnold
			{
				name = "";
				position[] = {4568,8062};
				type = "CityCenter";
				neighbors[] = {"ACityC_KGora","ACityC_Tarvisio","ACityC_Jesenice"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 400.0;
				radiusB = 400.0;
				angle = 0.0;
			};
			class ACityC_Bovec
			{
				name = "";
				position[] = {3001,4519};
				type = "CityCenter";
				neighbors[] = {"ACityC_Tarvisio","ACityC_Kgora","ACityC_Kobarid"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Kobarid
			{
				name = "";
				position[] = {3305,3365};
				type = "CityCenter";
				neighbors[] = {"ACityC_Tolmin","ACityC_Bovec","ACityC_Taff"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Taff
			{
				name = "";
				position[] = {4784,1847};
				type = "CityCenter";
				neighbors[] = {"ACityC_Tolmin","ACityC_Kobarid","ACityC_Zappada"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Tolmin
			{
				name = "";
				position[] = {4612,2598};
				type = "CityCenter";
				neighbors[] = {"ACityC_Kobarid","ACityC_Taff","ACityC_BBist"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_BBist
			{
				name = "";
				position[] = {6503,3756};
				type = "CityCenter";
				neighbors[] = {"ACityC_Bled","ACityC_Zappada","ACityC_Tolmin"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Zelezniki
			{
				name = "";
				position[] = {8406,3138};
				type = "CityCenter";
				neighbors[] = {"ACityC_Lesce","ACityC_Skooma","ACityC_BBist"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Skooma
			{
				name = "";
				position[] = {7871,1413};
				type = "CityCenter";
				neighbors[] = {"ACityC_BBist","ACityC_Zappada","ACityC_Tolmin"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Zappada
			{
				name = "";
				position[] = {5978,971};
				type = "CityCenter";
				neighbors[] = {"ACityC_Skooma","ACityC_BBist","ACityC_Foxhill"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Foxhill
			{
				name = "";
				position[] = {7018,1127};
				type = "CityCenter";
				neighbors[] = {"ACityC_Zappada","ACityC_BBist","ACityC_Skooma"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Volkovo
			{
				name = "";
				position[] = {2271,7871};
				type = "CityCenter";
				neighbors[] = {"ACityC_Mello"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Mello
			{
				name = "";
				position[] = {2275,9084};
				type = "CityCenter";
				neighbors[] = {"ACityC_Volkovo","ACityC_Borna","ACityC_Gazetovo"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			class ACityC_Borna
			{
				name = "";
				position[] = {1634,8845};
				type = "CityCenter";
				neighbors[] = {"ACityC_Vatra","ACityC_Mello","ACityC_Gazetovo"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Gazetovo
			{
				name = "";
				position[] = {1821,9441};
				type = "CityCenter";
				neighbors[] = {"ACityC_Vatra","ACityC_Mello","ACityC_Borna"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 150.0;
				radiusB = 150.0;
				angle = 0.0;
			};
			class ACityC_Vatra
			{
				name = "";
				position[] = {1030,9367};
				type = "CityCenter";
				neighbors[] = {"ACityC_Gazetovo","ACityC_Borna"};
				demography[] = {"CIV",1.0,"CIV_RU",0.0};
				radiusA = 400.0;
				radiusB = 400.0;
				angle = 0.0;
			};
		};
	};
};
class CfgWorldList
{
	class Panthera2{};
};
class CfgMissions
{
	class Cutscenes
	{
		class Panthera2Intro
		{
			directory = "ascz_panthera_fix\Scenes\intro.Panthera2";
		};
	};
};
class CfgMaterials
{
	class Water
	{
		ambient[] = {0.032,0.109,0.128,0.4};
		diffuse[] = {0.032,0.109,0.128,1.0};
		forcedDiffuse[] = {0.0264,0.03,0.013,0};
		specular[] = {1.5,1.5,1.5,0};
		emmisive[] = {0,0,0,0};
		class Stage1
		{
			class uvTransform
			{
				aside[] = {0,1,0};
				up[] = {1,0,0};
				dir[] = {0,0,1};
				pos[] = {0.3,0.4,0};
			};
			texture = "ca\data\data\water_nofhq.paa";
			uvSource = "texWaterAnim";
		};
		class Stage3
		{
			texture = "ca\data\data\water2_nohq.paa";
			uvSource = "none";
		};
		class Stage4
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "none";
		};
		class Stage5
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "none";
		};
		PixelShaderID = "Water";
		VertexShaderID = "Water";
		specularPower = 4;
		class Stage2
		{
			texture = "CA\data\data\sea_foam_lco.paa";
			uvSource = "none";
		};
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class IBRPantheragrassSurface: Default
	{
		files = "ibr_grass_*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "grass";
		character = "ibr_PgrassClutter";
		soundHit = "soft_ground";
	};
	class IBRPantherawoodSurface: Default
	{
		files = "ibr_wood_*";
		rough = 0.1;
		dust = 0.05;
		soundEnviron = "forest";
		character = "ibr_PwoodClutter";
		soundHit = "soft_ground";
	};
	class IBRPantherarockSurface: Default
	{
		access = 2;
		files = "ibr_rock_*";
		rough = 0.05;
		dust = 0.1;
		soundEnviron = "rock";
		character = "ibr_ProckClutter";
		soundHit = "concrete";
	};
	class IBRPantherastonesSurface: Default
	{
		access = 2;
		files = "ibr_stones_*";
		rough = 0.1;
		dust = 0.4;
		soundEnviron = "gravel";
		character = "ibr_PstonesClutter";
		soundHit = "hard_ground";
	};
	class IBRPantherasandSurface: Default
	{
		access = 2;
		files = "ibr_sand_*";
		rough = 0.2;
		dust = 0.5;
		soundEnviron = "sand";
		character = "ibr_PsandClutter";
		soundHit = "soft_ground";
	};
};
class CfgSurfaceCharacters
{
	class ibr_PgrassClutter
	{
		probability[] = {0.1,0.63,0.1,0.07};
		names[] = {"ibr_PantheraGrassBunch","ibr_PantheraGrassDlouha","ibr_PantheraGrassWeed","ibr_PantheraGrassFlowers"};
	};
	class ibr_PwoodClutter
	{
		probability[] = {0.2,0.2,0.03,0.07,0.1};
		names[] = {"ibr_PantheraWoodGrass","ibr_PantheraWoodFern","ibr_goban","ibr_musnica","ibr_smreka"};
	};
	class ibr_PstonesClutter
	{
		probability[] = {0.1};
		names[] = {"ibr_PantheraStoneRocks"};
	};
	class ibr_PsandClutter
	{
		probability[] = {0.05};
		names[] = {"ibr_PantheraStoneRocks"};
	};
	class ibr_ProckClutter
	{
		probability[] = {0.01};
		names[] = {"ibr_PantheraStoneRocks"};
	};
};