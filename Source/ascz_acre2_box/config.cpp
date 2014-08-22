class CfgPatches
{
	class ascz_acre2_box
	{
		units[] = {"ASCZ_ACRE2_AmmoBox"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"EvroMalarkey"};
		version = "1.0";
	};
};

class cfgVehicles {
    class B_supplyCrate_F;
    class ASCZ_ACRE2_AmmoBox: B_supplyCrate_F
    {
        displayName = "[ACRE2] Radios";
        maximumLoad = 999999;
        transportMaxWeapons = 50000;
        transportMaxMagazines = 200000;
        transportMaxBackpacks = 2000;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            class _xx_ACRE_PRC343
            {
                name = "ACRE_PRC343";
                count = 30;
            };
            class _xx_ACRE_PRC148
            {
                name = "ACRE_PRC148";
                count = 30;
            };
        };
    };
};