class CfgPatches
{
	class ascz_cwr_fix
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
	class Cain: Utes
	{
        icon = "";
		author = "CWR Team";
		cutscenes[] = {"introCain"};
		description = "Kolgujev";
//		pictureMap = "\ascz_cwr_fix\Data\cain_ca.paa";
//		pictureShot = "\ascz_cwr_fix\Data\ui_cain_ca.paa";
	};
	class Eden: Utes
	{
        icon = "";
		author = "CWR Team";
//		cutscenes[] = {"introEden"};
		description = "Everon";
//		pictureMap = "\ascz_cwr_fix\Data\eden_ca.paa";
//		pictureShot = "\ascz_cwr_fix\Data\ui_eden_ca.paa";
	};
	class Noe: Utes
	{
        icon = "";
		author = "CWR Team";
//		cutscenes[] = {"introNoe"};
		description = "Nogova";
//		pictureMap = "\ascz_cwr_fix\Data\noe_ca.paa";
//		pictureShot = "\ascz_cwr_fix\Data\ui_noe_ca.paa";
	};
	class Abel: Utes
	{
        icon = "";
		author = "CWR Team";
//		cutscenes[] = {"introAbel"};
		description = "Malden";
//		pictureMap = "\ascz_cwr_fix\Data\abel_ca.paa";
//		pictureShot = "\ascz_cwr_fix\Data\ui_abel_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class introCain
		{
			directory = "ascz_cwr_fix\Scenes\intro.cain";
		};
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
	};
    class Land_cwr2_hangar_2: Land_SS_hangar
    {
        transportAmmo = 0;
        transportRepair = 0;
		supplyRadius = 0;
    };
    class Land_Cwr2_Hangar: Land_SS_hangar
    {
        transportAmmo = 0;
        transportRepair = 0;
		supplyRadius = 0;
    };
    class _fuelstation: fuelstation
    {
        transportFuel = 0;
		supplyRadius = 0;
    };
    class Land_cwr2_garaz_bez_tanku: _cwr2House
    {
        transportAmmo = 0;
		supplyRadius = 0;
    };
};
