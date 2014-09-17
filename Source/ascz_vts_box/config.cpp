class CfgPatches
{
	class ascz_vts_box
	{
		units[] = {"Land_PaperBox_open_full_F"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author[] = {"EvroMalarkey"};
		version = "1.0";
	};
};

class cfgVehicles {
    class Land_PaperBox_open_full_F
    {
        maximumLoad = 999999;
        transportMaxWeapons = 50000;
        transportMaxMagazines = 200000;
        transportMaxBackpacks = 2000;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            class _xx_AGM_Bandage
            {
                name = "AGM_Bandage";
                count = 200;
            };
            class _xx_AGM_Morphine
            {
                name = "AGM_Morphine";
                count = 200;
            };
            class _xx_AGM_Epipen
            {
                name = "AGM_Epipen";
                count = 150;
            };
            class _xx_AGM_Bloodbag
            {
                name = "AGM_Bloodbag";
                count = 150;
            };
            class _xx_AGM_SpareBarrel
            {
                name = "AGM_SpareBarrel";
                count = 100;
            };
            class _xx_AGM_EarBuds
            {
                name = "AGM_EarBuds";
                count = 100;
            };
            class _xx_AGM_ItemKestrel
            {
                name = "AGM_ItemKestrel";
                count = 50;
            };
            class _xx_AGM_MapTools
            {
                name = "AGM_MapTools";
                count = 50;
            };
            class _xx_AGM_UAVBattery
            {
                name = "AGM_UAVBattery";
                count = 50;
            };
            class _xx_AGM_Clacker
            {
                name = "AGM_Clacker";
                count = 50;
            };
            class _xx_AGM_DefusalKit
            {
                name = "AGM_DefusalKit";
                count = 50;
            };
            class _xx_AGM_CableTie
            {
                name = "AGM_CableTie";
                count = 50;
            };
            class _xx_AGM_IR_Strobe_Item
            {
                name = "AGM_IR_Strobe_Item";
                count = 50;
            };
        };
    };
};