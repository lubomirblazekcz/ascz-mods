class CfgPatches
{
	class ascz_ibr_id_units_cup
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ibr_duala_akm","ibr_duala_dragunov","ibr_duala_igla","ibr_duala_m16","ibr_duala_m1911","ibr_duala_pkm","ibr_duala_rpg7","ibr_duala_steyr","ibr_duala_molafr"};
	};
};
class CfgMagazines
{
    class Default;
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class ibr_100Rnd_762x54: 30Rnd_556x45_Stanag
    {
        scope = 0;
    };
    class ibr_200Rnd_762x54: 30Rnd_556x45_Stanag
    {
        scope = 0;
    };
    class ibr_1200Rnd_762x54: 30Rnd_556x45_Stanag
    {
        scope = 0;
    };
    class 30Rnd_762x39_ibr: CA_Magazine
    {
        scope = 0;
    };
    class 40Rnd_762x39_ibr: CA_Magazine
    {
        scope = 0;
    };
    class 1Rnd_HE_GP25_ibr: CA_Magazine
    {
        scope = 0;
    };
    class FlareWhite_GP25_ibr: CA_Magazine
    {
        scope = 0;
    };
    class FlareGreen_GP25_ibr: FlareWhite_GP25_ibr
    {
        scope = 0;
    };
    class FlareRed_GP25_ibr: FlareWhite_GP25_ibr
    {
        scope = 0;
    };
    class FlareYellow_GP25_ibr: FlareWhite_GP25_ibr
    {
        scope = 0;
    };
    class 1Rnd_SMOKE_GP25_ibr: 1Rnd_HE_GP25_ibr
    {
        scope = 0;
    };
    class 1Rnd_SmokeRed_GP25_ibr: 1Rnd_SMOKE_GP25_ibr
    {
        scope = 0;
    };
    class 1Rnd_SmokeGreen_GP25_ibr: 1Rnd_SMOKE_GP25_ibr
    {
        scope = 0;
    };
    class 1Rnd_SmokeYellow_GP25_ibr: 1Rnd_SMOKE_GP25_ibr
    {
        scope = 0;
    };

    class 10Rnd_762x54R_ibr: CA_Magazine
    {
        scope = 0;
    };

    class ibr_7Rnd_45acp_1911: CA_Magazine
    {
        scope = 0;
    };
    class ibr_7Rnd_45acp_1911SD: ibr_7Rnd_45acp_1911
    {
        scope = 0;
    };

    class RPG32_HE_F;
    class RPG32_F;
    class ibr_pg7v: RPG32_F
    {
        scope = 0;
    };
    class ibr_pg7vl: ibr_pg7v
    {
        scope = 0;
    };
    class ibr_pg7vr: ibr_pg7v
    {
        scope = 0;
    };
    class ibr_og7: ibr_pg7v
    {
        scope = 0;
    };
    class Titan_AA;
    class ibr_strela_missile: Titan_AA
    {
        scope = 0;
    };
};

class CfgWeapons
{
    class UGL_F;
    class ibr_akm_base;
    class ibr_akm: ibr_akm_base
    {
        scope = 0;
    };
    class ibr_akm_carbine: ibr_akm_base
    {
        scope = 0;
    };
    class ibr_rpk: ibr_akm_base
    {
        scope = 0;
    };
    class ibr_akm_gl: ibr_akm
    {
        scope = 2;
		magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
        class M203Muzzle: UGL_F
        {
			magazines[] = {"CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareGreen_GP25_M","CUP_FlareRed_GP25_M","CUP_FlareYellow_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKERED_GP25_M","CUP_1Rnd_SMOKEGREEN_GP25_M","CUP_1Rnd_SMOKEYELLOW_GP25_M"};
        };
    };
    class ibr_akm_carbine_gl: ibr_akm_gl
    {
        scope = 2;
		magazines[] = {"CUP_30Rnd_762x39_AK47_M"};
    };
    class ibr_svd_base;
    class ibr_svd: ibr_svd_base
    {
        scope = 0;
    };
    class Launcher_Base_F;
    class launch_B_Titan_F;
    class ibr_igla: launch_B_Titan_F
    {
        scope = 0;
    };
    class Rifle_Base_F;
    class ibr_m16a2: Rifle_Base_F
    {
        scope = 0;
    };
    class Pistol_Base_F;
    class ibr_m1911: Pistol_Base_F
    {
        scope = 0;
    };
    class Rifle_Long_Base_F;
    class ibr_pkm: Rifle_Long_Base_F
    {
        scope = 0;
    };
    class ibr_rpg7v: Launcher_Base_F
    {
        scope = 0;
    };
    class ibr_steyr_base;
    class ibr_steyr_a1_car: ibr_steyr_base
    {
        scope = 2;
    };
    class ibr_steyr_a1_gl: ibr_steyr_base
    {
        scope = 2;
    };
};
class cfgVehicles
{
    class B_AssaultPackG;
    class Bag_Base;
    class B_Soldier_base_F;
    class ibr_backpack: B_AssaultPackG
    {
        model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_AlicePack_TK.p3d";
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Backpacks\data\alice_equip_co.paa"};
        scope = 1;
    };
    class ibr_backpack_rpg: B_AssaultPackG
    {
        model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_Backpack_RPG.p3d";
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Backpacks\data\equip_co.paa"};
        scope = 1;
        class TransportMagazines
        {
            class _xx_RPG7_V_F
            {
                magazine = "CUP_PG7V_M";
                count = 0;
            };
            class _xx_RPG7_VL_F
            {
                magazine = "CUP_PG7VL_M";
                count = 0;
            };
            class _xx_RPG7_VR_F
            {
                magazine = "CUP_PG7VR_M";
                count = 1;
            };
            class _xx_RPG7_OG7_F
            {
                magazine = "CUP_OG7_M";
                count = 1;
            };
        };
    };
    class ibr_backpack_aa: B_AssaultPackG
    {
        model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_Backpack_RPG.p3d";
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Backpacks\data\equip_co.paa"};
        scope = 1;
        class TransportMagazines
        {
            class _xx_RPG7_V_F
            {
                magazine = "CUP_PG7V_M";
                count = 0;
            };
            class _xx_RPG7_VL_F
            {
                magazine = "CUP_PG7VL_M";
                count = 0;
            };
            class _xx_RPG7_VR_F
            {
                magazine = "CUP_PG7VR_M";
                count = 0;
            };
            class _xx_RPG7_OG7_F
            {
                magazine = "CUP_OG7_M";
                count = 0;
            };
            class _xx_STRELA_MISSILE_F
            {
                magazine = "CUP_Igla_M";
                count = 0;
            };
        };
    };
    class I_supplyCrate_F;
    class afr_ammo_box: I_supplyCrate_F
    {
        scope = 2;
        scopeCurator = 2;
        class TransportMagazines
        {
            class _xx_ibr_7Rnd_45acp_1911
            {
                magazine = "CUP_7Rnd_45ACP_1911";
                count = 15;
            };
            class _xx_30Rnd_556x45_Stanag
            {
                magazine = "30Rnd_556x45_Stanag";
                count = 40;
            };
            class _xx_40Rnd_762x39_ibr
            {
                magazine = "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
                count = 8;
            };
            class _xx_ibr_100Rnd_762x54
            {
                magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                count = 8;
            };
            class _xx_chemlight_green
            {
                magazine = "chemlight_green";
                count = 10;
            };
            class _xx_chemlight_red
            {
                magazine = "chemlight_red";
                count = 10;
            };
            class _xx_RPG7_V_F
            {
                magazine = "CUP_PG7V_M";
                count = 4;
            };
            class _xx_RPG7_VL_F
            {
                magazine = "CUP_PG7VL_M";
                count = 2;
            };
            class _xx_RPG7_VR_F
            {
                magazine = "CUP_PG7VR_M";
                count = 2;
            };
            class _xx_RPG7_OG7_F
            {
                magazine = "CUP_OG7_M";
                count = 2;
            };
            class _xx_STRELA_MISSILE_F
            {
                magazine = "CUP_Igla_M";
                count = 2;
            };
            class _xx_Laserbatteries
            {
                magazine = "Laserbatteries";
                count = 2;
            };
            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 24;
            };
        };
        class TransportWeapons
        {
            class _xx_launch_ibr_rpg7v_F
            {
                weapon = "CUP_launch_RPG7V";
                count = 2;
            };
            class _xx_launch_igla_F
            {
                weapon = "CUP_launch_Igla";
                count = 2;
            };
            class _xx_ibr_steyr_a1_F
            {
                weapon = "ibr_steyr_a1";
                count = 10;
            };
            class _xx_ibr_m16a2_F
            {
                weapon = "CUP_arifle_M16A2";
                count = 10;
            };
            class _xx_ibr_pkm_F
            {
                weapon = "CUP_lmg_PKM";
                count = 2;
            };
            class _xx_ibr_rpk_F
            {
                weapon = "CUP_arifle_RPK74";
                count = 2;
            };
            class _xx_ibr_ibr_m1911_F
            {
                weapon = "CUP_hgun_Colt1911";
                count = 5;
            };
        };
        class TransportItems
        {
            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_Laserdesignator
            {
                name = "Laserdesignator";
                count = 1;
            };
            class _xx_acc_flashlight
            {
                name = "acc_flashlight";
                count = 10;
            };
            class _xx_ibr_afr_army_uniform
            {
                name = "ibr_afr_army_uniform";
                count = 5;
            };
            class _xx_ibr_afr_army_uniform_90s
            {
                name = "ibr_afr_army_uniform_90s";
                count = 5;
            };
            class _xx_ibr_afr_helmet_90s
            {
                name = "ibr_afr_helmet_90s";
                count = 5;
            };
            class _xx_ibr_afr_helmet
            {
                name = "ibr_afr_helmet";
                count = 5;
            };
        };
        class TransportBackpacks
        {
            class _xx_B_Fieldpack_oli
            {
                backpack = "B_AssaultPack_blk";
                count = 8;
            };
        };
    };
    class mol_ammo_box: I_supplyCrate_F
    {
        scope = 2;
        scopeCurator = 2;
        class TransportMagazines
        {
            class _xx_ibr_7Rnd_45acp_1911
            {
                magazine = "CUP_7Rnd_45ACP_1911";
                count = 15;
            };
            class _xx_30Rnd_762x39_ibr
            {
                magazine = "CUP_30Rnd_762x39_AK47_M";
                count = 40;
            };
            class _xx_40Rnd_762x39_ibr
            {
                magazine = "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
                count = 8;
            };
            class _xx_ibr_100Rnd_762x54
            {
                magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                count = 8;
            };
            class _xx_chemlight_green
            {
                magazine = "chemlight_green";
                count = 10;
            };
            class _xx_chemlight_red
            {
                magazine = "chemlight_red";
                count = 10;
            };
            class _xx_RPG7_V_F
            {
                magazine = "CUP_PG7V_M";
                count = 4;
            };
            class _xx_RPG7_VL_F
            {
                magazine = "CUP_PG7VL_M";
                count = 2;
            };
            class _xx_RPG7_VR_F
            {
                magazine = "CUP_PG7VR_M";
                count = 2;
            };
            class _xx_RPG7_OG7_F
            {
                magazine = "CUP_OG7_M";
                count = 2;
            };
            class _xx_STRELA_MISSILE_F
            {
                magazine = "CUP_Igla_M";
                count = 2;
            };
            class _xx_Laserbatteries
            {
                magazine = "Laserbatteries";
                count = 2;
            };
            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 24;
            };
        };
        class TransportWeapons
        {
            class _xx_launch_ibr_rpg7v_F
            {
                weapon = "CUP_launch_RPG7V";
                count = 2;
            };
            class _xx_launch_igla_F
            {
                weapon = "CUP_launch_Igla";
                count = 2;
            };
            class _xx_ibr_steyr_a1_F
            {
                weapon = "CUP_arifle_AKM";
                count = 10;
            };
            class _xx_ibr_akm_carbine
            {
                weapon = "CUP_arifle_AKS";
                count = 10;
            };
            class _xx_ibr_pkm_F
            {
                weapon = "CUP_lmg_PKM";
                count = 2;
            };
            class _xx_ibr_rpk_F
            {
                weapon = "CUP_arifle_RPK74";
                count = 2;
            };
            class _xx_ibr_ibr_m1911_F
            {
                weapon = "CUP_hgun_Colt1911";
                count = 5;
            };
        };
        class TransportItems
        {
            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_Laserdesignator
            {
                name = "Laserdesignator";
                count = 1;
            };
            class _xx_acc_flashlight
            {
                name = "acc_flashlight";
                count = 10;
            };
            class _xx_ibr_mol_army_uniform
            {
                name = "ibr_mol_army_uniform";
                count = 10;
            };
            class _xx_ibr_mol_helmet
            {
                name = "ibr_mol_helmet";
                count = 10;
            };
        };
        class TransportBackpacks
        {
            class _xx_B_Fieldpack_oli
            {
                backpack = "B_AssaultPack_blk";
                count = 8;
            };
        };
    };

    class B_RangeMaster_F;
    class ibr_afr_cop: B_RangeMaster_F
    {
        modelSides[] = {6};
        weapons[] = {"CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
    };
    class ibr_afr_cop2: ibr_afr_cop
    {
        weapons[] = {"CUP_hgun_Colt1911","CUP_arifle_M16A2","Throw","Put","Binocular"};
        respawnWeapons[] = {"CUP_hgun_Colt1911","CUP_arifle_M16A2","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
    };
    class I_Soldier_TL_F;
    class ibr_soldier: I_Soldier_TL_F {};
    class ibr_soldier2: I_Soldier_TL_F {};
    class ibr_afr_soldier: ibr_soldier {};
    class ibr_afr_general: ibr_afr_soldier {};
    class ibr_afr_soldier_rifleman: ibr_afr_soldier
    {
        weapons[] = {"ibr_steyr_a1","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_ee: ibr_afr_soldier
    {
        weapons[] = {"ibr_steyr_a1","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_gl: ibr_afr_soldier
    {
        weapons[] = {"ibr_steyr_a1_gl","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
    };
    class ibr_afr_soldier_ar: ibr_afr_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        respawnmagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_mg: ibr_afr_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_medic: ibr_afr_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"ibr_steyr_a1","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_officer: ibr_afr_soldier
    {
        weapons[] = {"ibr_steyr_a1_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","Chemlight_green","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","Chemlight_green","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
    };
    class ibr_afr_soldier_sl: ibr_afr_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"ibr_steyr_a1","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green","SmokeShell","SmokeShell"};
        respawnweapons[] = {"ibr_steyr_a1","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green","SmokeShell","SmokeShell"};
    };
    class ibr_afr_soldier_at: ibr_afr_soldier
    {
        backpack = "ibr_backpack_rpg";
        weapons[] = {"ibr_steyr_a1","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_PG7V_M","CUP_PG7V_M","CUP_PG7VR_M","CUP_OG7_M","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","CUP_launch_RPG7V","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_PG7V_M","CUP_PG7V_M","CUP_PG7VR_M","CUP_OG7_M","Chemlight_green"};
    };
    class ibr_afr_soldier_aa: ibr_afr_soldier
    {
        backpack = "ibr_backpack_rpg";
        weapons[] = {"ibr_steyr_a1","CUP_launch_Igla","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_Igla_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","CUP_launch_Igla","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_Igla_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_crew: ibr_afr_soldier
    {
        weapons[] = {"ibr_steyr_a1_car","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1_car","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_sniper: ibr_afr_soldier
    {
        weapons[] = {"CUP_srifle_SVD_pso","Throw","Put"};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_srifle_SVD_pso","Throw","Put"};
        respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_recon: ibr_afr_soldier
    {
        weapons[] = {"ibr_steyr_a1_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
    };
    class ibr_afr_soldier_pilot: ibr_afr_soldier
    {
        weapons[] = {"CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnweapons[] = {"CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    };

    class ibr_afr_90s_soldier: ibr_soldier2 {};
    class ibr_afr_90s_soldier_rifleman: ibr_afr_90s_soldier
    {
        weapons[] = {"ibr_steyr_a1","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_ee: ibr_afr_90s_soldier
    {
        weapons[] = {"ibr_steyr_a1","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_gl: ibr_afr_90s_soldier
    {
        weapons[] = {"ibr_steyr_a1_gl","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
    };
    class ibr_afr_90s_soldier_ar: ibr_afr_90s_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        respawnmagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_mg: ibr_afr_90s_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_medic: ibr_afr_90s_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"ibr_steyr_a1","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_officer: ibr_afr_90s_soldier
    {
        weapons[] = {"ibr_steyr_a1_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","Chemlight_green","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","Chemlight_green","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
    };
    class ibr_afr_90s_soldier_sl: ibr_afr_90s_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"ibr_steyr_a1","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green","SmokeShell","SmokeShell"};
        respawnweapons[] = {"ibr_steyr_a1","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green","SmokeShell","SmokeShell"};
    };
    class ibr_afr_90s_soldier_at: ibr_afr_90s_soldier
    {
        backpack = "ibr_backpack_rpg";
        weapons[] = {"ibr_steyr_a1","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_PG7V_M","CUP_PG7V_M","CUP_PG7VR_M","CUP_OG7_M","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","CUP_launch_RPG7V","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_PG7V_M","CUP_PG7V_M","CUP_PG7VR_M","CUP_OG7_M","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_aa: ibr_afr_90s_soldier
    {
        backpack = "ibr_backpack_aa";
        weapons[] = {"ibr_steyr_a1","CUP_launch_Igla","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_Igla_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","CUP_launch_Igla","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_Igla_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_crew: ibr_afr_90s_soldier
    {
        weapons[] = {"ibr_steyr_a1_car","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1_car","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_sniper: ibr_afr_90s_soldier
    {
        weapons[] = {"CUP_srifle_SVD_pso","Throw","Put"};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_srifle_SVD_pso","Throw","Put"};
        respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_recon: ibr_afr_90s_soldier
    {
        weapons[] = {"ibr_steyr_a1_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
    };
    class ibr_afr_90s_soldier_pilot: ibr_afr_90s_soldier
    {
        weapons[] = {"CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnweapons[] = {"CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    };
    class ibr_mol_soldier: ibr_soldier {};
    class ibr_mol_soldier_rifleman: ibr_mol_soldier
    {
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_ee: ibr_mol_soldier
    {
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_gl: ibr_mol_soldier
    {
        weapons[] = {"ibr_akm_gl","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade","Chemlight_green","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
        respawnweapons[] = {"ibr_akm_gl","Throw","Put"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade","Chemlight_green","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
    };
    class ibr_mol_soldier_ar: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        respawnmagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_mg: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_medic: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_officer: ibr_mol_soldier
    {
        weapons[] = {"ibr_akm_carbine_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","SmokeShell","Chemlight_green","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
        respawnweapons[] = {"ibr_akm_carbine_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","SmokeShell","Chemlight_green","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
    };
    class ibr_mol_soldier_sl: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"ibr_akm_carbine_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","SmokeShell","Chemlight_green","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
        respawnweapons[] = {"ibr_akm_carbine_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","SmokeShell","Chemlight_green","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
    };
    class ibr_mol_soldier_crew: ibr_mol_soldier
    {
        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_sniper: ibr_mol_soldier
    {
        weapons[] = {"CUP_srifle_SVD_pso","Throw","Put","Binocular"};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_srifle_SVD_pso","Throw","Put","Binocular"};
        respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_at: ibr_mol_soldier
    {
        backpack = "ibr_backpack_rpg";
        weapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_PG7V_M","CUP_PG7VR_M","CUP_OG7_M","CUP_PG7V_M","CUP_PG7V_M","CUP_PG7VR_M","CUP_OG7_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V","Throw","Put"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_PG7V_M","CUP_PG7VR_M","CUP_OG7_M","CUP_PG7V_M","CUP_PG7V_M","CUP_PG7VR_M","CUP_OG7_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_aa: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"CUP_arifle_AKM","CUP_launch_Igla","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_Igla_M","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"CUP_arifle_AKM","CUP_launch_Igla","Throw","Put"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_Igla_M","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_egc: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"ibr_akm_carbine_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","Chemlight_green","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
        respawnweapons[] = {"ibr_akm_carbine_gl","CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","Chemlight_green","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
    };
    class ibr_mol_soldier_pilot: ibr_mol_soldier
    {
        weapons[] = {"CUP_hgun_Colt1911","Throw","Put","Binocular"};
        magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};
        respawnweapons[] = {"CUP_hgun_Colt1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};
    };
};