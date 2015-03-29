class CfgPatches {
	class ASCZ_Gorka {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class CfgVehicles {

	class B_Soldier_base_F;

	class B_ascz_Gorka_soldier : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		model = "\ascz_gorka\full_gorka.p3d";
		author = "Taurus";
		displayName = "Man with Gorka Uniform";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "ASCZ_CombatUniform_gorka"; //the uniform item
		hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsMaterials[] = {"\ascz_gorka\data\gorkaupper.rvmat"};
    hiddenSelectionsTextures[] = {"\ascz_gorka\data\gorka_pants_flat_CO.paa"};
	};

};

class cfgWeapons {
	class Uniform_Base;
	class UniformItem;
	
	class ASCZ_CombatUniform_gorka : Uniform_Base {
		scope = 2;
		author = "Taurus";
		displayName = "ASCZ Gorka Uniform";
		picture = "\ascz_gorka\data\UI\PLACEHOLDER_REPLACE.paa";
		model = "A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
			uniformClass = "B_ascz_Gorka_soldier"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
};