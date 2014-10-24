class CfgPatches
{
	class ascz_ofp_islands_fix
	{
	    units[] = {};
        worlds[] = {};
        weapons[] = {};
		requiredVersion = 1.2;
		requiredAddons[] = {"AiA_Worlds"};
		author[] = {"EvroMalarkey"};
		version = "1.2";
	};
};
class CfgWorlds
{
    class Utes;
    class DefaultClutter;
	class everon2010: Utes
	{
        icon = "";
		author = "Hotzenplotz";
		cutscenes[] = {"introeveron2010"};
		description = "Everon";
		pictureMap = "\ascz_ofp_islands_fix\Data\everon2010_Ca.paa";
		pictureShot = "\ascz_ofp_islands_fix\Data\ui_everon2010_ca.paa";

		clutterGrid = 1.5;
		clutterDist = 125;
		noDetailDist = 65;
		fullDetailDist = 15;
        class Clutter
        {
            class hotze_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class hotze_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class hotze_GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class hotze_DryGrassBunch: DefaultClutter
            {
                model = "ca\plants2\clutter\c_grassDryLongBunch.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.9;
            };
            class hotze_GrassDryLong: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassDryLong.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.3;
            };
            class hotze_GrassDead: DefaultClutter
            {
                model = "ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d";
                affectedByWind = 0.75;
                scaleMin = 0.75;
                scaleMax = 1.25;
            };
            class hotze_GrassTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassTall.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.9;
            };
            class hotze_GrassAutumn: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassAutumn.p3d";
                affectedByWind = 0.2;
                swLighting = 1;
                scaleMin = 1;
                scaleMax = 1.5;
            };
            class hotze_AutumnFlowers: DefaultClutter
            {
                model = "ca\plants2\clutter\c_autumn_flowers.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1;
            };
            class hotze_GrassBunch: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassBunch.p3d";
                affectedByWind = 0.35;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class hotze_WeedTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_weed2.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class hotze_RaspBerry: DefaultClutter
            {
                model = "ca\plants2\clutter\c_raspBerry.p3d";
                affectedByWind = 0;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class hotze_FernAutumn: DefaultClutter
            {
                model = "ca\plants2\clutter\c_fern.p3d";
                affectedByWind = 0.1;
                scaleMin = 0.6;
                scaleMax = 1.2;
            };
            class hotze_FernAutumnTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_fernTall.p3d";
                affectedByWind = 0.15;
                scaleMin = 0.75;
                scaleMax = 1;
            };
            class hotze_SmallPicea: DefaultClutter
            {
                model = "ca\plants2\clutter\c_picea.p3d";
                affectedByWind = 0.01;
                scaleMin = 0.4;
                scaleMax = 1.4;
            };
            class hotze_MushroomsHorcak: DefaultClutter
            {
                model = "ca\plants2\clutter\c_MushroomHorcak.p3d";
                affectedByWind = 0;
                scaleMin = 0.5;
                scaleMax = 1.25;
            };
            class hotze_MushroomsPrasivka: hotze_MushroomsHorcak
            {
                model = "ca\plants2\clutter\c_MushroomPrasivky.p3d";
            };
            class hotze_MushroomsBabka: hotze_MushroomsHorcak
            {
                model = "ca\plants2\clutter\c_MushroomBabka.p3d";
            };
        };
	};
	class malden2010: Utes
	{
        icon = "";
		author = "Hotzenplotz";
		cutscenes[] = {"intromalden2010"};
		description = "Malden";
		pictureMap = "\ascz_ofp_islands_fix\Data\malden2010_ca.paa";
		pictureShot = "\ascz_ofp_islands_fix\Data\ui_malden2010_ca.paa";
        clutterGrid = 1.5;
        clutterDist = 125;
        noDetailDist = 65;
        fullDetailDist = 15;
        class Clutter
        {
            class hotze_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class hotze_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class hotze_GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class hotze_DryGrassBunch: DefaultClutter
            {
                model = "ca\plants2\clutter\c_grassDryLongBunch.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.9;
            };
            class hotze_GrassDryLong: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassDryLong.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.3;
            };
            class hotze_GrassDead: DefaultClutter
            {
                model = "ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d";
                affectedByWind = 0.75;
                scaleMin = 0.75;
                scaleMax = 1.25;
            };
            class hotze_GrassTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassTall.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.9;
            };
            class hotze_GrassAutumn: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassAutumn.p3d";
                affectedByWind = 0.2;
                swLighting = 1;
                scaleMin = 1;
                scaleMax = 1.5;
            };
            class hotze_AutumnFlowers: DefaultClutter
            {
                model = "ca\plants2\clutter\c_autumn_flowers.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1;
            };
            class hotze_GrassBunch: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassBunch.p3d";
                affectedByWind = 0.35;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class hotze_WeedTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_weed2.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class hotze_RaspBerry: DefaultClutter
            {
                model = "ca\plants2\clutter\c_raspBerry.p3d";
                affectedByWind = 0;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class hotze_FernAutumn: DefaultClutter
            {
                model = "ca\plants2\clutter\c_fern.p3d";
                affectedByWind = 0.1;
                scaleMin = 0.6;
                scaleMax = 1.2;
            };
            class hotze_FernAutumnTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_fernTall.p3d";
                affectedByWind = 0.15;
                scaleMin = 0.75;
                scaleMax = 1;
            };
            class hotze_SmallPicea: DefaultClutter
            {
                model = "ca\plants2\clutter\c_picea.p3d";
                affectedByWind = 0.01;
                scaleMin = 0.4;
                scaleMax = 1.4;
            };
            class hotze_MushroomsHorcak: DefaultClutter
            {
                model = "ca\plants2\clutter\c_MushroomHorcak.p3d";
                affectedByWind = 0;
                scaleMin = 0.5;
                scaleMax = 1.25;
            };
            class hotze_MushroomsPrasivka: hotze_MushroomsHorcak
            {
                model = "ca\plants2\clutter\c_MushroomPrasivky.p3d";
            };
            class hotze_MushroomsBabka: hotze_MushroomsHorcak
            {
                model = "ca\plants2\clutter\c_MushroomBabka.p3d";
            };
        };
	};
	class kolgujev2010: Utes
	{
        icon = "";
		author = "Hotzenplotz";
		cutscenes[] = {"introkolgujev2010"};
		description = "Kolgujev";
		pictureMap = "\ascz_ofp_islands_fix\Data\kolgujev2010_ca.paa";
		pictureShot = "\ascz_ofp_islands_fix\Data\ui_kolgujev2010_ca.paa";
        clutterGrid = 1.5;
        clutterDist = 125;
        noDetailDist = 65;
        fullDetailDist = 15;
        class Clutter
        {
            class hotze_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class hotze_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class hotze_GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class hotze_DryGrassBunch: DefaultClutter
            {
                model = "ca\plants2\clutter\c_grassDryLongBunch.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.9;
            };
            class hotze_GrassDryLong: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassDryLong.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.3;
            };
            class hotze_GrassDead: DefaultClutter
            {
                model = "ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d";
                affectedByWind = 0.75;
                scaleMin = 0.75;
                scaleMax = 1.25;
            };
            class hotze_GrassTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassTall.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.9;
            };
            class hotze_GrassAutumn: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassAutumn.p3d";
                affectedByWind = 0.2;
                swLighting = 1;
                scaleMin = 1;
                scaleMax = 1.5;
            };
            class hotze_AutumnFlowers: DefaultClutter
            {
                model = "ca\plants2\clutter\c_autumn_flowers.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1;
            };
            class hotze_GrassBunch: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassBunch.p3d";
                affectedByWind = 0.35;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class hotze_WeedTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_weed2.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class hotze_RaspBerry: DefaultClutter
            {
                model = "ca\plants2\clutter\c_raspBerry.p3d";
                affectedByWind = 0;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class hotze_FernAutumn: DefaultClutter
            {
                model = "ca\plants2\clutter\c_fern.p3d";
                affectedByWind = 0.1;
                scaleMin = 0.6;
                scaleMax = 1.2;
            };
            class hotze_FernAutumnTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_fernTall.p3d";
                affectedByWind = 0.15;
                scaleMin = 0.75;
                scaleMax = 1;
            };
            class hotze_SmallPicea: DefaultClutter
            {
                model = "ca\plants2\clutter\c_picea.p3d";
                affectedByWind = 0.01;
                scaleMin = 0.4;
                scaleMax = 1.4;
            };
            class hotze_MushroomsHorcak: DefaultClutter
            {
                model = "ca\plants2\clutter\c_MushroomHorcak.p3d";
                affectedByWind = 0;
                scaleMin = 0.5;
                scaleMax = 1.25;
            };
            class hotze_MushroomsPrasivka: hotze_MushroomsHorcak
            {
                model = "ca\plants2\clutter\c_MushroomPrasivky.p3d";
            };
            class hotze_MushroomsBabka: hotze_MushroomsHorcak
            {
                model = "ca\plants2\clutter\c_MushroomBabka.p3d";
            };
        };
	};
	class nogova2010: Utes
	{
        icon = "";
		author = "Hotzenplotz";
		cutscenes[] = {"intronogova2010"};
		description = "Nogova";
		pictureMap = "\ascz_ofp_islands_fix\Data\nogova2010_ca.paa";
		pictureShot = "\ascz_ofp_islands_fix\Data\ui_nogova2010_ca.paa";
        clutterGrid = 1.5;
        clutterDist = 125;
        noDetailDist = 65;
        fullDetailDist = 15;
        class Clutter
        {
            class hotze_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class hotze_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class hotze_GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class hotze_DryGrassBunch: DefaultClutter
            {
                model = "ca\plants2\clutter\c_grassDryLongBunch.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.9;
            };
            class hotze_GrassDryLong: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassDryLong.p3d";
                affectedByWind = 0.15;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.3;
            };
            class hotze_GrassDead: DefaultClutter
            {
                model = "ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d";
                affectedByWind = 0.75;
                scaleMin = 0.75;
                scaleMax = 1.25;
            };
            class hotze_GrassTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassTall.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.9;
            };
            class hotze_GrassAutumn: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassAutumn.p3d";
                affectedByWind = 0.2;
                swLighting = 1;
                scaleMin = 1;
                scaleMax = 1.5;
            };
            class hotze_AutumnFlowers: DefaultClutter
            {
                model = "ca\plants2\clutter\c_autumn_flowers.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1;
            };
            class hotze_GrassBunch: DefaultClutter
            {
                model = "ca\plants2\clutter\c_GrassBunch.p3d";
                affectedByWind = 0.35;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class hotze_WeedTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_weed2.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class hotze_RaspBerry: DefaultClutter
            {
                model = "ca\plants2\clutter\c_raspBerry.p3d";
                affectedByWind = 0;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class hotze_FernAutumn: DefaultClutter
            {
                model = "ca\plants2\clutter\c_fern.p3d";
                affectedByWind = 0.1;
                scaleMin = 0.6;
                scaleMax = 1.2;
            };
            class hotze_FernAutumnTall: DefaultClutter
            {
                model = "ca\plants2\clutter\c_fernTall.p3d";
                affectedByWind = 0.15;
                scaleMin = 0.75;
                scaleMax = 1;
            };
            class hotze_SmallPicea: DefaultClutter
            {
                model = "ca\plants2\clutter\c_picea.p3d";
                affectedByWind = 0.01;
                scaleMin = 0.4;
                scaleMax = 1.4;
            };
            class hotze_MushroomsHorcak: DefaultClutter
            {
                model = "ca\plants2\clutter\c_MushroomHorcak.p3d";
                affectedByWind = 0;
                scaleMin = 0.5;
                scaleMax = 1.25;
            };
            class hotze_MushroomsPrasivka: hotze_MushroomsHorcak
            {
                model = "ca\plants2\clutter\c_MushroomPrasivky.p3d";
            };
            class hotze_MushroomsBabka: hotze_MushroomsHorcak
            {
                model = "ca\plants2\clutter\c_MushroomBabka.p3d";
            };
        };
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class introkolgujev2010
		{
			directory = "ascz_ofp_islands_fix\Scenes\intro.kolgujev2010";
		};
		class introeveron2010
		{
			directory = "ascz_ofp_islands_fix\Scenes\intro.everon2010";
		};
		class intromalden2010
		{
			directory = "ascz_ofp_islands_fix\Scenes\intro.malden2010";
		};
		class intronogova2010
		{
			directory = "ascz_ofp_islands_fix\Scenes\intro.nogova2010";
		};
	};
};