class DefaultEventhandlers;
class CfgPatches
{
	class ascz_caf_ag_faction_afr_p
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_ag_faction_afr_p"};
	};
};
class CfgFactionClasses
{
	access = 1;
	class caf_ag_afr_p
	{
		displayName = "Africa - Pirates";
		icon = "\ASCZ_CAF_replacement\Africa_Pirates\cfgfaction_AFRICA_PIRATES.paa";
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
	class CAF_AG_AFR_P_BASE: O_Soldier_F
	{
		scope = 0;
		author = "CAF MOD TEAM";
		side = 0;
		armor = 0.5;
		faction = "caf_ag_afr_p";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_AFRICAN","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\africa\pirates\Random.sqf""";
		};
	};
	class CAF_AG_AFR_P_AK47: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Pirate (AK47)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01";
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		linkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_AK74: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Pirate (AK74)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02";
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_RPK74: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Pirate (RPK 75rounds)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01a";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk","hlc_75rnd_762x39_m_rpk"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_PKM: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Pirate (RPK 45rounds)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02a";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_SVD: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Pirate (SVD)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01b";
		weapons[] = {"caf_svd","Throw","Put"};
		respawnWeapons[] = {"caf_svd","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD","caf_10Rnd_762x54_SVD"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_RPG: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Pirate (RPG)";
		backpack = "B_ME_RPG_BAG";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02b";
		weapons[] = {"hlc_rifle_ak74","caf_rpg7","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","caf_rpg7","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","caf_OG7"};
		respawnMagazines[] = {"MiniGrenade","MiniGrenade","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","caf_OG7"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CAF_AG_AFR_P_GL: CAF_AG_AFR_P_BASE
	{
		scope = 2;
		displayName = "Pirate (AKS74+GP30)";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01c";
		weapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
		linkedItems[] = {"V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};