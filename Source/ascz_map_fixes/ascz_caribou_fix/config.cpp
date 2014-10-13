class CfgPatches
{
	class ascz_caribou_fix
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
    class CAWorld;
    class DefaultClutter;
	class Caribou: CAWorld
	{
	    icon = "";
		author = "Raunhofer";
		cutscenes[] = {"CaribouIntro"};
		description = "Caribou";
		pictureMap = "\ascz_caribou_fix\Data\Caribou_ca.paa";
		pictureShot = "\ascz_caribou_fix\Data\ui_caribou_ca.paa";

        class clutter
        {
            class Caribou_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class Caribou_GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class Caribou_FernAutumn: DefaultClutter
            {
                scaleMin = 0.6;
                scaleMax = 1.3;
            };
            class Caribou_FernAutumnTall: DefaultClutter
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
		class CaribouIntro
		{
			directory = "ascz_caribou_fix\Scenes\intro.Caribou";
		};
	};
};