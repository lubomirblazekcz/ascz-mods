class CfgPatches
{
	class ascz_caf_wp_weapons_ak74_renamed
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_wp_weapons_ak74"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class cfgAmmo
{
	class B_762x51_Tracer_Green;
	class CAF_545x39_Ball: B_762x51_Tracer_Green
	{
		model = "";
		hit = 6;
	};
};
class cfgMagazines
{
	class 20Rnd_762x51_Mag;
	class CAF_30Rnd_545x39_AK: 20Rnd_762x51_Mag
	{
		ammo = "";
		scope = 1;
		count = 30;
		displayname = "DO NOT USE (AK-74 mag)";
		picture = "";
		lastroundstracer = 3;
		tracersevery = 4;
	};
};
class cfgWeapons
{
	class UGL_F;
	class GrenadeLauncher;
	class Rifle_Long_Base_F;
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class AK_BASE;
	class caf_AK74: AK_BASE
	{
		scope = 1;
		model = "";
		displayName = "DO NOT USE (AK-74)";
		picture = "";
		magazines[] = {""};
		dexterity = 1.57;
		handAnim[] = {""};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.0025;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.01;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundBurst = "false";
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.0025;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.07;
			showToPlayer = "false";
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.03;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
	};
	class caf_ak74gl: caf_AK74
	{
		scope = 1;
		model = "";
		displayName = "DO NOT USE (AK-74 GL)";
		picture = "";
		handAnim[] = {""};
		muzzles[] = {""};
		dexterity = 1.5;
		class Single: Mode_SemiAuto
		{
			begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.0025;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.01;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundBurst = "false";
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.0025;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.07;
			showToPlayer = "false";
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"caf_wp_weapons_s\AK74_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK74_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK74_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK74_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.03;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
		class GP25Muzzle: UGL_F
		{
			displayName = "$STR_DN_GP25";
			scope = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,30};
			magazinereloadtime = 0;
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			reloadTime = 0.1;
			optics = 1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.7;
		};
	};
};