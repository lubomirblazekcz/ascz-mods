class DefaultEventhandlers;
class CfgPatches
{
	class ascz_caf_ag_faction_me_t
	{
		units[] = {"CAF_AG_ME_T_AK47","CAF_AG_ME_T_AK74","CAF_AG_ME_T_RPK74","CAF_AG_ME_T_PKM","CAF_AG_ME_T_SVD","CAF_AG_ME_T_RPG","CAF_AG_ME_T_GL","CAF_AG_ME_T_AK47_IND","CAF_AG_ME_T_AK74_IND","CAF_AG_ME_T_RPK74_IND","CAF_AG_ME_T_PKM_IND","CAF_AG_ME_T_SVD_IND","CAF_AG_ME_T_RPG_IND","CAF_AG_ME_T_GL_IND"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_ag_faction_me_t"};
	};
};
class CfgFactionClasses
{
	access = 1;
	class caf_ag_me_t
	{
		displayName = "Takistani Militia";
		icon = "\ASCZ_CAF_replacement\Middle_East_Tribal\icon_tkm_co.paa";
		author = "CAF MOD TEAM";
		primarylanguage = "TK";
		priority = 101;
		side = 0;
	};
	class caf_ag_me_t_ind
	{
		displayName = "Takistani Locals";
		icon = "\ASCZ_CAF_replacement\Middle_East_Tribal\icon_tkg_co.paa";
		author = "CAF MOD TEAM";
		primarylanguage = "TK";
		priority = 2;
		side = 0;
	};
	class GUE {
	    side = 2;
	    displayName = "GUE";
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
	class CAF_AG_ME_T_BASE: O_Soldier_F
	{
		scope = 0;
		author = "CAF MOD TEAM";
		side = 0;
		faction = "caf_ag_me_t";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""";
		};
	};
	class CAF_AG_ME_T_AK47: CAF_AG_ME_T_BASE
	{
		scope = 2;
		curatorScope = 2;
		displayName = "Tribal (AK47)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_01";
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		linkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_AK74: CAF_AG_ME_T_BASE
	{
		scope = 2;
		curatorScope = 2;
		displayName = "Tribal (AK74)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_02";
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_RPK74: CAF_AG_ME_T_BASE
	{
		scope = 2;
		curatorScope = 2;
		displayName = "Tribal (RPK 75rounds)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_03";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_PKM: CAF_AG_ME_T_BASE
	{
		scope = 2;
		curatorScope = 2;
		displayName = "Tribal (RPK 45rounds)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_04";
		weapons[] = {"rhs_weap_pkp","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_SVD: CAF_AG_ME_T_BASE
	{
		scope = 2;
		curatorScope = 2;
		displayName = "Tribal (Enfield)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_ROBES_mil_01a";
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_RPG: CAF_AG_ME_T_BASE
	{
		scope = 2;
		curatorScope = 2;
		displayName = "Tribal (RPG)";
		backpack = "B_ME_RPG_BAG";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_02a";
        weapons[] = {"hlc_rifle_ak74","rhs_weap_rpg7","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_ak74","rhs_weap_rpg7","Throw","Put"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        RespawnItems[] = {"FirstAidKit","FirstAidKit"};
        magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","rhs_rpg7_PG7VL_mag"};
        respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","rhs_rpg7_PG7VL_mag"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_GL: CAF_AG_ME_T_BASE
	{
		scope = 2;
		curatorScope = 2;
		displayName = "Tribal (AKS74+GP30)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_03a";
		weapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	// IND
    class CAF_AG_ME_T_AK47_IND: CAF_AG_ME_T_AK47
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_me_t_ind";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""";
		};
    };
    class CAF_AG_ME_T_AK74_IND: CAF_AG_ME_T_AK74
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_me_t_ind";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""";
		};
    };
    class CAF_AG_ME_T_RPK74_IND: CAF_AG_ME_T_RPK74
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_me_t_ind";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""";
		};
    };
    class CAF_AG_ME_T_PKM_IND: CAF_AG_ME_T_PKM
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_me_t_ind";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""";
		};
    };
    class CAF_AG_ME_T_SVD_IND: CAF_AG_ME_T_SVD
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_me_t_ind";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""";
		};
    };
    class CAF_AG_ME_T_RPG_IND: CAF_AG_ME_T_RPG
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_me_t_ind";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""";
		};
    };
    class CAF_AG_ME_T_GL_IND: CAF_AG_ME_T_GL
    {
		author = "CAF MOD TEAM";
		side = 2;
		faction = "caf_ag_me_t_ind";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\tribal\Random.sqf""";
		};
    };
};