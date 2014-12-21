class CfgPatches
{
	class ascz_NoKneePads
	{
		units[] = {"B_SoldierOlive_F", "B_SoldierOlive_02_f", "B_SoldierOlive_03_f"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F", "A3_Characters_F_BLUFOR"};
	};
};
class cfgWeapons {
// --- UNIFORMS --- //Olive
    class Uniform_Base;
	class UniformItem;
 	class U_B_CombatUniform_NKPOlive: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_olive";
		picture = "\ASCZ_NoKneePads\data\UI\icon_olive_uniform.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\Suitpacks\suitpack_NKPOlive.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierOlive_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
 	class U_B_CombatUniform_NKPOlive_tshirt: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_olive_tee";
		picture = "\ASCZ_NoKneePads\data\UI\icon_olive_tshirt.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\Suitpacks\suitpack_NKPOlive.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierOlive_02_F";
            containerClass = "Supply40";
            mass = 20;
        };
	};
 	class U_B_CombatUniform_NKPOlive_vest: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_Recon_NKP_olive";
		picture = "\ASCZ_NoKneePads\data\UI\icon_olive_vest.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\Suitpacks\suitpack_NKPOlive.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierOlive_03_F";
            containerClass = "Supply40";
            mass = 40;
        };
	};
 	class U_B_CombatUniform_NKPOlive_rollup: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_olive_rollup";
		picture = "\ASCZ_NoKneePads\data\UI\icon_olive_rollup.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\Suitpacks\suitpack_NKPOlive.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierOlive_04_F";
            containerClass = "Supply40";
            mass = 40;
        };
	};
// --- UNIFORMS --- //Tan
 	class U_B_CombatUniform_NKPTan: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_Tan";
		picture = "\ASCZ_NoKneePads\data\UI\icon_tan_uniform.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\Suitpacks\suitpack_NKPTan.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierTan_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
 	class U_B_CombatUniform_NKPTan_tshirt: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_tan_tee";
		picture = "\ASCZ_NoKneePads\data\UI\icon_tan_tshirt.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\Suitpacks\suitpack_NKPTan.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierTan_02_F";
            containerClass = "Supply40";
            mass = 20;
        };
	};
 	class U_B_CombatUniform_NKPTan_vest: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_Recon_NKP_tan";
		picture = "\ASCZ_NoKneePads\data\UI\icon_tan_vest.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\Suitpacks\suitpack_NKPTan.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierTan_03_F";
            containerClass = "Supply40";
            mass = 40;
        };
	};
 	class U_B_CombatUniform_NKPTan_rollup: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_Tan_rollup";
		picture = "\ASCZ_NoKneePads\data\UI\icon_tan_rollup.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\Suitpacks\suitpack_NKPTan.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierTan_04_F";
            containerClass = "Supply40";
            mass = 40;
        };
	};
};
// --- UNIFORM BASE --- //Olive
class UniformSlotInfo;
class cfgVehicles {
    class B_Soldier_base_F;
    class B_Soldier_02_f;
    class B_Soldier_03_f;
    class B_SoldierOlive_F: B_Soldier_base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_F";
        scope = 2;
        displayName = "Rifleman 1 Olive";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody";
        uniformClass = "U_B_CombatUniform_NKPOlive";
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ASCZ_NoKneePads\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\NKP_olive.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
    class B_SoldierOlive_02_f: B_Soldier_02_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_02_f";
        scope = 2;
        displayName = "Rifleman 2 Olive";
        model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPOlive_tshirt";
        hiddenSelections[] = {"Camo", "camo2", "insignia"};
		hiddenSelectionsMaterials[] = {"\ASCZ_NoKneePads\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\NKP_olive.paa", "\a3\characters_f\common\data\basicbody_black_co.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierOlive_03_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 3 Olive";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPOlive_vest";
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ASCZ_NoKneePads\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\NKP_olive.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierOlive_04_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 4 Olive";
        model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPOlive_rollup";
        hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsMaterials[] = {"","\ASCZ_NoKneePads\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\NKP_shirt.paa","\ASCZ_NoKneePads\data\NKP_olive.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
// --- UNIFORM BASE --- //Tan
	class B_SoldierTan_F: B_Soldier_base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_F";
        scope = 2;
        displayName = "Rifleman 1 Tan";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody";
        uniformClass = "U_B_CombatUniform_NKPTan";
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ASCZ_NoKneePads\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\NKP_Tan.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
    class B_SoldierTan_02_f: B_Soldier_02_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_02_f";
        scope = 2;
        displayName = "Rifleman 2 Tan";
        model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPTan_tshirt";
        hiddenSelections[] = {"Camo", "camo2", "insignia"};
		hiddenSelectionsMaterials[] = {"\ASCZ_NoKneePads\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\NKP_Tan.paa", "\a3\characters_f\common\data\basicbody_black_co.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierTan_03_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 3 Tan";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPTan_vest";
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ASCZ_NoKneePads\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\NKP_Tan.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierTan_04_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 4 Tan";
        model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPTan_rollup";
        hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsMaterials[] = {"","\ASCZ_NoKneePads\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ASCZ_NoKneePads\data\NKP_shirt.paa","\ASCZ_NoKneePads\data\NKP_Tan.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
};