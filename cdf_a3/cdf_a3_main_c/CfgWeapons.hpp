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
    class V_CDF_A3_rifleman_02: V_CDF_A3_6b23
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
    class V_CDF_A3_crewofficer: V_CDF_A3_6b23
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

    class H_HelmetB;
	class H_CDF_A3_HelmetIA: H_HelmetB
	{
		author = "ASCZ Team";
		_generalMacro = "H_HelmetIA";
		displayName = "Helmet [CDF]";
		picture = "\cdf_a3\cdf_a3_main\data\UI\icon_helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_main\data\CDF_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			allowedSlots[] = {901,605};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[] = {2,3};
			armor = 4;
			passThrough = 0.5;
		};
	};
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
};