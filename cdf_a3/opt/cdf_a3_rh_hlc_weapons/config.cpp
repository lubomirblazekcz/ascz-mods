class CfgPatches
{
	class cdf_a3_rh_hlc_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cdf_a3_main_c"};
	};
};
class CfgWeapons
{
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

class CfgVehicles
{
    class rhs_infantry_msv_base;
    class B_CDF_A3_Soldier_Base: rhs_infantry_msv_base
    {
        weapons[]={"hlc_rifle_ak74_dirty","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_ak74_dirty","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade"
        };
    };

    class B_CDF_A3_Soldier;
    class B_CDF_A3_Soldier_GL: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74_GL","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK",
            "hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"
        };
        respawnWeapons[]={"hlc_rifle_aks74_GL","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"
        };
    };

    class B_CDF_A3_Soldier_Militia: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_ak47","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak",
            "hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_ak47","Throw","Put"};
        respawnmagazines[]=
        {
            "hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak",
            "HandGrenade"
        };
        linkedItems[] = {"H_CDF_A3_fieldcap","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"H_CDF_A3_fieldcap","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class B_CDF_A3_Soldier_Medic: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74u","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","SmokeShellOrange"
        };
        respawnWeapons[]={"hlc_rifle_aks74u","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","SmokeShellOrange"
        };
    };

    class B_CDF_A3_Soldier_Sniper: B_CDF_A3_Soldier_Base
    {
        weapons[]={"CUP_srifle_SVD_wdl_ghillie","NVGoggles","Throw","Put","Binocular"}; // org. SVD
        magazines[]=
        {
            "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange"
        };
        respawnWeapons[]={"CUP_srifle_SVD_wdl_ghillie", "NVGoggles", ,"Throw","Put", "Binocular"};
        respawnMagazines[]=
        {
            "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M",
            "HandGrenade","SmokeShellOrange"
        };
    };

    class B_CDF_A3_Soldier_Spotter: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74_kobra_silenced","Binocular","NVGoggles","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade","SmokeShellOrange","SmokeShell"
        };
        respawnWeapons[]={"hlc_rifle_aks74_kobra_silenced","Binocular","Throw","Put"};
        respawnMagazines[]={"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","SmokeShell"};
    };

    class B_CDF_A3_Soldier_Marksman: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_ak74_pso","Binocular","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade","SmokeShellOrange","SmokeShell"
        };
        respawnWeapons[]={"hlc_rifle_ak74_pso","Binocular","Throw","Put"};
        respawnMagazines[]={"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","SmokeShell"};
    };

    class B_CDF_A3_Soldier_RPG: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_ak74_dirty","rhs_weap_rpg7","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag"
        };
        respawnWeapons[]={"hlc_rifle_ak74_dirty","rhs_weap_rpg7","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag"
        };
    };

    class B_CDF_A3_Soldier_Strela: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_ak74_dirty","CUP_launch_9K32Strela","Throw","Put"}; // org. Strela
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "CUP_Strela_2_M"
        };
        respawnWeapons[]={"hlc_rifle_ak74_dirty","CUP_launch_9K32Strela","Throw","Put"};
        respawnMagazines[]={"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_Strela_2_M"};
    };

    class B_CDF_A3_Soldier_AR: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_rpk","Throw","Put"};
        magazines[]=
        {
            "hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShell"

        };
        respawnWeapons[]={"hlc_rifle_rpk","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk",
            "HandGrenade","SmokeShell"
        };
    };

    class B_CDF_A3_Soldier_MG: B_CDF_A3_Soldier_Base
    {
        weapons[]={"rhs_weap_pkm","Throw","Put"};
        magazines[]=
        {
            "rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR",
            "rhs_100Rnd_762x54mmR"
        };
        respawnWeapons[]={"rhs_weap_pkm","Throw","Put"};
        respawnMagazines[]={"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    };

    class B_CDF_A3_Soldier_TL: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74_kobra","ItemGPS","NVGoggles","Binocular","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellBlue"
        };
        respawnWeapons[]={"hlc_rifle_aks74_kobra","ItemGPS","NVGoggles","Binocular","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellBlue"
        };
    };

    class B_CDF_A3_Soldier_Officer: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74u","RH_mak","ItemGPS","NVGoggles","Binocular","Throw","Put"}; // org. Makarov
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak"
        };
        respawnWeapons[]={"hlc_rifle_aks74u","RH_mak","ItemGPS","NVGoggles","Binocular","Throw","Put"};
        respawnmagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak"
        };
    };

    class B_CDF_A3_Commander: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74u","RH_mak","NVGoggles","ItemGPS","Binocular","Throw","Put"}; // org. Makarov
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak"
        };
        respawnWeapons[]={"hlc_rifle_aks74u","RH_mak","NVGoggles","ItemGPS","Binocular","Throw","Put"};
        respawnmagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak"
        };
    };

    class B_CDF_A3_Soldier_Pilot: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74u","NVGoggles","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "SmokeShellOrange","SmokeShellBlue"
        };
        respawnWeapons[]={"hlc_rifle_aks74u","NVGoggles","Throw","Put"};
        respawnmagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "SmokeShellOrange","SmokeShellBlue"
        };
    };

    class B_CDF_A3_Soldier_Crew: B_CDF_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74u","NVGoggles","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_aks74u","NVGoggles","Throw","Put"};
        respawnmagazines[]= {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade"};
    };

    class B_CDF_A3_Soldier_Engineer: B_CDF_A3_Soldier
    {
        weapons[]={"hlc_rifle_ak74_dirty","Throw","Put"};
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_ak74_dirty","Throw","Put"};
        respawnMagazines[]={"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade"};
    };
};