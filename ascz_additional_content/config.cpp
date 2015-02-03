class CfgPatches
{
	class ascz_additional_content
	{
		units[] = {"B_SoldierW_F", "B_SoldierW_02_f", "B_SoldierW_03_f", "B_SoldierS_F", "B_SoldierS_02_f", "B_SoldierS_03_f","B_SoldierOlive_F", "B_SoldierOlive_02_f", "B_SoldierOlive_03_f"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F", "A3_Characters_F", "A3_Characters_F_BLUFOR"};
	};
};
class cfgWeapons {
    class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class ItemCore;;
    class VestItem;
    class V_Rangemaster_belt;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
    class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl //czech translation fix
	{
		displayName = "$STR_a3_v_platecarrieria2_dgtl0_fix";
	};
	// --- VESTS --- //
    // Olive
    	class V_PlateCarrier1_oli: V_PlateCarrier1_rgr
    	{
    	    picture = "\ascz_additional_content\data\UI\icon_v_plate_carrier_1_oli_ca.paa";
    		displayName = "$STR_a3_v_platecarrier1_oli0";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\indep\data\vests_oli_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
    			containerClass = "Supply140";
    			mass = 80;
    			armor = 20;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
                hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\indep\data\vests_oli_co.paa"};
    		};
    	};
    	class V_PlateCarrier2_oli: V_PlateCarrier2_rgr
    	{
    	    picture = "\ascz_additional_content\data\UI\icon_v_plate_carrier_1_oli_ca.paa";
    		displayName = "$STR_a3_v_platecarrier2_oli0";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\indep\data\vests_oli_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
    			containerClass = "Supply140";
    			mass = 100;
    			armor = 30;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
                hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\indep\data\vests_oli_co.paa"};
    		};
    	};
    	class V_Rangemaster_belt_oli: V_Rangemaster_belt
    	{
    		displayName = "$STR_v_rangemaster_belt_oli0";
    		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\indep\data\vests_oli_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
    			containerClass = "Supply40";
    			mass = 10;
    			armor = 0;
    			passThrough = 1;
                hiddenSelections[] = {"camo"};
                hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\indep\data\vests_oli_co.paa"};
    		};
    	};
    	class V_PlateCarrierIA1_oli: V_PlateCarrierIA1_dgtl
    	{
    		displayName = "$STR_a3_v_platecarrieria1_olil0";
    		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_oli_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: VestItem
    		{
    			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    			containerClass = "Supply120";
    			mass = 60;
    			armor = 20;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
                hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_oli_co.paa"};
    		};
    	};
    	class V_PlateCarrierIA2_oli: V_PlateCarrierIA2_dgtl {
    		displayName = "$STR_a3_v_platecarrieria2_olil0";
    		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_oli_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: VestItem
    		{
    			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    			containerClass = "Supply120";
    			mass = 80;
    			armor = 30;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
                hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_oli_co.paa"};
    		};
    	};

    // Khaki
    	class V_PlateCarrier1_khk: V_PlateCarrier1_rgr
    	{
    		picture = "\ascz_additional_content\data\UI\icon_v_plate_carrier_1_khk_ca.paa";
    		displayName = "$STR_a3_v_platecarrier1_khk0";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
    			containerClass = "Supply140";
    			mass = 80;
    			armor = 20;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
    		};
    	};
    	class V_PlateCarrier2_khk: V_PlateCarrier2_rgr
    	{
    		picture = "\ascz_additional_content\data\UI\icon_v_plate_carrier_1_khk_ca.paa";
    		displayName = "$STR_a3_v_platecarrier2_khk0";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
    			containerClass = "Supply140";
    			mass = 100;
    			armor = 30;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
    		};
    	};
    	class V_Rangemaster_belt_khk: V_Rangemaster_belt
    	{
    		displayName = "$STR_v_rangemaster_belt_khk0";
    		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
    			containerClass = "Supply40";
    			mass = 10;
    			armor = 0;
    			passThrough = 1;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
    		};
    	};
    	class V_PlateCarrierIA1_khk: V_PlateCarrierIA1_dgtl
    	{
    		displayName = "$STR_a3_v_platecarrieria1_khkl0";
    		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_khk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: VestItem
    		{
    			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    			containerClass = "Supply120";
    			mass = 60;
    			armor = 20;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_khk_co.paa"};
    		};
    	};
    	class V_PlateCarrierIA2_khk: V_PlateCarrierIA2_dgtl
    	{
    		displayName = "$STR_a3_v_platecarrieria2_khkl0";
    		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_khk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: VestItem
    		{
    			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    			containerClass = "Supply120";
    			mass = 80;
    			armor = 30;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_khk_co.paa"};
    		};
    	};

    // Coyote
    	class V_PlateCarrier1_cbr: V_PlateCarrier1_rgr
    	{
    		picture = "\ascz_additional_content\data\UI\icon_v_plate_carrier_1_cbr_ca.paa";
    		displayName = "$STR_a3_v_platecarrier1_cbr0";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
    			containerClass = "Supply140";
    			mass = 80;
    			armor = 20;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    		};
    	};
    	class V_PlateCarrier2_cbr: V_PlateCarrier2_rgr
    	{
    		picture = "\ascz_additional_content\data\UI\icon_v_plate_carrier_1_cbr_ca.paa";
    		displayName = "$STR_a3_v_platecarrier2_cbr0";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
    			containerClass = "Supply140";
    			mass = 100;
    			armor = 30;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    		};
    	};
    	class V_Rangemaster_belt_cbr: V_Rangemaster_belt
    	{
    		displayName = "$STR_v_rangemaster_belt_cbr0";
    		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
    			containerClass = "Supply40";
    			mass = 10;
    			armor = 0;
    			passThrough = 1;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    		};
    	};
    	class V_PlateCarrierIA1_cbr: V_PlateCarrierIA1_dgtl
    	{
    		displayName = "$STR_a3_v_platecarrieria1_cbrl0";
    		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_cbr_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: VestItem
    		{
    			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    			containerClass = "Supply120";
    			mass = 60;
    			armor = 20;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_cbr_co.paa"};
    		};
    	};
    	class V_PlateCarrierIA2_cbr: V_PlateCarrierIA2_dgtl
    	{
    		displayName = "$STR_a3_v_platecarrieria2_cbrl0";
    		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_cbr_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: VestItem
    		{
    			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    			containerClass = "Supply120";
    			mass = 80;
    			armor = 30;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_cbr_co.paa"};
    		};
    	};

    // Black
        class V_PlateCarrier1_blk: V_PlateCarrier1_rgr
        {
    		author = "$STR_A3_Bohemia_Interactive";
    		_generalMacro = "V_PlateCarrier1_blk";
    		scope = 2;
    		picture = "\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
    		displayName = "$STR_A3_V_PlateCarrier1_blk0";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
            class ItemInfo: ItemInfo
            {
                uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
                containerClass = "Supply140";
                mass = 80;
                armor = 20;
                passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
            };
        };
    	class V_PlateCarrier2_blk: V_PlateCarrier2_rgr
    	{
    		picture = "\A3\Characters_F\data\ui\icon_v_plate_carrier_2_blk_ca.paa";
    		displayName = "$STR_a3_v_platecarrier2_blk0";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
    			containerClass = "Supply140";
    			mass = 100;
    			armor = 30;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
    		};
    	};
    	class V_Rangemaster_belt_blk: V_Rangemaster_belt
    	{
    		displayName = "$STR_v_rangemaster_belt_blk0";
    		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: ItemInfo
    		{
    			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
    			containerClass = "Supply40";
    			mass = 10;
    			armor = 0;
    			passThrough = 1;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
    		};
    	};
    	class V_PlateCarrierIA1_blk: V_PlateCarrierIA1_dgtl
    	{
    		displayName = "$STR_a3_v_platecarrieria1_blkl0";
    		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_blk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: VestItem
    		{
    			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
    			containerClass = "Supply120";
    			mass = 60;
    			armor = 20;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_blk_co.paa"};
    		};
    	};
    	class V_PlateCarrierIA2_blk: V_PlateCarrierIA2_dgtl
    	{
    		displayName = "$STR_a3_v_platecarrieria2_blkl0";
    		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_blk_co.paa"};
    		author = "$STR_A3_Bohemia_Interactive";
    		class ItemInfo: VestItem
    		{
    			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
    			containerClass = "Supply120";
    			mass = 80;
    			armor = 30;
    			passThrough = 0.5;
                hiddenSelections[] = {"camo"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\equip_ia_vest01_blk_co.paa"};
    		};
    	};

    	// Raven vest
        class V_TacVestIR_khk: ItemCore
        {
            author = "$STR_A3_Bohemia_Interactive";
            _generalMacro = "V_TacVestIR_blk";
            scope = 2;
            weaponPoolAvailable = 1;
            allowedSlots[] = {901};
            displayName = "$STR_A3_V_TacVestIR_blk0";
            picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
            model = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
    		hiddenSelections[] = {"camo1","camo2"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\clothing_oucamo_co.paa","\ascz_additional_content\data\tech_oucamo_co.paa"};
            class ItemInfo: VestItem
            {
                uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
    		    hiddenSelections[] = {"camo1","camo2"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\clothing_oucamo_co.paa","\ascz_additional_content\data\tech_oucamo_co.paa"};
                containerClass = "Supply100";
                mass = 50;
                armor = 20;
                passThrough = 0.5;
            };
        };
        class V_TacVestIR_cbr: ItemCore
        {
            author = "$STR_A3_Bohemia_Interactive";
            _generalMacro = "V_TacVestIR_blk";
            scope = 2;
            weaponPoolAvailable = 1;
            allowedSlots[] = {901};
            displayName = "$STR_A3_V_TacVestIR_blk0";
            picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
            model = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
    		hiddenSelections[] = {"camo1","camo2"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\clothing_co.paa","\ascz_additional_content\data\tech_co.paa"};
            class ItemInfo: VestItem
            {
                uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
    		    hiddenSelections[] = {"camo1","camo2"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\clothing_co.paa","\ascz_additional_content\data\tech_co.paa"};
                containerClass = "Supply100";
                mass = 50;
                armor = 20;
                passThrough = 0.5;
            };
        };
        class V_TacVestIR_rgr: ItemCore
        {
            author = "$STR_A3_Bohemia_Interactive";
            _generalMacro = "V_TacVestIR_blk";
            scope = 2;
            weaponPoolAvailable = 1;
            allowedSlots[] = {901};
            displayName = "$STR_A3_V_TacVestIR_blk0";
            picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
            model = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
    		hiddenSelections[] = {"camo1","camo2"};
    		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\clothing_co.paa","\ascz_additional_content\data\tech_co.paa"};
            class ItemInfo: VestItem
            {
                uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
    		    hiddenSelections[] = {"camo1","camo2"};
    		    hiddenSelectionsTextures[] = {"\ascz_additional_content\data\clothing_co.paa","\ascz_additional_content\data\tech_co.paa"};
                containerClass = "Supply100";
                mass = 50;
                armor = 20;
                passThrough = 0.5;
            };
        };

    // --- UNIFORMS --- //

    class U_B_CombatUniform_wdl: Uniform_Base {
        scope = 2;
        displayName = "$STR_a3_combat_fatigues_wdl";
        picture = "\ascz_additional_content\data\UI\icon_u_b_combatuniform_wdl_vest_ca.paa";
    };
    class U_B_CombatUniform_wdl_tshirt: Uniform_Base {
        scope = 2;
        displayName = "$STR_a3_combat_fatigues_wdl_tee";
        picture = "\ascz_additional_content\data\UI\icon_u_b_combatuniform_wdl_tshirt_ca.paa";
    };
    class U_B_CombatUniform_wdl_vest: Uniform_Base {
        scope = 2;
        displayName = "$STR_a3_recon_fatigues_wdl";
        picture = "\ascz_additional_content\data\UI\icon_u_b_combatuniform_wdl_vest_ca.paa";
    };
    class U_B_CombatUniform_sgg: Uniform_Base {
        scope = 2;
        displayName = "$STR_a3_combat_fatigues_sgg";
        picture = "\ascz_additional_content\data\UI\icon_u_b_combatuniform_sgg_vest_ca.paa";
    };
    class U_B_CombatUniform_sgg_tshirt: Uniform_Base {
        scope = 2;
        displayName = "$STR_a3_combat_fatigues_sgg_tee";
        picture = "\ascz_additional_content\data\UI\icon_u_b_combatuniform_sgg_tshirt_ca.paa";
    };
    class U_B_CombatUniform_sgg_vest: Uniform_Base {
        scope = 2;
        displayName = "$STR_a3_recon_fatigues_sgg";
        picture = "\ascz_additional_content\data\UI\icon_u_b_combatuniform_sgg_vest_ca.paa";
    };
    // -- Unknown model and texture
    //    class U_IG_Menelaos: Uniform_Base {
    //        scope = 2;
    //    };
    //    class U_C_Scavenger_1: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_Scavenger_2: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_Farmer: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_Fisherman: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_WorkerOveralls: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_FishermanOveralls: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_HunterBody_brn: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_Commoner2_1: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_Commoner2_2: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_Commoner2_3: Uniform_Base  {
    //        scope = 2;
    //    };
    //    class U_C_PriestBody: Uniform_Base  {
    //        scope = 2;
    //    };

//  Olive
 	class U_B_CombatUniform_NKPOlive: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_olive";
		picture = "\ascz_additional_content\data\UI\icon_olive_uniform.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPOlive.paa"};
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
		picture = "\ascz_additional_content\data\UI\icon_olive_tshirt.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPOlive.paa"};
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
		picture = "\ascz_additional_content\data\UI\icon_olive_vest.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPOlive.paa"};
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
		picture = "\ascz_additional_content\data\UI\icon_olive_rollup.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPOlive.paa"};
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
		picture = "\ascz_additional_content\data\UI\icon_tan_uniform.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPTan.paa"};
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
		picture = "\ascz_additional_content\data\UI\icon_tan_tshirt.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPTan.paa"};
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
		picture = "\ascz_additional_content\data\UI\icon_tan_vest.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPTan.paa"};
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
		picture = "\ascz_additional_content\data\UI\icon_tan_rollup.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPTan.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierTan_04_F";
            containerClass = "Supply40";
            mass = 40;
        };
	};
// --- UNIFORMS --- //Black
 	class U_B_CombatUniform_NKPBlack: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_Black";
		picture = "\ascz_additional_content\data\UI\icon_Black_uniform.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPBlack.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierBlack_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
 	class U_B_CombatUniform_NKPBlack_tshirt: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_Black_tee";
		picture = "\ascz_additional_content\data\UI\icon_Black_tshirt.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPBlack.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierBlack_02_F";
            containerClass = "Supply40";
            mass = 20;
        };
	};
 	class U_B_CombatUniform_NKPBlack_vest: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_Recon_NKP_Black";
		picture = "\ascz_additional_content\data\UI\icon_Black_vest.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPBlack.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierBlack_03_F";
            containerClass = "Supply40";
            mass = 40;
        };
	};
 	class U_B_CombatUniform_NKPBlack_rollup: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_Black_rollup";
		picture = "\ascz_additional_content\data\UI\icon_Black_rollup.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPBlack.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierBlack_04_F";
            containerClass = "Supply40";
            mass = 40;
        };
	};	
// --- UNIFORMS --- //Blue
 	class U_B_CombatUniform_NKPBlue: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_Blue";
		picture = "\ascz_additional_content\data\UI\icon_blue_uniform.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPBlue.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierBlue_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
 	class U_B_CombatUniform_NKPBlue_tshirt: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_blue_tee";
		picture = "\ascz_additional_content\data\UI\icon_blue_tshirt.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPBlue.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierBlue_02_F";
            containerClass = "Supply40";
            mass = 20;
        };
	};
 	class U_B_CombatUniform_NKPBlue_vest: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_Recon_NKP_blue";
		picture = "\ascz_additional_content\data\UI\icon_blue_vest.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPBlue.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierBlue_03_F";
            containerClass = "Supply40";
            mass = 40;
        };
	};
 	class U_B_CombatUniform_NKPBlue_rollup: Uniform_Base {
 	    scope = 2;
 	    displayName = "$STR_NKP_Blue_rollup";
		picture = "\ascz_additional_content\data\UI\icon_blue_rollup.paa";
		author = "Taurus";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ascz_additional_content\data\Suitpacks\suitpack_NKPBlue.paa"};
 	    class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_SoldierBlue_04_F";
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

    class B_SoldierW_F: B_Soldier_base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_F";
        scope = 2;
        displayName = "Rifleman 1 Woodland";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody";
        uniformClass = "U_B_CombatUniform_wdl";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa"};
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
    class B_SoldierW_02_f: B_Soldier_02_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_02_f";
        scope = 2;
        displayName = "Rifleman 2 Woodland";
        model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_wdl_tshirt";
        hiddenSelections[] = {"Camo", "camo2", "insignia"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa", "\a3\characters_f\common\data\basicbody_brown_co.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierW_03_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 3 Woodland";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_wdl_vest";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };

    class B_SoldierS_F: B_Soldier_base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_F";
        scope = 2;
        displayName = "Rifleman 1 Sage";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody";
        uniformClass = "U_B_CombatUniform_sgg";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_sage_co.paa"};
        weapons[] = {"arifle_Mk20_MRCO_plain_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_plain_F","hgun_P07_F","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
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
    class B_SoldierS_02_f: B_Soldier_02_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_02_f";
        scope = 2;
        displayName = "Rifleman 2 Sage";
        model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_sgg_tshirt";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_sage_co.paa"};
        weapons[] = {"arifle_Mk20_MRCO_plain_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_plain_F","hgun_P07_F","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    };
    class B_SoldierS_03_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 3 Sage";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_sgg_vest";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_sage_co.paa"};
        weapons[] = {"arifle_Mk20_MRCO_plain_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_plain_F","hgun_P07_F","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    };
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
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_olive.paa"};
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
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_olive.paa", "\a3\characters_f\common\data\basicbody_black_co.paa"};
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
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_olive.paa"};
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
		hiddenSelectionsMaterials[] = {"","\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_shirt.paa","\ascz_additional_content\data\NKP_olive.paa"};
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
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Tan.paa"};
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
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Tan.paa", "\a3\characters_f\common\data\basicbody_black_co.paa"};
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
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Tan.paa"};
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
		hiddenSelectionsMaterials[] = {"","\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_shirt.paa","\ascz_additional_content\data\NKP_Tan.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };

// --- UNIFORM BASE --- //Blue
	class B_SoldierBlue_F: B_Soldier_base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_F";
        scope = 2;
        displayName = "Rifleman 1 Blue";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody";
        uniformClass = "U_B_CombatUniform_NKPBlue";
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Blue.paa"};
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
    class B_SoldierBlue_02_f: B_Soldier_02_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_02_f";
        scope = 2;
        displayName = "Rifleman 2 Blue";
        model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPBlue_tshirt";
        hiddenSelections[] = {"Camo", "camo2", "insignia"};
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Blue.paa", "\a3\characters_f\common\data\basicbody_black_co.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierBlue_03_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 3 Blue";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPBlue_vest";
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Blue.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierBlue_04_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 4 Blue";
        model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPBlue_rollup";
        hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsMaterials[] = {"","\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_shirt.paa","\ascz_additional_content\data\NKP_Blue.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };

	// --- UNIFORM BASE --- //Black
	class B_SoldierBlack_F: B_Soldier_base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_F";
        scope = 2;
        displayName = "Rifleman 1 Black";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody";
        uniformClass = "U_B_CombatUniform_NKPBlack";
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Black.paa"};
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
    class B_SoldierBlack_02_f: B_Soldier_02_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_02_f";
        scope = 2;
        displayName = "Rifleman 2 Black";
        model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPBlack_tshirt";
        hiddenSelections[] = {"Camo", "camo2", "insignia"};
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Black.paa", "\a3\characters_f\common\data\basicbody_black_co.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierBlack_03_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 3 Black";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPBlack_vest";
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsMaterials[] = {"\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_Black.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
    class B_SoldierBlack_04_f: B_Soldier_03_f
    {
        author = "$STR_A3_Bohemia_Interactive";
        _generalMacro = "B_Soldier_03_f";
        scope = 2;
        displayName = "Rifleman 4 Black";
        model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
        modelSides[] = {3,1};
        uniformClass = "U_B_CombatUniform_NKPBlack_rollup";
        hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsMaterials[] = {"","\ascz_additional_content\data\NKP.rvmat"};
        hiddenSelectionsTextures[] = {"\ascz_additional_content\data\NKP_shirt.paa","\ascz_additional_content\data\NKP_Black.paa"};
        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
    };
};