class CfgPatches
{
	class ascz_missing_content
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F", "A3_Characters_F_BLUFOR"};
	};
};

class cfgVehicles {
// --- ANIMALS --- //
    class Animal_Base_F;
    class Fin_Base_F;
    class Alsatian_Base_F;
    class Goat_Base_F;
    class Fowl_Base_F;
    class Fin_sand_F: Fin_Base_F {
        scope = 2;
    };
    class Fin_blackwhite_F: Fin_Base_F {
        scope = 2;
    };
    class Fin_ocherwhite_F: Fin_Base_F {
        scope = 2;
    };
    class Fin_tricolour_F: Fin_Base_F {
        scope = 2;
    };
    class Fin_random_F: Fin_Base_F {
        scope = 2;
    };
    class Alsatian_Sand_F: Alsatian_Base_F {
        scope = 2;
    };
    class Alsatian_Black_F: Alsatian_Base_F {
        scope = 2;
    };
    class Alsatian_Sandblack_F: Alsatian_Base_F {
        scope = 2;
    };
    class Alsatian_Random_F: Alsatian_Base_F {
        scope = 2;
    };
    class Goat_random_F: Goat_Base_F {
        scope = 2;
    };
    class Sheep_random_F: Animal_Base_F {
        scope = 2;
    };
    class Hen_random_F: Fowl_Base_F {
        scope = 2;
    };
    class Cock_random_F: Fowl_Base_F {
        scope = 2;
    };

    // --- SUBMARINE --- //
    class FloatingStructure_F;
    class Submarine_01_F: FloatingStructure_F {
        scope = 2;
    };
};