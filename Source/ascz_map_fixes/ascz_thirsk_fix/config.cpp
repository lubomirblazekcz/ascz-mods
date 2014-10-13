class CfgPatches
{
	class ascz_thirsk_fix
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
	class Thirsk: Utes
	{
	    icon = "";
		author = "Raunhofer";
		cutscenes[] = {"ThriskIntro"};
		description = "Thirsk";
		pictureMap = "\ascz_thirsk_fix\Data\Thirsk_ca.paa";
		pictureShot = "\ascz_thirsk_fix\Data\ui_thirsk_ca.paa";

        class clutter
        {
            class GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class FernAutumn: DefaultClutter
            {
                scaleMin = 0.6;
                scaleMax = 1.3;
            };
            class FernAutumnTall: DefaultClutter
            {
                scaleMin = 0.7;
                scaleMax = 1.2;
            };
        };
	};
	class ThirskW: Utes
	{
	    icon = "";
		author = "Raunhofer";
		cutscenes[] = {"ThriskWIntro"};
		description = "Thirsk Winter";
		pictureMap = "\ascz_thirsk_fix\Data\Thirsk_w_ca.paa";
		pictureShot = "\ascz_thirsk_fix\Data\ui_thirsk_w_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class ThriskIntro
		{
			directory = "ascz_thirsk_fix\Scenes\intro.Thirsk";
		};
		class ThriskWIntro
		{
			directory = "ascz_thirsk_fix\Scenes\intro.ThirskW";
		};
	};
};