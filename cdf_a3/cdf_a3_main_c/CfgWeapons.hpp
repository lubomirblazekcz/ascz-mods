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

        displayName = "CDF Vest";
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
            containerClass = "Supply140";
            mass = 60;
            armor = 12;
            passThrough = 0.4;
        };
    };
    class H_HelmetB;
	class H_CDF_A3_HelmetIA: H_HelmetB
	{
		author = "ASCZ Team";
		_generalMacro = "H_HelmetIA";
		displayName = "CDF Helmet";
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
        displayName = "CDF Uniform";
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