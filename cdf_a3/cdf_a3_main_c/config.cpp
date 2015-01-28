class CfgPatches
{
	class cdf_a3_main_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_troops"};
	};
};

class cfgFactionClasses
{
	class CDF_A3
	{
		displayName = "CDF";
		priority = 1;
		side = 1;
		genericNames = "CzechMen";
		identityTypes[] = {"LanguageCDF","Head_Euro"};
		icon = "";
	};
};
class CfgVehicles
{
    //  INFANTRY  //
    #include "CfgVehicles\infantry.hpp"

    //  VEHICLES  //
//    #include "CfgVehicles\vehicles.hpp"
};

#include "CzechMen.hpp"
#include "cfgWeapons.hpp"
//#include "cfgGroups.hpp"