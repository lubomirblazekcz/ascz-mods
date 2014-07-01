////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.53
//Tue Jul 01 22:46:18 2014 : Source 'file' date Tue Jul 01 22:46:18 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class C:/Users/EvroMalarkey/Desktop/ASCZ_RPK74_renamed/config.bin{
class CfgPatches
{
	class ascz_caf_wp_weapons_rpk_renamed
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_wp_weapons_rpk"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class cfgMagazines
{
	class 20Rnd_762x51_Mag;
	class CAF_75rnd_545x39_RPK: 20Rnd_762x51_Mag
	{
		count = 75;
		ammo = "CAF_545x39_Ball";
		displayname = "RPK 75rnd Mag";
		picture = "\caf_wp_weapons_c\ui\m_rpk_74_ca.paa";
		lastroundstracer = 3;
		tracersevery = 4;
	};
};
class cfgWeapons
{
	class AK_BASE;
	class caf_rpk74: AK_BASE
	{
		scope = 1;
		model = "\caf_wp_weapons\RPK_74";
		picture = "\caf_wp_weapons_c\ui\RPK_74_x_CA.paa";
		magazines[] = {"CAF_75rnd_545x39_RPK"};
		displayname = "RPK-74";
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		handAnim[] = {"OFP2_ManSkeleton","\caf_wp_weapons_c\Anim\AK.rtm"};
		modes[] = {"manual","close","short","medium"};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"caf_wp_weapons_s\RPK_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\RPK_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\RPK_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\RPK_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_primary_prone_4outof10";
			dispersion = 0.00125;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.03;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_4outof10";
			recoilProne = "recoil_auto_machinegun_prone_3outof10";
			dispersion = 0.0012;
			begin1[] = {"caf_wp_weapons_s\RPK_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\RPK_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\RPK_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\RPK_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			soundContinuous = 0;
			soundBurst = "false";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = "true";
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = "false";
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1000;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"caf_wp_weapons_s\RPK_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\RPK_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\RPK_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\RPK_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
			dispersion = 0.00125;
			aiRateOfFireDistance = 400;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
	};
};
//};
