
class DefaultEventhandlers;
class CfgPatches
{
	class ascz_caf_ag_faction_eeur_r
	{
		units[] = {"CAF_AG_EEUR_R_AK47","CAF_AG_EEUR_R_AK74","CAF_AG_EEUR_R_RPK74","CAF_AG_EEUR_R_PKM","CAF_AG_EEUR_R_SVD","CAF_AG_EEUR_R_RPG","CAF_AG_EEUR_R_GL", "CAF_AG_EEUR_UAZ_469", "CAF_AG_EEUR_UAZ_469_Open", "CAF_AG_EEUR_Mi_Mi8", "CAF_AG_EEUR_Mi_Mi8_rockets","CAF_AG_afr_p_Offroad", "CAF_AG_afr_p_Offroad_armed_01", "caf_ag_me_t_Offroad", "caf_ag_me_t_Offroad_armed_01", "caf_ag_eeur_r_Offroad", "caf_ag_eeur_r_Offroad_armed_01"};
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
		priority = 2;
		side = 0;
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
		scopeCurator = 2;
		author = "CAF MOD TEAM";
		side = 0;
		armor = 0.5;
		faction = "caf_ag_eeur_r";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguageGRE_F","Head_Euro","G_GUERIL_default"};
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
		weapons[] = {"rhs_weap_svds_pso1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svds_pso1","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
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

    class rhs_uaz_vdv;
    class rhs_uaz_open_vdv;
    class CAF_AG_EEUR_UAZ_469: rhs_uaz_vdv
    {
        author = "CAF MOD TEAM";
        vehicleClass = "Car";
        displayName = "UAZ-469";
        scope = 2;
        side = 0;
        crew = "CAF_AG_EEUR_R_AK47";
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
    };
    class CAF_AG_EEUR_UAZ_469_Open: rhs_uaz_open_vdv
    {
        author = "CAF MOD TEAM";
        vehicleClass = "Car";
        displayName = "UAZ-469 (Open)";
        scope = 2;
        side = 0;
        crew = "CAF_AG_EEUR_R_AK47";
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
};