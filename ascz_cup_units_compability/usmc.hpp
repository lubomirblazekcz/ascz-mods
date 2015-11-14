
	class CUP_Creatures_Military_USMC_Soldier_Base: SoldierWB
    {
    	faction = "CUP_B_USMC";
    	modelSides[] 	= {6};
    	scope = 1;
    	scopeCurator = 0;
    };
	class CUP_Creatures_Military_FR_Soldier_Base: SoldierWB
    {
    	faction = "CUP_B_USMC";
    	modelSides[] 	= {6};
    	scope = 1;
    	scopeCurator = 0;
    };

    // Uniform Models
    class CUP_B_USMC_Soldier_01: CUP_Creatures_Military_USMC_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };
    class CUP_B_USMC_Soldier_02: CUP_Creatures_Military_USMC_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };
    class CUP_B_USMC_Soldier_03 : CUP_Creatures_Military_USMC_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };
    class CUP_B_USMC_Soldier_04: CUP_Creatures_Military_USMC_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };
    class CUP_B_USMC_Soldier_05: CUP_Creatures_Military_USMC_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };
    class CUP_B_USMC_Soldier_06: CUP_Creatures_Military_USMC_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };
    class CUP_B_USMC_Soldier_07 : CUP_Creatures_Military_USMC_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };
    class CUP_B_USMC_Soldier_08 : CUP_Creatures_Military_USMC_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier : CUP_B_USMC_Soldier_03
    {
        weapons[]={"rhs_weap_m16a4", "Throw", "Put"};
        magazines[] = {
            "rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"rhs_weap_m16a4", "Throw", "Put"};
        respawnMagazines[] = {
            "rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","HandGrenade","HandGrenade"
        };
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_Light: CUP_B_USMC_Soldier_02 {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_SpecOps_SD : CUP_B_USMC_Soldier_03
    {
    	weapons[]={"CUP_sgun_M1014", "Throw", "Put"};
        magazines[] = {
            "CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","HandGrenade","HandGrenade","HandGrenade","HandGrenade"
        };
        respawnWeapons[]={"CUP_sgun_M1014", "Throw", "Put"};
        respawnMagazines[] = {
            "CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","HandGrenade","HandGrenade","HandGrenade","HandGrenade"
        };
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_GL : CUP_B_USMC_Soldier_07
    {
    	weapons[]={"rhs_weap_m16a4_m203_acog_usmc", "Throw", "Put"};
        magazines[] = {
            "rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE"
        };
        respawnWeapons[]={"rhs_weap_m16a4_m203_acog_usmc", "Throw", "Put"};
        respawnMagazines[] = {
            "rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE"
        };
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Officer: CUP_B_USMC_Soldier_01
    {
    	weapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Throw","Put","Binocular"};
        respawnWeapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Throw","Put","Binocular"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_SL : CUP_B_USMC_Soldier_02
    {
    	weapons[] = { "rhs_weap_m16a4", "Throw", "Put", "Binocular", "RH_m9" };//"NVGoggles"
        respawnWeapons[] = { "rhs_weap_m16a4", "Throw", "Put", "Binocular", "RH_m9" };//"NVGoggles"
        magazines[] = { "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellRed", "SmokeShellGreen", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9" };
        respawnMagazines[] = { "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellRed", "SmokeShellGreen", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9" };
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_TL : CUP_B_USMC_Soldier_07
    {
    	weapons[]={"rhs_weap_m16a4_m203_acog_usmc","Throw","Put","Binocular"};
        magazines[] = {
            "rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","HandGrenade","HandGrenade","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE"
        };
        respawnWeapons[]={"rhs_weap_m16a4_m203_acog_usmc","Throw","Put","Binocular"};
        respawnMagazines[] = {
            "rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","HandGrenade","HandGrenade","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE"
        };
    	scope = 1;
    	scopeCurator = 0;
    };


    class CUP_B_USMC_Soldier_AT_Base : CUP_B_USMC_Soldier_02 {};

    class CUP_B_USMC_Soldier_LAT : CUP_B_USMC_Soldier_AT_Base
    {
    	weapons[] = {"rhs_weap_m16a4","Throw","Put","rhs_weap_M136"};
        respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put","rhs_weap_M136"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","rhs_m136_mag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","rhs_m136_mag"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_AT: CUP_B_USMC_Soldier_AT_Base	//USMC_Soldier_AT: USMC_Soldier_AT_Base
    {
    	weapons[] = {"rhs_weap_m16a4","Throw","Put","CUP_launch_Mk153Mod0_SMAWOptics"};
        respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put","CUP_launch_Mk153Mod0_SMAWOptics"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","CUP_SMAW_HEAA_M"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","CUP_SMAW_HEAA_M"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_HAT: CUP_B_USMC_Soldier_AT_Base	//USMC_Soldier_HAT: USMC_Soldier_AT_Base
    {
    	weapons[] = {"rhs_weap_m16a4","Throw","Put","rhs_weap_fgm148"};
        respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put","rhs_weap_fgm148"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","rhs_fgm148_magazine_AT"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","rhs_fgm148_magazine_AT"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_AA: CUP_B_USMC_Soldier_AT_Base
    {
    	weapons[] = {"rhs_weap_m16a4","rhs_weap_fim92","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m16a4","rhs_weap_fim92","Throw","Put"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","rhs_fim92_mag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","rhs_fim92_mag"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Medic : CUP_B_USMC_Soldier_02
    {
    	weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","HandGrenade"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","HandGrenade"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_AR: CUP_B_USMC_Soldier_05
    {
    	weapons[] = {"rhs_weap_m249_pip_usmc","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m249_pip_usmc","Throw","Put"};
        magazines[] = {"rhsusf_200Rnd_556x45_soft_pouch","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"rhsusf_200Rnd_556x45_soft_pouch","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_MG: CUP_B_USMC_Soldier_05
    {
        weapons[] = {"rhs_weap_m240B","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m240B","Throw","Put"};
        magazines[] = {"100Rnd_762x51_M240"};
        respawnMagazines[] = {"100Rnd_762x51_M240"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Spotter: CUP_B_USMC_Soldier_08
    {
    	weapons[] = {"rhs_weap_m16a4","Throw","Put","Binocular"};
        respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","smokeshell","smokeshellYellow"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","smokeshell","smokeshellYellow"};
    	scope = 1;
    	scopeCurator = 0;
    };


    class CUP_B_USMC_Sniper_M40A3: CUP_B_USMC_Soldier_08
    {
    	weapons[] = {"CUP_srifle_M40A3","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_M40A3","rhsusf_weap_m1911a1","Binocular","Throw","Put"};

        // FIXME: Will need a vest
        magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","HandGrenade","smokeshell","smokeshellred","smokeshellgreen","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
        respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","HandGrenade","smokeshell","smokeshellred","smokeshellgreen","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Sniper_M107: CUP_B_USMC_Sniper_M40A3	//USMC_SoldierS_Spotter: USMC_Soldier_Base
    {
        weapons[] = {"CUP_srifle_M107_LeupoldVX3","rhsusf_weap_m1911a1","Throw","Put","Binocular"};//"NVGoggles"
        respawnWeapons[] = {"CUP_srifle_M107_LeupoldVX3","rhsusf_weap_m1911a1","Throw","Put","Binocular"};//"NVGoggles"

        // FIXME: Will need a vest
        magazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","HandGrenade","smokeshell","smokeshellred","smokeshellgreen","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
        respawnMagazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","HandGrenade","smokeshell","smokeshellred","smokeshellgreen","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_Marksman: CUP_B_USMC_Soldier_03
    {
        weapons[] = {"hlc_rifle_M14DMR","Binocular","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_M14DMR","Binocular","Throw","Put"};
        magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
        respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_SpecOps: CUP_B_USMC_Soldier_07
    {
    	weapons[] = {"rhs_weap_m4a1","Throw","Put","RH_m9"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put","RH_m9"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","SmokeShell","SmokeShellPurple","SmokeShellYellow","Laserbatteries"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","SmokeShell","SmokeShellPurple","SmokeShellYellow","Laserbatteries"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Engineer: CUP_B_USMC_Soldier_02
    {
    	weapons[] = {"rhs_weap_m4a1","Throw","Put"};
        respawnWeapons[] = {"rhs_weap_m4a1","Throw","Put"};

        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","SmokeShell"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Pilot: CUP_B_USMC_Soldier_06
    {
        weapons[] = {"hlc_smg_mp5a4","rhsusf_weap_m1911a1","Throw","Put","Binocular"};
        respawnWeapons[] = {"hlc_smg_mp5a4","rhsusf_weap_m1911a1","Throw","Put","Binocular"};
        magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","SmokeShellRed","SmokeShellGreen"};
        respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","SmokeShellRed","SmokeShellGreen"};
    	scope = 2;
//    	scopeCurator = 0;
        faction = "rhs_faction_usmc_wd";
    };

    class CUP_B_USMC_Crew: CUP_B_USMC_Soldier_02
    {
    	weapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Throw","Put"};//"NVGoggles"
        respawnWeapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Throw","Put"};//"NVGoggles"
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","SmokeShell","SmokeShellRed"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","SmokeShell","SmokeShellRed"};
    	scope = 1;
    	scopeCurator = 0;
    };


	class CUP_B_USMC_LHD_Crew_Base: CUP_Creatures_Military_USMC_Soldier_Base
	{
	};
	class CUP_B_USMC_LHD_Crew_Base_Blue: CUP_B_USMC_LHD_Crew_Base
	{
	};
	class CUP_B_USMC_LHD_Crew_Base_Brown: CUP_B_USMC_LHD_Crew_Base
	{
	};
	class CUP_B_USMC_LHD_Crew_Base_Green: CUP_B_USMC_LHD_Crew_Base
	{
	};
	class CUP_B_USMC_LHD_Crew_Base_Red: CUP_B_USMC_LHD_Crew_Base
	{
	};
	class CUP_B_USMC_LHD_Crew_Base_Violet: CUP_B_USMC_LHD_Crew_Base
	{
	};
	class CUP_B_USMC_LHD_Crew_Base_White: CUP_B_USMC_LHD_Crew_Base
	{
	};
	class CUP_B_USMC_LHD_Crew_Base_Yellow: CUP_B_USMC_LHD_Crew_Base
	{
	};

    class CUP_B_USMC_LHD_Crew_Blue: CUP_B_USMC_LHD_Crew_Base_Blue
    {
        scope = 2;
        scopeCurator = 2;
        faction = "rhs_faction_usmc_wd";
    };
    class CUP_B_USMC_LHD_Crew_Brown: CUP_B_USMC_LHD_Crew_Base_Brown
    {
        scope = 2;
        scopeCurator = 2;
        faction = "rhs_faction_usmc_wd";
    };
    class CUP_B_USMC_LHD_Crew_Green: CUP_B_USMC_LHD_Crew_Base_Green
    {
        scope = 2;
        scopeCurator = 2;
        faction = "rhs_faction_usmc_wd";
    };
    class CUP_B_USMC_LHD_Crew_Red: CUP_B_USMC_LHD_Crew_Base_Red
    {
        scope = 2;
        scopeCurator = 2;
        faction = "rhs_faction_usmc_wd";
    };
    class CUP_B_USMC_LHD_Crew_Violet: CUP_B_USMC_LHD_Crew_Base_Violet
    {
        scope = 2;
        scopeCurator = 2;
        faction = "rhs_faction_usmc_wd";
    };
    class CUP_B_USMC_LHD_Crew_White: CUP_B_USMC_LHD_Crew_Base_White
    {
        scope = 2;
        scopeCurator = 2;
        faction = "rhs_faction_usmc_wd";
    };
    class CUP_B_USMC_LHD_Crew_Yellow: CUP_B_USMC_LHD_Crew_Base_Yellow
    {
        scope = 2;
        scopeCurator = 2;
        faction = "rhs_faction_usmc_wd";
    };

    class CUP_B_FR_Soldier_01: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_02: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_03: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_04: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_05: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_06: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_07: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_08: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_09: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_10: CUP_Creatures_Military_FR_Soldier_Base {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_TL: CUP_B_FR_Soldier_01
    {
    	weapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};//"NVGoggles"
    	respawnWeapons[] = {"rhs_weap_m4a1","RH","Binocular","Throw","Put"};//"NVGoggles"
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Commander: CUP_B_FR_Soldier_03
    {
    	weapons[] = {"rhs_weap_m4a1","RH_m9","Throw","Put","Binocular"};
    	respawnWeapons[] = {"rhs_weap_m4a1","RH_m9","Throw","Put","Binocular"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed","SmokeShellPurple","SmokeShellYellow","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed","SmokeShellPurple","SmokeShellYellow","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Saboteur: CUP_B_FR_Soldier_08
    {
    	weapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};//"NVGoggles"
    	respawnWeapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};//"NVGoggles"
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","SmokeShell","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","SmokeShell","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_Marksman: CUP_B_FR_Soldier_07
    {
    	weapons[] = {"hlc_rifle_M14DMR","RH_m9","Binocular","Throw","Put"};//"NVGoggles"
    	respawnWeapons[] = {"hlc_rifle_M14DMR","RH_m9","Binocular","Throw","Put"};//"NVGoggles"
    	magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","SmokeShell","SmokeShellYellow","SmokeShellPurple"};
    	respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","SmokeShell","SmokeShellYellow","SmokeShellPurple"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_Light: CUP_B_FR_Soldier_07 {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Medic: CUP_B_FR_Soldier_04
    {
    	weapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed","SmokeShellGreen","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed","SmokeShellGreen","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_AR: CUP_B_FR_Soldier_01
    {
    	weapons[] = {"CUP_lmg_Mk48_wdl_Aim_Laser","RH_m9","Throw","Put","Binocular"};
    	respawnWeapons[] = {"CUP_lmg_Mk48_wdl_Aim_Laser","RH_m9","Throw","Put","Binocular"};
    	magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_GL: CUP_B_FR_Soldier_09
    {
    	weapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_Exp: CUP_B_FR_Soldier_10
    {
    	weapons[] = {"rhs_weap_m4a1","Binocular","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_Operator: CUP_B_FR_Soldier_09
    {
    	weapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Throw","Put"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","Laserbatteries"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","Laserbatteries"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_Assault: CUP_B_FR_Soldier_05
    {
    	weapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellPurple","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellPurple","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_Assault_GL: CUP_B_FR_Soldier_06
    {
    	weapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","rhsusf_weap_m1911a1","Binocular","Throw","Put"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellPurple","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellPurple","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Story_Miles: CUP_B_FR_Soldier_09
    {
    	weapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Story_Cooper: CUP_B_FR_Soldier_01
    {
    	weapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};

    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShellRed","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Story_Sykes: CUP_B_FR_Soldier_07
    {
    	weapons[] = {"hlc_rifle_M14DMR","RH_m9","Binocular","Throw","Put"};
    	respawnWeapons[] = {"hlc_rifle_M14DMR","RH_m9","Binocular","Throw","Put"};
    	magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","SmokeShell","SmokeShellYellow","SmokeShellPurple"};
    	respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","SmokeShell","SmokeShellYellow","SmokeShellPurple"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Story_OHara: CUP_B_FR_Medic	//FR_OHara: FR_Corpsman
    {
    	weapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	respawnWeapons[] = {"rhs_weap_m4a1","RH_m9","Binocular","Throw","Put"};
    	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShellRed","SmokeShellGreen","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShellRed","SmokeShellGreen","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Story_Rodriguez: CUP_B_FR_Soldier_AR
    {
    	weapons[] = {"CUP_lmg_Mk48_wdl_Aim_Laser","RH_m9","Throw","Put","Binocular"};
    	respawnWeapons[] = {"CUP_lmg_Mk48_wdl_Aim_Laser","RH_m9","Throw","Put","Binocular"};
    	magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9"};
    	scope = 1;
    	scopeCurator = 0;
    };