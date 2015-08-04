class CfgPatches
{
	class ascz_ibr_id_units
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
        scope = 0;
    };
    class ibr_akm_carbine_gl: ibr_akm_gl
    {
        scope = 0;
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
        scope = 1;
    };
    class ibr_steyr_a1_gl: ibr_steyr_base
    {
        scope = 1;
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
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 0;
            };
            class _xx_RPG7_VL_F
            {
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 0;
            };
            class _xx_RPG7_VR_F
            {
                magazine = "rhs_rpg7_PG7VR_mag";
                count = 2;
            };
            class _xx_RPG7_OG7_F
            {
                magazine = "rhs_rpg7_OG7V_mag";
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
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 0;
            };
            class _xx_RPG7_VL_F
            {
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 0;
            };
            class _xx_RPG7_VR_F
            {
                magazine = "rhs_rpg7_PG7VR_mag";
                count = 0;
            };
            class _xx_RPG7_OG7_F
            {
                magazine = "rhs_rpg7_OG7V_mag";
                count = 0;
            };
            class _xx_STRELA_MISSILE_F
            {
                magazine = "rhs_mag_9k38_rocket";
                count = 2;
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
                magazine = "RH_7Rnd_45cal_m1911";
                count = 15;
            };
            class _xx_30Rnd_556x45_Stanag
            {
                magazine = "30Rnd_556x45_Stanag";
                count = 40;
            };
            class _xx_40Rnd_762x39_ibr
            {
                magazine = "hlc_45Rnd_762x39_m_rpk";
                count = 8;
            };
            class _xx_ibr_100Rnd_762x54
            {
                magazine = "rhs_100Rnd_762x54mmR";
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
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 4;
            };
            class _xx_RPG7_VL_F
            {
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 2;
            };
            class _xx_RPG7_VR_F
            {
                magazine = "rhs_rpg7_PG7VR_mag";
                count = 2;
            };
            class _xx_RPG7_OG7_F
            {
                magazine = "rhs_rpg7_OG7V_mag";
                count = 2;
            };
            class _xx_STRELA_MISSILE_F
            {
                magazine = "rhs_mag_9k38_rocket";
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
                weapon = "rhs_weap_rpg7";
                count = 2;
            };
            class _xx_launch_igla_F
            {
                weapon = "rhs_weap_igla";
                count = 2;
            };
            class _xx_ibr_steyr_a1_F
            {
                weapon = "ibr_steyr_a1";
                count = 10;
            };
            class _xx_ibr_m16a2_F
            {
                weapon = "RH_m16a2";
                count = 10;
            };
            class _xx_ibr_pkm_F
            {
                weapon = "rhs_weap_pkm";
                count = 2;
            };
            class _xx_ibr_rpk_F
            {
                weapon = "hlc_rifle_rpk";
                count = 2;
            };
            class _xx_ibr_ibr_m1911_F
            {
                weapon = "RH_m1911";
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
                magazine = "RH_7Rnd_45cal_m1911";
                count = 15;
            };
            class _xx_30Rnd_762x39_ibr
            {
                magazine = "hlc_30Rnd_762x39_t_ak";
                count = 40;
            };
            class _xx_30Rnd_556x39_aks_hlc
            {
                magazine = "hlc_30Rnd_545x39_T_AK";
                count = 40;
            };
            class _xx_40Rnd_762x39_ibr
            {
                magazine = "hlc_45Rnd_762x39_m_rpk";
                count = 8;
            };
            class _xx_ibr_100Rnd_762x54
            {
                magazine = "rhs_100Rnd_762x54mmR";
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
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 4;
            };
            class _xx_RPG7_VL_F
            {
                magazine = "rhs_rpg7_PG7VL_mag";
                count = 2;
            };
            class _xx_RPG7_VR_F
            {
                magazine = "rhs_rpg7_PG7VR_mag";
                count = 2;
            };
            class _xx_RPG7_OG7_F
            {
                magazine = "rhs_rpg7_OG7V_mag";
                count = 2;
            };
            class _xx_STRELA_MISSILE_F
            {
                magazine = "rhs_mag_9k38_rocket";
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
                weapon = "rhs_weap_rpg7";
                count = 2;
            };
            class _xx_launch_igla_F
            {
                weapon = "rhs_weap_igla";
                count = 2;
            };
            class _xx_ibr_steyr_a1_F
            {
                weapon = "hlc_rifle_akm";
                count = 10;
            };
            class _xx_ibr_akm_carbine
            {
                weapon = "hlc_rifle_aks74";
                count = 10;
            };
            class _xx_ibr_pkm_F
            {
                weapon = "rhs_weap_pkm";
                count = 2;
            };
            class _xx_ibr_rpk_F
            {
                weapon = "hlc_rifle_rpk";
                count = 2;
            };
            class _xx_ibr_ibr_m1911_F
            {
                weapon = "RH_m1911";
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

    class ibr_afr_soldier: B_Soldier_base_F {};
    class ibr_afr_soldier2: B_Soldier_base_F {};
    class ibr_afr_soldier_lite: ibr_afr_soldier {};
    class ibr_afr_general: ibr_afr_soldier {};
    class B_RangeMaster_F;
    class ibr_afr_cop: B_RangeMaster_F
    {
        modelSides[] = {6};
        weapons[] = {"RH_m1911","Throw","Put","Binocular"};
        respawnWeapons[] = {"RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911"};
        respawnMagazines[] = {"RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911"};
    };
    class ibr_afr_cop2: ibr_afr_cop
    {
        weapons[] = {"RH_m1911","RH_m16a2","Throw","Put","Binocular"};
        respawnWeapons[] = {"RH_m1911","RH_m16a2","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911"};
    };
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
        weapons[] = {"hlc_rifle_rpk","Throw","Put"};
        magazines[] = {"hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_rpk","Throw","Put"};
        respawnmagazines[] = {"hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_soldier_mg: ibr_afr_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"rhs_weap_pkm","Throw","Put"};
        magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"rhs_weap_pkm","Throw","Put"};
        respawnmagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","HandGrenade","HandGrenade","Chemlight_green"};
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
        weapons[] = {"ibr_steyr_a1_gl","RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","Chemlight_green","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","Chemlight_green","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
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
        weapons[] = {"ibr_steyr_a1","rhs_weap_rpg7","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_OG7V_mag","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","rhs_weap_rpg7","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_OG7V_mag","Chemlight_green"};
    };
    class ibr_afr_soldier_aa: ibr_afr_soldier
    {
        backpack = "ibr_backpack_rpg";
        weapons[] = {"ibr_steyr_a1","rhs_weap_igla","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","rhs_mag_9k38_rocket","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","rhs_weap_igla","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","rhs_mag_9k38_rocket","HandGrenade","HandGrenade","Chemlight_green"};
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
        weapons[] = {"ibr_steyr_a1_gl","RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
    };
    class ibr_afr_soldier_pilot: ibr_afr_soldier
    {
        weapons[] = {"RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnweapons[] = {"RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    };

    class ibr_afr_90s_soldier: ibr_afr_soldier2 {};
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
        weapons[] = {"hlc_rifle_rpk","Throw","Put"};
        magazines[] = {"hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_rpk","Throw","Put"};
        respawnmagazines[] = {"hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_mg: ibr_afr_90s_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"rhs_weap_pkm","Throw","Put"};
        magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"rhs_weap_pkm","Throw","Put"};
        respawnmagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","HandGrenade","HandGrenade","Chemlight_green"};
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
        weapons[] = {"ibr_steyr_a1_gl","RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","Chemlight_green","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","Chemlight_green","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
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
        weapons[] = {"ibr_steyr_a1","rhs_weap_rpg7","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_OG7V_mag","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","rhs_weap_rpg7","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_OG7V_mag","Chemlight_green"};
    };
    class ibr_afr_90s_soldier_aa: ibr_afr_90s_soldier
    {
        backpack = "ibr_backpack_aa";
        weapons[] = {"ibr_steyr_a1","rhs_weap_igla","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","rhs_mag_9k38_rocket","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"ibr_steyr_a1","rhs_weap_igla","Throw","Put"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","rhs_mag_9k38_rocket","HandGrenade","HandGrenade","Chemlight_green"};
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
        weapons[] = {"ibr_steyr_a1_gl","RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnweapons[] = {"ibr_steyr_a1_gl","RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
    };
    class ibr_afr_90s_soldier_pilot: ibr_afr_90s_soldier
    {
        weapons[] = {"RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnweapons[] = {"RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
    };

    class O_Soldier_base_F;
    class ibr_mol_soldier: O_Soldier_base_F {
        weapons[] = {"hlc_rifle_akm","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_akm","Throw","Put"};
        respawnmagazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_lite: ibr_mol_soldier {};
    class ibr_mol_general: ibr_mol_soldier {};
    class ibr_mol_soldier_rifleman: ibr_mol_soldier
    {
        weapons[] = {"hlc_rifle_akm","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_akm","Throw","Put"};
        respawnmagazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_ee: ibr_mol_soldier
    {
        weapons[] = {"hlc_rifle_akm","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_akm","Throw","Put"};
        respawnmagazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_gl: ibr_mol_soldier
    {
        weapons[] = {"hlc_rifle_akmgl","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","HandGrenade","HandGrenade","Chemlight_green","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
        respawnweapons[] = {"hlc_rifle_akmgl","Throw","Put"};
        respawnmagazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","HandGrenade","HandGrenade","Chemlight_green","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
    };
    class ibr_mol_soldier_ar: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"hlc_rifle_rpk","Throw","Put"};
        magazines[] = {"hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_rpk","Throw","Put"};
        respawnmagazines[] = {"hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_mg: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"rhs_weap_pkm","Throw","Put"};
        magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"rhs_weap_pkm","Throw","Put"};
        respawnmagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_medic: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"hlc_rifle_akm","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_akm","Throw","Put"};
        respawnmagazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_officer: ibr_mol_soldier
    {
        weapons[] = {"hlc_rifle_aks74_GL","RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","SmokeShell","Chemlight_green","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
        respawnweapons[] = {"hlc_rifle_aks74_GL","RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","SmokeShell","Chemlight_green","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
    };
    class ibr_mol_soldier_sl: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"hlc_rifle_aks74_GL","RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","SmokeShell","Chemlight_green","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
        respawnweapons[] = {"hlc_rifle_aks74_GL","RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","SmokeShell","Chemlight_green","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
    };
    class ibr_mol_soldier_crew: ibr_mol_soldier
    {
        weapons[] = {"hlc_rifle_aks74","Throw","Put"};
        magazines[] = {"hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_aks74","Throw","Put"};
        respawnmagazines[] = {"hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","HandGrenade","HandGrenade","Chemlight_green"};
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
        weapons[] = {"hlc_rifle_akm","rhs_weap_rpg7","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_OG7V_mag","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_akm","rhs_weap_rpg7","Throw","Put"};
        respawnmagazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VR_mag","rhs_rpg7_OG7V_mag","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_aa: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"hlc_rifle_akm","rhs_weap_igla","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","rhs_mag_9k38_rocket","HandGrenade","HandGrenade","Chemlight_green"};
        respawnweapons[] = {"hlc_rifle_akm","rhs_weap_igla","Throw","Put"};
        respawnmagazines[] = {"hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","hlc_30Rnd_762x39_t_ak","rhs_mag_9k38_rocket","HandGrenade","HandGrenade","Chemlight_green"};
    };
    class ibr_mol_soldier_egc: ibr_mol_soldier
    {
        backpack = "ibr_backpack";
        weapons[] = {"hlc_rifle_aks74_GL","RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","Chemlight_green","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
        respawnweapons[] = {"hlc_rifle_aks74_GL","RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_T_AK","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","Chemlight_green","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK"};
    };
    class ibr_mol_soldier_pilot: ibr_mol_soldier
    {
        weapons[] = {"RH_m1911","Throw","Put","Binocular"};
        magazines[] = {"RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};
        respawnweapons[] = {"RH_m1911","Throw","Put","Binocular"};
        respawnmagazines[] = {"RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};
    };
};