class CfgPatches
{
	class tka_a3_rh_hlc_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"tka_a3_main_c"};
	};
};
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgVehicles
{
    class SoldierGB;
    class B_TKA_A3_Soldier_Base: SoldierGB
    {
        weapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_Base_02: SoldierGB
    {
        weapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_Base_03: SoldierGB
    {
        weapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_Base_04: SoldierGB
    {
        weapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade"
        };
    };

    class Bag_Base;
    class CUP_B_CivPack_WDL;
    class CUP_B_AlicePack_Khaki;
    class B_TKA_A3_Assault_Pack_Ammo: CUP_B_CivPack_WDL {
        scope = 1;
        class TransportMagazines
        {
            class _xx_CUP_20Rnd_762x51_FNFAL_M
            {
                magazine = "hlc_20Rnd_762x51_t_fal";
                count = 2;
            };
            class _xx_CUP_10Rnd_762x54_SVD_M
            {
                magazine = "CUP_10Rnd_762x54_SVD_M";
                count = 2;
            };
            class _xx_1Rnd_HE_Grenade_shell
            {
                magazine = "1Rnd_HE_Grenade_shell";
                count = 2;
            };
            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 2;
            };
        };
    };
    class B_TKA_A3_ALICE_Pack_AmmoMG: CUP_B_AlicePack_Khaki {
        scope = 1;
        class TransportMagazines
        {
            class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
            {
                magazine = "rhs_100Rnd_762x54mmR";
                count = 5;
            };
            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 2;
            };
        };
    };
    class B_TKA_A3_ALICE_Pack_Explosives: CUP_B_AlicePack_Khaki {
        scope = 1;
        class TransportMagazines
        {
            class _xx_ATMine_Range_Mag
            {
                magazine = "ATMine_Range_Mag";
                count = 3;
            };
            class _xx_DemoCharge_Remote_Mag
            {
                magazine = "DemoCharge_Remote_Mag";
                count = 3;
            };
        };
    };
    class B_TKA_A3_Assault_Pack_RPK: CUP_B_CivPack_WDL {
        scope = 1;
        class TransportMagazines
        {
            class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
            {
                magazine = "hlc_45Rnd_762x39_t_rpk";
                count = 3;
            };
            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 2;
            };
        };
    };
    class B_TKA_A3_ALICE_Pack_Ammo: CUP_B_AlicePack_Khaki {
        scope = 1;
        class TransportMagazines
        {
            class _xx_30Rnd_556x45_Stanag
            {
                magazine = "30Rnd_556x45_Stanag";
                count = 6;
            };
            class _xx_1Rnd_HE_Grenade_shell
            {
                magazine = "1Rnd_HE_Grenade_shell";
                count = 4;
            };
            class _xx_smokeshellOrange
            {
                magazine = "smokeshellOrange";
                count = 2;
            };
        };
    };

    class B_TKA_A3_Soldier;
    class B_TKA_A3_Soldier_GL: B_TKA_A3_Soldier_Base
    {
        weapons[]={"RH_m16a2gl","Throw","Put"};
        magazines[]=
        {
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"
        };
        respawnWeapons[]={"RH_m16a2gl","Throw","Put"};
        respawnMagazines[]=
        {
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"
        };
    };

    class B_TKA_A3_Soldier_LAT:B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_FAL5061","CUP_launch_RPG18","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "CUP_RPG18_M"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","CUP_launch_RPG18","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal", "hlc_20Rnd_762x51_t_fal", "hlc_20Rnd_762x51_t_fal", "CUP_RPG18_M"
        };
    };
    class B_TKA_A3_Soldier_AT: B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_FAL5061","rhs_weap_rpg7","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","rhs_weap_rpg7","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "rhs_rpg7_PG7VL_mag"
        };
    };

    class B_TKA_A3_Soldier_HAT:B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_FAL5061","CUP_launch_Metis","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "CUP_AT13_M"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","CUP_launch_Metis","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "CUP_AT13_M"
        };
    };

    class B_TKA_A3_Soldier_AA: B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_FAL5061","rhs_weap_igla","Throw","Put"}; // org. Strela
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "rhs_mag_9k38_rocket"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","rhs_weap_igla","Throw","Put"};
        respawnMagazines[]={"hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","rhs_mag_9k38_rocket"};
    };

    class B_TKA_A3_Soldier_Engineer: B_TKA_A3_Soldier
    {
        weapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        respawnMagazines[]={"hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","HandGrenade"};
    };

    class B_TKA_A3_Soldier_MG: B_TKA_A3_Soldier_Base
    {
        weapons[]={"rhs_weap_pkp_bipod","Throw","Put"};
        magazines[]=
        {
            "rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR",
            "rhs_100Rnd_762x54mmR"
        };
        respawnWeapons[]={"rhs_weap_pkp_bipod","Throw","Put"};
        respawnMagazines[]={"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    };

    class B_TKA_A3_Soldier_AR: B_TKA_A3_Soldier_Base
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

    class B_TKA_A3_Soldier_Medic: B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade"
        };
    };

    class B_TKA_A3_Soldier_SL: B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_FAL5061","ItemGPS","Binocular","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","ItemGPS","Binocular","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","SmokeShellOrange"
        };
    };

    class B_TKA_A3_Soldier_Officer: B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_aks74u","ItemGPS","Binocular","Throw","Put"}; // org. Makarov
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange"
        };
        respawnWeapons[]={"hlc_rifle_aks74u","ItemGPS","Binocular","Throw","Put"};
        respawnmagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","SmokeShellOrange"
        };
    };

    class B_TKA_A3_Aziz: B_TKA_A3_Soldier_Base
    {
        weapons[]={"RH_ttracker_g","Throw","Put"}; // org. Makarov
        magazines[]=
        {
            "RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag"
        };
        respawnWeapons[]={"RH_ttracker_g","Throw","Put"};
        respawnmagazines[]=
        {
            "RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag"
        };
    };

    class B_TKA_A3_Commander: B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_FAL5061","RH_ttracker_g","ItemGPS","Binocular","Throw","Put"}; // org. Makarov
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "SmokeShell", "SmokeShellBlue",
            "RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","RH_ttracker_g","ItemGPS","Binocular","Throw","Put"};
        respawnmagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "SmokeShellBlue",
            "RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag","RH_6Rnd_45ACP_Mag"
        };
    };

    // SNIPERS
    class B_TKA_A3_Soldier_Spotter: B_TKA_A3_Soldier_Base
    {
        weapons[]={"hlc_rifle_FAL5061","Binocular","NVGoggles","Throw","Put"};
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","HandGrenade","SmokeShellBlue","SmokeShell"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Binocular","Throw","Put"};
        respawnMagazines[]={"hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","HandGrenade","SmokeShellBlue"};
    };

    class B_TKA_A3_Soldier_Sniper: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_srifle_SVD_des_ghillie_pso","NVGoggles","Throw","Put","Binocular"}; // org. SVD
        magazines[]=
        {
            "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue"
        };
        respawnWeapons[]={"CUP_srifle_SVD_des_ghillie_pso","NVGoggles","Throw","Put", "Binocular"};
        respawnMagazines[]=
        {
            "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M", "CUP_10Rnd_762x54_SVD_M",
            "HandGrenade","SmokeShellBlue"
        };
    };

    class B_TKA_A3_Soldier_SniperH: B_TKA_A3_Soldier_Sniper
    {
        weapons[]={"CUP_srifle_ksvk_PSO3","NVGoggles","Throw","Put","Binocular","itemGPS"};
        magazines[]=
        {
            "CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M",
            "CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M",
            "HandGrenade", "HandGrenade", "SmokeShell", "smokeshellBlue"
        };
        respawnWeapons[]={"CUP_srifle_ksvk_PSO3","NVGoggles","Throw","Put","Binocular","itemGPS"};
        respawnMagazines[]=
        {
            "CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M",
            "CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M",
            "HandGrenade", "smokeshellBlue"
        };
    };

    class B_TKA_A3_Soldier_Sniper_Night: B_TKA_A3_Soldier_Sniper
    {
        weapons[]={"CUP_srifle_SVD_NSPU","NVGoggles","Throw","Put","Binocular","itemGPS"};
        magazines[]=
        {
            "CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M",
            "HandGrenade", "HandGrenade", "SmokeShell", "smokeshellBlue"
        };
        respawnWeapons[]={"CUP_srifle_SVD_NSPU","NVGoggles","Throw","Put","Binocular","itemGPS"};
        respawnMagazines[]=
        {
            "CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M",
            "HandGrenade", "smokeshellBlue"
        };
    };
    class B_TKA_A3_Soldier_Night_1: B_TKA_A3_Soldier
    {
        weapons[]={"hlc_rifle_aks74","Throw","Put","NVGoggles"}; //NSPU
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_aks74","Throw","Put","NVGoggles"};
        respawnMagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_Night_2: B_TKA_A3_Soldier
    {
        weapons[]={"hlc_rifle_FAL5061","Throw","Put"}; // ANPVS4
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Throw","Put"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_TWS: B_TKA_A3_Soldier
    {
        weapons[]={"hlc_rifle_aks74","Throw","Put","NVGoggles"}; // GHOSTHAWK
        magazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"hlc_rifle_aks74","Throw","Put","NVGoggles"};
        respawnMagazines[]=
        {
            "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
            "HandGrenade"
        };
    };

    class B_TKA_A3_Soldier_Crew: B_TKA_A3_Soldier_Base
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

    class B_TKA_A3_Soldier_Pilot: B_TKA_A3_Soldier_Base
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

    //SPECIAL FORCES
    class B_TKA_A3_Special_Forces: B_TKA_A3_Soldier_Base
    {
        weapons[]={"RH_m16a2gl","Binocular","Throw","Put","RH_mak"};
        magazines[]=
        {
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "HandGrenade","HandGrenade","SmokeShell","smokeshellBlue",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak"
        };
        respawnWeapons[]={"RH_m16a2gl","Binocular","Throw","Put","RH_mak"};
        respawnMagazines[]=
        {
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell",
            "HandGrenade", "smokeshellBlue",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak"
        };
    };

    class B_TKA_A3_Special_Forces_TL: B_TKA_A3_Special_Forces
    {
        weapons[]={"hlc_rifle_FAL5061","Binocular","Throw","Put","itemGPS","RH_mak"};// Silenced
        magazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade", "HandGrenade","smokeshellBlue", "smokeshellOrange",
            "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"
        };
        respawnWeapons[]={"hlc_rifle_FAL5061","Binocular","Throw","Put","itemGPS","RH_mak"};
        respawnMagazines[]=
        {
            "hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_t_fal",
            "HandGrenade", "smokeshellOrange",
            "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"
        };
    };

    class B_TKA_A3_Special_Forces_MG: B_TKA_A3_Special_Forces
    {
        weapons[]={"rhs_weap_pkp_bipod","Binocular","Throw","Put","RH_mak"};
        magazines[]=
        {
            "rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR",
            "HandGrenade", "HandGrenade","SmokeShell","SmokeShellBlue",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak"
        };
        respawnWeapons[]={"rhs_weap_pkp_bipod","Binocular","Throw","Put","RH_mak"};
        respawnMagazines[]=
        {
            "rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR",
            "HandGrenade","SmokeShellBlue",
            "RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak"
        };
    };
};