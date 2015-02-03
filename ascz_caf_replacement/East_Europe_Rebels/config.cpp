
class DefaultEventhandlers;
class CfgPatches
{
	class ascz_caf_ag_faction_eeur_r
	{
		units[] = {"CAF_AG_EEUR_R_AK47","CAF_AG_EEUR_R_AK74","CAF_AG_EEUR_R_RPK74","CAF_AG_EEUR_R_PKM","CAF_AG_EEUR_R_SVD","CAF_AG_EEUR_R_RPG","CAF_AG_EEUR_R_GL", "CAF_AG_EEUR_UAZ_469", "CAF_AG_EEUR_UAZ_469_Open", "CAF_AG_EEUR_Mi_Mi8", "CAF_AG_EEUR_Mi_Mi8_rockets","CAF_AG_afr_p_Offroad", "CAF_AG_afr_p_Offroad_armed_01", "caf_ag_me_t_Offroad", "caf_ag_me_t_Offroad_armed_01", "caf_ag_eeur_r_Offroad", "caf_ag_eeur_r_Offroad_armed_01","CAF_AG_EEUR_R_AK47_IND","CAF_AG_EEUR_R_AK74_IND","CAF_AG_EEUR_R_RPK74_IND","CAF_AG_EEUR_R_PKM_IND","CAF_AG_EEUR_R_SVD_IND","CAF_AG_EEUR_R_RPG_IND","CAF_AG_EEUR_R_GL_IND", "caf_ag_me_t_Offroad_IND", "caf_ag_me_t_Offroad_armed_01_IND", "caf_ag_eeur_r_Offroad_IND", "caf_ag_eeur_r_Offroad_armed_01_IND","CAF_AG_EEUR_Ural","CAF_AG_EEUR_Ural_Open","CAF_AG_EEUR_Ural_Fuel","CAF_AG_EEUR_BM21","CAF_AG_EEUR_T72_IND","CAF_AG_EEUR_BMP2_IND"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_ag_faction_eeur_r"};
	};
};
class CfgFactionClasses
{
	access = 1;
	class caf_ag_eeur_r
	{
		displayName = "ChDKZ";
		icon = "\ASCZ_CAF_replacement\East_Europe_Rebels\icon_chdkz_co.paa";
		author = "CAF MOD TEAM";
		primarylanguage = "RUS";
		priority = 2;
		side = 0;
	};
	class caf_ag_eeur_r_ind
	{
		displayName = "NAPA";
		icon = "\ASCZ_CAF_replacement\East_Europe_Rebels\icon_napa_co.paa";
		author = "CAF MOD TEAM";
		primarylanguage = "ACR_CZ";
		priority = 2;
		side = 2;
	};
};
class CfgVehicles
{
	class CAManBase;
	class SoldierGB: CAManBase
	{
		class EventHandlers;
		class Wounds;
	};
	class Man;
	class O_Soldier_F: Man
	{
		class EventHandlers;
	};
	class CAF_AG_EEUR_R_BASE: O_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		author = "CAF MOD TEAM";
		side = 0;
		faction = "caf_ag_eeur_r";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguageRUS","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""";
		};
	};

	class CAF_AG_EEUR_R_AK47: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rebel (AK47)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_03";
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		linkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_AK74: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rebel (AK74)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_01";
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		linkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_RPK74: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rebel (RPK 75rounds)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_03a";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk"};
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_PKM: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rebel (RPK 45rounds)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_02";
		weapons[] = {"rhs_weap_pkp","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		linkedItems[] = {"V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_SVD: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rebel (SVD)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_01a";
		weapons[] = {"CUP_srifle_SVD_pso","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_SVD_pso","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_RPG: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rebel (RPG)";
		backpack = "B_ME_RPG_BAG";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_02a";
		weapons[] = {"hlc_rifle_ak74","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","rhs_weap_rpg7","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","rhs_rpg7_PG7VL_mag"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","rhs_rpg7_PG7VL_mag"};
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_GL: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rebel (AKS74+GP30)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_02a";
		weapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

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
    class CAF_AG_EEUR_UAZ_469: RHS_UAZ_Base
    {
        accuracy = 0.5;
        author = "CAF MOD TEAM";
        vehicleClass = "Car";
        displayName = "UAZ-469";
        scope = 2;
        side = 0;
        crew = "CAF_AG_EEUR_R_AK47";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47"};
        faction = "caf_ag_eeur_r";
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
            "\ASCZ_CAF_replacement\East_Europe_Rebels\uaz_main_ChDKZ_co.paa",
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
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\ASCZ_CAF_replacement\scripts\rhs_decal_init.sqf'";
        };
    };
    class CAF_AG_EEUR_UAZ_469_Open: rhs_uaz_open_Base
    {
        accuracy = 0.5;
        author = "CAF MOD TEAM";
        vehicleClass = "Car";
        displayName = "UAZ-469 (Open)";
        scope = 2;
        side = 0;
        crew = "CAF_AG_EEUR_R_AK47";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47"};
        faction = "caf_ag_eeur_r";
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
            "\ASCZ_CAF_replacement\East_Europe_Rebels\uaz_main_ChDKZ_co.paa",
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
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\ASCZ_CAF_replacement\scripts\rhs_decal_init.sqf'";
        };
    };
    class RHS_Mi8AMTSh_vvs;
    class RHS_Mi8mt_vvs;
    class CAF_AG_EEUR_Mi_Mi8: RHS_Mi8mt_vvs
    {
        author = "CAF MOD TEAM";
        faction = "caf_ag_eeur_r";
        crew = "CAF_AG_EEUR_R_AK47";
        scope = 2;
        displayName = "Mi-8";
        side = 0;
        vehicleclass = "Air";
        hiddenselectionstextures[] =
        {
            "\ASCZ_CAF_replacement\East_Europe_Rebels\mi8_body_g_chdkz_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa"
        };
    };
    class CAF_AG_EEUR_Mi_Mi8_rockets: RHS_Mi8AMTSh_vvs
    {
        scope = 2;
        displayName = "Mi-8 (Rockets)";
        author = "CAF MOD TEAM";
        crew = "CAF_AG_EEUR_R_AK47";
        faction = "caf_ag_eeur_r";
        side = 0;
        vehicleclass = "Air";
        hiddenselectionstextures[] =
        {
            "\ASCZ_CAF_replacement\East_Europe_Rebels\mi8_body_g_chdkz_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa"
        };
    };

    class RHS_Ural_BaseTurret: Truck_F{};
    class RHS_Ural_Base: RHS_Ural_BaseTurret{};
    class RHS_Ural_MSV_Base: RHS_Ural_Base{};
    class CAF_AG_EEUR_Ural: RHS_Ural_MSV_Base
    {
    	author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        vehicleClass = "Car";
        displayName="Ural";
        faction="caf_ag_eeur_r";
        side = 0;
        crew = "CAF_AG_EEUR_R_AK47";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47"};
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
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_kabina_co.paa",
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_plachta_co.paa",
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
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\ASCZ_CAF_replacement\scripts\rhs_decal_init.sqf'";
        };
    };
    class RHS_Ural_Open_MSV_01:RHS_Ural_MSV_Base{};
    class CAF_AG_EEUR_Ural_Open: RHS_Ural_Open_MSV_01
    {
    	author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        vehicleClass = "Car";
        displayName="Ural (Open)";
        faction="caf_ag_eeur_r";
        side = 0;
        crew = "CAF_AG_EEUR_R_AK47";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47"};
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
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_kabina_co.paa",
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_open_co.paa",
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
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\ASCZ_CAF_replacement\scripts\rhs_decal_init.sqf'";
        };
    };
    class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
    class RHS_Ural_Fuel_MSV_01:RHS_Ural_Support_MSV_Base_01{};
    class CAF_AG_EEUR_Ural_Fuel: RHS_Ural_Fuel_MSV_01
    {
    	author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        vehicleClass = "Support";
        displayName="Ural (Fuel)";
        faction="caf_ag_eeur_r";
        side = 0;
        crew = "CAF_AG_EEUR_R_AK47";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47"};
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
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_kabina_co.paa",
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_open_co.paa",
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_fuel_chdkz_co.paa",

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
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\ASCZ_CAF_replacement\scripts\rhs_decal_init.sqf'";
        };
    };
    class RHS_BM21_MSV_01:RHS_Ural_BaseTurret{};
    class CAF_AG_EEUR_BM21: RHS_BM21_MSV_01
    {
    	author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        vehicleClass = "Car";
        displayName="BM-21 Grad";
        faction="caf_ag_eeur_r";
        side = 0;
        crew = "CAF_AG_EEUR_R_AK47";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47"};
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
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_kabina_co.paa",
            "\ASCZ_CAF_replacement\East_Europe_Rebels\ural_bm21_co.paa",
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
            init = "_this call SLX_XEH_EH_Init;_this call compile preProcessFile '\ASCZ_CAF_replacement\scripts\rhs_decal_init.sqf'";
        };
    };

    // TANKs and APCs
    class RDS_T72_AAF_02;
    class CAF_AG_EEUR_T72_IND: RDS_T72_AAF_02
    {
    	author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 2;
        displayName = "T-72";
        faction = "caf_ag_eeur_r_ind";
        crew = "CAF_AG_EEUR_R_AK47_IND";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47_IND"};
    };
    class RDS_BMP2_AAF_01;
    class CAF_AG_EEUR_BMP2_IND: RDS_BMP2_AAF_01
    {
    	author = "CDF_A3";
        scope=2;
        scopeCurator=2;
        side = 2;
        faction = "caf_ag_eeur_r_ind";
        crew = "CAF_AG_EEUR_R_AK47_IND";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47_IND"};
    };

    class B_TacticalPack_oli;
    class B_ME_RPG_BAG: B_TacticalPack_oli
    {
        class TransportMagazines
        {
            class _xx_caf_og7
            {
                magazine = "rhs_rpg7_OG7V_mag";
                count = 2;
            };
            class _xx_caf_pg7v
            {
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 2;
            };
        };
    };
    class B_AFR_RPG_BAG: B_TacticalPack_oli
    {
        class TransportMagazines
        {
            class _xx_caf_og7
            {
                magazine = "rhs_rpg7_OG7V_mag";
                count = 2;
            };
            class _xx_caf_pg7v
            {
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 2;
            };
        };
    };
    class B_G_Offroad_01_F;
    class B_G_Offroad_01_armed_F;
    class CAF_AG_afr_p_Offroad: B_G_Offroad_01_F
    {
        scope = 2;
        side = 0;
        faction = "caf_ag_afr_p";
        crew = "CAF_AG_afr_p_AK74";
        typicalCargo[] = {"CAF_AG_afr_p_AK74","CAF_AG_afr_p_AK74"};
        author = "CAF DEV TEAM";
    };
    class CAF_AG_afr_p_Offroad_armed_01: B_G_Offroad_01_armed_F
    {
        scope = 2;
        side = 0;
        faction = "caf_ag_afr_p";
        crew = "CAF_AG_afr_p_AK74";
        typicalCargo[] = {"CAF_AG_afr_p_AK74"};
        author = "CAF DEV TEAM";
    };
    class caf_ag_me_t_Offroad: B_G_Offroad_01_F
    {
        scope = 2;
        side = 0;
        faction = "caf_ag_me_t";
        crew = "caf_ag_me_t_AK74";
        typicalCargo[] = {"caf_ag_me_t_AK74","caf_ag_me_t_AK74"};
        author = "CAF DEV TEAM";
    };
    class caf_ag_me_t_Offroad_armed_01: B_G_Offroad_01_armed_F
    {
        scope = 2;
        side = 0;
        faction = "caf_ag_me_t";
        crew = "caf_ag_me_t_AK74";
        typicalCargo[] = {"caf_ag_me_t_AK74"};
        author = "CAF DEV TEAM";
    };
    class caf_ag_eeur_r_Offroad: B_G_Offroad_01_F
    {
        scope = 2;
        side = 0;
        faction = "caf_ag_eeur_r";
        crew = "caf_ag_eeur_r_AK74";
        typicalCargo[] = {"caf_ag_eeur_r_AK74","caf_ag_eeur_r_AK74"};
        author = "CAF DEV TEAM";
    };
    class caf_ag_eeur_r_Offroad_armed_01: B_G_Offroad_01_armed_F
    {
        scope = 2;
        side = 0;
        faction = "caf_ag_eeur_r";
        crew = "caf_ag_eeur_r_AK74";
        typicalCargo[] = {"caf_ag_eeur_r_AK74"};
        author = "CAF DEV TEAM";
    };
    class caf_ag_eeur_r_Offroad_IND: B_G_Offroad_01_F
    {
        scope = 2;
        side = 2;
        faction = "caf_ag_eeur_r_ind";
        crew = "CAF_AG_EEUR_R_AK47_IND";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47_IND","CAF_AG_EEUR_R_AK47_IND"};
        author = "CAF DEV TEAM";
    };
    class caf_ag_eeur_r_Offroad_armed_01_IND: B_G_Offroad_01_armed_F
    {
        scope = 2;
        side = 2;
        faction = "caf_ag_eeur_r_ind";
        crew = "CAF_AG_EEUR_R_AK47_IND";
        typicalCargo[] = {"CAF_AG_EEUR_R_AK47_IND"};
        author = "CAF DEV TEAM";
    };


    //IND
    class CAF_AG_EEUR_R_AK47_IND: CAF_AG_EEUR_R_AK47
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_eeur_r_ind";
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""";
		};
    };
    class CAF_AG_EEUR_R_AK74_IND: CAF_AG_EEUR_R_AK74
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_eeur_r_ind";
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""";
		};
    };
    class CAF_AG_EEUR_R_RPK74_IND: CAF_AG_EEUR_R_RPK74
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_eeur_r_ind";
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""";
		};
    };
    class CAF_AG_EEUR_R_PKM_IND: CAF_AG_EEUR_R_PKM
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_eeur_r_ind";
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""";
		};
    };
    class CAF_AG_EEUR_R_SVD_IND: CAF_AG_EEUR_R_SVD
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_eeur_r_ind";
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""";
		};
    };
    class CAF_AG_EEUR_R_RPG_IND: CAF_AG_EEUR_R_RPG
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_eeur_r_ind";
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""";
		};
    };
    class CAF_AG_EEUR_R_GL_IND: CAF_AG_EEUR_R_GL
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_eeur_r_ind";
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\easteurope\rebels\Random.sqf""";
		};
    };

    class caf_ag_me_t_Offroad_IND: B_G_Offroad_01_F
    {
        scope = 2;
        side = 2;
        faction = "caf_ag_me_t_ind";
        crew = "caf_ag_me_t_AK74_IND";
        typicalCargo[] = {"caf_ag_me_t_AK74_IND","caf_ag_me_t_AK74_IND"};
        author = "CAF DEV TEAM";
    };
    class caf_ag_me_t_Offroad_armed_01_IND: B_G_Offroad_01_armed_F
    {
        scope = 2;
        side = 2;
        faction = "caf_ag_me_t_ind";
        crew = "caf_ag_me_t_AK74_IND";
        typicalCargo[] = {"caf_ag_me_t_AK74_IND"};
        author = "CAF DEV TEAM";
    };
};

class CfgGroups
{
	class EAST
	{
		class caf_ag_eeur_r
		{
			name = "ChDKZ";
	    };
		class caf_ag_afr_p
		{
			name = "Pirates";
	    };
		class caf_ag_me_t
		{
			name = "Takistani Militia";
	    };
	};
    class INDEP
    {
        class caf_ag_eeur_r_ind
        {
            name = "NAPA";
            class Infantry
            {
                name = "Infantry";
                class 10_men_eeur_r
                {
                    name = "10 Man Group";
                    faction = "caf_ag_eeur_r_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_RPK74_IND";
                        rank = "SERGEANT";
                        position[] = {14,0,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_PKM_IND";
                        rank = "CORPORAL";
                        position[] = {19,0,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {17,0,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_RPG_IND";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit9
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {21,0,0};
                    };
                };
                class 8_men_eeur_r
                {
                    name = "8 Man Group";
                    faction = "caf_ag_eeur_r_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_PKM_IND";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_RPK74_IND";
                        rank = "SERGEANT";
                        position[] = {14,0,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_RPG_IND";
                        rank = "CORPORAL";
                        position[] = {19,0,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {17,0,0};
                    };
                };
                class 6_men_eeur_r
                {
                    name = "6 Man Group";
                    faction = "caf_ag_eeur_r_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_RPK74_IND";
                        rank = "SERGEANT";
                        position[] = {14,0,0};
                    };
                };
                class 4_men_eeur_r
                {
                    name = "4 Man Group";
                    faction = "caf_ag_eeur_r_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_eeur_r_PKM_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                };

            };
            class Motorized_MTP
            {
                name = "Motorized";
                class Technicals_eeur_r
                {
                    name = "Technicals";
                    faction = "caf_ag_eeur_r_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "caf_ag_eeur_r_Offroad_armed_01_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "caf_ag_eeur_r_Offroad_armed_01_IND";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                };
                class Technicals2_EEUR_r
                {
                    name = "Motorized Patrol";
                    faction = "caf_ag_eeur_r_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_EEUR_R_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_EEUR_R_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_EEUR_R_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_EEUR_R_RPG_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "CAF_AG_EEUR_R_PKM_IND";
                        rank = "CORPORAL";
                        position[] = {0,9,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "caf_ag_EEUR_R_Offroad_IND";
                        rank = "CORPORAL";
                        position[] = {0,11,0};
                    };
                };
            };
        };
        class caf_ag_me_t_ind
        {
            name = "Takistani Locals";
            class Infantry
            {
                name = "Infantry";
                class 10_men_me_t
                {
                    name = "10 Man Group";
                    faction = "caf_ag_me_t_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_RPK74_IND";
                        rank = "SERGEANT";
                        position[] = {14,0,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_PKM_IND";
                        rank = "CORPORAL";
                        position[] = {19,0,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {17,0,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_RPG_IND";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit9
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {21,0,0};
                    };
                };
                class 8_men_me_t
                {
                    name = "8 Man Group";
                    faction = "caf_ag_me_t_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_PKM_IND";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_RPK74_IND";
                        rank = "SERGEANT";
                        position[] = {14,0,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_RPG_IND";
                        rank = "CORPORAL";
                        position[] = {19,0,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {17,0,0};
                    };
                };
                class 6_men_me_t
                {
                    name = "6 Man Group";
                    faction = "caf_ag_me_t_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_RPK74_IND";
                        rank = "SERGEANT";
                        position[] = {14,0,0};
                    };
                };
                class 4_men_me_t
                {
                    name = "4 Man Group";
                    faction = "caf_ag_me_t_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_me_t_PKM_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                };
            };
            class Motorized_MTP
            {
                name = "Motorized";
                class Technicals_me_t
                {
                    name = "Technicals";
                    faction = "caf_ag_me_t_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "caf_ag_me_t_Offroad_armed_01_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "caf_ag_me_t_Offroad_armed_01_IND";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                };
                class Technicals2_ME_T
                {
                    name = "Motorized Patrol";
                    faction = "caf_ag_me_t_ind";
                    rarityGroup = 0.5;
                    side = 2;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "CAF_AG_ME_T_AK47_IND";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "CAF_AG_ME_T_AK47_IND";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "CAF_AG_ME_T_AK74_IND";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "CAF_AG_ME_T_RPG_IND";
                        rank = "CORPORAL";
                        position[] = {11,0,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "CAF_AG_ME_T_PKM_IND";
                        rank = "CORPORAL";
                        position[] = {0,9,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "caf_ag_ME_T_Offroad_IND";
                        rank = "CORPORAL";
                        position[] = {0,11,0};
                    };
                };
            };
        };
    };
};