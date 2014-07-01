class DefaultEventhandlers;
class CfgPatches
{
	class ascz_caf_ag_faction_me_t
	{
		units[] = {};
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
		displayName = "Middle East - Tribal";
		icon = "\CAF_replacement\Middle_East_Tribal\cfgfaction_ME_Tribal.paa";
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
	class CAF_AG_ME_T_BASE: O_Soldier_F
	{
		scope = 0;
		author = "CAF MOD TEAM";
		side = 0;
		armor = 0.5;
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
		displayName = "Tribal (RPK 45rounds)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_04";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_SVD: CAF_AG_ME_T_BASE
	{
		scope = 2;
		displayName = "Tribal (SVD)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_ROBES_mil_01a";
		weapons[] = {"caf_svd","Throw","Put"};
		respawnWeapons[] = {"caf_svd","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_RPG: CAF_AG_ME_T_BASE
	{
		scope = 2;
		displayName = "Tribal (RPG)";
		backpack = "B_ME_RPG_BAG";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_02a";
		weapons[] = {"hlc_rifle_ak74","RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","RPG7V","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","OG7"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","OG7"};
		linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_ME_T_GL: CAF_AG_ME_T_BASE
	{
		scope = 2;
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
};