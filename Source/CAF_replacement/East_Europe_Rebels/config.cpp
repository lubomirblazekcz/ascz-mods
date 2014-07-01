
class DefaultEventhandlers;
class CfgPatches
{
	class ascz_caf_ag_faction_eeur_r
	{
		units[] = {};
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
		displayName = "East Europe - Rebels";
		icon = "\CAF_replacement\East_Europe_Rebels\cfgfaction_EE_Rebels.paa";
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
		displayName = "Rebel (RPK 45rounds)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_02";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk"};
		linkedItems[] = {"V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_SVD: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		displayName = "Rebel (SVD)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_01a";
		weapons[] = {"caf_svd","Throw","Put"};
		respawnWeapons[] = {"caf_svd","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD"};
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_RPG: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
		displayName = "Rebel (RPG)";
		backpack = "B_ME_RPG_BAG";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_EEUR_FATIGUES_02a";
		weapons[] = {"hlc_rifle_ak74","RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","RPG7V","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","OG7"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","OG7"};
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_EEUR_R_GL: CAF_AG_EEUR_R_BASE
	{
		scope = 2;
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
};