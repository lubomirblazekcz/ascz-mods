class CfgPatches
{
	class ascz_panthera_fix
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
	class Panthera2:CAWorld
	{
        icon = "";
		author = "IceBreakr";
		cutscenes[] = {"Panthera2Intro"};
		description = "Panthera";
		pictureMap = "\ascz_panthera_fix\Data\Panthera_ca.paa";
		pictureShot = "\ascz_panthera_fix\Data\ui_panthera_ca.paa";

        class Clutter
        {
            class ibr_PantheraGrassDlouha: DefaultClutter
            {
                affectedByWind = 0.1;
				model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
				scaleMin = 0.7;
				scaleMax = 1.3;
            };
            class ibr_PantheraGrass: DefaultClutter
            {
                affectedByWind = 0.3;
				model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
				scaleMin = 0.5;
				scaleMax = 1.2;
            };
            class ibr_PantheraWoodGrass: DefaultClutter
            {
                 affectedByWind = 0.1;
                 model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                 scaleMin = 0.8;
                 scaleMax = 1.2;
            };
        };
	};
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