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
    class DefaultWorld
    {
        class Weather
        {
            class Overcast;
        };
    };
    class CAWorld: DefaultWorld
    {
        class Grid{};
        class DayLightingBrightAlmost;
        class DayLightingRainy;
        class DefaultClutter;
        class Weather: Weather
        {
            class Lighting;
            class Overcast: Overcast
            {
                class Weather1;
                class Weather2;
                class Weather3;
                class Weather4;
                class Weather5;
                class Weather6;
            };
        };
    };
    class DefaultLighting;
    class Utes: CAWorld {};
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
        class Grid: Grid
        {
            offsetX = 0;
            offsetY = 0;
            class Zoom1
            {
                zoomMax = 0.2;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom2
            {
                zoomMax = 0.95;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom3
            {
                zoomMax = 1e+030;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
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
        class Grid: Grid
        {
            offsetX = 0;
            offsetY = 0;
            class Zoom1
            {
                zoomMax = 0.2;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom2
            {
                zoomMax = 0.95;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom3
            {
                zoomMax = 1e+030;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
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
        class Grid: Grid
        {
            offsetX = 0;
            offsetY = 0;
            class Zoom1
            {
                zoomMax = 0.2;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom2
            {
                zoomMax = 0.95;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom3
            {
                zoomMax = 1e+030;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
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
        class Grid: Grid
        {
            offsetX = 0;
            offsetY = 0;
            class Zoom1
            {
                zoomMax = 0.2;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom2
            {
                zoomMax = 0.95;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom3
            {
                zoomMax = 1e+030;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
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
delete cfgModels;
class CfgWeapons
{
    class Binocular;
	class cwr2_Phone: Binocular {
			scope = 0;
		    simulation = "";
	};
};
class CfgVehicles
{
    class house;
    class _cwr2House: house
    {
        displayname = "House";
        accuracy = 1000;
    };
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
        autocenter = 0;
        model = "";
        reversed = 0;
        simulation = "alwaysshow";
	};
};
