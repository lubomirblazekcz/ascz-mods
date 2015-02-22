class SoldierGB;
class B_TKA_A3_Soldier_Base: SoldierGB
{
	author = "TKA_A3";
    identityTypes[] = {"LanguagePER_F","Head_TK"};
    faceType = "Man_A3";
    side = 0;
    faction = "TKA_A3"; // "TKA";
    genericNames = "TakistaniMen";
    vehicleClass= "Men";
    portrait = "";
    picture="";
    icon = "iconMan";
	accuracy=3.9;
    sensitivity = 3;
    threat[] = {1,0.1,0.1};
    camouflage = 1.4;
    minFireTime = 10;
    scope= 1;
    scopeCurator = 0;
    cost= 40000;
	canCarryBackPack = 1;
    modelSides[] = {0,3};

	model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
    nakedUniform = "U_BasicBody";
    uniformClass = "U_TKA_A3_uniform";
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
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};

    linkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    hiddenSelections[] = {"Camo1","Camo2","insignia"};
    hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\TKA_Uniform.paa","\a3\characters_f_gamma\civil\data\c_cloth1_black.paa"};

    armor = 2;
    armorStructural = 5;
    class Wounds
    {
        tex[] = {};
        mat[] = {"A3\Characters_F\Civil\Data\c_cloth1.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth2.rvmat","A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth3.rvmat","A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\characters_f\civil\data\c_poloshirt.rvmat","A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Civil\Data\hunter.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
};
class B_TKA_A3_Soldier_Base_02: SoldierGB
{
	author = "TKA_A3";
    identityTypes[] = {"LanguagePER_F","Head_TK"};
    faceType = "Man_A3";
    side = 0;
    faction = "TKA_A3"; // "TKA";
    genericNames = "TakistaniMen";
    vehicleClass= "Men";
    portrait = "";
    picture="";
    icon = "iconMan";
	accuracy=3.9;
    sensitivity = 3;
    threat[] = {1,0.1,0.1};
    camouflage = 1.4;
    minFireTime = 10;
    scope= 1;
    scopeCurator = 0;
    cost= 40000;
	canCarryBackPack = 1;
    modelSides[] = {0,3};

	model = "\A3\characters_F\OPFOR\o_officer.p3d";
    nakedUniform = "U_BasicBody";
    uniformClass = "U_TKA_A3_uniform_02";
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
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};

    linkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    hiddenSelections[] = {"Camo","insignia"};
    hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\TKA_Uniform.paa"};
    hiddenSelectionsMaterials[] = {"\tka_a3\tka_a3_main\data\TKA_officer.rvmat"};

    armor = 2;
    armorStructural = 5;
    class Wounds
    {
        tex[] = {};
        mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
    class UniformInfo
    {
        class SlotsInfo
        {
            class NVG: UniformSlotInfo
            {
                slotType = 602;
            };
            class Scuba: UniformSlotInfo
            {
                slotType = 604;
            };
            class Googles: UniformSlotInfo
            {
                slotType = 603;
            };
            class Headgear: UniformSlotInfo
            {
                slotType = 605;
            };
        };
    };
};
class B_TKA_A3_Soldier_Base_03: SoldierGB
{
	author = "TKA_A3";
    identityTypes[] = {"LanguagePER_F","Head_TK"};
    faceType = "Man_A3";
    side = 0;
    faction = "TKA_A3"; // "TKA";
    genericNames = "TakistaniMen";
    vehicleClass= "Men";
    portrait = "";
    picture="";
    icon = "iconMan";
    accuracy=3.9;
    sensitivity = 3;
    threat[] = {1,0.1,0.1};
    camouflage = 1.4;
    minFireTime = 10;
    scope= 1;
    scopeCurator = 0;
    cost= 40000;
    canCarryBackPack = 1;
    modelSides[] = {0,3};

    model = "\A3\characters_F\OPFOR\o_officer.p3d";
    nakedUniform = "U_BasicBody";
    uniformClass = "U_TKA_A3_uniform_03";
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
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};

    linkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    hiddenSelections[] = {"Camo","insignia"};
    hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\TKA_Uniform_mix.paa"};
    hiddenSelectionsMaterials[] = {"\tka_a3\tka_a3_main\data\TKA_officer.rvmat"};

    armor = 2;
    armorStructural = 5;
    class Wounds
    {
        tex[] = {};
        mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
    class UniformInfo
    {
        class SlotsInfo
        {
            class NVG: UniformSlotInfo
            {
                slotType = 602;
            };
            class Scuba: UniformSlotInfo
            {
                slotType = 604;
            };
            class Googles: UniformSlotInfo
            {
                slotType = 603;
            };
            class Headgear: UniformSlotInfo
            {
                slotType = 605;
            };
        };
    };
};
class B_TKA_A3_Soldier_Base_04: SoldierGB
{
	author = "TKA_A3";
    identityTypes[] = {"LanguagePER_F","Head_TK"};
    faceType = "Man_A3";
    side = 0;
    faction = "TKA_A3"; // "TKA";
    genericNames = "TakistaniMen";
    vehicleClass= "Men";
    portrait = "";
    picture="";
    icon = "iconMan";
	accuracy=3.9;
    sensitivity = 3;
    threat[] = {1,0.1,0.1};
    camouflage = 1.4;
    minFireTime = 10;
    scope= 1;
    scopeCurator = 0;
    cost= 40000;
	canCarryBackPack = 1;
    modelSides[] = {0,3};

	model = "\A3\characters_F\OPFOR\o_officer.p3d";
    nakedUniform = "U_BasicBody";
    uniformClass = "U_TKA_A3_uniform_04";
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
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};

    linkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    hiddenSelections[] = {"Camo","insignia"};
    hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\TKA_Uniform_officer.paa"};
    hiddenSelectionsMaterials[] = {"\tka_a3\tka_a3_main\data\TKA_officer2.rvmat"};

    armor = 2;
    armorStructural = 5;
    class Wounds
    {
        tex[] = {};
        mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
    };
    class UniformInfo
    {
        class SlotsInfo
        {
            class NVG: UniformSlotInfo
            {
                slotType = 602;
            };
            class Scuba: UniformSlotInfo
            {
                slotType = 604;
            };
            class Googles: UniformSlotInfo
            {
                slotType = 603;
            };
            class Headgear: UniformSlotInfo
            {
                slotType = 605;
            };
        };
    };
};

// BACKPACKS
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

// BASIC SOLDIERS
class B_TKA_A3_Soldier: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";

    backpack = "";
    linkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_HelmetIA","V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_TKA_A3_Soldier_GL: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_Soldier_GL_F0";
    cost=50000;
    backpack = "";
    weapons[]={"CUP_arifle_M16A2_GL","Throw","Put"};
	threat[] = {1,0.3,0.1};
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

//BACKPACK CLASSES START
class B_TKA_A3_Soldier_B: B_TKA_A3_Soldier
{
	displayName="$STR_tka_a3_dn_tk_soldier_b_ep1";
	backpack = "B_TKA_A3_Assault_Pack_Ammo";
};

class B_TKA_A3_Soldier_AAT: B_TKA_A3_Soldier
{
	displayName="$STR_b_soldier_aat_f0";
	backpack = "rhs_rpg";
};

class B_TKA_A3_Soldier_AMG: B_TKA_A3_Soldier
{
	displayName="$STR_b_soldier_aar_f0";
	backpack = "B_TKA_A3_ALICE_Pack_AmmoMG";
};
//BACKPACK CLASSES END

//LAUNCHER SOLDIERS
class B_TKA_A3_Soldier_LAT:B_TKA_A3_Soldier_Base
{
	scope=2;
	accuracy=3.9;
	displayName="$STR_b_soldier_lat_f0";
	icon = "iconManAT";

    textSingular = "launcherSoldier";
    textPlural = "launcherSoldiers";
	threat[] = {1, 0.9, 0.1};

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
	author = "TKA_A3";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_AT_s"};
            speechPlural[] = {"veh_infantry_AT_p"};
        };
    };
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_soldier_AT_F0";
    cost=120000;
	threat[]={1, 0.9, 0.1};
    camouflage = 1.5;
    textSingular = "launcherSoldier";
    textPlural = "launcherSoldiers";
    backpack = ""; //none
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
	icon = "iconManAT";
};

class B_TKA_A3_Soldier_HAT:B_TKA_A3_Soldier_Base
{
	scope=2;
	accuracy=3.9;
	displayName="$STR_b_soldier_at_f0_tka_a3";
	icon = "iconManAT";

    textSingular = "launcherSoldier";
    textPlural = "launcherSoldiers";
	threat[] = {1, 1, 0.1};

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
	author = "TKA_A3";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_AT_s"};
            speechPlural[] = {"veh_infantry_AT_p"};
        };
    };
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_soldier_AA_F0";
    textSingular = "launcherSoldier";
    textPlural = "launcherSoldiers";
	threat[] = {1, 0.5, 0.9};
    camouflage = 1.5;
    cost=100000; //Rg 200000;
    backpack = "";
    weapons[]={"CUP_arifle_FNFAL","rhs_weap_igla","Throw","Put"}; // org. Strela
    magazines[]=
    {
        "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
        "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
        "rhs_mag_9k38_rocket"
    };
    respawnWeapons[]={"CUP_arifle_FNFAL","rhs_weap_igla","Throw","Put"};
    respawnMagazines[]={"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","rhs_mag_9k38_rocket"};
	icon = "iconManAT";
};

//OPFOR	TKA	Men	Engineer
class B_TKA_A3_Soldier_Engineer: B_TKA_A3_Soldier
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_engineer_F0";
    canDeactivateMines = 1;
    engineer = 1;
    backpack = "B_TKA_A3_ALICE_Pack_Explosives";
    weapons[]={"CUP_arifle_FNFAL","Throw","Put"};
    magazines[]=
    {
        "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
        "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
        "HandGrenade","HandGrenade"
    };
    respawnWeapons[]={"CUP_arifle_FNFAL","Throw","Put"};
    respawnMagazines[]={"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","HandGrenade"};
    icon = "iconManEngineer";
    picture = "pictureRepair";
};

//MACHINEGUNNERS
class B_TKA_A3_Soldier_MG: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator = 2;
    cost=90000; //Rg 60000;
	accuracy=3.9;
    textSingular = "mgunner";
    textPlural = "mgunners";
	displayName = "$STR_B_soldier_AR_F0";
    backpack = "";
    weapons[]={"CUP_lmg_PKM","Throw","Put"};
    magazines[]=
    {
        "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
        "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
    };
	threat[]={1, 0.1, 0.6};
    respawnWeapons[]={"CUP_lmg_PKM","Throw","Put"};
    respawnMagazines[]={"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	icon = "iconManMG";
};

class B_TKA_A3_Soldier_AR: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_MG_s"};
            speechPlural[] = {"veh_infantry_MG_p"};
        };
    };
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
	displayName = "$STR_B_soldier_AR_F0";
    textSingular = "mgunner";
    textPlural = "mgunners";
	threat[] = {1,0.1,0.3};
    cost=80000; //Rg 60000;
    backpack = "B_TKA_A3_Assault_Pack_RPK";
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
	icon = "iconManMG";
};

// MEDIC
class B_TKA_A3_Soldier_Medic: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_medic_s"};
            speechPlural[] = {"veh_infantry_medic_p"};
        };
    };
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
	displayName = "$STR_B_medic_F0";
    picture="pictureHeal";
    textSingular = "medic";
    textPlural = "medics";

    attendant = 1;
	cost=100000;

    backpack = "";
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
	icon = "iconManMedic";
};

// COMMANDERS
class B_TKA_A3_Soldier_SL: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
	displayName = "$STR_B_Soldier_TL_F0";
    textSingular = "officer";
    textPlural = "officers";
    backpack = "";
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
	icon = "iconManLeader";
};

class B_TKA_A3_Soldier_Officer: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_officer_s"};
            speechPlural[] = {"veh_infantry_officer_p"};
        };
    };
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
	displayName = "$STR_B_officer_F0";
    textSingular = "officer";
    textPlural = "officers";
    identityTypes[] = {"LanguagePER_F","Head_TK"};
    camouflage = 1.6;
    sensitivity = 3;
    cost=700000; //Rg 500000;
    uniformClass = "U_TKA_A3_uniform_02";
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
    icon = "iconManOfficer";
    linkedItems[] = {"H_TKA_A3_Beret","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_Beret","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_TKA_A3_Aziz: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
    identityTypes[] = {"LanguagePER_F","Head_Aziz"};
	displayName="$STR_tka_a3_dn_tk_aziz_ep1";
    textSingular = "officer";
    textPlural = "officers";
    uniformClass = "U_TKA_A3_uniform_04";
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
    icon = "iconManOfficer";
    linkedItems[] = {"H_TKA_A3_Beret","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_Beret","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_TKA_A3_Commander: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
    displayName = "$STR_DN_GENERAL_TKA_A3";
    textSingular = "officer";
    textPlural = "officers";
    cost=900000; //Rg 1000000;
    uniformClass = "U_TKA_A3_uniform_04";
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
    icon = "iconManOfficer";
    linkedItems[] = {"H_TKA_A3_Beret","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_Beret","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

// SNIPERS
class B_TKA_A3_Soldier_Spotter: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
	displayName = "$STR_B_spotter_F0";
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
	threat[]={1, 0.3, 0.3};
    camouflage = 0.5;
    sensitivity = 3.5;
	cost=200000; //Rg ADDED
    model = "\A3\characters_f\Common\ghillie.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\ghillie.paa"};

    textSingular = "sniper";
    textPlural = "snipers";

    uniformClass = "U_TKA_A3_SniperGhillie";
    weapons[]={"CUP_arifle_FNFAL","Binocular","NVGoggles","Throw","Put"};
    magazines[]=
    {
        "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
        "CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
        "HandGrenade","HandGrenade","SmokeShellBlue","SmokeShell"
    };
    respawnWeapons[]={"CUP_arifle_FNFAL","Binocular","Throw","Put"};
    respawnMagazines[]={"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","HandGrenade","SmokeShellBlue"};
    linkedItems[] = {"V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_TKA_A3_Soldier_Sniper: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
	displayName = "$STR_B_sniper_F0";
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9; //Rg 3.5;
	threat[]={1, 0.3, 0.3};
    camouflage = 0.5;
	cost=350000; //Rg 250000;
    model = "\A3\characters_f\Common\ghillie.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\tka_a3\tka_a3_main\data\ghillie.paa"};
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_sniper_s"};
            speechPlural[] = {"veh_infantry_sniper_p"};
        };
    };
    textSingular = "sniper";
    textPlural = "snipers";

    uniformClass = "U_TKA_A3_SniperGhillie";
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
    linkedItems[] = {"V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"V_TKA_A3_ChestRig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_TKA_A3_Soldier_SniperH: B_TKA_A3_Soldier_Sniper
{
	scope=2;
    scopeCurator = 2;
	displayName = "$STR_tka_a3_dn_tk_soldier_sniperh_ep1";
	threat[]={1, 0.6, 0.6};
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

//Under development ***
class B_TKA_A3_Soldier_Sniper_Night: B_TKA_A3_Soldier_Sniper
{
	scope = 2;
    scopeCurator = 2;
	displayName = "$STR_tka_a3_dn_tk_soldier_sniper_night_ep1";
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
	scope=2;
    scopeCurator = 2;
	displayName="$STR_tka_a3_dn_tk_soldier_night_1_ep1";
	weapons[]={"CUP_arifle_AKS74_NSPU","Throw","Put","NVGoggles"}; //NSPU
	magazines[]=
	{
		"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
		"HandGrenade","HandGrenade"
	};
	respawnWeapons[]={"CUP_arifle_AKS74_NSPU","Throw","Put","NVGoggles"};
	respawnMagazines[]=
	{
		"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
		"HandGrenade"
	};
};
class B_TKA_A3_Soldier_Night_2: B_TKA_A3_Soldier
{
	scope=2;
    scopeCurator = 2;
	displayName="$STR_tka_a3_dn_tk_soldier_night_2_ep1";
	weapons[]={"CUP_arifle_FNFAL_ANPVS4","Throw","Put"}; // ANPVS4
	magazines[]=
	{
		"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
		"HandGrenade","HandGrenade"
	};
	respawnWeapons[]={"CUP_arifle_FNFAL_ANPVS4","Throw","Put"};
	respawnMagazines[]=
	{
		"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
		"HandGrenade"
	};
};
class B_TKA_A3_Soldier_TWS: B_TKA_A3_Soldier
{
	scope=2;
    scopeCurator = 2;
	displayName="$STR_tka_a3_dn_tk_soldier_tws_ep1";
	weapons[]={"CUP_arifle_AKS74_Goshawk","Throw","Put","NVGoggles"}; // GHOSTHAWK
	magazines[]=
	{
		"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
		"HandGrenade","HandGrenade"
	};
	respawnWeapons[]={"CUP_arifle_AKS74_Goshawk","Throw","Put","NVGoggles"};
	respawnMagazines[]=
	{
		"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
		"HandGrenade"
	};
};
//***

//CREWMEN
class B_TKA_A3_Soldier_Crew: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
    displayName = "$STR_B_crew_F0";
    uniformClass = "U_TKA_A3_uniform_03";
    weapons[]={"CUP_arifle_AKS74U","NVGoggles","Throw","Put"};
    magazines[]=
    {
        "CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
        "HandGrenade","HandGrenade"
    };
    respawnWeapons[]={"CUP_arifle_AKS74U","NVGoggles","Throw","Put"};
    respawnmagazines[]= {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","HandGrenade"};
    textSingular = "crew";
    textPlural = "crews";
    linkedItems[] = {"rhs_tsh4","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_TKA_A3_Soldier_Pilot: B_TKA_A3_Soldier_Base
{
	author = "TKA_A3";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_pilot_s"};
            speechPlural[] = {"veh_infantry_pilot_p"};
        };
    };
    scope = 2;
    scopeCurator = 2;
	accuracy=3.9;
	displayName = "$STR_B_Pilot_F0";
    textSingular = "pilot";
    textPlural = "pilots";
    uniformClass = "U_TKA_A3_uniform_03";
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
    linkedItems[] = {"rhs_zsh7a_mike","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"rhs_zsh7a_mike","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

//SPECIAL FORCES
class B_TKA_A3_Special_Forces: B_TKA_A3_Soldier_Base
{
	scope=2;
    scopeCurator = 2;
	accuracy=3.9;
	vehicleClass="Men"; //MenSpecialForces
    uniformClass = "U_TKA_A3_uniform_03";
	displayName="$STR_b_recon_f0"; // TODO sring

	backpack = "B_TKA_A3_ALICE_Pack_Ammo";
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

    linkedItems[] = {"H_TKA_A3_Turban","V_TKA_A3_ChestRig","G_Bandanna_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_TKA_A3_Turban","V_TKA_A3_ChestRig","G_Bandanna_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_TKA_A3_Special_Forces_TL: B_TKA_A3_Special_Forces
{
	displayName="$STR_b_recon_tl_f0"; // TODO sring

	backpack="";
    uniformClass = "U_TKA_A3_uniform_03";
	weapons[]={"CUP_arifle_FNFAL","Binocular","Throw","Put","itemGPS","CUP_hgun_PB6P9_snds"};// Silenced
	magazines[]=
	{
		"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
		"HandGrenade", "HandGrenade","smokeshellBlue", "smokeshellOrange",
		"CUP_8Rnd_9x18_MakarovSD_M", "CUP_8Rnd_9x18_MakarovSD_M", "CUP_8Rnd_9x18_MakarovSD_M", "CUP_8Rnd_9x18_MakarovSD_M"
	};
	respawnWeapons[]={"CUP_arifle_FNFAL","Binocular","Throw","Put","itemGPS","CUP_hgun_PB6P9_snds"};
	respawnMagazines[]=
	{
		"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M",
		"HandGrenade", "smokeshellOrange",
		"CUP_8Rnd_9x18_MakarovSD_M", "CUP_8Rnd_9x18_MakarovSD_M"
	};
};

class B_TKA_A3_Special_Forces_MG: B_TKA_A3_Special_Forces
{
	displayName="$STR_b_recon_f0_tka_a3_mg";

	backpack="";
    uniformClass = "U_TKA_A3_uniform_03";
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