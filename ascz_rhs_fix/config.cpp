class CfgPatches
{
	class ascz_rhs_fix
	{
		units[] = {"RDS_ZU23_RHS_MSV","RDS_KORD_RHS_MSV","RDS_KORD_high_RHS_MSV","RDS_AGS_RHS_MSV","RDS_Metis_RHS_MSV","RDS_SPG9_RHS_MSV","RDS_Igla_AA_pod_RHS_MSV","RDS_2b14_82mm_RHS_MSV","RDS_D30_RHS_MSV","RDS_D30_AT_RHS_MSV","RDS_ZU23_RHS_VDV","RDS_KORD_RHS_VDV","RDS_KORD_high_RHS_VDV","RDS_AGS_RHS_VDV","RDS_Metis_RHS_VDV","RDS_SPG9_RHS_VDV","RDS_Igla_AA_pod_RHS_VDV","RDS_2b14_82mm_RHS_VDV","RDS_D30_RHS_VDV","RDS_D30_AT_RHS_VDV","RDS_M119_RHS_OCP","RDS_M252_RHS_OCP","RDS_TOW_TriPod_RHS_OCP","RDS_M119_RHS_UCP","RDS_M252_RHS_UCP","RDS_TOW_TriPod_RHS_UCP"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"RDS_StaticWeapons_Core","rhs_c_troops","rhs_c_cars","rhs_c_tanks","rhs_c_2s3","RHS_A2_AirImport","rhs_c_a2port_armor","RHS_A2_CarsImport","rhs_c_a3retex","rhs_c_bmd","rhs_c_bmp","rhs_c_bmp3","rhs_c_btr","rhs_c_radars","rhs_c_sprut","rhs_c_t72","rhs_c_trucks","rhs_main","rhsusf_c_troops","rhsusf_main"};
		version = "1.0";
		author[] = {"Rydygier","EvroMalarkey"};
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
    class rhs_vehclass_infantry_flora
    {
        displayname= "$STR_ASCZ_RHS_FACTION_FLORA";
    };
    class rhs_vehclass_infantry_mflora
    {
        displayname= "$STR_ASCZ_RHS_FACTION_MFLORA";
    };
    class rhs_vehclass_infantry_emr
    {
        displayname= "$STR_ASCZ_RHS_FACTION_EMR";
    };
	class rhs_vehclass_infantry_ucp
    {
        displayname= "$STR_ASCZ_RHS_FACTION_UCP";
    };
	class rhs_vehclass_infantry_ocp
    {
        displayname= "$STR_ASCZ_RHS_FACTION_OCP";
    };
	class rhs_vehclass_infantry_usmc
    {
        displayname= "$STR_ASCZ_RHS_FACTION_USMC";
    };
	class rhs_vehclass_infantry_usmc_d
    {
        displayname= "$STR_ASCZ_RHS_FACTION_USMC_D";
    };
	class rhs_vehclass_infantry_usmc_fr
    {
        displayname= "$STR_ASCZ_RHS_FACTION_USMC_FR";
    };
	class rhs_vehclass_infantry_usmc_fr_d
    {
        displayname= "$STR_ASCZ_RHS_FACTION_USMC_FR_D";
    };
};
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"