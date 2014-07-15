class CfgPatches
{
	class ascz_caf_wp_weapons_svd
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_wp_weapons_svd"};
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
	class CAF_100Rnd_762x54_PKM;
	class caf_10Rnd_762x54_SVD: CAF_100Rnd_762x54_PKM
	{
		count = 10;
		displayname = "SVD 10rnd Mag";
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
	class caf_svd: AK_BASE
	{
		afmax = 0;
		airateoffire = 9;
		airateoffiredistance = 1300;
		autofire = 0;
		begin1[] = {"caf_wp_weapons_s\sniper_single_05",1.77828,1,1200};
		descriptionshort = "Sharpshooter rifle <br/>Caliber: 7.62x54mmR";
		dexterity = 1.57;
		dispersion = 0.00025;
		displayname = "SVD";
		distancezoommax = 200;
		distancezoommin = 200;
		htmax = 420;
		htmin = 1;
		magazines[] = {"caf_10Rnd_762x54_SVD"};
		maxrange = 800;
		maxrangeprobab = 0.05;
		mfact = 1;
		mfmax = 0;
		midrange = 400;
		midrangeprobab = 0.7;
		minrange = 0;
		minrangeprobab = 0.1;
		model = "\caf_wp_weapons\SVD";
		modeloptics = "\caf_wp_weapons\optika_snpiere";
		opticsdisableperipherialvision = 1;
		opticsflare = 1;
		opticsppeffects[] = {"OpticsCHAbera3","OpticsBlur3"};
		opticszoominit = 0.0623;
		opticszoommax = 0.0623;
		opticszoommin = 0.0623;
		picture = "\caf_wp_weapons_c\ui\SVD_x_ca.paa";
		recoil = "recoil_single_primary_7outof10";
		recoilprone = "recoil_single_primary_prone_6outof10";
		scope = 2;
		soundbegin[] = {"begin1",1};
		tbody = 100;
		value = 1000;
		visionmode[] = {"Normal"};
		handAnim[] = {"OFP2_ManSkeleton","\caf_wp_weapons_c\Anim\AK.rtm"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
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
                begin1[] = {"caf_wp_weapons_s\SVD_s1",1,1,130};
                begin2[] = {"caf_wp_weapons_s\SVD_s2",1,1,130};
                begin3[] = {"caf_wp_weapons_s\SVD_s3",1,1,130};
                begin4[] = {"caf_wp_weapons_s\SVD_s4",1,1,130};
                soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
            };
			reloadTime = 0.1;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0018;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libtextdesc = "The SVD was designed as a sharpshooter's rifle rather than a sniper rifle. In fact the main role of the SVD in the Soviet Army was to increase the effective range of an infantry squadĂ˘Â€Â™s fire to 600 meters by providing precision fire support.<br/>The SVD is a lightweight, accurate rifle capable of semi-auto fire and equipped with a 4x24 PSO-1 scope. The SVD is extremely reliable in all conditions.";
		};
	};
};