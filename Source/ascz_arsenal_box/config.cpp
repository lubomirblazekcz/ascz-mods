class CfgPatches
{
	class ascz_arsenal_box
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
    class Land_PaperBox_open_full_F;
    class ascz_arsenal_box: Land_PaperBox_open_full_F
    {
            displayName = "$STR_A3_rscdisplaymain_buttonvirtualarsenal";
            vehicleClass = "Ammo";
            maximumLoad = 999999;
            transportMaxWeapons = 50000;
            transportMaxMagazines = 200000;
            transportMaxItems = 200000;
            transportMaxBackpacks = 2000;
            class TransportMagazines {};
            class TransportWeapons {};
            class TransportItems {
                class _xx_AGM_Bandage
                {
                    name = "AGM_Bandage";
                    count = 1000;
                };
                class _xx_AGM_Morphine
                {
                    name = "AGM_Morphine";
                    count = 1000;
                };
                class _xx_AGM_Epipen
                {
                    name = "AGM_Epipen";
                    count = 1000;
                };
                class _xx_AGM_Bloodbag
                {
                    name = "AGM_Bloodbag";
                    count = 500;
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
            class eventHandlers
            {
                init = "_this select 0 addAction [""<img image='\A3\Ui_f\data\Logos\arsenal_1024_ca.paa' size='1.8' shadow=0.1 />"", { [""Open"", true] call BIS_fnc_arsenal; }, """", 6];";
            };
    };
};