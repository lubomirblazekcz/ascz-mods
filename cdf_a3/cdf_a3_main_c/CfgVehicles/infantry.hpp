class rhs_infantry_msv_base;
class B_CDF_A3_Soldier_Base: rhs_infantry_msv_base
{
    identityTypes[] = {"Head_Euro","Language_CZ","Language_ACR_CZ"};
    faceType = "Man_A3";
    side = 1;
    faction = "CDF_A3"; // "CDF";
    genericNames = "CzechMen";
    vehicleClass= "Men";
    portrait = "";
    picture="";
    icon = "iconMan";
    accuracy = 2.3;
    sensitivity = 3;
    threat[] = {1,0.1,0.1};
    camouflage = 1.4;
    minFireTime = 7;
    scope= 1;
    scopeCurator = 0;
    cost= 40000;
	canCarryBackPack = 1;
    modelSides[] = {1,3};

    nakedUniform = "U_BasicBody";
    uniformClass = "U_CDF_A3_uniform_ttsko";
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
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};

    linkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_rifleman_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_rifleman_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

    hiddenSelections[] = {"camo1","camo2","camob","insignia"};
    hiddenSelectionsTextures[] =
    {
        "cdf_a3\cdf_a3_main\data\CDF_uniform.paa",
         "",
         ""
    };

    armor = 2;
    armorStructural = 5;
};

// BACKPACKS
class Bag_Base;
class B_CDF_A3_Backpack: Bag_Base
{
    scope = 2;
    displayName = "Backpack [CDF]";
    descriptionShort = "Backpack [CDF]";
    picture = "\cdf_a3\cdf_a3_main\data\PLACEHOLDER_REPLACE.paa";
    model = "\cdf_a3\cdf_a3_main\cdf_backpack.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_main\data\equip_co.paa"};
    maximumLoad = 280;
    mass = 50;
};
// BASIC SOLDIERS
class B_CDF_A3_Soldier: B_CDF_A3_Soldier_Base
{
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";

    backpack = "B_CDF_A3_Backpack";
    linkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_rifleman_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_rifleman_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_CDF_A3_Soldier_Light: B_CDF_A3_Soldier_Base
{
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_Soldier_lite_F0";
    weapons[]={"Throw","Put"};
    magazines[]={};
    respawnWeapons[]={"Throw","Put"};
    respawnMagazines[]={};
	camouflage = 1.2;
    linkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_CDF_A3_Soldier_GL: B_CDF_A3_Soldier_Base
{
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_Soldier_GL_F0";
    cost=50000;
    backpack = "B_CDF_A3_Backpack";
    weapons[]={"hlc_rifle_aks74_GL","Throw","Put"};
	threat[] = {1,0.3,0.1};
    magazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"
    };
    respawnWeapons[]={"hlc_rifle_aks74_GL","Throw","Put"};
    respawnMagazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"
    };
};

class B_CDF_A3_Soldier_Militia: B_CDF_A3_Soldier_Base
{
    scope = 2;
    scopeCurator = 2;
    displayName = $STR_DN_SOLDIER_MILITIA;
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

// MEDIC
class B_CDF_A3_Soldier_Medic: B_CDF_A3_Soldier_Base
{
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
	displayName = "$STR_B_medic_F0";
    picture="pictureHeal";
    textSingular = "medic";
    textPlural = "medics";

    attendant = 1;
	camouflage = 1.6;
	sensitivity = 2.5;
    cost=60000;

    backpack = "rhs_assault_umbts_medic";
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
    linkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

// SNIPERS
class B_CDF_A3_Soldier_Sniper: B_CDF_A3_Soldier_Base
{
	displayName = "$STR_B_sniper_F0";
    scope = 2;
    scopeCurator = 2;
    threat[] = {1,0.3,0.3};
    camouflage = 0.6;
    sensitivity = 3.5;
    cost= 250000;
    model = "\A3\characters_f\Common\ghillie.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_main\data\ghillie.paa"};
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

    uniformClass = "U_CDF_A3_SniperGhillie";
    weapons[]={"CUP_srifle_SVD_wdl_ghillie","NVGoggles","Throw","Put","Binocular"};
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
    linkedItems[] = {"V_CDF_A3_6b23_rifleman_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"V_CDF_A3_6b23_rifleman_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_CDF_A3_Soldier_Spotter: B_CDF_A3_Soldier_Base
{
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
    threat[] = {1,0.3,0.3};
    camouflage = 0.6;
    sensitivity = 3.5;
    cost = 150000; //Rg 220000;
    model = "\A3\characters_f\Common\ghillie.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_main\data\ghillie.paa"};

    textSingular = "sniper";
    textPlural = "snipers";

    uniformClass = "U_CDF_A3_SniperGhillie";
    weapons[]={"hlc_rifle_aks74_kobra_silenced","Binocular","NVGoggles","Throw","Put"};
    magazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "HandGrenade","HandGrenade","SmokeShellOrange","SmokeShell"
    };
    respawnWeapons[]={"hlc_rifle_aks74_kobra_silenced","Binocular","Throw","Put"};
    respawnMagazines[]={"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","SmokeShell"};
    linkedItems[] = {"V_CDF_A3_6b23_rifleman_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"V_CDF_A3_6b23_rifleman_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_CDF_A3_Soldier_Marksman: B_CDF_A3_Soldier_Base
{
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_soldier_M_F0";
	sensitivity = 3.3;
    cost = 200000; //Rg 180000;

    backpack = "B_CDF_A3_Backpack";
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

//LAUNCHER SOLDIERS
class B_CDF_A3_Soldier_RPG: B_CDF_A3_Soldier_Base
{
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
    threat[] = {1,1,0.8};
    camouflage = 1.5;
    textSingular = "launcherSoldier";
    textPlural = "launcherSoldiers";
    backpack = "rhs_rpg";
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
	icon = "iconManAT";
    linkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_CDF_A3_Soldier_Strela: B_CDF_A3_Soldier_Base
{
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
    threat[] = {1,1,0.8};
    camouflage = 1.5;
    cost=100000; //Rg 200000;
    backpack = "B_CDF_A3_Backpack";
    weapons[]={"hlc_rifle_ak74_dirty","CUP_launch_9K32Strela","Throw","Put"};
    magazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "CUP_Strela_2_M"
    };
    respawnWeapons[]={"hlc_rifle_ak74_dirty","CUP_launch_9K32Strela","Throw","Put"};
    respawnMagazines[]={"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_Strela_2_M"};
	icon = "iconManAT";
    linkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

//MACHINEGUNNERS
class B_CDF_A3_Soldier_AR: B_CDF_A3_Soldier_Base
{
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
	displayName = "$STR_B_soldier_AR_F0";
    textSingular = "mgunner";
    textPlural = "mgunners";
	threat[] = {1,0.1,0.3};
    cost=80000; //Rg 60000;
    backpack = "B_CDF_A3_Backpack";
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
	icon = "iconManMG";
};

class B_CDF_A3_Soldier_MG: B_CDF_A3_Soldier_Base
{
    scope = 2;
    scopeCurator = 2;
    cost=90000; //Rg 60000;
    accuracy=3.7; //Rg 1.5;
    textSingular = "mgunner";
    textPlural = "mgunners";
    displayName=$STR_DN_MGUNNER;
    backpack = "rhs_sidorMG";
    weapons[]={"rhs_weap_pkp_bipod","Throw","Put"};
    magazines[]=
    {
        "rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR",
        "rhs_100Rnd_762x54mmR"
    };
    threat[]={1, 0.1, 0.8};
    respawnWeapons[]={"rhs_weap_pkp_bipod","Throw","Put"};
    respawnMagazines[]={"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
	icon = "iconManMG";
};

// COMMANDERS
class B_CDF_A3_Soldier_TL: B_CDF_A3_Soldier_Base
{
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_Soldier_TL_F0";
    textSingular = "officer";
    textPlural = "officers";
    camouflage = 1.4;
    sensitivity = 3.3;
    cost=350000; //Rg 400000;
    backpack = "rhs_sidor";
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
	icon = "iconManLeader";
    linkedItems[] = {"H_CDF_A3_fieldcap","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_fieldcap","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_CDF_A3_Soldier_Officer: B_CDF_A3_Soldier_Base
{
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
	displayName = "$STR_B_officer_F0";
    textSingular = "officer";
    textPlural = "officers";
    identityTypes[] = {"Head_Euro","Language_CZ","Language_ACR_CZ"};
    camouflage = 1.6;
    sensitivity = 3;
    cost=700000; //Rg 500000;
    weapons[]={"hlc_rifle_aks74u","CUP_hgun_Makarov","ItemGPS","NVGoggles","Binocular","Throw","Put"};
    magazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M",
        "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"
    };
    respawnWeapons[]={"hlc_rifle_aks74u","CUP_hgun_Makarov","ItemGPS","NVGoggles","Binocular","Throw","Put"};
    respawnmagazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"
    };
    icon = "iconManOfficer";
    linkedItems[] = {"H_CDF_A3_fieldcap","V_CDF_A3_6b23_crewofficer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_fieldcap","V_CDF_A3_6b23_crewofficer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_CDF_A3_Commander: B_CDF_A3_Soldier_Base
{
    scope = 2;
    scopeCurator = 2;
    displayName = $STR_DN_GENERAL;
    identityTypes[] = {"Head_Euro","Language_CZ","Language_ACR_CZ"};
    textSingular = "officer";
    textPlural = "officers";
    camouflage = 1.6;
    sensitivity = 3;
    cost=900000; //Rg 1000000;
    weapons[]={"hlc_rifle_aks74u","CUP_hgun_Makarov","NVGoggles","ItemGPS","Binocular","Throw","Put"};
    magazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"
    };
    respawnWeapons[]={"hlc_rifle_aks74u","CUP_hgun_Makarov","NVGoggles","ItemGPS","Binocular","Throw","Put"};
    respawnmagazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"
    };
    icon = "iconManOfficer";
    linkedItems[] = {"H_CDF_A3_fieldcap","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_fieldcap","rhs_vest_commander","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

//CREWMEN
class B_CDF_A3_Soldier_Pilot: B_CDF_A3_Soldier_Base
{
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {"veh_infantry_pilot_s"};
            speechPlural[] = {"veh_infantry_pilot_p"};
        };
    };
    cost=20000; //Rg ADDED
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_Pilot_F0";
    textSingular = "pilot";
    textPlural = "pilots";
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
    linkedItems[] = {"rhs_zsh7a_mike","rhs_6sh46","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"rhs_zsh7a_mike","rhs_6sh46","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class B_CDF_A3_Soldier_Crew: B_CDF_A3_Soldier_Base
{
    camouflage = 1.6;
    sensitivity = 2.5;
    cost=20000; //Rg ADDED
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_B_crew_F0";
    weapons[]={"hlc_rifle_aks74u","NVGoggles","Throw","Put"};
    magazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "HandGrenade","HandGrenade"
    };
    respawnWeapons[]={"hlc_rifle_aks74u","NVGoggles","Throw","Put"};
    respawnmagazines[]= {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade"};
    textSingular = "crew";
    textPlural = "crews";
    linkedItems[] = {"rhs_tsh4","V_CDF_A3_6b23_crew","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"rhs_tsh4","V_CDF_A3_6b23_crew","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

// SPECIAL SOLDIERS
class B_CDF_A3_Soldier_Engineer: B_CDF_A3_Soldier
{
    scope = 2;
    scopeCurator = 2;
	displayName = "$STR_B_engineer_F0";
    camouflage = 1.6;
    sensitivity = 2.5;
    cost=60000; //Rg ADDED
    detectSkill = 60;
    threat[] = {1,0.5,0.1};
    canDeactivateMines = 1;
    engineer = 1;
    backpack = "rhs_assault_umbts_engineer";
    weapons[]={"hlc_rifle_ak74_dirty","Throw","Put"};
    magazines[]=
    {
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
        "HandGrenade","HandGrenade"
    };
    respawnWeapons[]={"hlc_rifle_ak74_dirty","Throw","Put"};
    respawnMagazines[]={"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade"};
    icon = "iconManEngineer";
    picture = "pictureRepair";
    linkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"H_CDF_A3_HelmetIA","V_CDF_A3_6b23_engineer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};