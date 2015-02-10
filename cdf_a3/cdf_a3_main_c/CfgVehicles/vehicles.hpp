// MISSING
//Ural (Repair)
//Ural (Ammo)
//Ural (ZU-23)
//UAZ (AGS-30)
//UAZ (DShKM)
//BRDM-2
//BRDM-2 (ATGM)


// AIR
class RHS_Mi24_base;
class RHS_Mi24V_base;
class CDF_A3_Mi_24v: RHS_Mi24V_base
{
    accuracy = 0.5;
	author = "CDF_A3";
    displayName = "Mi-24V";
    scope=2;
    scopeCurator=2;
    side = 1;
    crew = "B_CDF_A3_Soldier_Pilot";
    typicalCargo[] = {"B_CDF_A3_Soldier_Pilot"};
    faction = "CDF_A3";
    vehicleclass = "Air";
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "n1",
        "n2",
        "exhaust",
        "tail_decals"
    };
    hiddenselectionstextures[] =
    {
        "cdf_a3\cdf_a3_main\data\mi35_001_blu_co.paa",
        "cdf_a3\cdf_a3_main\data\mi35_002_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
    };
};
class CDF_A3_Mi_24p: RHS_Mi24_base
{
    accuracy = 0.5;
	author = "CDF_A3";
    displayName = "Mi-24P";
    scope=2;
    scopeCurator=2;
    side = 1;
    crew = "B_CDF_A3_Soldier_Pilot";
    typicalCargo[] = {"B_CDF_A3_Soldier_Pilot"};
    faction = "CDF_A3";
    vehicleclass = "Air";
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "n1",
        "n2",
        "exhaust",
        "tail_decals"
    };
    hiddenselectionstextures[] =
    {
        "cdf_a3\cdf_a3_main\data\mi35_001_blu_co.paa",
        "cdf_a3\cdf_a3_main\data\mi35_002_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
    };
};
class RHS_Mi8AMT_base;
class RHS_Mi8AMTSh_base;
class RHS_Mi8_base;
class CDF_A3_Mi17: RHS_Mi8_base
{
	author = "CDF_A3";
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Pilot";
    typicalCargo[] = {"B_CDF_A3_Soldier_Pilot"};
    scope=2;
    scopeCurator=2;
    displayName = "Mi-17";
    side = 1;
    vehicleclass = "Air";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
    hiddenselectionstextures[] =
    {
        "cdf_a3\cdf_a3_main\data\mi8_body_g_cdf_co.paa",
        "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
        "a3\data_f\clear_empty.paa",
        "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa"
    };
};
class CDF_A3_Mi17_rockets: RHS_Mi8AMTSh_base
{
    scope=2;
    scopeCurator=2;
    displayName = "Mi-17 (Rockets)";
	author = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Pilot";
    typicalCargo[] = {"B_CDF_A3_Soldier_Pilot"};
    faction = "CDF_A3";
    side = 1;
    vehicleclass = "Air";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
    hiddenselectionstextures[] =
    {
        "cdf_a3\cdf_a3_main\data\mi8_body_g_cdf_co.paa",
        "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
        "a3\data_f\clear_empty.paa",
        "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa"
    };
};
class CDF_A3_Mi17_medevac: RHS_Mi8AMT_base
{
    scope=2;
    scopeCurator=2;
    displayName = "Mi-17 (Medevac)";
	author = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Pilot";
    typicalCargo[] = {"B_CDF_A3_Soldier_Pilot"};
    faction = "CDF_A3";
    side = 1;
    vehicleClass = "Support";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
    hiddenselectionstextures[] =
    {
        "cdf_a3\cdf_a3_main\data\mi8_body_g_cdf_co.paa",
        "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
        "a3\data_f\clear_empty.paa",
        "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa"
    };
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 30;
        };
        class _xx_Medikit
        {
            name = "Medikit";
            count = 15;
        };
    };
};
class RHS_Su25SM_vvs;
class CDF_A3_Su25SM: RHS_Su25SM_vvs
{
    faction = "CDF_A3";
	author = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Pilot";
    scope=2;
    scopeCurator=2;
    side = 1;
    displayName="$STR_RHS_SU25SM_Name";
    vehicleclass = "Air";
    hiddenselectionstextures[] =
    {
        "cdf_a3\cdf_a3_main\data\su25_body1_cdf_co.paa",
        "cdf_a3\cdf_a3_main\data\su25_body2_cdf_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
    };
};

// CARs and TRUCKs
class LandVehicle;
class Car: LandVehicle
{
    class HitPoints;
    class NewTurret;
};
class Car_F: Car
{
    class Turrets
    {
        class MainTurret: NewTurret
        {
            disableSoundAttenuation = 1;
            class ViewOptics;
        };
    };
    class HitPoints
    {
        class HitLFWheel;
        class HitLF2Wheel;
        class HitRFWheel;
        class HitRF2Wheel;
        class HitBody;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
    };
    class EventHandlers;
    class AnimationSources;
};
class Offroad_01_base_F: Car_F{};
class Truck_F: Car_F{};
class RHS_UAZ_Base:Offroad_01_base_F{};
class rhs_uaz_open_Base: RHS_UAZ_Base{};
class CDF_A3_UAZ_469: RHS_UAZ_Base
{
    accuracy = 0.5;
	author = "CDF_A3";
    vehicleClass = "Car";
    displayName = "UAZ-469";
    scope=2;
    scopeCurator=2;
    side = 1;
    crew = "B_CDF_A3_Soldier_Militia";
    typicalCargo[] = {"B_CDF_A3_Soldier_Militia"};
    faction = "CDF_A3";
    hiddenSelections[]=
    {
        "camo1",
        "camog1",
        "camog2",
        "n1",				// 2 - 4 number system
        "n2",
        "n3",
        "n4",
        "i1",				// 6 - right army
        "i2",				// 7 - left army
        "i3",				// 8 - right platoon
        "i4"				// 9 - left platoon
    };

    hiddenSelectionsTextures[] =
    {
        "cdf_a3\cdf_a3_main\data\uaz_main_CDF_old_co.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa"
    };
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\cdf_a3\cdf_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class CDF_A3_UAZ_469_Open: rhs_uaz_open_Base
{
    accuracy = 0.5;
	author = "CDF_A3";
    vehicleClass = "Car";
    displayName = "UAZ-469 (Open)";
    scope=2;
    scopeCurator=2;
    side = 1;
    crew = "B_CDF_A3_Soldier_Militia";
    typicalCargo[] = {"B_CDF_A3_Soldier_Militia"};
    faction = "CDF_A3";
    hiddenSelections[]=
    {
        "camo1",
        "camog1",
        "camog2",
        "n1",				// 2 - 4 number system
        "n2",
        "n3",
        "n4",
        "i1",				// 6 - right army
        "i2",				// 7 - left army
        "i3",				// 8 - right platoon
        "i4"				// 9 - left platoon
    };

    hiddenSelectionsTextures[] =
    {
        "cdf_a3\cdf_a3_main\data\uaz_main_CDF_old_co.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa"
    };
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\cdf_a3\cdf_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class RHS_Ural_BaseTurret: Truck_F{};
class RHS_Ural_Base: RHS_Ural_BaseTurret{};
class RHS_Ural_MSV_Base: RHS_Ural_Base{};
class CDF_A3_Ural: RHS_Ural_MSV_Base
{
	author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    vehicleClass = "Car";
    displayName="Ural";
    faction="CDF_A3";
    side = 1;
    crew = "B_CDF_A3_Soldier_Militia";
    typicalCargo[] = {"B_CDF_A3_Soldier_Militia"};
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "n1",				// 2 - 4 number system
        "n2",
        "n3",
        "n4",
        "i1",				// 6 - right army
        "i2",				// 7 - left army
        "i3",				// 8 - right platoon
        "i4"
    };

    hiddenSelectionsTextures[] =
    {
        "cdf_a3\cdf_a3_main\data\ural_kabina_camo_co.paa",
        "cdf_a3\cdf_a3_main\data\ural_plachta_camo_co.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
    };
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\cdf_a3\cdf_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class RHS_Ural_Open_MSV_01:RHS_Ural_MSV_Base{};
class CDF_A3_Ural_Open: RHS_Ural_Open_MSV_01
{
	author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    vehicleClass = "Car";
    displayName="Ural (Open)";
    faction="CDF_A3";
    side = 1;
    crew = "B_CDF_A3_Soldier_Militia";
    typicalCargo[] = {"B_CDF_A3_Soldier_Militia"};
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "n1",				// 2 - 4 number system
        "n2",
        "n3",
        "n4",
        "i1",				// 6 - right army
        "i2",				// 7 - left army
        "i3",				// 8 - right platoon
        "i4"
    };

    hiddenSelectionsTextures[] =
    {
        "cdf_a3\cdf_a3_main\data\ural_kabina_camo_co.paa",
        "cdf_a3\cdf_a3_main\data\ural_open_cdf_co.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
    };
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\cdf_a3\cdf_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
class RHS_Ural_Fuel_MSV_01:RHS_Ural_Support_MSV_Base_01{};
class CDF_A3_Ural_Fuel: RHS_Ural_Fuel_MSV_01
{
	author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    vehicleClass = "Support";
    displayName="Ural (Fuel)";
    faction="CDF_A3";
    side = 1;
    crew = "B_CDF_A3_Soldier_Militia";
    typicalCargo[] = {"B_CDF_A3_Soldier_Militia"};
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",

        "n1",				// 2 - 4 number system
        "n2",
        "n3",
        "n4",

        "i1",				// 6 - right army
        "i2",				// 7 - left army
        "i3",				// 8 - right platoon
        "i4"
    };

    hiddenSelectionsTextures[] =
    {
        "cdf_a3\cdf_a3_main\data\ural_kabina_camo_co.paa",
        "cdf_a3\cdf_a3_main\data\ural_open_cdf_co.paa",
        "cdf_a3\cdf_a3_main\data\ural_fuel_cdf_co.paa",

        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",

        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
    };
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\cdf_a3\cdf_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class RHS_BM21_MSV_01:RHS_Ural_BaseTurret{};
class CDF_A3_BM21: RHS_BM21_MSV_01
{
	author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    vehicleClass = "Car";
    displayName="BM-21 Grad";
    faction="CDF_A3";
    side = 1;
    crew = "B_CDF_A3_Soldier_Militia";
    typicalCargo[] = {"B_CDF_A3_Soldier_Militia"};
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camog1",
        "camog2",
        "n1",				// 2 - 4 number system
        "n2",
        "n3",
        "n4",
        "i1",				// 6 - right army
        "i2",				// 7 - left army
        "i3",				// 8 - right platoon
        "i4"
    };

    hiddenSelectionsTextures[] =
    {
        "cdf_a3\cdf_a3_main\data\ural_kabina_camo_co.paa",
        "cdf_a3\cdf_a3_main\data\ural_bm21_cdf_co.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
    };
    class EventHandlers: EventHandlers
    {
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\cdf_a3\cdf_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};

// TANKs and APCs
class RDS_T72_AAF_04;
class CDF_A3_T72: RDS_T72_AAF_04
{
	author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    side = 1;
    displayName = "T-72";
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Crew";
    typicalCargo[] = {"B_CDF_A3_Soldier_Crew"};
};
class RDS_BMP2_AAF_01;
class CDF_A3_BMP2: RDS_BMP2_AAF_01
{
	author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    side = 1;
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Crew";
    typicalCargo[] = {"B_CDF_A3_Soldier_Crew"};
    hiddenselectionstextures[] = {"\RDS_APC\BMP2\data\bmp2_01_camo_co.paa", "\RDS_APC\BMP2\data\bmp2_02_camo_co.paa"};
};
class RDS_BMP2_HQ_AAF_01;
class CDF_A3_BMP2_HQ: RDS_BMP2_HQ_AAF_01 {
	author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    side = 1;
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Crew";
    typicalCargo[] = {"B_CDF_A3_Soldier_Crew"};
    hiddenselectionstextures[] = {"\RDS_APC\BMP2\data\bmp2_01_camo_co.paa", "\RDS_APC\BMP2\data\bmp2_02_camo_co.paa"};
};
class RDS_BMP2_Ambul_01;
class CDF_A3_BMP2_Ambul: RDS_BMP2_Ambul_01 {
	author = "CDF_A3";
    scope=2;
    scopeCurator=2;
    side = 1;
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Crew";
    typicalCargo[] = {"B_CDF_A3_Soldier_Crew"};
    hiddenselectionstextures[] = {"\RDS_APC\BMP2\data\bmp2_01_camo_co.paa", "\RDS_APC\BMP2\data\bmp2_02_camo_co.paa"};
};
class RDS_ZSU_AAF_04;
class CDF_A3_ZSU: RDS_ZSU_AAF_04
{
	author = "CDF_A3";
	displayName = "ZSU-23 Shilka";
    scope=2;
    scopeCurator=2;
    side = 1;
    faction = "CDF_A3";
    crew = "B_CDF_A3_Soldier_Crew";
    typicalCargo[] = {"B_CDF_A3_Soldier_Crew"};
};