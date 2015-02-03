class DefaultEventhandlers;
class CfgPatches
{
	class ascz_caf_ag_faction_afr_civ
	{
		units[] = {"CAF_AG_AFR_CIV_BASE","CAF_AG_AFR_CIV","CAF_AG_AFR_CIV_02","CAF_AG_AFR_CIV_03","CAF_AG_AFR_CIV_04"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_ag_faction_afr_civ"};
	};
};
class CfgFactionClasses
{
	access = 1;
	class caf_ag_afr_civ
	{
		displayName = "Africans";
		icon = "\ASCZ_CAF_replacement\Africa_Pirates\cfgfaction_AFRICA_PIRATES.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 3;
	};
};
class CfgVehicles
{
	class Man;
	class Civilian_F: Man
	{
		class EventHandlers;
	};
	class CAF_AG_AFR_CIV_BASE: Civilian_F
	{
		scope = 0;
		author = "CAF MOD TEAM";
		side = 3;
		armor = 0.5;
		faction = "caf_ag_afr_civ";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_AFRICAN","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\africa\civilian\Random.sqf""";
		};
	};
	class CAF_AG_AFR_CIV: CAF_AG_AFR_CIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01";
	};
	class CAF_AG_AFR_CIV_02: CAF_AG_AFR_CIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_01a";
	};
	class CAF_AG_AFR_CIV_03: CAF_AG_AFR_CIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02";
	};
	class CAF_AG_AFR_CIV_04: CAF_AG_AFR_CIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_AFR_CLOTHES_02a";
	};
};