	class THM_Beanie
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Weapons_F","A3_Weapons_F_Ammoboxes"};
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class THM_Beanie_black: ItemCore
	{
		scope = 2;
		displayName = "Tactical Beanie (Black)";
		picture = "\BoSA_Hats\data\gui.paa";
		model = "\BoSA_Hats\CowboyHat_g.p3d";
		hiddenSelections[] = {"Color"};
		hiddenSelectionsTextures[] = {"BoSA_Hats\data\cowboyhat_brown_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 2;
			uniformModel = "\BoSA_Hats\CowboyHat_g.p3d";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.9;
			hiddenSelections[] = {"Color"};
		};
	};
	class THM_Beanie_grey: ItemCore
	{
		scope = 2;
		displayName = "Tactical Beanie (Grey)";
		picture = "\BoSA_Hats\data\gui.paa";
		hiddenSelections[] = {"Color"};
		hiddenSelectionsTextures[] = {"BoSA_Hats\data\cowboyhat_brown_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 2;
			uniformModel = "\BoSA_Hats\THM_Beanie.p3d";
			allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			armor = "3*0.5";
			passThrough = 0.9;
			hiddenSelections[] = {"Color"};
		};
	};
};