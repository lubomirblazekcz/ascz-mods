class CfgPatches
{
	class ascz_vts_box
	{
		units[] = {"ascz_arsenal_box"};
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
        maximumLoad = 2000;
        transportMaxWeapons = 12;
        transportMaxMagazines = 64;
        transportMaxBackpacks = 12;
		supplyRadius = 1.4;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            class _xx_AGM_Bandage
            {
                name = "AGM_Bandage";
                count = 50;
            };
            class _xx_AGM_Morphine
            {
                name = "AGM_Morphine";
                count = 50;
            };
            class _xx_AGM_Epipen
            {
                name = "AGM_Epipen";
                count = 50;
            };
            class _xx_AGM_Bloodbag
            {
                name = "AGM_Bloodbag";
                count = 10;
            };
            class _xx_AGM_SpareBarrel
            {
                name = "AGM_SpareBarrel";
                count = 10;
            };
            class _xx_AGM_EarBuds
            {
                name = "AGM_EarBuds";
                count = 50;
            };
            class _xx_AGM_ItemKestrel
            {
                name = "AGM_ItemKestrel";
                count = 10;
            };
            class _xx_AGM_MapTools
            {
                name = "AGM_MapTools";
                count = 10;
            };
            class _xx_AGM_UAVBattery
            {
                name = "AGM_UAVBattery";
                count = 10;
            };
            class _xx_AGM_Clacker
            {
                name = "AGM_Clacker";
                count = 10;
            };
            class _xx_AGM_DefusalKit
            {
                name = "AGM_DefusalKit";
                count = 10;
            };
            class _xx_AGM_AGM_M26_Clacker
            {
                name = "AGM_M26_Clacker";
                count = 10;
            };
            class _xx_AGM_CableTie
            {
                name = "AGM_CableTie";
                count = 10;
            };
            class _xx_AGM_IR_Strobe_Item
            {
                name = "AGM_IR_Strobe_Item";
                count = 10;
            };
        };
    };

    class ascz_arsenal_box: Land_PaperBox_open_full_F
    {
            displayName = "[AGM] Arsenal";
            vehicleClass = "Ammo";
            class eventHandlers
            {
                init = "_this select 0 addAction [""<img image='\A3\Ui_f\data\Logos\arsenal_1024_ca.paa' size='1.8' shadow=0.1 />"", { [""Open"", true] call BIS_fnc_arsenal; }, """", 6];";
            };
    };
};