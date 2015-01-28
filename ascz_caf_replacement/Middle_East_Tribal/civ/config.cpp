class DefaultEventhandlers;
class CfgPatches
{
	class ascz_caf_ag_faction_me_civ
	{
		units[] = {"CAF_AG_ME_CIV","CAF_AG_ME_CIV_02","CAF_AG_ME_CIV_03","CAF_AG_ME_CIV_04"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_ag_faction_me_civ"};
	};
};
class CfgFactionClasses
{
	access = 1;
	class caf_ag_me_civ
	{
		displayName = "Takistani";
		icon = "\ASCZ_CAF_replacement\Middle_East_Tribal\icon_tkg_co.paa";
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
	class CAF_AG_ME_CIV_BASE: Civilian_F
	{
		scope = 0;
		author = "CAF MOD TEAM";
		side = 3;
		armor = 0.5;
		faction = "caf_ag_me_civ";
		genericnames = "TakistaniMen";
		identitytypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\caf_ag_factions\middleeast\civilian\Random.sqf""";
		};
	};
	class CAF_AG_ME_CIV: CAF_AG_ME_CIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_01";
	};
	class CAF_AG_ME_CIV_02: CAF_AG_ME_CIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_02";
	};
	class CAF_AG_ME_CIV_03: CAF_AG_ME_CIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_03";
	};
	class CAF_AG_ME_CIV_04: CAF_AG_ME_CIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		uniformAccessories[] = {};
		uniformClass = "U_CAF_AG_ME_robes_04";
	};
};
