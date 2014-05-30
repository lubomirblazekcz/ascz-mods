class CfgPatches
{
	class caf_wp_weapons_pkm
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
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
	class CAF_100Rnd_762x54_PKM: 20Rnd_762x51_Mag
	{
		ammo = "";
		scope = 0;
		count = 100;
		displayname = "DO NOT USE (PKM Mag)";
		lastroundstracer = 3;
		tracersevery = 4;
	};
};
class cfgWeapons
{
	class AK_BASE;
	class caf_pkm: AK_BASE
	{
		scope = 0;
		model = "";
		picture = "";
		magazines[] = {""};
		displayname = "DO NOT USE (PKM)";
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		modes[] = {"manual","close","short","medium"};
		class manual: Mode_FullAuto
		{
			begin1[] = {"caf_wp_weapons_s\PKM_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\PKM_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\PKM_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\PKM_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			dispersion = 0.021;
			displayname = "";
			maxrange = 600;
			maxrangeprobab = 0.02;
			midrange = 300;
			midrangeprobab = 0.33;
			minrange = 0;
			minrangeprobab = 0.4;
			recoil = "recoil_auto_machinegun_8outof10";
			recoilprone = "recoil_auto_machinegun_prone_5outof10";
			reloadtime = 0.09;
			showtoplayer = 1;
			soundburst = 0;
			soundcontinuous = 0;
		};
		class close: manual
		{
			airateoffire = 0.5;
			airateoffiredistance = 50;
			burst = 10;
			maxrange = 600;
			maxrangeprobab = 0.04;
			midrange = 300;
			midrangeprobab = 0.18;
			begin1[] = {"caf_wp_weapons_s\PKM_s1",1,1,130};
			begin2[] = {"caf_wp_weapons_s\PKM_s2",1,1,130};
			begin3[] = {"caf_wp_weapons_s\PKM_s3",1,1,130};
			begin4[] = {"caf_wp_weapons_s\PKM_s4",1,1,130};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			minrange = 0;
			minrangeprobab = 0.3;
			showtoplayer = 0;
		};
		class short: close
		{
			airateoffire = 2;
			airateoffiredistance = 300;
			burst = 8;
			maxrange = 300;
			maxrangeprobab = 0.025;
			midrange = 150;
			midrangeprobab = 0.033;
			minrange = 25;
			minrangeprobab = 0.35;
		};
		class medium: close
		{
			airateoffire = 3;
			airateoffiredistance = 600;
			burst = 12;
			maxrange = 600;
			maxrangeprobab = 0.002;
			midrange = 400;
			midrangeprobab = 0.022;
			minrange = 200;
			minrangeprobab = 0.03;
		};
		class far: close
		{
			airateoffire = 5;
			airateoffiredistance = 1000;
			burst = 16;
			maxrange = 900;
			maxrangeprobab = 0.00013;
			midrange = 600;
			midrangeprobab = 0.002;
			minrange = 400;
			minrangeprobab = 0.015;
		};
		handAnim[] = {""};
	};
};