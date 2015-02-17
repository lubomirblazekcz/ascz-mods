// MISSING
//0.9.5
//Ural (Repair)
//Ural (Ammo)
//Ural (ZU-23)
//UAZ (AGS-30)
//UAZ (DShKM)
//BRDM-2
//BRDM-2 (ATGM)
//Military Offroad (M2)
//Military Offroad (SPG-9)
//UH-1H
//SUV

//1.0
//9P117 Scud-B
//Motorcycle
//V3S
//V3S Open
//BTR-40
//An-2


// AIR
class RHS_Mi24_base;
class RHS_Mi24V_base;
class TKA_A3_Mi_24v: RHS_Mi24V_base
{
    accuracy = 0.5;
	author = "TKA_A3";
    displayName = "Mi-24V";
    scope=2;
    scopeCurator=2;
    side = 0;
    crew = "B_TKA_A3_Soldier_Pilot";
    typicalCargo[] = {"B_TKA_A3_Soldier_Pilot"};
    faction = "TKA_A3";
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
        "tka_a3\tka_a3_main\data\mi35_001_ind_co.paa",
        "tka_a3\tka_a3_main\data\mi35_002_ind_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
    };
};
class TKA_A3_Mi_24p: RHS_Mi24_base
{
    accuracy = 0.5;
	author = "TKA_A3";
    displayName = "Mi-24P";
    scope=2;
    scopeCurator=2;
    side = 0;
    crew = "B_TKA_A3_Soldier_Pilot";
    typicalCargo[] = {"B_TKA_A3_Soldier_Pilot"};
    faction = "TKA_A3";
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
        "tka_a3\tka_a3_main\data\mi35_001_ind_co.paa",
        "tka_a3\tka_a3_main\data\mi35_002_ind_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
    };
};
class RHS_Mi8AMT_base;
class RHS_Mi8AMTSh_base;
class RHS_Mi8_base;
class TKA_A3_Mi17: RHS_Mi8_base
{
	author = "TKA_A3";
    faction = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Pilot";
    typicalCargo[] = {"B_TKA_A3_Soldier_Pilot"};
    scope=2;
    scopeCurator=2;
    displayName = "Mi-17";
    side = 0;
    vehicleclass = "Air";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
    hiddenselectionstextures[] =
    {
        "tka_a3\tka_a3_main\data\mi17_body_ind_co.paa",
        "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
        "a3\data_f\clear_empty.paa",
        "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa"
    };
};
class TKA_A3_Mi17_rockets: RHS_Mi8AMTSh_base
{
    scope=2;
    scopeCurator=2;
    displayName = "Mi-17 (Rockets)";
	author = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Pilot";
    typicalCargo[] = {"B_TKA_A3_Soldier_Pilot"};
    faction = "TKA_A3";
    side = 0;
    vehicleclass = "Air";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
    hiddenselectionstextures[] =
    {
        "tka_a3\tka_a3_main\data\mi17_body_ind_co.paa",
        "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
        "a3\data_f\clear_empty.paa",
        "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa",
        "a3\data_f\clear_empty.paa"
    };
};
class TKA_A3_Mi17_medevac: RHS_Mi8AMT_base
{
    scope=2;
    scopeCurator=2;
    displayName = "Mi-17 (Medevac)";
	author = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Pilot";
    typicalCargo[] = {"B_TKA_A3_Soldier_Pilot"};
    faction = "TKA_A3";
    side = 0;
    vehicleClass = "Support";
    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
    hiddenselectionstextures[] =
    {
        "tka_a3\tka_a3_main\data\mi17_body_ind_co.paa",
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
class TKA_A3_Su25SM: RHS_Su25SM_vvs
{
    faction = "TKA_A3";
	author = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Pilot";
    scope=2;
    scopeCurator=2;
    side = 0;
    displayName="$STR_RHS_SU25SM_Name";
    vehicleclass = "Air";
    hiddenselectionstextures[] =
    {
        "tka_a3\tka_a3_main\data\su25_body1_ind_co.paa",
        "tka_a3\tka_a3_main\data\su25_body2_ind_co.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
        "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
    };
};

class I_Plane_Fighter_03_CAS_F;
class TKA_A3_L39_CAS: I_Plane_Fighter_03_CAS_F
{
    author = "TKA_A3";
    scope = 2;
    scopeCurator=2;
    vehicleclass = "Air";
    displayName = "L39ZA";
    crew = "B_TKA_A3_Soldier_Pilot";
    typicalCargo[] = {"B_TKA_A3_Soldier_Pilot"};
    side = 0;
    faction = "TKA_A3";
    hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\l-39_body_co.paa","\tka_a3\tka_a3_main\data\l-39_body_1_co.paa"};

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
class TKA_A3_UAZ_469: RHS_UAZ_Base
{
    accuracy = 0.5;
	author = "TKA_A3";
    vehicleClass = "Car";
    displayName = "UAZ-469";
    scope=2;
    scopeCurator=2;
    side = 0;
    crew = "B_TKA_A3_Soldier";
    typicalCargo[] = {"B_TKA_A3_Soldier"};
    faction = "TKA_A3";
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
        "tka_a3\tka_a3_main\data\uaz_main_ind_co.paa",
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
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\tka_a3\tka_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class TKA_A3_UAZ_469_Open: rhs_uaz_open_Base
{
    accuracy = 0.5;
	author = "TKA_A3";
    vehicleClass = "Car";
    displayName = "UAZ-469 (Open)";
    scope=2;
    scopeCurator=2;
    side = 0;
    crew = "B_TKA_A3_Soldier";
    typicalCargo[] = {"B_TKA_A3_Soldier"};
    faction = "TKA_A3";
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
        "tka_a3\tka_a3_main\data\uaz_main_ind_co.paa",
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
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\tka_a3\tka_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class RHS_Ural_BaseTurret: Truck_F{};
class RHS_Ural_Base: RHS_Ural_BaseTurret{};
class RHS_Ural_MSV_Base: RHS_Ural_Base{};
class TKA_A3_Ural: RHS_Ural_MSV_Base
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    vehicleClass = "Car";
    displayName="Ural";
    faction="TKA_A3";
    side = 0;
    crew = "B_TKA_A3_Soldier";
    typicalCargo[] = {"B_TKA_A3_Soldier"};
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
        "tka_a3\tka_a3_main\data\ural_kabina_tka_co.paa",
        "tka_a3\tka_a3_main\data\ural_plachta_tka_co.paa",
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
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\tka_a3\tka_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class RHS_Ural_Open_MSV_01:RHS_Ural_MSV_Base{};
class TKA_A3_Ural_Open: RHS_Ural_Open_MSV_01
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    vehicleClass = "Car";
    displayName="Ural (Open)";
    faction="TKA_A3";
    side = 0;
    crew = "B_TKA_A3_Soldier";
    typicalCargo[] = {"B_TKA_A3_Soldier"};
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
        "tka_a3\tka_a3_main\data\ural_kabina_tka_co.paa",
        "tka_a3\tka_a3_main\data\ural_open_tka_co.paa",
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
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\tka_a3\tka_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
class RHS_Ural_Fuel_MSV_01:RHS_Ural_Support_MSV_Base_01{};
class TKA_A3_Ural_Fuel: RHS_Ural_Fuel_MSV_01
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    vehicleClass = "Support";
    displayName="Ural (Fuel)";
    faction="TKA_A3";
    side = 0;
    crew = "B_TKA_A3_Soldier";
    typicalCargo[] = {"B_TKA_A3_Soldier"};
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
        "tka_a3\tka_a3_main\data\ural_kabina_tka_co.paa",
        "tka_a3\tka_a3_main\data\ural_open_tka_co.paa",
        "tka_a3\tka_a3_main\data\ural_fuel_tka_co.paa",

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
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\tka_a3\tka_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};
class RHS_BM21_MSV_01:RHS_Ural_BaseTurret{};
class TKA_A3_BM21: RHS_BM21_MSV_01
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    vehicleClass = "Car";
    displayName="BM-21 Grad";
    faction="TKA_A3";
    side = 0;
    crew = "B_TKA_A3_Soldier";
    typicalCargo[] = {"B_TKA_A3_Soldier"};
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
        "tka_a3\tka_a3_main\data\ural_kabina_tka_co.paa",
        "tka_a3\tka_a3_main\data\ural_bm21_tka_co.paa",
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
        init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\tka_a3\tka_a3_main_c\scripts\rhs_decal_init.sqf'";
    };
};



// TANKs and APCs
class RDS_T72_AAF_05;
class TKA_A3_T72: RDS_T72_AAF_05
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    side = 0;
    displayName = "T-72";
    faction = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Crew";
    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
};
class RDS_T55_AAF_02;
class TKA_A3_T55: RDS_T55_AAF_02
{
    author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    side = 0;
    displayName = "T-55A";
    faction = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Crew";
    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
};
class RDS_T34_AAF_02;
class TKA_A3_T34: RDS_T34_AAF_02 {
    author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    side = 0;
    displayName = "T-34";
    faction = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Crew";
    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
};
class RDS_BMP2_AAF_03;
class TKA_A3_BMP2: RDS_BMP2_AAF_03
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    side = 0;
    faction = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Crew";
    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
};
class RDS_BMP2_HQ_AAF_03;
class TKA_A3_BMP2_HQ: RDS_BMP2_HQ_AAF_03 {
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    side = 0;
    faction = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Crew";
    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
};
class RDS_BMP2_Ambul_03;
class TKA_A3_BMP2_Ambul: RDS_BMP2_Ambul_03 {
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    side = 0;
    faction = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Crew";
    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
};
class RDS_ZSU_AAF_03;
class TKA_A3_ZSU: RDS_ZSU_AAF_03
{
	author = "TKA_A3";
	displayName = "ZSU-23 Shilka";
    scope=2;
    scopeCurator=2;
    side = 0;
    faction = "TKA_A3";
    crew = "B_TKA_A3_Soldier_Crew";
    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
};
class rhs_btr60_base;
class TKA_A3_BTR60: rhs_btr60_base
{
    scope = 2;
    scopeCurator=2;
    displayName = "BTR-60";
    side = 0;
    faction = "TKA_A3";
	author = "TKA_A3";
    vehicleClass = "Armored";
    crew = "B_TKA_A3_Soldier_Crew";
    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
    hiddenSelections[] =
    {
        "camo1",
        "camo2",
        "i1",
        "i2",
        "i3",
        "i4",
        "i5",
        "i6",
        "i7",
        "n1",
        "n2",
        "n3",
        "n4",
        "n5",
        "n6",
        "n7",
        "n8",
        "n9",
        "n10",
        "n11",
        "i8",
        "i9",
        "i10"
    };
    hiddenSelectionsTextures[] = {
        "tka_a3\tka_a3_main\data\btr60_body_co.paa",
        "tka_a3\tka_a3_main\data\btr60_details_co.paa",
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i1 2 - front-side roundels
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i2 3 - platoon
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i3 4 - backside roundel
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i4 5 - flag/side marking
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i5 6 - turret left
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i6 7 - turret right
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i7 8 - platoon windshield
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n1 9 - 3 num system ...
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n2 10
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n3 11
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n4 12 - 4 num system ....
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n5 13
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n6 14
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n7 15
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n8 16 - 4 num system CDF ....
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n9 17
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n10 18
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//n11 19
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i8 20
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",	//i9 21
        "\rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"		//i10 22
    };
};
//class rhsusf_m113tank_base;
//class TKA_A3_M113: rhsusf_m113tank_base
//{
//    model = "\rhsusf\addons\rhsusf_m113\m113a3_d";
//    scope = 2;
//    scopeCurator=2;
//    displayName = "M113";
//    side = 0;
//    faction = "TKA_A3";
//    author = "TKA_A3";
//    vehicleClass = "Armored";
//    crew = "B_TKA_A3_Soldier_Crew";
//    typicalCargo[] = {"B_TKA_A3_Soldier_Crew"};
//    hiddenSelections[] =
//    {
//        "camo1"
//    };
//    hiddenSelectionsTextures[] = {
//        "tka_a3\tka_a3_main\data\m113a3_01_tk_co.paa"
//    };
//};