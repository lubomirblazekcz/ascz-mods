class CfgPatches
{
	class ascz_vostok_fix
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
	class Vostok: Utes
	{
	    icon = "";
		author = "Old Bear";
		cutscenes[] = {"VostokIntro"};
		description = "Vostok";
		pictureMap = "\ascz_vostok_fix\Data\Vostok_ca.paa";
		pictureShot = "\ascz_vostok_fix\Data\ui_vostok_ca.paa";
		
		class clutter
        {
            class vos_GrassCrookedforest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                affectedByWind = 0.3;
                scaleMin = 0.5;
                scaleMax = 0.75;
            };
            class vos_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                affectedByWind = 0.3;
                scaleMin = 0.5;
                scaleMax = 0.75;
            };
        };
	};
    class Vostok_w: Utes
	{
	    icon = "";
		author = "Old Bear";
		cutscenes[] = {"VostokWIntro"};
		description = "Vostok Winter";
		pictureMap = "\ascz_vostok_fix\Data\Vostok_w_ca.paa";
		pictureShot = "\ascz_vostok_fix\Data\ui_vostok_w_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class VostokIntro
		{
			directory = "ascz_vostok_fix\Scenes\intro.Vostok";
		};
		class VostokWIntro
		{
			directory = "ascz_vostok_fix\Scenes\intro.Vostok_w";
		};
	};
};