class CfgWeapons
{
    class Uniform_Base;
    class ItemInfo;
    class UniformItem;
    class Vest_Camo_Base;

    class V_TKA_A3_ChestRig: Vest_Camo_Base
    {
		author = "TKA_A3";
		scope = 2;
		displayName = "$STR_tka_a3_v_chestrigb_blk0";
		picture = "\tka_a3\tka_a3_main\data\UI\icon_vest.paa";
		model = "\tka_a3\tka_a3_main\tka_vest.p3d";
		hiddenSelections[] = {"Camo3"};
		hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\tak_soldier_equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\tka_a3\tka_a3_main\tka_vest.p3d";
			containerClass = "Supply140";
			mass = 20;
			armor = 4;
			passThrough = 0.8;
			hiddenSelections[] = {"camo3"};
		};

    };

    // HEADGEAR
    class H_HelmetB;
	class H_TKA_A3_HelmetIA: H_HelmetB
	{
		author = "TKA_A3";
		_generalMacro = "H_HelmetIA";
		displayName = "$STR_tka_a3_h_helmet";
		picture = "\tka_a3\tka_a3_main\data\UI\icon_helmet.paa";

		model = "\tka_a3\tka_a3_main\tka_helmet.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\tak_soldier_equip_co.paa"};

		class ItemInfo: ItemInfo
		{
			mass = 40;
			allowedSlots[] = {901,605};
			uniformModel = "\tka_a3\tka_a3_main\tka_helmet.p3d";
			modelSides[] = {6};
			armor = 4;
			passThrough = 0.5;
		};
	};
	class H_Beret_blk;
	class H_TKA_A3_Turban: H_Beret_blk
	{
		author = "TKA_A3";
		displayName = "Turban [TK]";
		picture = "\tka_a3\tka_a3_main\data\UI\icon_helmet.paa";

		model = "\tka_a3\tka_a3_main\tka_turban.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\tak_soldier_equip_co.paa"};

		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\tka_a3\tka_a3_main\tka_turban.p3d";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};
	class H_TKA_A3_Beret: H_Beret_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_tka_a3_h_beret";
		picture = "\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\BLUFOR\Data\headgear_beret02_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};

    // UNIFORM
    class U_TKA_A3_uniform: Uniform_Base
    {
		author = "TKA_A3";
        scope = 2;
        displayName = "$STR_A3_combat_fatigues_shemag_tka_a3";
        picture = "\tka_a3\tka_a3_main\data\UI\icon_uniform2.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\Suitpacks\suitpack_TKA.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_TKA_A3_Soldier_Base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class U_TKA_A3_uniform_02: Uniform_Base
    {
		author = "TKA_A3";
        scope = 2;
        displayName = "$STR_A3_combat_fatigues_tka_a3";
        picture = "\tka_a3\tka_a3_main\data\UI\icon_uniform.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\Suitpacks\suitpack_TKA.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_TKA_A3_Soldier_Base_02";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class U_TKA_A3_uniform_03: Uniform_Base
    {
		author = "TKA_A3";
        scope = 2;
        displayName = "$STR_A3_combat_fatigues_mix_tka_a3";
		picture = "\tka_a3\tka_a3_main\data\UI\icon_uniform_mix.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\Suitpacks\suitpack_TKA.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_TKA_A3_Soldier_Base_03";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class U_TKA_A3_uniform_04: Uniform_Base
    {
		author = "TKA_A3";
        scope = 2;
        displayName = "$STR_A3_combat_fatigues_officer_tka_a3";
		picture = "\tka_a3\tka_a3_main\data\UI\icon_uniform_officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\Suitpacks\suitpack_TKA.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_TKA_A3_Soldier_Base_04";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class U_B_GhillieSuit;
    class U_TKA_A3_SniperGhillie: U_B_GhillieSuit
    {
		author = "TKA_A3";
        displayName = "$STR_A3_ghillie_suit_tka_a3";
		picture = "\tka_a3\tka_a3_main\data\UI\icon_ghillie.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_TKA_A3_Soldier_Sniper";
            containerClass = "Supply40";
            mass = 60;
        };
    };


    // WEAPONS
    class rhs_weap_pkp;
    class rhs_weap_pkp_bipod: rhs_weap_pkp
    {
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "rhs_bipod";
            };
        };
    };
};