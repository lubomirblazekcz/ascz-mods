class UniformSlotInfo;
class CfgWeapons
{
    class Uniform_Base;
    class ItemInfo;
    class UniformItem;
    class rhs_6b23;
    class V_CDF_A3_6b23: rhs_6b23
    {
        scope = 2;
        picture = "\cdf_a3\cdf_a3_main\data\UI\icon_vest.paa";

        model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23";

        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] =
        {
            "cdf_a3\cdf_a3_main\data\CDF_vestpart1.paa",
            "cdf_a3\cdf_a3_main\data\CDF_vestpart2.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo1","Camo2"};
            uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23";
            containerClass = "Supply80";
            mass = 60;
            armor = 12;
            passThrough = 0.4;
        };
    };
    class V_CDF_A3_6b23_rifleman_01: V_CDF_A3_6b23
    {
    	displayName = "$STR_RHS_6B23SNIPER_NAME";

    	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";

    	class ItemInfo: ItemInfo
    	{
    		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
    		containerClass = "Supply120";
    		mass = 60;
    	};
    };
    class V_CDF_A3_6b23_rifleman_02: V_CDF_A3_6b23
    {
    	displayName = "$STR_RHS_6B23RIFLEMAN_NAME";

    	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_rifleman";

    	class ItemInfo: ItemInfo
    	{
    		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_rifleman";
    		containerClass = "Supply120";
    		mass = 60;
    	};
    };
    class V_CDF_A3_6b23_crewofficer: V_CDF_A3_6b23
    {
    	displayName = "$STR_RHS_6B23CREWOFFICER_NAME";

    	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";

    	class ItemInfo: ItemInfo
    	{
    		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
    		containerClass = "Supply80";
    		mass = 60;
    	};
    };
    class V_CDF_A3_6b23_crew: V_CDF_A3_6b23
    {
    	displayName = "$STR_RHS_6B23CREW_NAME";

    	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";

    	class ItemInfo: ItemInfo
    	{
    		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
    		containerClass = "Supply120";
    		mass = 60;
    	};
    };
    class V_CDF_A3_6b23_engineer: V_CDF_A3_6b23
    {
    	displayName = "$STR_RHS_6B23ENGINEER_NAME";

    	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";

    	class ItemInfo: ItemInfo
    	{
    		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
    		containerClass = "Supply120";
    		mass = 60;
    	};
    };
    class V_CDF_A3_6b23_medic: V_CDF_A3_6b23
    {
    	displayName = "$STR_RHS_6B23MEDIC_NAME";

    	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";

    	class ItemInfo: ItemInfo
    	{
    		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
    		containerClass = "Supply140";
    		mass = 60;
    	};
    };

    // HEADGEAR
    class H_HelmetB;
	class H_CDF_A3_HelmetIA: H_HelmetB
	{
		author = "ASCZ Team";
		_generalMacro = "H_HelmetIA";
		displayName = "Helmet [CDF]";
		picture = "\cdf_a3\cdf_a3_main\data\UI\icon_helmet.paa";

		model = "\cdf_a3\cdf_a3_main\cdf_helmet.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_main\data\helmets_co.paa"};

		class ItemInfo: ItemInfo
		{
			mass = 40;
			allowedSlots[] = {901,605};
			uniformModel = "\cdf_a3\cdf_a3_main\cdf_helmet.p3d";
			modelSides[] = {6};
			armor = 4;
			passThrough = 0.5;
		};
	};
    class H_CDF_A3_fieldcap: H_HelmetB
    {
    	displayName = "Field Cap [CDF]";
    	picture = "\cdf_a3\cdf_a3_main\data\UI\icon_cap.paa";

    	model = "\cdf_a3\cdf_a3_main\cdf_nco_cap.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_main\data\helmets_co.paa"};

    	class ItemInfo: ItemInfo
    	{
    		mass = 10;
    		uniformModel = "\cdf_a3\cdf_a3_main\cdf_nco_cap.p3d";
    		allowedSlots[] = {801,901,701,605};
    		modelSides[] = {6};
    		armor = 0;
    		passThrough = 1;
    	};
    };

    // UNIFORM
    class U_CDF_A3_uniform_ttsko: Uniform_Base
    {
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL, ASCZ Team";
        displayName = "Uniform [CDF]";
        picture = "\cdf_a3\cdf_a3_main\data\UI\icon_uniform.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_main\data\Suitpacks\suitpack_CDF.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_CDF_A3_Soldier_Base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class U_B_GhillieSuit;
    class U_CDF_A3_SniperGhillie: U_B_GhillieSuit
    {
        displayName = "Ghillie Suit [CDF]";
		picture = "\cdf_a3\cdf_a3_main\data\UI\icon_ghillie.paa";
        author = "CDF A3";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_CDF_A3_Soldier_Sniper";
            containerClass = "Supply40";
            mass = 60;
        };
    };


    // WEAPONS
    class hlc_rifle_aks74;
    class hlc_rifle_aks74_kobra_silenced: hlc_rifle_aks74
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "hlc_optic_kobra";
            };
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "hlc_muzzle_545SUP_AK";
            };
        };
    };
    class hlc_rifle_ak74;
    class hlc_rifle_ak74_pso: hlc_rifle_ak74
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "HLC_Optic_PSO1";
            };
        };
    };
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
    class hlc_rifle_aks74_kobra: hlc_rifle_aks74
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "hlc_optic_kobra";
            };
        };
    };
};