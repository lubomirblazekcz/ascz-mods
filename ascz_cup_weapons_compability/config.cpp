class CfgPatches
{
	class ascz_cup_weapons_compability
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_West_Attachments", "CUP_Weapons_Ammunition"};
	};
};
class CfgWeapons
{
    class Rifle_Base_F;
    class Rifle_Long_Base_F;
	class ItemCore;
    class hlc_lmg_M60E4;
    class CUP_lmg_M60A4: hlc_lmg_M60E4 {
        scope = 1;
    };
    class RH_vz61;
    class CUP_hgun_SA61: RH_vz61 {
        scope = 1;
        magazines[] += {"CUP_20Rnd_B_765x17_Ball_M"};
    };
    class Pistol;
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo;
    };
    class CUP_hgun_M9: Pistol_Base_F
    {
        scope = 1;
    };

    // Opticts
	class CUP_optic_LeupoldMk4: ItemCore
	{
		scope = 1;
	};
	class CUP_optic_HoloBlack: ItemCore
	{
		scope = 1;
	};
	class CUP_optic_HoloWdl: CUP_optic_HoloBlack
	{
		scope = 1;
	};
	class CUP_optic_HoloDesert: CUP_optic_HoloBlack
	{
        scope = 1;
	};
	class CUP_optic_Eotech533: CUP_optic_HoloBlack
	{
        scope = 1;
	};
	class CUP_optic_Eotech533Grey: CUP_optic_Eotech533
	{
        scope = 1;
	};
	class CUP_optic_CompM4: ItemCore
	{
		scope = 1;
	};
	class CUP_acc_ANPEQ_15: ItemCore
	{
		scope = 1;
	};
	class CUP_acc_ANPEQ_2: CUP_acc_ANPEQ_15
	{
		scope = 1;
	};
	class CUP_optic_CWS: ItemCore
	{
		scope = 1;
	};
	class CUP_optic_CompM2_Black: ItemCore
	{
		scope = 1;
	};
	class CUP_optic_CompM2_Woodland: CUP_optic_CompM2_Black
	{
		scope = 1;
	};
	class CUP_optic_CompM2_Woodland2: CUP_optic_CompM2_Black
	{
		scope = 1;
	};
	class CUP_optic_CompM2_Desert: CUP_optic_CompM2_Black
	{
		scope = 1;
	};
	class CUP_acc_ANPEQ_2_camo: CUP_acc_ANPEQ_2
	{
		scope = 1;
	};
	class CUP_acc_ANPEQ_2_desert: CUP_acc_ANPEQ_2
	{
		scope = 1;
	};
	class CUP_acc_ANPEQ_2_grey: CUP_acc_ANPEQ_2
	{
		scope = 1;
	};
	class CUP_optic_LeupoldM3LR: ItemCore
	{
		scope = 1;
	};
	class CUP_optic_ElcanM145: ItemCore
	{
		scope = 1;
	};
	class CUP_optic_Leupold_VX3: ItemCore
	{
		scope = 1;
	};
	class CUP_acc_Flashlight: ItemCore
	{
		scope = 1;
	};
	class CUP_acc_Flashlight_wdl: CUP_acc_Flashlight
	{
		scope = 1;
	};
	class CUP_acc_Flashlight_desert: CUP_acc_Flashlight
	{
		scope = 1;
	};

	// Scooe 2
	class CUP_optic_SUSAT: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_SB_3_12x50_PMII: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_AN_PAS_13c2: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_AN_PAS_13c1: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_LeupoldMk4_CQ_T: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_ELCAN_SpecterDR: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_SB_11_4x20_PM: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_AN_PVS_4: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_AN_PVS_10: ItemCore
	{
		scope = 2;
	};
	class CUP_acc_XM8_light_module: CUP_acc_Flashlight
	{
		scope = 2;
	};
	class CUP_optic_RCO: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_RCO_desert: CUP_optic_RCO
	{
		scope = 2;
	};
	class CUP_optic_ZDDot: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_MRad: ItemCore
	{
		scope = 2;
	};
	class CUP_acc_CZ_M3X: CUP_acc_Flashlight
	{
		scope = 2;
	};
	class CUP_optic_TrijiconRx01_desert: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_TrijiconRx01_black: CUP_optic_TrijiconRx01_desert
	{
		scope = 2;
	};
	class CUP_optic_ACOG: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_LeupoldMk4_10x40_LRT_Desert: ItemCore
	{
		scope = 2;
	};
	class CUP_optic_LeupoldMk4_10x40_LRT_Woodland: CUP_optic_LeupoldMk4_10x40_LRT_Desert
	{
		scope = 2;
	};
	class CUP_optic_LeupoldMk4_MRT_tan: ItemCore
	{
		scope = 2;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class HandGrenade;
	class 30Rnd_556x45_Stanag;
	class CUP_30Rnd_545x39_AK_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_30Rnd_762x39_AK47_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_1Rnd_HE_GP25_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_FlareWhite_GP25_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_FlareGreen_GP25_M: CUP_FlareWhite_GP25_M
	{
        scope = 0;
	};
	class CUP_FlareRed_GP25_M: CUP_FlareWhite_GP25_M
	{
        scope = 0;
	};
	class CUP_FlareYellow_GP25_M: CUP_FlareWhite_GP25_M
	{
        scope = 0;
	};
	class CUP_1Rnd_SMOKE_GP25_M: CUP_1Rnd_HE_GP25_M
	{
        scope = 0;
	};
	class CUP_1Rnd_SmokeRed_GP25_M: CUP_1Rnd_SMOKE_GP25_M
	{
        scope = 0;
	};
	class CUP_1Rnd_SmokeGreen_GP25_M: CUP_1Rnd_SMOKE_GP25_M
	{
        scope = 0;
	};
	class CUP_1Rnd_SmokeYellow_GP25_M: CUP_1Rnd_SMOKE_GP25_M
	{
        scope = 0;
	};
	class CUP_10x_303_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_20Rnd_762x51_FNFAL_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_8Rnd_B_Saiga12_74Slug_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_20Rnd_762x51_DMR: CA_Magazine
	{
        scope = 0;
	};
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR: CUP_20Rnd_762x51_DMR
	{
        scope = 0;
	};
	class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR: CUP_20Rnd_762x51_DMR
	{
        scope = 0;
	};
	class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR: CUP_20Rnd_762x51_DMR
	{
        scope = 0;
	};
	class CUP_20Rnd_TE1_White_Tracer_762x51_DMR: CUP_20Rnd_762x51_DMR
	{
        scope = 0;
	};
	class Titan_AA;
	class RPG32_F;
	class CUP_Stinger_M: CA_LauncherMagazine
	{
        scope = 0;
	};
	class CUP_8Rnd_9x18_Makarov_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_8Rnd_9x18_MakarovSD_M: CUP_8Rnd_9x18_Makarov_M
	{
        scope = 0;
	};
	class CUP_6Rnd_45ACP_M: CA_Magazine
	{
        scope = 0;
	};
	class CUP_17Rnd_9x19_glock17: CA_Magazine
	{
        scope = 0;
	};

	// Scope 2
	class CUP_200Rnd_TE4_Green_Tracer_556x45_M249: CA_Magazine
	{
        scope = 2;
	};
	class CUP_200Rnd_TE4_Red_Tracer_556x45_M249: CUP_200Rnd_TE4_Green_Tracer_556x45_M249
	{
        scope = 2;
	};
	class CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249: CUP_200Rnd_TE4_Green_Tracer_556x45_M249
	{
        scope = 2;
	};
	class CUP_200Rnd_TE1_Red_Tracer_556x45_M249: CUP_200Rnd_TE4_Red_Tracer_556x45_M249
	{
        scope = 2;
	};
	class CUP_100Rnd_TE4_Green_Tracer_556x45_M249: CA_Magazine
	{
        scope = 2;
	};
	class CUP_100Rnd_TE4_Red_Tracer_556x45_M249: CUP_100Rnd_TE4_Green_Tracer_556x45_M249
	{
        scope = 2;
	};
	class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249: CUP_100Rnd_TE4_Green_Tracer_556x45_M249
	{
        scope = 2;
	};
	class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1: CUP_200Rnd_TE4_Green_Tracer_556x45_M249
	{
        scope = 2;
	};
	class CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1: CUP_200Rnd_TE4_Red_Tracer_556x45_M249
	{
        scope = 2;
	};
	class CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1: CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
	{
        scope = 2;
	};
	class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M: CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
	{
        scope = 2;
	};
	class CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_5Rnd_127x108_KSVK_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_10Rnd_762x54_SVD_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_10Rnd_9x39_SP5_VSS_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_20Rnd_9x39_SP5_VSS_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_20Rnd_B_AA12_Pellets: CA_Magazine
	{
        scope = 2;
	};
	class CUP_20Rnd_B_AA12_74Slug: CA_Magazine
	{
        scope = 2;
	};
	class CUP_20Rnd_B_AA12_HE: CA_Magazine
	{
        scope = 2;
	};
	class CUP_8Rnd_B_Beneli_74Slug: CA_Magazine
	{
        scope = 2;
	};
	class CUP_5Rnd_127x99_as50_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_Strela_2_M: Titan_AA
	{
        scope = 2;
	};
	class CUP_20Rnd_762x51_B_SCAR: CA_Magazine
	{
        scope = 2;
	};
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR: CUP_20Rnd_762x51_B_SCAR
	{
        scope = 2;
	};
	class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR: CUP_20Rnd_762x51_B_SCAR
	{
        scope = 2;
	};
	class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR: CUP_20Rnd_762x51_B_SCAR
	{
        scope = 2;
	};
	class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR: CUP_20Rnd_762x51_B_SCAR
	{
        scope = 2;
	};
	class CUP_20Rnd_762x51_B_M110: CA_Magazine
	{
        scope = 2;
	};
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110: CUP_20Rnd_762x51_B_M110
	{
        scope = 2;
	};
	class CUP_20Rnd_TE1_Red_Tracer_762x51_M110: CUP_20Rnd_762x51_B_M110
	{
        scope = 2;
	};
	class CUP_20Rnd_TE1_Green_Tracer_762x51_M110: CUP_20Rnd_762x51_B_M110
	{
        scope = 2;
	};
	class CUP_20Rnd_TE1_White_Tracer_762x51_M110: CUP_20Rnd_762x51_B_M110
	{
        scope = 2;
	};
	class CUP_30Rnd_556x45_G36: 30Rnd_556x45_Stanag
	{
        scope = 2;
	};
	class CUP_30Rnd_TE1_Red_Tracer_556x45_G36: CUP_30Rnd_556x45_G36
	{
        scope = 2;
	};
	class CUP_30Rnd_TE1_Green_Tracer_556x45_G36: CUP_30Rnd_556x45_G36
	{
        scope = 2;
	};
	class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36: CUP_30Rnd_556x45_G36
	{
        scope = 2;
	};
	class CUP_100Rnd_556x45_BetaCMag: 30Rnd_556x45_Stanag
	{
        scope = 2;
	};
	class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag: CUP_100Rnd_556x45_BetaCMag
	{
        scope = 2;
	};
	class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag: CUP_100Rnd_556x45_BetaCMag
	{
        scope = 2;
	};
	class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag: CUP_100Rnd_556x45_BetaCMag
	{
        scope = 2;
	};
	class CUP_10Rnd_127x99_M107: CA_Magazine
	{
        scope = 2;
		count = 10;
	};
	class 1Rnd_HE_Grenade_shell;
	class CUP_1Rnd_HE_M203: 1Rnd_HE_Grenade_shell
	{
        scope = 2;
	};
	class CUP_1Rnd_HEDP_M203: 1Rnd_HE_Grenade_shell
	{
        scope = 2;
	};
	class UGL_FlareWhite_F;
	class UGL_FlareGreen_F;
	class UGL_FlareRed_F;
	class UGL_FlareYellow_F;
	class CUP_FlareWhite_M203: UGL_FlareWhite_F
	{
        scope = 2;
	};
	class CUP_FlareGreen_M203: UGL_FlareGreen_F
	{
        scope = 2;
	};
	class CUP_FlareRed_M203: UGL_FlareRed_f
	{
        scope = 2;
	};
	class CUP_FlareYellow_M203: UGL_FlareYellow_F
	{
        scope = 2;
	};
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class 1Rnd_SmokeGreen_Grenade_shell;
	class 1Rnd_SmokeYellow_Grenade_shell;
	class CUP_1Rnd_Smoke_M203: 1Rnd_Smoke_Grenade_shell
	{
        scope = 2;
	};
	class CUP_1Rnd_SmokeRed_M203: 1Rnd_SmokeRed_Grenade_shell
	{
        scope = 2;
	};
	class CUP_1Rnd_SmokeGreen_M203: 1Rnd_SmokeGreen_Grenade_shell
	{
        scope = 2;
	};
	class CUP_1Rnd_SmokeYellow_M203: 1Rnd_SmokeYellow_Grenade_shell
	{
        scope = 2;
	};
	class CUP_5Rnd_86x70_L115A1: CA_Magazine
	{
        scope = 2;
	};
	class CUP_10Rnd_762x51_CZ750: CA_Magazine
	{
        scope = 2;
	};
	class CUP_10Rnd_762x51_CZ750_Tracer: CUP_10Rnd_762x51_CZ750
	{
        scope = 2;
	};
	class CUP_30Rnd_556x45_Stanag: CA_Magazine
	{
        scope = 2;
	};
	class CUP_20Rnd_556x45_Stanag: CUP_30Rnd_556x45_Stanag
	{
        scope = 2;
	};
	class CUP_5x_22_LR_17_HMR_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_50Rnd_UK59_762x54R_Tracer: CA_Magazine
	{
        scope = 2;
	};
	class CUP_64Rnd_9x19_Bizon_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_64Rnd_Green_Tracer_9x19_Bizon_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_64Rnd_Red_Tracer_9x19_Bizon_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_64Rnd_White_Tracer_9x19_Bizon_M: CA_Magazine
	{
        scope = 2;
	};
	class CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M: CA_Magazine
	{
        scope = 2;
	};
	class RH_20Rnd_32cal_vz61;
	class CUP_20Rnd_B_765x17_Ball_M: RH_20Rnd_32cal_vz61 {
	    scope = 1;
	};
};

