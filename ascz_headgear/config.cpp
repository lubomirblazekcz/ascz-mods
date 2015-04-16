class CfgPatches {
	class ascz_headgear {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class cfgWeapons
{
	class H_Cap_oli_hs;
	class H_Cap_headphones;
	class ItemInfo;
	class H_Bandana_khaki: H_Cap_oli_hs //Bandana
	{
		author = "ASCZ";
		displayName = "$STR_ASCZ_Bandana_Khaki";
		picture = "\ascz_headgear\data\UI\icon_Bandana_khaki.paa";

		passThrough = 1;
		model = "\ascz_headgear\Bandana.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\Bandana_khaki_co.paa"};
        class ItemInfo: ItemInfo{
			uniformModel = "\ascz_headgear\Bandana.p3d";
		};
	};
	class H_Bandana_black: H_Bandana_khaki
	{
	author = "ASCZ";
	displayName = "$STR_ASCZ_Bandana_Black";
	picture = "\ascz_headgear\data\UI\icon_Bandana_black.paa";
	
	    passThrough = 1;
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\Bandana_black_co.paa"};
	    class ItemInfo: ItemInfo{};
	};
	class H_Bandana_brown: H_Bandana_black
	{
	author = "ASCZ";
	displayName = "$STR_ASCZ_Bandana_Brown";
	picture = "\ascz_headgear\data\UI\icon_Bandana_brown.paa";
	
	    passThrough = 1;
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\Bandana_brown_co.paa"};
	    class ItemInfo: ItemInfo{};
	};
	class H_Bandana_red: H_Bandana_brown
	{
	author = "ASCZ";
	displayName = "$STR_ASCZ_Bandana_Red";
	picture = "\ascz_headgear\data\UI\icon_Bandana_red.paa";
	
	    passThrough = 1;
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\Bandana_red_co.paa"};
	    class ItemInfo: ItemInfo{};
	};
	class H_Bandana_olive: H_Bandana_red
	{
	author = "ASCZ";
	displayName = "$STR_ASCZ_Bandana_Olive";
	picture = "\ascz_headgear\data\UI\icon_Bandana_olive.paa";
	
	    passThrough = 1;
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\Bandana_olive_co.paa"};
	    class ItemInfo: ItemInfo{};
	};
	class H_Cowboy_Hat_brown: H_Cap_headphones //CowboyHat
	{
		author = "ASCZ";
		displayName = "$STR_ASCZ_CowboyHat_Brown";
		picture = "\ascz_headgear\data\UI\icon_CowboyHat_brown.paa";

		mass = 6;
		passThrough = 1;
		model = "\ascz_headgear\CowboyHat.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\CowboyHat_brown_co.paa"};
        class ItemInfo: ItemInfo{
			uniformModel = "\ascz_headgear\CowboyHat.p3d";
	    };
	};
	class H_Cowboy_Hat_black: H_Cowboy_Hat_brown
	{
	author = "ASCZ";
	displayName = "$STR_ASCZ_CowboyHat_Black";
	picture = "\ascz_headgear\data\UI\icon_CowboyHat_black.paa";
	
	    mass = 6;
		passThrough = 1;
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\CowboyHat_black_co.paa"};
	    class ItemInfo: ItemInfo{};
	};
	class H_Cowboy_Hat_green: H_Cowboy_Hat_black
	{
	author = "ASCZ";
	displayName = "$STR_ASCZ_CowboyHat_Green";
	picture = "\ascz_headgear\data\UI\icon_CowboyHat_green.paa";
	
	    mass = 6;
		passThrough = 1;
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\CowboyHat_green_co.paa"};
	    class ItemInfo: ItemInfo{};
	};
	class H_Cowboy_Hat_white: H_Cowboy_Hat_green
	{
	author = "ASCZ";
	displayName = "$STR_ASCZ_CowboyHat_White";
	picture = "\ascz_headgear\data\UI\icon_CowboyHat_white.paa";
	
	    mass = 6;
		passThrough = 1;
		hiddenSelectionsTextures[] = {"\ascz_headgear\data\CowboyHat_white_co.paa"};
	    class ItemInfo: ItemInfo{};
        };
    };