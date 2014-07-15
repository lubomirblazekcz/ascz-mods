class CfgPatches
{
	class ascz_caf_wp_weapons_pkm
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_wp_weapons_pkm"};
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
		ammo = "B_762x51_Tracer_Green";
		count = 100;
		displayname = "PKM 100rnd Mag";
		lastroundstracer = 3;
		tracersevery = 4;
	};
};
class cfgWeapons
{
	class AK_BASE;
	class caf_pkm: AK_BASE
	{
		scope = 2;
		model = "\caf_wp_weapons\pk_mg";
		picture = "\caf_wp_weapons_c\ui\pk_x_ca.paa";
		magazines[] = {"CAF_100rnd_762x54_PKM"};
		displayname = "PKM";
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		modes[] = {"manual","close","short","medium"};
		class manual: Mode_FullAuto
		{
            sounds[] = {StandardSound};
            class BaseSoundModeType
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"A3\sounds_f\weapons\closure\closure_rifle_2", db-12, 1,10};
                closure2[]={"A3\sounds_f\weapons\closure\closure_rifle_3", db-12, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                begin1[] = {"caf_wp_weapons_s\PKM_s1",1,1,130};
                begin2[] = {"caf_wp_weapons_s\PKM_s2",1,1,130};
                begin3[] = {"caf_wp_weapons_s\PKM_s3",1,1,130};
                begin4[] = {"caf_wp_weapons_s\PKM_s4",1,1,130};
                soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
            };
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
            sounds[] = {StandardSound};
            class BaseSoundModeType
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"A3\sounds_f\weapons\closure\closure_rifle_2", db-12, 1,10};
                closure2[]={"A3\sounds_f\weapons\closure\closure_rifle_3", db-12, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                begin1[] = {"caf_wp_weapons_s\PKM_s1",1,1,130};
                begin2[] = {"caf_wp_weapons_s\PKM_s2",1,1,130};
                begin3[] = {"caf_wp_weapons_s\PKM_s3",1,1,130};
                begin4[] = {"caf_wp_weapons_s\PKM_s4",1,1,130};
                soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
            };
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
		handAnim[] = {"OFP2_ManSkeleton","\caf_wp_weapons_c\Anim\AK.rtm"};
	};
};