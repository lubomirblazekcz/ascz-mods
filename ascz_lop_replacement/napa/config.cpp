
class DefaultEventhandlers;
class CfgPatches
{
	class ascz_lop_rhs_napa
	{
		units[] = {"ASCZ_LOP_ChDKZ_UAZ_MG","ASCZ_LOP_ChDKZ_UAZ_AGS30","ASCZ_LOP_ChDKZ_UAZ_SPG9","ASCZ_LOP_ChDKZ_Ural_Fuel","ASCZ_LOP_ChDKZ_Ural_Repair","ASCZ_LOP_ChDKZ_Ural_Empty","ASCZ_LOP_ChDKZ_Ural_Reammo","ASCZ_LOP_ChDKZ_Ural_ZU23","ASCZ_LOP_ChDKZ_BRDM2","ASCZ_LOP_ChDKZ_BRDM2_ATGM","ASCZ_LOP_ChDKZ_BRDM2_HQ","ascz_rhs_ural_ZU23_IND","ascz_rhs_BRDM2_IND","ascz_rhs_BRDM2_ATGM_IND","ascz_rhs_BRDM2_HQ_IND","ascz_rhs_T72BB","ascz_rhs_BMP2_IND","ascz_rhs_Offroad_IND","ascz_rhs_Offroad_armed_01_IND"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_cti_insurgents","lop_faction_chdkz"};
	};
};
class CfgVehicles
{
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
    class RHS_UAZ_chdkz_Base: RHS_UAZ_Base {};
    class rhs_uaz_open_chdkz_Base: rhs_uaz_open_Base {};
    class LOP_ChDKZ_UAZ: RHS_UAZ_Base
    {
        displayName = "UAZ";
    };
    class LOP_ChDKZ_UAZ_Open: rhs_uaz_open_Base
    {
        displayName = "UAZ (Open)";
    };
    class CDF_A3_UAZ_Base: RHS_UAZ_Base{};
    class CDF_A3_UAZ_MG_Base: CDF_A3_UAZ_Base {};
    class ASCZ_LOP_ChDKZ_UAZ_MG: CDF_A3_UAZ_MG_Base
    {
        author = "CDF_A3";
        vehicleClass = "LOP_Wheeled";
        scope=2;
        scopeCurator=2;
        side = 0;
        crew = "LOP_ChDKZ_Infantry_Rifleman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman"};
        faction = "LOP_ChDKZ";
        hiddenSelections[]=
        {
            "camo1"
        };

        hiddenSelectionsTextures[] =
        {
            "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "";
        };
    };
    class CDF_A3_UAZ_AGS30_Base: CDF_A3_UAZ_Base {};
    class ASCZ_LOP_ChDKZ_UAZ_AGS30: CDF_A3_UAZ_AGS30_Base
    {
        author = "CDF_A3";
        vehicleClass = "LOP_Wheeled";
        scope=2;
        scopeCurator=2;
        side = 0;
        crew = "LOP_ChDKZ_Infantry_Rifleman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman"};
        faction = "LOP_ChDKZ";
        hiddenSelections[]=
        {
            "camo1"
        };

        hiddenSelectionsTextures[] =
        {
            "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "";
        };
    };
    class CDF_A3_UAZ_SPG9_Base: CDF_A3_UAZ_Base {};
    class ASCZ_LOP_ChDKZ_UAZ_SPG9: CDF_A3_UAZ_SPG9_Base
    {
        author = "CDF_A3";
        vehicleClass = "LOP_Wheeled";
        scope=2;
        scopeCurator=2;
        side = 0;
        crew = "LOP_ChDKZ_Infantry_Rifleman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman"};
        faction = "LOP_ChDKZ";
        hiddenSelections[]=
        {
            "camo1"
        };

        hiddenSelectionsTextures[] =
        {
            "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "";
        };
    };

    class RHS_Ural_BaseTurret: Truck_F{};
    class RHS_Ural_Base: RHS_Ural_BaseTurret{};
    class RHS_Ural_MSV_Base: RHS_Ural_Base{};
    class LOP_ChDKZ_Ural : RHS_Ural_Base
    {
        displayName="Ural";
    };
    class RHS_Ural_Open_MSV_01:RHS_Ural_MSV_Base{};
    class LOP_ChDKZ_Ural_open: RHS_Ural_Open_MSV_01
    {
        displayName="Ural (Open)";
    };
    class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
    class RHS_Ural_Fuel_MSV_01:RHS_Ural_Support_MSV_Base_01{};
    class ASCZ_LOP_ChDKZ_Ural_Fuel: RHS_Ural_Fuel_MSV_01
    {
    	author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        vehicleClass = "Support";
        displayName="Ural (Fuel)";
        faction="LOP_ChDKZ";
        side = 0;
        crew = "LOP_ChDKZ_Infantry_Rifleman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman"};
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
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_chdkz_co.paa",

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
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\ascz_lop_replacement\scripts\rhs_decal_init.sqf'";
        };
    };
    class CDF_A3_Ural_Support_Base: RHS_Ural_BaseTurret {};
    class CDF_A3_Ural_Repair_Base: CDF_A3_Ural_Support_Base {};
    class ASCZ_LOP_ChDKZ_Ural_Repair: CDF_A3_Ural_Repair_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        faction="LOP_ChDKZ";
        side = 0;
        crew = "LOP_ChDKZ_Infantry_Rifleman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman"};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };

        hiddenSelectionsTextures[] =
        {
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
            "\ascz_lop_replacement\napa\ural_repair_co.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "";
        };
    };
    class CDF_A3_Ural_Empty_Base: CDF_A3_Ural_Repair_Base {};
    class ASCZ_LOP_ChDKZ_Ural_Empty: CDF_A3_Ural_Empty_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        faction="LOP_ChDKZ";
        vehicleClass = "LOP_Wheeled";
        side = 0;
        crew = "LOP_ChDKZ_Infantry_Rifleman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman"};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };

        hiddenSelectionsTextures[] =
        {
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "";
        };
    };
    class CDF_A3_Ural_Reammo_Base: CDF_A3_Ural_Support_Base {};
    class ASCZ_LOP_ChDKZ_Ural_Reammo: CDF_A3_Ural_Reammo_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        faction="LOP_ChDKZ";
        side = 0;
        crew = "LOP_ChDKZ_Infantry_Rifleman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman"};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };

        hiddenSelectionsTextures[] =
        {
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "";
        };
    };
    class CDF_A3_Ural_ZU23_Base: RHS_Ural_BaseTurret {};
    class ASCZ_LOP_ChDKZ_Ural_ZU23: CDF_A3_Ural_ZU23_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        faction="LOP_ChDKZ";
        vehicleClass = "LOP_Wheeled";
        side = 0;
        crew = "LOP_ChDKZ_Infantry_Rifleman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman"};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };

        hiddenSelectionsTextures[] =
        {
            "\rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
            "\ascz_lop_replacement\napa\ural_open_co.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "";
        };
    };


    class CDF_A3_BRDM2_Base;
    class ASCZ_LOP_ChDKZ_BRDM2: CDF_A3_BRDM2_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 0;
        faction = "LOP_ChDKZ";
        crew = "LOP_ChDKZ_Infantry_Crewman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Crewman"};
        hiddenselectionstextures[] = {"\ascz_lop_replacement\napa\brdm2_01_co.paa"};
    };
    class CDF_A3_BRDM2_ATGM_Base;
    class ASCZ_LOP_ChDKZ_BRDM2_ATGM: CDF_A3_BRDM2_ATGM_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 0;
        faction = "LOP_ChDKZ";
        crew = "LOP_ChDKZ_Infantry_Crewman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Crewman"};
        hiddenselectionstextures[] = {"\ascz_lop_replacement\napa\brdm2_atgm_01_co.paa"};
    };
    class CDF_A3_BRDM2_HQ_Base;
    class ASCZ_LOP_ChDKZ_BRDM2_HQ: CDF_A3_BRDM2_HQ_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 0;
        faction = "LOP_ChDKZ";
        crew = "LOP_ChDKZ_Infantry_Crewman";
        typicalCargo[] = {"LOP_ChDKZ_Infantry_Crewman"};
        hiddenselectionstextures[] = {"\ascz_lop_replacement\napa\brdm2_01_co.paa"};
    };




    //IND
    class RHS_Ural_Civ_Base: RHS_Ural_Base{};
    class rhs_ural_chdkz: RHS_Ural_Civ_Base
    {
        vehicleClass = "Car";
        hiddenSelectionsTextures[] =
        {
            "\ascz_lop_replacement\napa\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
        };
    };
	class rhs_ural_open_chdkz: RHS_Ural_Civ_Base
	{
        vehicleClass = "Car";
		hiddenSelectionsTextures[] =
		{
			"\ascz_lop_replacement\napa\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
    class rhs_ural_work_chdkz : RHS_Ural_Civ_Base
    {
        vehicleClass = "Car";
    };

    class rhs_ural_work_open_chdkz : RHS_Ural_Civ_Base
    {
        vehicleClass = "Car";
    };
    class ascz_rhs_ural_ZU23_IND: CDF_A3_Ural_ZU23_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        faction="rhs_faction_insurgents";
        side = 2;
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };

        hiddenSelectionsTextures[] =
        {
            "\ascz_lop_replacement\napa\ural_kabina_khk_co.paa",
            "\ascz_lop_replacement\napa\ural_korba_khk_co.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "";
        };
    };

    class ascz_rhs_BRDM2_IND: CDF_A3_BRDM2_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 2;
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        hiddenselectionstextures[] = {"\ascz_lop_replacement\napa\bdrm2_khk_01_co.paa"};
    };
    class ascz_rhs_BRDM2_ATGM_IND: CDF_A3_BRDM2_ATGM_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 2;
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        hiddenselectionstextures[] = {"\ascz_lop_replacement\napa\bdrm2_atgm_khk_01_co.paa"};
    };
    class ascz_rhs_BRDM2_HQ_IND: CDF_A3_BRDM2_HQ_Base
    {
        author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 2;
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        hiddenselectionstextures[] = {"\ascz_lop_replacement\napa\bdrm2_khk_01_co.paa"};
    };

    // TANKs and APCs
    class rhs_a3t72tank_base;
    class rhs_t72bb_tv: rhs_a3t72tank_base
    {
        class EventHandlers;
    };
    class ascz_rhs_T72BB: rhs_t72bb_tv
    {
        author = "RHS";
        scope = 2;
        side = 2;
        faction = "rhs_faction_insurgents";
        vehicleClass = "Armored";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        class TransportMagazines{};
        class TransportWeapons{};
        class TransportItems{};
        class EventHandlers: EventHandlers
        {
            init = "(_this select 0) execVM ""\lop_faction_chdkz\scripts\chdkz_t72_decals.sqf""";
        };
    };
    class RDS_BMP2_AAF_01;
    class ascz_rhs_BMP2_IND: RDS_BMP2_AAF_01
    {
    	author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 2;
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };

    class B_G_Offroad_01_F;
    class ascz_rhs_Offroad_IND: B_G_Offroad_01_F
    {
        scope = 2;
        side = 2;
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F","rhs_g_Soldier_F"};
        author = "RHS";
    };

    class B_G_Offroad_01_armed_F;
    class ascz_rhs_Offroad_armed_01_IND: B_G_Offroad_01_armed_F
    {
        scope = 2;
        side = 2;
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        author = "RHS";
    };

    class RHS_UAZ_chdkz: RHS_UAZ_chdkz_Base
    {
        scope = 1;
        scopeCurator = 0;
    };
    class rhs_uaz_open_chdkz: rhs_uaz_open_chdkz_base
    {
        scope = 1;
        scopeCurator = 0;
    };

    class RHS_Mi8AMT_VVS_Base;
    class RHS_Mi8AMT_vvs: RHS_Mi8AMT_VVS_Base
    {
        class EventHandlers;
    };
    class RHS_Mi8amt_chdkz: RHS_Mi8amt_vvs
    {
        scope = 1;
        scopeCurator = 0;
    };

    class rhs_zsutank_base;
    class rhs_zsu234_aa: rhs_zsutank_base
    {
        class EventHandlers;
    };
    class rhs_zsu234_chdkz: rhs_zsu234_aa
    {
        scope = 1;
        scopeCurator = 0;
    };

    class rhs_bmd_base;
    class rhs_bmd2_base : rhs_bmd_base
    {
        class EventHandlers;
    };

    class rhs_bmd2_chdkz: rhs_bmd2_base
    {
		side = 0;
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Armored";
		crew = "LOP_ChDKZ_Infantry_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Infantry_Crewman"};
    };

    class rhs_btr_base;
    class rhs_btr70_vmf: rhs_btr_base
    {
        class EventHandlers;
    };
    class rhs_btr70_chdkz: rhs_btr70_vmf
    {
		side = 0;
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Armored";
		crew = "LOP_ChDKZ_Infantry_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Infantry_Crewman"};
    };
    class rhs_t72bb_chdkz: rhs_t72bb_tv
    {
		side = 0;
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Armored";
		crew = "LOP_ChDKZ_Infantry_Crewman";
		typicalCargo[] = {"LOP_ChDKZ_Infantry_Crewman"};
    };



    class I_G_Soldier_F;
    class I_G_Soldier_lite_F;
    class I_G_Soldier_SL_F;
    class I_G_Soldier_TL_F;
    class I_G_Soldier_AR_F;
    class I_G_medic_F;
    class I_G_engineer_F;
    class I_G_Soldier_exp_F;
    class I_G_Soldier_GL_F;
    class I_G_Soldier_M_F;
    class I_G_Soldier_LAT_F;
    class I_G_Soldier_A_F;
    class I_G_officer_F;

    class rhs_g_Soldier_F: I_G_Soldier_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };

    class rhs_g_Soldier_F2: I_G_Soldier_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };

    class rhs_g_Soldier_F3: I_G_Soldier_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };

    class rhs_g_Soldier_lite_F: I_G_Soldier_lite_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };

    class rhs_g_Soldier_SL_F: I_G_Soldier_SL_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_Soldier_TL_F: I_G_Soldier_TL_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_Soldier_AR_F: I_G_Soldier_AR_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_medic_F: I_G_medic_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_engineer_F: I_G_engineer_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_Soldier_exp_F: I_G_Soldier_exp_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_Soldier_GL_F: I_G_Soldier_GL_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_Soldier_M_F: I_G_Soldier_M_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_Soldier_LAT_F: I_G_Soldier_LAT_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_Soldier_AT_F: I_G_Soldier_LAT_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
    class rhs_g_Soldier_AA_F: I_G_Soldier_A_F
    {
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
    };
};