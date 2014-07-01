class CfgPatches
{
	class ascz_hlcweapons_aks
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core","hlcweapons_aks"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		version = "V1.1";
		author = "toadie";
	};
};
class hgun_P07_F;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class GrenadeLauncher;
class UGL_F;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class CfgVehicles
{
	class NATO_Box_Base;
	class HLC_AK_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "Kalasnikov Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 25;
			};
			class _xx_hlc_30Rnd_545x39_t_ak
			{
				magazine = "hlc_30Rnd_545x39_t_ak";
				count = 30;
			};
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 20;
			};
			class _xx_hlc_30Rnd_545x39_EP_ak
			{
				magazine = "hlc_30Rnd_545x39_EP_ak";
				count = 20;
			};
			class _xx_hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 30;
			};
			class _xx_hlc_hlc_30Rnd_762x39_t_ak
			{
				magazine = "hlc_30Rnd_762x39_t_ak";
				count = 20;
			};
			class _xx_hlc_45Rnd_762x39_t_rpk
			{
				magazine = "hlc_45Rnd_762x39_t_rpk";
				count = 30;
			};
			class _xx_hlc_45Rnd_762x39_m_rpk
			{
				magazine = "hlc_45Rnd_762x39_m_rpk";
				count = 25;
			};
			class _xx_hlc_10rnd_12g_buck_S12
			{
				magazine = "hlc_10rnd_12g_buck_S12";
				count = 30;
			};
			class _xx_hlc_10rnd_12g_slug_S12
			{
				magazine = "hlc_10rnd_12g_slug_S12";
				count = 25;
			};
			class _xx_hlc_hlc_VOG25_AK
			{
				magazine = "hlc_VOG25_AK";
				count = 20;
			};
			class _xx_hlc_GRD_White
			{
				magazine = "hlc_GRD_White";
				count = 20;
			};
			class _xx_hlc_GRD_red
			{
				magazine = "hlc_GRD_red";
				count = 20;
			};
			class _xx_hlc_GRD_green
			{
				magazine = "hlc_GRD_green";
				count = 20;
			};
			class _xx_hlc_GRD_blue
			{
				magazine = "hlc_GRD_blue";
				count = 20;
			};
			class _xx_hlc_GRD_orange
			{
				magazine = "hlc_GRD_orange";
				count = 20;
			};
			class _xx_hlc_GRD_purple
			{
				magazine = "hlc_GRD_purple";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_ak74
			{
				weapon = "hlc_rifle_ak74";
				count = 10;
			};
			class _xx_hlc_rifle_aks74
			{
				weapon = "hlc_rifle_aks74";
				count = 10;
			};
			class _xx_hlc_rifle_aks74u
			{
				weapon = "hlc_rifle_aks74u";
				count = 10;
			};
			class _xx_hlc_rifle_ak47
			{
				weapon = "hlc_rifle_ak47";
				count = 10;
			};
			class _xx_hlc_rifle_akm
			{
				weapon = "hlc_rifle_akm";
				count = 10;
			};
			class _xx_hlc_rifle_rpk
			{
				weapon = "hlc_rifle_rpk";
				count = 10;
			};
			class _xx_hlc_rifle_ak12
			{
				weapon = "hlc_rifle_ak12";
				count = 10;
			};
			class _xx_hlc_rifle_akmgl
			{
				weapon = "hlc_rifle_akmgl";
				count = 10;
			};
			class _xx_hhlc_rifle_aks74_GL
			{
				weapon = "hlc_rifle_aks74_GL";
				count = 10;
			};
			class _xx_hhlc_rifle_aek
			{
				weapon = "hlc_rifle_aek971";
				count = 10;
			};
			class _xx_hhlc_rifle_s12jk
			{
				weapon = "hlc_rifle_saiga12k";
				count = 10;
			};
		};
		class TransportItems
		{
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
			class _xx_optic_hamr
			{
				name = "optic_hamr";
				count = 10;
			};
			class _xx_optic_rco
			{
				name = "optic_rco";
				count = 10;
			};
			class _xx_HLC_Optic_PSO1
			{
				name = "HLC_Optic_PSO1";
				count = 10;
			};
			class _xx_HLC_Optic_1p29
			{
				name = "HLC_Optic_1p29";
				count = 10;
			};
			class _xx_hlc_muzzle_545SUP_AK
			{
				name = "hlc_muzzle_545SUP_AK";
				count = 10;
			};
			class _xx_hlc_muzzle_762SUP_AK
			{
				name = "hlc_muzzle_762SUP_AK";
				count = 10;
			};
			class _xx_hlc_optic_kobra
			{
				name = "hlc_optic_kobra";
				count = 10;
			};
			class _xx_hlc_optic_goshawk
			{
				name = "hlc_optic_goshawk";
				count = 10;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag
	{
		ammo = "B_12Gauge_Pellets";
		count = 10;
		descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
		displayname = "Saiga Mag (Buckshot) 10rnd 12 Gauge";
		initspeed = 700;
		lastroundstracer = 1;
		picture = "\hlc_wp_ak\tex\ui\m_saiga12k_buck_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "00-Buck";
	};
	class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag
	{
		ammo = "B_12Gauge_Slug";
		count = 10;
		descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
		displayname = "Saiga Mag (Slug) 10rnd 12 Gauge";
		initspeed = 700;
		lastroundstracer = 1;
		picture = "\hlc_wp_ak\tex\ui\m_saiga12k_slug_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "Slug";
	};
	class hlc_30Rnd_545x39_B_AK: 30Rnd_556x45_Stanag
	{
		ammo = "FH_545x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 5.45x39mm 7N6<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "AK-74 Mag (Ball) 30rnd 5.45mm";
		initspeed = 850;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "7N6 Ball";
	};
	class hlc_30Rnd_545x39_t_ak: hlc_30Rnd_545x39_B_AK
	{
		ammo = "FH_545x39_Tracer";
		descriptionshort = "Caliber: 5.45x39mm 7T3<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "AK-74 Mag (Tracer) 30rnd 5.45mm";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 1;
		mass = 12;
		displaynameshort = "7T3 Tracer ";
		picture = "\hlc_core\tex\ui\ammo\m_ak74tracer_ca.paa";
	};
	class hlc_45Rnd_545x39_t_rpk: hlc_30Rnd_545x39_t_ak
	{
		ammo = "FH_545x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 5.45x39mm 7T3/7N6<br />Rounds: 45<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "RPK-74 Mag (Tracer) 45rnd 5.45mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 14;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
	};
	class hlc_30Rnd_545x39_EP_ak: hlc_30Rnd_545x39_B_AK
	{
		ammo = "FH_545x39_EP";
		descriptionshort = "Caliber: 5.45x39mm 7N24<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "AK-74 Mag (Enhanced Peneterator) 30rnd 5.45mm";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "7N24 Ball";
		initspeed = 930;
		picture = "\hlc_core\tex\ui\ammo\m_ak74ep_ca.paa";
	};
	class hlc_30Rnd_762x39_b_ak: 30Rnd_556x45_Stanag
	{
		ammo = "HLC_762x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231 (M43 Ball) AK47 Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "AK-47 Mag (Ball) 30rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 13;
		displaynameshort = "Ball";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
		initspeed = 715;
	};
	class hlc_30Rnd_762x39_t_ak: hlc_30Rnd_762x39_b_ak
	{
		ammo = "HLC_762x39_Tracer";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231P (Tracer) AK47 Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "AK-47 Mag (Tracer) 30rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 13;
		displaynameshort = "Tracer";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_t_ca.paa";
		initspeed = 715;
	};
	class hlc_45Rnd_762x39_t_rpk: 30Rnd_556x45_Stanag
	{
		ammo = "HLC_762x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231P (Tracer) RPK Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "RPK Mag (Tracer) 45rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 16;
		displaynameshort = "Tracer";
		picture = "\hlc_wp_ak\tex\ui\m_rpk_tracer_ca.paa";
		initspeed = 745;
	};
	class hlc_45Rnd_762x39_m_rpk: hlc_45Rnd_762x39_t_rpk
	{
		ammo = "HLC_762x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231 (Tracer) RPK Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "RPK Mag (Mixed) 45rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 16;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
		initspeed = 745;
	};
	class hlc_75Rnd_762x39_m_rpk: hlc_45Rnd_762x39_m_rpk
	{
		count = 75;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231 (Tracer) RPK Magazine <br />Rounds: 75<br />Used in: RPK";
		displayname = "RPK Drum (Mixed) 75rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 32;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
		initspeed = 745;
	};
	class 1Rnd_HE_Grenade_shell;
	class hlc_VOG25_AK: 1Rnd_HE_Grenade_shell
	{
		ammo = "G_40mm_HE";
		count = 1;
		descriptionshort = "Type: High Explosive Grenade Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "VOG25 HE Grenade Round";
		displaynameshort = "HE Grenade";
		initspeed = 76;
		mass = 4;
		namesound = "";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		reloadaction = "HLC_GestureReloadGP30";
		scope = 2;
		type = 16;
	};
	class hlc_GRD_White: 1Rnd_HE_Grenade_shell
	{
		ammo = "G_40mm_Smoke";
		descriptionshort = "Type: Smoke Round - White<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (White)";
		displaynameshort = "White Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		reloadaction = "HLC_GestureReloadGP30";
	};
	class hlc_GRD_Red: hlc_GRD_White
	{
		ammo = "G_40mm_SmokeRed";
		descriptionshort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Red)";
		displaynameshort = "Red Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
	};
	class hlc_GRD_green: hlc_GRD_White
	{
		ammo = "G_40mm_SmokeGreen";
		descriptionshort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Green)";
		displaynameshort = "Green Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
	};
	class hlc_GRD_yellow: hlc_GRD_White
	{
		ammo = "G_40mm_SmokeYellow";
		descriptionshort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Yellow)";
		displaynameshort = "Yellow Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
	};
	class hlc_GRD_orange: hlc_GRD_White
	{
		ammo = "G_40mm_SmokeOrange";
		descriptionshort = "Type: Smoke Round - Orange<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Orange)";
		displaynameshort = "Orange Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
	};
	class hlc_GRD_purple: hlc_GRD_White
	{
		ammo = "G_40mm_SmokePurple";
		descriptionshort = "Type: Smoke Round - Purple<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Purple)";
		displaynameshort = "Purple Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
	};
	class hlc_GRD_blue: hlc_GRD_White
	{
		ammo = "G_40mm_SmokeBlue";
		descriptionshort = "Type: Smoke Round - Blue<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Blue)";
		displaynameshort = "Blue Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
	};
};
class CfgWeapons
{
	class Rifle;
	class WeaponSlotsInfo;
	class optic_Hamr;
	class LMG_Zafir_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class optic_dms;
	class HLC_Optic_PSO1: optic_dms
	{
		descriptionshort = "PSO1 Optical Sniper Sight<br />Magnification: 4x";
		displayname = "PSO-1M";
		model = "\hlc_wp_ak\mesh\pso1\pso1.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_pso1_x_ca";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\hlc_wp_ak\mesh\pso1\pso_optics";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					discreteDistance[] = {400};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Snip_ILLUM
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					discreteDistance[] = {400};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics_illum"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class HLC_Optic_1p29: HLC_Optic_PSO1
	{
		descriptionshort = "1P29 Combat Optic<br />Magnification: 4x";
		displayname = "1P29";
		model = "\hlc_wp_ak\mesh\1p29\1p29.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_1p29_ca";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\hlc_wp_ak\mesh\1p29\1p29_optics";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\1p29\1p29_optics"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class muzzle_snds_H;
	class hlc_muzzle_545SUP_AK: muzzle_snds_H
	{
		displayName = "PBS4 AK Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\hlc_wp_ak\mesh\PBS4\pbs4";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 0.6;
			};
			class AmmoCoef
			{
				hit = 0.9;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 0.6;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			modes[] = {"FullAuto","Single","Burst","DummyMode1","DummyMode2","DummyMode3","DummyMode4","DummyMode5"};
			class Single: Mode_SemiAuto
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				begin3[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				reloadTime = 0.086;
				recoil = "recoil_auto_mk20";
				recoilProne = "recoil_auto_prone_mk20";
				weaponSoundEffect = "DefaultRifle";
			};
			class FullAuto: Mode_FullAuto
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				begin3[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				reloadTime = 0.086;
				recoil = "recoil_auto_mk20";
				recoilProne = "recoil_auto_prone_mk20";
				weaponSoundEffect = "DefaultRifle";
			};
			class Burst: Mode_Burst
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				begin3[] = {"\hlc_wp_ak\snd\ak74_sil",1.0,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				reloadTime = 0.086;
				recoil = "recoil_auto_mk20";
				recoilProne = "recoil_auto_prone_mk20";
				weaponSoundEffect = "DefaultRifle";
			};
			class DummyMode1: Single{};
			class DummyMode2: Single{};
			class DummyMode3: Single{};
			class DummyMode4: Single{};
			class DummyMode5: Single{};
		};
	};
	class hlc_muzzle_762SUP_AK: hlc_muzzle_545SUP_AK
	{
		displayName = "PBS1 AK Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\hlc_wp_ak\mesh\PBS1\pbs1";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 0.6;
			};
			class AmmoCoef
			{
				hit = 0.9;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 0.6;
				airFriction = 1.0;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			modes[] = {"FullAuto","Single","Burst","DummyMode1","DummyMode2","DummyMode3","DummyMode4","DummyMode5"};
			class Single: Mode_SemiAuto
			{
				begin1[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				begin2[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				begin3[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				recoil = "recoil_auto_mx";
				recoilProne = "recoil_auto_prone_mx";
				reloadTime = 0.097;
				weaponSoundEffect = "DefaultRifle";
			};
			class FullAuto: Mode_FullAuto
			{
				begin1[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				begin2[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				begin3[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				recoil = "recoil_auto_mx";
				recoilProne = "recoil_auto_prone_mx";
				reloadTime = 0.097;
				weaponSoundEffect = "DefaultRifle";
			};
			class Burst: Mode_Burst
			{
				begin1[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				begin2[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				begin3[] = {"\hlc_wp_ak\snd\ak47_sil",1.0,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				recoil = "recoil_auto_mx";
				recoilProne = "recoil_auto_prone_mx";
				reloadTime = 0.097;
				weaponSoundEffect = "DefaultRifle";
			};
			class DummyMode1: Single{};
			class DummyMode2: Single{};
			class DummyMode3: Single{};
			class DummyMode4: Single{};
			class DummyMode5: Single{};
		};
	};
	class hlc_ak_base: Rifle_Base_F
	{
		scope = 1;
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_EP_AK","hlc_45Rnd_545x39_t_rpk"};
		class Library
		{
			libTextDesc = "AK-74";
		};
		reloadAction = "HLC_GestureReloadAK";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 33;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_545SUP_AK"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
		handAnim[] = {"OFP2_ManSkeleton","hlc_core\animation\oldgesture\ak74_hands.rtm"};
		dexterity = 1.8;
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
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.000654498;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.000654498;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		drysound[] = {"hlc_core\sound\empty_assaultrifles.wav",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak74m_reload",0.74,1,30};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		scope = 2;
		displayName = "AK-74";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		bg_bipod = 0;
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		drysound[] = {"hlc_core\sound\empty_assaultrifles.wav",1.01,1,10};
		handAnim[] = {"OFP2_ManSkeleton","hlc_core\animation\oldgesture\ak74_hands.rtm"};
		changeFiremodeSound[] = {"hlc_wp_ak\snd\ak_selector",1,1,20};
		class Single: Mode_SemiAuto
		{
			airateoffire = "1e-006";
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.000654498;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			airateoffire = "1e-006";
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.000654498;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 33;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak74m_reload",0.74,1,30};
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		reloadAction = "HLC_GestureReloadAK";
		scope = 2;
		model = "\hlc_wp_ak\mesh\aks74\aks74.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "AKS-74";
		discretedistance[] = {100,200,300,400,500};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		drysound[] = {"\hlc_core\sound\empty_assaultrifles.wav",1,1,10};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
	};
	class optic_ACO_grn;
	class hlc_optic_kobra: optic_ACO_grn
	{
		descriptionshort = "Open Face Collimator Optic";
		displayname = "Kobra Sight";
		model = "\hlc_wp_ak\mesh\Kobra\kobra.p3d";
		picture = "\A3\weapons_F\Data\UI\gear_acco_aco_CA.paa";
		scope = 2;
		weaponinfotype = "RscWeaponZeroing";
	};
	class hlc_optic_goshawk: optic_ACO_grn
	{
		scope = 2;
		displayName = "Goshawk";
		descriptionshort = "Goshawk Adaptable Thermal Optic<br />Magnification: 3.6x";
		picture = "\hlc_wp_ak\tex\ui\gear_goshawk_ca.paa";
		model = "\hlc_wp_ak\mesh\goshawk\goshawk.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			modelOptics = "\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d";
			class OpticsModes
			{
				class Goshawk_TI
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = 0.06944444;
					opticsZoomMax = 0.06944444;
					opticsZoomInit = 0.06944444;
					distanceZoomMin = 300;
					distanceZoomMax = 2200;
					opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
					discreteDistanceInitIndex = 1;
					modelOptics[] = {"\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d"};
					memoryPointCamera = "eye2";
					visionmode[] = {"Ti","Normal"};
					thermalMode[] = {0,1};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "eye";
				};
			};
		};
	};
	class hlc_rifle_ak12: hlc_rifle_aks74
	{
		scope = 2;
		displayName = "AK-12";
		model = "\hlc_wp_ak\mesh\ak12\ak12.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak12_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		bg_bipod = 0;
		drysound[] = {"\hlc_core\sound\empty_assaultrifles.wav",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak12_reload",0.74,1,30};
		modes[] = {"Burst","Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_ak12.rtm"};
		reloadAction = "HLC_GestureReloadAK12";
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000654498;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.00062541;
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.06;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.00062541;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_mk20";
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Library
		{
			libTextDesc = "AK-12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 40;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_545SUP_AK"};
			};
			class asdg_OpticRail_AK12: asdg_OpticRail1913{};
			class asdg_FrontSideRail_AK12: asdg_FrontSideRail{};
			class CowsSlot{};
		};
	};
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
		scope = 2;
		displayName = "AKS-74U";
		model = "\hlc_wp_ak\mesh\millaks74u\aks74u.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74u_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		drysound[] = {"hlc_core\sound\empty_assaultrifles.wav",1,1,10};
		discretedistance[] = {350,500};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.086;
			begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000972294;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.086;
			begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000972294;
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
		};
		class Library
		{
			libTextDesc = "AKS-74U";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 27;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
	};
	class hlc_rifle_ak47: hlc_rifle_aks74
	{
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK"};
		displayName = "AK-47";
		model = "\hlc_wp_ak\mesh\ak47\ak47.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak47_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		drysound[] = {"\hlc_core\sound\empty_assaultrifles.wav",1,1,10};
		discretedistance[] = {100,200,300,500,600,700,800,900,1000};
		discretedistanceinitindex = 2;
		bg_bipod = 0;
		descriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak47_reload",0.74,1,30};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.097;
			begin1[] = {"\hlc_wp_ak\snd\ak47_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak47_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.097;
			begin1[] = {"\hlc_wp_ak\snd\ak47_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak47_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			recoil = "recoil_single_mx";
			recoilprone = "recoil_single_prone_mx";
		};
		class Library
		{
			libTextDesc = "AK-47 (Type 1)";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 27;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_762SUP_AK"};
			};
		};
	};
	class hlc_rifle_akm: hlc_rifle_ak47
	{
		model = "\hlc_wp_ak\mesh\akm\akm.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_akm_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "AKM";
		descriptionShort = "Assault rifle,Grenade Launcher<br/>Caliber: 7.62mm";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
	};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		model = "\hlc_wp_ak\mesh\akmgl\akm.p3d";
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp.rtm"};
		displayName = "AKM (GL)";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		muzzles[] = {"this","hlc_GP25_AKM"};
		class hlc_GP25_AKM: UGL_F
		{
			cameradir = "GL_Look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"GL_Eye1","GL_Eye2","GL_Eye3","GL_Eye4"};
			discreteDistanceInitIndex = 1;
			displayname = "GP25";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,400};
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = {"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange"};
			opticszoominit = 0.75;
			opticszoommax = 1.1;
			opticszoommin = 0.375;
			reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload",0.1,1,20};
			reloadtime = 0.1;
			sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
			weaponinfotype = "RscWeaponZeroing";
		};
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		reloadAction = "HLC_GestureReloadRPK";
		scope = 2;
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak"};
		model = "\hlc_wp_ak\mesh\rpk\rpk.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "RPK";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 0;
		bg_bipod = 1;
		descriptionShort = "Light Support Weapon<br/>Caliber: 7.62mm";
		drysound[] = {"\hlc_core\sound\empty_assaultrifles.wav",1,1,10};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\rpk_reload_me",0.74,1,30};
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\rpk_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\rpk_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\rpk_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\rpk_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			recoil = "recoil_single_mx";
			recoilprone = "recoil_single_prone_mx";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 48;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_762SUP_AK"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		model = "\hlc_wp_ak\mesh\aks74gl\aks74gl.p3d";
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp25.rtm"};
		displayName = "AKS-74(GL)";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74gl_x_ca";
		drysound[] = {"hlc_core\sound\empty_assaultrifles.wav",1,1,10};
		muzzles[] = {"this","hlc_GP30_AKS74"};
		bg_bipod = 0;
		class hlc_GP30_AKS74: UGL_F
		{
			cameradir = "GL Look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"GL Eye1","GL Eye2","GL Eye3","GL Eye4"};
			discreteDistanceInitIndex = 1;
			displayname = "GP30";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,400};
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = {"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange"};
			opticszoominit = 0.75;
			opticszoommax = 1.1;
			opticszoommin = 0.375;
			reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload",0.1,1,20};
			reloadtime = 0.1;
			sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
			weaponinfotype = "RscWeaponZeroing";
			class WeaponSlotsInfo: WeaponSlotsInfo
			{
				class MuzzleSlot: SlotInfo
				{
					linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
					compatibleItems[] = {"hlc_muzzle_545SUP_AK"};
				};
				class CowsSlot: CowsSlot
				{
					compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
				};
			};
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		scope = 2;
		displayName = "ZID AEK-971S";
		model = "\hlc_wp_ak\mesh\aek971\aek971.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aek_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		drysound[] = {"hlc_core\sound\empty_assaultrifles.wav",1,1,10};
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		modes[] = {"FullAuto","Burst","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.0681;
			begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.0005563233;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.0681;
			begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.0005563233;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_mk20";
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.0681;
			begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.0005563233;
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
		};
		class Library
		{
			libTextDesc = "ZID AEK-971S";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 33;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
	};
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
		reloadAction = "HLC_GestureReloadRPK";
		scope = 2;
		magazines[] = {"hlc_10rnd_12g_buck_S12","hlc_10rnd_12g_slug_S12"};
		model = "\hlc_wp_ak\mesh\saiga\saiga12k.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_saiga_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "Saiga12K";
		discretedistance[] = {100,200,300,400};
		discretedistanceinitindex = 0;
		descriptionShort = "Shotgun<br/>Caliber:12 Gauge";
		bg_bipod = 1;
		drysound[] = {"\hlc_core\sound\empty_shotguns.wav",1,1,10};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\saiga_reload",0.74,1,30};
		modes[] = {"Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\saiga_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\saiga_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.001666789;
			recoil = "recoil_single_gm6";
			recoilprone = "recoil_single_prone_gm6";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 48;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
	};
};