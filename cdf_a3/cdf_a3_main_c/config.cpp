class CfgPatches
{
	class cdf_a3_main_c
	{
		units[] = {"B_CDF_A3_Soldier","B_CDF_A3_Soldier_Light","B_CDF_A3_Soldier_GL","B_CDF_A3_Soldier_Militia","B_CDF_A3_Soldier_Medic","B_CDF_A3_Soldier_Sniper","B_CDF_A3_Soldier_Spotter","B_CDF_A3_Soldier_Marksman","B_CDF_A3_Soldier_RPG","B_CDF_A3_Soldier_Strela","B_CDF_A3_Soldier_AR","B_CDF_A3_Soldier_MG","B_CDF_A3_Soldier_TL","B_CDF_A3_Soldier_Officer","B_CDF_A3_Commander","B_CDF_A3_Soldier_Pilot","B_CDF_A3_Soldier_Crew","B_CDF_A3_Soldier_Engineer","CDF_A3_Mi_24v","CDF_A3_Mi_24p","CDF_A3_Mi17","CDF_A3_Mi17_rockets","CDF_A3_Mi17_medevac","CDF_A3_UAZ_469","CDF_A3_UAZ_469_Open","CDF_A3_Su25SM","CDF_A3_T72","CDF_A3_BMP2","CDF_A3_BMP2_HQ","CDF_A3_BMP2_Ambul","CDF_A3_ZSU"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_troops","RHS_A2_AirImport","RDS_Tanks","RDS_APC"};
	};
};

class cfgFactionClasses
{
	class CDF_A3
	{
		displayName = "CDF A3";
		priority = 1;
		side = 1;
		genericNames = "CzechMen";
		identityTypes[] = {"LanguageCDF","Head_Euro"};
		flag = "cdf_a3\cdf_a3_main\data\flag_cdf_co.paa";
        icon = "cdf_a3\cdf_a3_main\data\icon_cdf_co.paa";
	};
};
class CfgVehicles
{
    //  INFANTRY  //
    #include "CfgVehicles\infantry.hpp"

    //  VEHICLES  //
   #include "CfgVehicles\vehicles.hpp"
};

#include "CzechMen.hpp"
#include "cfgWeapons.hpp"
#include "cfgGroups.hpp"