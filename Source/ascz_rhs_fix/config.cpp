class CfgPatches
{
	class ascz_rhs_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"RHS_RU_Radio","rhs_c_troops","rhs_c_cars","rhs_c_tanks","rhs_c_2s3","RHS_A2_AirImport","rhs_c_a2port_armor","RHS_A2_CarsImport","rhs_c_a3retex","rhs_c_bmd","rhs_c_bmp","rhs_c_bmp3","rhs_c_btr","rhs_c_radars","rhs_c_sprut","rhs_c_t72","rhs_c_trucks","rhs_main","rhsusf_c_troops"};
		version = "1.0";
		author[] = {"Rydygier","EvroMalarkey"};
	};
};
class CfgVoice
{
    class BaseRUS;
	class RUS: BaseRUS
	{
        identityTypes[] = {"default","Head_USMC","Head_USMC_CO","Head_USMC_Camo","Head_USMC_CO_Camo","Head_Default","Head_Special","LanguageRUS"};
	};
};
class CfgVehicleClasses
{
	class rhs_vehclass_infantry
	{
		displayname= "$STR_ASCZ_RHS_FACTION_MEN";
	};
	class rhs_vehclass_infantry_msv
    {
        displayname= "$STR_ASCZ_RHS_FACTION_MSV";
    };
	class rhs_vehclass_infantry_vdv
    {
        displayname= "$STR_ASCZ_RHS_FACTION_VDV";
    };
	class rhs_vehclass_infantry_ucp
    {
        displayname= "$STR_ASCZ_RHS_FACTION_UCP";
    };
	class rhs_vehclass_infantry_ocp
    {
        displayname= "$STR_ASCZ_RHS_FACTION_OCP";
    };
};
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"