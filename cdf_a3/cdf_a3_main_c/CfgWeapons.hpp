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

        displayName = "$STR_RHS_6B23_NAME";
        picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_6b23_ca.paa";

        model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23";

        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] =
        {
            "rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
            "rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
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
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetIA";
		displayName = "$STR_A3_H_HelmetIA0";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\headgear_helmet_canvas_co.paa"};
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
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_FLORAMSV_NAME";
        picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "CDF_Soldier_Base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
};