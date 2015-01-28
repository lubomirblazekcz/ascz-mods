class CfgPatches
{
	class ascz_hazarkot_fix
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
    class Takistan;
    class DefaultClutter;
	class MCN_HazarKot: Takistan
	{
	    icon = "";
		author = "McNools";
		cutscenes[] = {"HazarKotIntro"};
		description = "Hazar-Kot Valley";
		pictureMap = "\ascz_hazarkot_fix\Data\HazarKot_Ca.paa";
		pictureShot = "\ascz_hazarkot_fix\Data\ui_hazarkot_ca.paa";

        class Clutter
        {
            class sm_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class sm_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
        };
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class HazarKotIntro
		{
			directory = "ascz_hazarkot_fix\Scenes\intro.MCN_HazarKot";
		};
	};
};