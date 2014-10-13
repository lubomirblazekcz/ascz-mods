class CfgPatches
{
	class ascz_celle_fix
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
class CfgLocationTypes
{
	class MBG_celle2_icon_A7
	{
		font = "puristaLight";
	};
};
class CfgWorlds
{
    class Chernarus;
    class DefaultClutter;
	class mbg_celle2: Chernarus
	{
	    icon = "";
		author = "Mondkalb";
		cutscenes[] = {"CelleIntro"};
		description = "Celle";
		pictureMap = "\ascz_celle_fix\Data\Celle_ca.paa";
		pictureShot = "\ascz_celle_fix\Data\ui_celle_ca.paa";

        class Clutter
        {
            class mbg_celle2_grass_green_long: DefaultClutter
            {
                affectedByWind = 0.7;
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class MBG_FernAutumn: DefaultClutter
            {
                scaleMin = 0.6;
                scaleMax = 1.3;
            };
            class MBG_FernAutumnTall: DefaultClutter
            {
                scaleMin = 0.7;
                scaleMax = 1.2;
            };
        };
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class CelleIntro
		{
			directory = "ascz_celle_fix\Scenes\intro.mbg_celle2";
		};
	};
};