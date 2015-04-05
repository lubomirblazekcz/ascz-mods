class CfgPatches {
	class ascz_bandana {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class cfgWeapons
{
	class H_Cap_oli_hs;
	class ItemInfo;
	class H_Bandana_khaki: H_Cap_oli_hs
	{
		author = "ASCZ";
		displayName = "Bandana [Khaki]";
		picture = "\ascz_bandana\data\UI\icon_khaki.paa";

		model = "\ascz_bandana\Bandana.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_bandana\data\khaki_co.paa"};
        class ItemInfo: ItemInfo{
			uniformModel = "\ascz_bandana\Bandana.p3d";
		};
	};
	class H_Bandana_black: H_Bandana_khaki
	{
	author = "ASCZ";
	displayName = "Bandana [Black]";
	picture = "\ascz_bandana\data\UI\icon_black.paa";
	
	    hiddenSelectionsTextures[] = {"\ascz_bandana\data\black_co.paa"};
	    class ItemInfo: ItemInfo{};
	};
	class H_Bandana_brown: H_Bandana_black
	{
	author = "ASCZ";
	displayName = "Bandana [Brown]";
	picture = "\ascz_bandana\data\UI\icon_brown.paa";
	
	    hiddenSelectionsTextures[] = {"\ascz_bandana\data\brown_co.paa"};
	    class ItemInfo: ItemInfo{};
	};
};