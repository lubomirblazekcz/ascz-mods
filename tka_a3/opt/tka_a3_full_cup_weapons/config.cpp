class CfgPatches
{
	class tka_a3_full_cup_weapons
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
        weapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_Base_02: SoldierGB
    {
        weapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_Base_03: SoldierGB
    {
        weapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_Base_04: SoldierGB
    {
        weapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
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
                magazine = "CUP_20Rnd_762x51_FNFAL_M";
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
                magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
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
                magazine = "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
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

    class B_TKA_A3_Soldier_GL: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_M16A2_GL","Throw","Put"};
        magazines[]=
        {
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"
        };
        respawnWeapons[]={"CUP_arifle_M16A2_GL","Throw","Put"};
        respawnMagazines[]=
        {
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"
        };
    };

    class B_TKA_A3_Soldier_LAT:B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_FNFAL","CUP_launch_RPG18","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_RPG18_M"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","CUP_launch_RPG18","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_RPG18_M"
        };
    };
    class B_TKA_A3_Soldier_AT: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_FNFAL","rhs_weap_rpg7","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","rhs_weap_rpg7","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "rhs_rpg7_PG7VL_mag"
        };
    };

    class B_TKA_A3_Soldier_HAT:B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_FNFAL","CUP_launch_Metis","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_AT13_M"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","CUP_launch_Metis","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_AT13_M"
        };
    };

    class B_TKA_A3_Soldier_AA: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_FNFAL","rhs_weap_igla","Throw","Put"}; // org. Strela
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "rhs_mag_9k38_rocket"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","rhs_weap_igla","Throw","Put"};
        respawnMagazines[]={"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","rhs_mag_9k38_rocket"};
    };

    class B_TKA_A3_Soldier_Engineer: B_TKA_A3_Soldier
    {
        weapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        respawnMagazines[]={"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","HandGrenade"};
    };

    class B_TKA_A3_Soldier_MG: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_lmg_PKM","Throw","Put"};
        magazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
        respawnWeapons[]={"CUP_lmg_PKM","Throw","Put"};
        respawnMagazines[]={"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
    };

    class B_TKA_A3_Soldier_AR: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_RPK74","Throw","Put"};
        magazines[]=
        {
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShell"

        };
        respawnWeapons[]={"CUP_arifle_RPK74","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "HandGrenade","SmokeShell"
        };
    };

    class B_TKA_A3_Soldier_Medic: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade"
        };
    };

    class B_TKA_A3_Soldier_SL: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_FNFAL","ItemGPS","Binocular","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","ItemGPS","Binocular","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","SmokeShellOrange"
        };
    };

    class B_TKA_A3_Soldier_Officer: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_AKS74U","ItemGPS","Binocular","Throw","Put"}; // org. Makarov
        magazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange"
        };
        respawnWeapons[]={"CUP_arifle_AKS74U","ItemGPS","Binocular","Throw","Put"};
        respawnmagazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "HandGrenade","SmokeShellOrange"
        };
    };

    class B_TKA_A3_Aziz: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_hgun_TaurusTracker455_gold","Throw","Put"}; // org. Makarov
        magazines[]=
        {
            "CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M"
        };
        respawnWeapons[]={"CUP_hgun_TaurusTracker455_gold","Throw","Put"};
        respawnmagazines[]=
        {
            "CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M"
        };
    };

    class B_TKA_A3_Commander: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_FNFAL","CUP_hgun_TaurusTracker455_gold","ItemGPS","Binocular","Throw","Put"}; // org. Makarov
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "SmokeShell", "SmokeShellBlue",
            "CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","CUP_hgun_TaurusTracker455_gold","ItemGPS","Binocular","Throw","Put"};
        respawnmagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "SmokeShellBlue",
            "CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M"
        };
    };

    // SNIPERS
    class B_TKA_A3_Soldier_Spotter: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_FNFAL","Binocular","NVGoggles","Throw","Put"};
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","HandGrenade","SmokeShellBlue","SmokeShell"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","Binocular","Throw","Put"};
        respawnMagazines[]={"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","HandGrenade","SmokeShellBlue"};
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
        weapons[]={"CUP_arifle_AKS74","Throw","Put","NVGoggles"}; //NSPU
        magazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_AKS74","Throw","Put","NVGoggles"};
        respawnMagazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_Night_2: B_TKA_A3_Soldier
    {
        weapons[]={"CUP_arifle_FNFAL","Throw","Put"}; // ANPVS4
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"FN_FAL_ANPVS4","Throw","Put"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade"
        };
    };
    class B_TKA_A3_Soldier_TWS: B_TKA_A3_Soldier
    {
        weapons[]={"CUP_arifle_AKS74","Throw","Put","NVGoggles"}; // GHOSTHAWK
        magazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_AKS74","Throw","Put","NVGoggles"};
        respawnMagazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "HandGrenade"
        };
    };

    class B_TKA_A3_Soldier_Crew: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_AKS74U","NVGoggles","Throw","Put"};
        magazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_arifle_AKS74U","NVGoggles","Throw","Put"};
        respawnmagazines[]= {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","HandGrenade"};
    };

    class B_TKA_A3_Soldier_Pilot: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_AKS74U","NVGoggles","Throw","Put"};
        magazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "SmokeShellOrange","SmokeShellBlue"
        };
        respawnWeapons[]={"CUP_arifle_AKS74U","NVGoggles","Throw","Put"};
        respawnmagazines[]=
        {
            "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
            "SmokeShellOrange","SmokeShellBlue"
        };
    };

    //SPECIAL FORCES
    class B_TKA_A3_Special_Forces: B_TKA_A3_Soldier_Base
    {
        weapons[]={"CUP_arifle_M16A2_GL","Binocular","Throw","Put","CUP_hgun_Makarov"};
        magazines[]=
        {
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "HandGrenade","HandGrenade","SmokeShell","smokeshellBlue",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell",
            "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"
        };
        respawnWeapons[]={"CUP_arifle_M16A2_GL","Binocular","Throw","Put","CUP_hgun_Makarov"};
        respawnMagazines[]=
        {
            "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag",
            "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell",
            "HandGrenade", "smokeshellBlue",
            "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"
        };
    };

    class B_TKA_A3_Special_Forces_TL: B_TKA_A3_Special_Forces
    {
        weapons[]={"CUP_arifle_FNFAL","Binocular","Throw","Put","itemGPS","CUP_hgun_Makarov"};// Silenced
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade", "HandGrenade","smokeshellBlue", "smokeshellOrange",
            "CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M"
        };
        respawnWeapons[]={"CUP_arifle_FNFAL","Binocular","Throw","Put","itemGPS","CUP_hgun_Makarov"};
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
            "HandGrenade", "smokeshellOrange",
            "CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M"
        };
    };

    class B_TKA_A3_Special_Forces_MG: B_TKA_A3_Special_Forces
    {
        weapons[]={"CUP_lmg_PKM","Binocular","Throw","Put","CUP_hgun_Makarov"};
        magazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "HandGrenade", "HandGrenade","SmokeShell","SmokeShellBlue",
            "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"
        };
        respawnWeapons[]={"CUP_lmg_PKM","Binocular","Throw","Put","CUP_hgun_Makarov"};
        respawnMagazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "HandGrenade","SmokeShellBlue",
            "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"
        };
    };
};