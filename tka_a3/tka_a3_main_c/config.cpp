class CfgPatches
{
	class tka_a3_main_c
	{
		units[] = {"B_TKA_A3_Soldier","B_TKA_A3_Soldier_GL","B_TKA_A3_Soldier_B","B_TKA_A3_Soldier_AAT","B_TKA_A3_Soldier_AMG","B_TKA_A3_Soldier_LAT","B_TKA_A3_Soldier_AT","B_TKA_A3_Soldier_HAT","B_TKA_A3_Soldier_AA","B_TKA_A3_Soldier_Engineer","B_TKA_A3_Soldier_MG","B_TKA_A3_Soldier_AR","B_TKA_A3_Soldier_Medic","B_TKA_A3_Soldier_SL","B_TKA_A3_Soldier_Officer","B_TKA_A3_Aziz","B_TKA_A3_Commander","B_TKA_A3_Soldier_Spotter","B_TKA_A3_Soldier_Sniper","B_TKA_A3_Soldier_SniperH","B_TKA_A3_Soldier_Sniper_Night","B_TKA_A3_Soldier_Night_1","B_TKA_A3_Soldier_Night_2","B_TKA_A3_Soldier_TWS","B_TKA_A3_Soldier_Crew","B_TKA_A3_Soldier_Pilot","B_TKA_A3_Special_Forces","B_TKA_A3_Special_Forces_TL","B_TKA_A3_Special_Forces_MG","TKA_A3_ZU23","TKA_A3_KORD","TKA_A3_KORD_high","TKA_A3_AGS","TKA_A3_Metis","TKA_A3_Igla_AA_pod","TKA_A3_2b14_82mm","TKA_A3_D30","TKA_A3_Mi_24v","TKA_A3_Mi_24p","TKA_A3_Mi17","TKA_A3_Mi17_rockets","TKA_A3_Mi17_medevac","TKA_A3_UAZ_469","TKA_A3_UAZ_469_Open","TKA_A3_Su25SM","TKA_A3_L39_CAS","TKA_A3_T34","TKA_A3_T55","TKA_A3_T72","TKA_A3_BMP2","TKA_A3_BMP2_HQ","TKA_A3_BMP2_Ambul","TKA_A3_ZSU","TKA_A3_BTR60","TKA_A3_M113","TKA_A3_Ural","TKA_A3_Ural_Open","TKA_A3_Ural_Fuel","TKA_A3_BM21"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_troops","RHS_A2_AirImport","RDS_Tanks","RDS_APC"};
	};
};

class cfgFactionClasses
{
	class TKA_A3
	{
		displayName = "$STR_EP1_dn_cfggroups_east_tka_a3";
		priority = 1;
		side = 0;
		genericNames = "TakistaniMen";
        identityTypes[] = {"LanguagePER_F","Head_TK"};
		flag = "tka_a3\tka_a3_main\data\flag_tka_co.paa";
        icon = "tka_a3\tka_a3_main\data\icon_tka_co.paa";
	};
};
class DefaultEventhandlers;
class UniformSlotInfo;
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
#include "AzizMen.hpp"
#include "CfgHeads.hpp"
#include "cfgWeapons.hpp"
#include "cfgGroups.hpp"