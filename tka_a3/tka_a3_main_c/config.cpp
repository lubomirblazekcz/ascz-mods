class CfgPatches
{
	class tka_a3_main_c
	{
		units[] = {"TKA_A3_Mi_24v","TKA_A3_Mi_24p","TKA_A3_Mi17","TKA_A3_Mi17_rockets","TKA_A3_Mi17_medevac","TKA_A3_UAZ_469","TKA_A3_UAZ_469_Open","TKA_A3_Su25SM","TKA_A3_T72","TKA_A3_BMP2","TKA_A3_BMP2_HQ","TKA_A3_BMP2_Ambul","TKA_A3_ZSU","TKA_A3_Ural","TKA_A3_Ural_Open","TKA_A3_Ural_Fuel","TKA_A3_BM21","TKA_A3_ZU23","TKA_A3_DSHKM","TKA_A3_DSHkM_Mini_TriPod","TKA_A3_AGS","TKA_A3_SPG9","TKA_A3_2b14_82mm","TKA_A3_D30"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_troops","RHS_A2_AirImport","RDS_Tanks","RDS_APC"};
	};
};

class cfgFactionClasses
{
	class TKA_A3
	{
		displayName = "Takistani Army A3";
		priority = 1;
		side = 0;
		genericNames = "TakistaniMen";
        identityTypes[] = {"LanguagePER_F","Head_TK"};
		flag = "tka_a3\tka_a3_main\data\flag_tka_co.paa";
        icon = "tka_a3\tka_a3_main\data\icon_tka_co.paa";
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
    //  INFANTRY  //
    #include "CfgVehicles\infantry.hpp"

    //  VEHICLES  //
   #include "CfgVehicles\vehicles.hpp"

    //  STATIC WEAPONS  //
   #include "CfgVehicles\static.hpp"
};

#include "TakistaniMen.hpp"
#include "cfgWeapons.hpp"
#include "cfgGroups.hpp"