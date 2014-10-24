class CfgPatches
{
	class ascz_cwr2_islands_fix
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
	class Eden: Utes
	{
        icon = "";
		author = "CWR Team";
		cutscenes[] = {"introEden"};
		description = "Everon";
		pictureMap = "\ascz_cwr2_islands_fix\Data\Eden_ca.paa";
		pictureShot = "\ascz_cwr2_islands_fix\Data\ui_eden_ca.paa";

		clutterGrid = 1.5;
		clutterDist = 125;
		noDetailDist = 65;
		fullDetailDist = 15;
        class Clutter
        {
            class eden_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class eden_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class eden_GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
        };
	};
	class Abel: Utes
	{
        icon = "";
		author = "CWR Team";
		cutscenes[] = {"introAbel"};
		description = "Malden";
		pictureMap = "\ascz_cwr2_islands_fix\Data\Abel_ca.paa";
		pictureShot = "\ascz_cwr2_islands_fix\Data\ui_abel_ca.paa";
        clutterGrid = 1.5;
        clutterDist = 125;
        noDetailDist = 65;
        fullDetailDist = 15;
	};
	class Cain: Utes
	{
        icon = "";
		author = "CWR Team";
		cutscenes[] = {"introCain"};
		description = "Kolgujev";
		pictureMap = "\ascz_cwr2_islands_fix\Data\Cain_ca.paa";
		pictureShot = "\ascz_cwr2_islands_fix\Data\ui_cain_ca.paa";
        clutterGrid = 1.5;
        clutterDist = 125;
        noDetailDist = 65;
        fullDetailDist = 15;
	};
	class Noe: Utes
	{
        icon = "";
		author = "CWR Team";
		cutscenes[] = {"introNoe"};
		description = "Nogova";
		pictureMap = "\ascz_cwr2_islands_fix\Data\Noe_ca.paa";
		pictureShot = "\ascz_cwr2_islands_fix\Data\ui_noe_ca.paa";
        clutterGrid = 1.5;
        clutterDist = 125;
        noDetailDist = 65;
        fullDetailDist = 15;
        class Clutter
        {
            class noe_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class noe_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class noe_GrassCrookedForest: DefaultClutter
            {
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
		class introCain
		{
			directory = "ascz_cwr2_islands_fix\Scenes\intro.Cain";
		};
		class introEden
		{
			directory = "ascz_cwr2_islands_fix\Scenes\intro.Eden";
		};
		class introAbel
		{
			directory = "ascz_cwr2_islands_fix\Scenes\intro.Abel";
		};
		class introNoe
		{
			directory = "ascz_cwr2_islands_fix\Scenes\intro.Noe";
		};
	};
};
class CfgVehicleClasses
{
	class Cwr2GroupWrecks
	{
		DisplayName = "CWR² Wrecks";
	};
};
class CfgVehicles
{
    class _cwr2House;
    class Land_SS_hangar;
    class fuelstation;
	class Land_cwr2_repair_center: _cwr2House
	{
		transportRepair = 0;
		supplyRadius = 0;
		scope = 2;
	};
    class Land_cwr2_hangar_2: Land_SS_hangar
    {
        transportAmmo = 0;
        transportRepair = 0;
		supplyRadius = 0;
		scope = 2;
    };
    class Land_Cwr2_Hangar: Land_SS_hangar
    {
        transportAmmo = 0;
        transportRepair = 0;
		supplyRadius = 0;
		scope = 2;
    };
    class _fuelstation: fuelstation
    {
        transportFuel = 0;
		supplyRadius = 0;
		scope = 1;
    };
    class Land_cwr2_garaz_bez_tanku: _cwr2House
    {
        transportAmmo = 0;
		supplyRadius = 0;
		scope = 2;
    };
    class C130J_wreck_EP1;
    class C130JWreck: C130J_wreck_EP1{};
};
class CfgNonAIVehicles
{
	class _cwrProxy
	{
		animated = 0;
		shadow = 1;
	};
};
