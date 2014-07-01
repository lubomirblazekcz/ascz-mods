class CfgPatches
{
	class ascz_caf_wp_weapons_ak47_renamed
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_wp_weapons_ak47"};
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
	class CAF_762x39_Ball: B_762x51_Tracer_Green
	{
		model = "";
		hit = 9;
		scope = 1;
	};
};
class cfgMagazines
{
	class 20Rnd_762x51_Mag;
	class CA_Magazine;
	class CAF_30Rnd_762x39_AK: CA_Magazine
	{
		ammo = "";
		scope = 1;
		count = 30;
		displayname = "DO NOT USE (AK-47 Mag)";
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
	class AK_BASE: EBR_base_F
	{
		scope = 1;
		value = 0;
		model = "";
		displayName = "DO NOT USE";
		optics = 0;
		reloadMagazineSound[] = {"caf_wp_weapons_s\reload-ak-2ivan",0.07079458,1,20};
		modes[] = {"FullAuto","Single","Burst"};
		magazines[] = {"CAF_30Rnd_762x39_AK"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
		};
	};
	class caf_AK47: AK_BASE
	{
		scope = 1;
		model = "";
		picture = "";
		magazines[] = {"CAF_30Rnd_762x39_AK"};
		displayname = "DO NOT USE (AKM)";
		dexterity = 1.57;
		handAnim[] = {""};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.028;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 200;
			midRangeProbab = 0.08;
			maxRange = 400;
			maxRangeProbab = 0.0015;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundBurst = "false";
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.028;
			minRange = 0;
			minRangeProbab = 0.03;
			midRange = 175;
			midRangeProbab = 0.015;
			maxRange = 350;
			maxRangeProbab = 0.0005;
			showToPlayer = "false";
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"caf_wp_weapons_s\AK47_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\AK47_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\AK47_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\AK47_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.0028;
			minRange = 0;
			minRangeProbab = 0.03;
			midRange = 150;
			midRangeProbab = 0.005;
			maxRange = 300;
			maxRangeProbab = 0.0003;
		};
	};
};