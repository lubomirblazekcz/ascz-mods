class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		UAZ_Driver = "UAZ_Driver";
		UAZ_Gunner01 = "UAZ_Gunner01";
		UAZ_Gunner02 = "UAZ_Gunner02";
		UAZ_Cargo01 = "UAZ_Cargo01";
		UAZ_Cargo02 = "UAZ_Cargo02";
		SPG_Car_Gunner = "SPG_Car_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Stryker_Dead: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\Stryker_Dead.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class Crew;
		class KIA_UAZ_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\KIA_UAZ_Driver.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class UAZ_Driver: Crew
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Driver.rtm";
			interpolateTo[] = {"KIA_UAZ_Driver",1};
		};
		class UAZ_Gunner01: Crew
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Gunner01.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
		class UAZ_Gunner02: Crew
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Gunner02.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
		class KIA_UAZ_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\KIA_UAZ_Cargo01.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class UAZ_Cargo01: Crew
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1,"UAZ_Cargo01_V1",0.1,"UAZ_Cargo01_V2",0.1,"UAZ_Cargo01_V3",0.1};
			equivalentTo = "UAZ_Cargo01";
			variantsAI[] = {"UAZ_Cargo01",0.6,"UAZ_Cargo01_V1",0.1,"UAZ_Cargo01_V2",0.15,"UAZ_Cargo01_V3",0.07};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UAZ_Cargo01_V1: UAZ_Cargo01
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class UAZ_Cargo01_V2: UAZ_Cargo01
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1};
			variantAfter[] = {2.5,2.5,2.5};
			speed = 0.39;
		};
		class UAZ_Cargo01_V3: UAZ_Cargo01
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Cargo01_V3.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class KIA_UAZ_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Cargo01_V0.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class UAZ_Cargo02: Crew
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo02",0.1};
		};
		class SPG_Car_Gunner: Crew
		{
			file = "\HAFM_ArmA2_East_Wheeled\UAZ\data\anim\UAZ_spg9_gunner.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
	};
};
class DefaultEventhandlers;
class CfgPatches
{
	class HAFM_UAZ_fix
	{
		units[] = {"UAZ_Unarmed","UAZ_MG","UAZ_AGS30","UAZ_SPG9"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HAFM_UAZ"};
	};
};
class CfgVehicleClasses
{
	class HAFM_UAZ_OPF
	{
		displayName = "UAZ";
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class cfgWeapons
{
	class Default;
	class MGunCore;
	class MGun;
	class LauncherCore;
	class RocketPods;
	class MissileLauncher;
	class missiles_titan;
	class DSHKM: MGun
	{
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1.0,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1.0,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1.0,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1.0,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1.0,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1.0,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1.0,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1.0,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1",1.0,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2",1.0,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3",1.0,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4",1.0,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "DSHKM";
		magazines[] = {"100Rnd_127x107_DSHKM"};
		magazineReloadTime = 5;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "DSHKM";
			autoFire = 1;
			sound[] = {"A3\Sounds_F\weapons\HMG\HMG_gun",1.5848932,1.1,1100};
			reloadTime = 0.1;
			dispersion = 0.0015;
			showToPlayer = "true";
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = "false";
			soundBurst = "false";
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
		};
	};
	class SPG9: missiles_titan
	{
		scope = 1;
		displayName = "SPG9";
		modelOptics = "";
		magazines[] = {"PG9_AT","OG9_HE"};
		reloadTime = 3;
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		cursorSize = 1;
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class VehicleMagazine;
	class CA_LauncherMagazine;
	class Titan_AP;
	class Titan_AT;
	class 100Rnd_127x107_DSHKM: VehicleMagazine
	{
		scope = 2;
		displayName = "100Rnd 127x107";
		ammo = "B_127x107_Ball";
		count = 100;
		initSpeed = 850;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
	};
	class PG9_AT: Titan_AT
	{
		scope = 2;
		displayName = "PG9";
		ammo = "R_PG9_AT";
		count = 4;
	};
	class OG9_HE: Titan_AP
	{
		scope = 2;
		displayName = "OG9";
		ammo = "R_OG9_HE";
		count = 4;
	};
};
class CfgAmmo
{
	class Default;
	class BulletBase;
	class BulletCore;
	class RocketCore;
	class RocketBase;
	class MissileBase;
	class M_Titan_AT;
	class M_Titan_AP;
	class B_127x107_Ball: BulletBase
	{
		hit = 28;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 20;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 20;
		airLock = 1;
		caliber = 2.07;
		deflecting = 30;
		typicalSpeed = 400;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		airFriction = -0.0006;
	};
	class R_PG9_AT: M_Titan_AT{};
	class R_OG9_HE: M_Titan_AP{};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class HAFM_UAZ_Base: Car_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "UAZ";
		scope = 0;
		model = "\HAFM_ArmA2_East_Wheeled\UAZ\uaz_mg";
		displayName = "UAZ";
		vehicleClass = "HAFM_UAZ_OPF";
		picture = "\HAFM_ArmA2_East_Wheeled\UAZ\data\ico\uaz_mg_CA.paa";
		Icon = "\HAFM_ArmA2_East_Wheeled\UAZ\data\ico\icomap_Uaz_mg_CA.paa";
		mapSize = 4;
		accuracy = 0.25;
		crew = "O_Soldier_F";
		side = 0;
		faction = "OPF_F";
		unitInfoType = "UnitInfoShip";
		driverAction = "UAZ_Driver";
		cargoAction[] = {"UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo02","UAZ_Cargo01","UAZ_Cargo02"};
		gunnerOpticsShowCursor = "true";
		threat[] = {0.5,0.5,0.1};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		antiRollbarForceCoef = 0.5;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		crewVulnerable = 1;
		crewCrashProtection = 0.15;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		armor = 70;
		damageResistance = 0.00562;
		turnCoef = 2.5;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1.0;
		terrainCoef = 1.5;
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		wheelCircumference = 2.51;
		cost = 200000;
		precision = 15;
		armorGlass = 0.5;
		soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
		soundEnviron[] = {"",0.56234133,1};
		transportMaxBackpacks = 5;
		transportSoldier = 6;
		transportAmmo = 0;
		maxSpeed = 90;
		armorWheels = 0.12;
		soundGear[] = {"",0.0005623413,1};
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.475,"N",0,"D1",2.367,"D2",1.67,"D3",1.238,"D4",0.99,"D5",0.802,"D6",0.601};
			TransmissionRatios[] = {"High",6.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 3.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 15.0;
		enginePower = 83.5;
		maxOmega = 720;
		peakTorque = 350;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{ 0.0,0.0 },{ 0.25,0.65 },{ 0.3,0.8 },{ 0.5,0.95 },{ 0.7,1.0 },{ 0.8,0.9 },{ 0.9,0.8 },{ 1.0,0.5 }};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.126";
				mass = 25;
				MOI = 1.6;
				dampingRate = 0.1;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.15;
				sprungMass = 477.5;
				springStrength = 52600;
				springDamperRate = 8680;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3500;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = "true";
				forceHideGunner = 0;
				castGunnerShadow = 1;
				viewGunnerInExternal = "true";
				gunnerForceOptics = 0;
				weapons[] = {"DShKM"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				magazines[] = {"100Rnd_127x107_DSHKM","100Rnd_127x107_DSHKM","100Rnd_127x107_DSHKM","100Rnd_127x107_DSHKM"};
				gunnerAction = "UAZ_Gunner01";
				gunnerInAction = "UAZ_Gunner01";
				ejectDeadGunner = "true";
				minElev = -25;
				maxElev = 60;
				stabilizedInAxes = "StabilizedInAxesNone";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.38;
			};
			class HitLBWheel: HitLF2Wheel
			{
				armor = 0.38;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.38;
			};
			class HitRBWheel: HitRF2Wheel
			{
				armor = 0.38;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\dshk.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\dshk_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\dshk_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\HAFM_ArmA2_East_Wheeled\UAZ\data\Uaz_main_CO.paa","\HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_mount_co.paa"};
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose",0.4466836,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose",0.4466836,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_start",0.31622776,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_start",0.39810717,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_stop",0.31622776,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_stop",0.39810717,1.0,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.0,1,150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.0,1,150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.0,1,150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.0,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.0,1,100};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.0,1,100};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.0,1,100};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.0,1,100};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.0,1,100};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.0,1,100};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.0,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.0,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.0,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_idle",0.31622776,1,100};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm1",0.31622776,1,200};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm2",0.35481337,1,225};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm3",0.35481337,1,250};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm4",0.39810717,1,275};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm5",0.4466836,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm6",0.5011872,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm7",0.56234133,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_idle",0.5011872,1,200};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm1",0.56234133,1,250};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm2",0.63095737,1,275};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm3",0.70794576,1,300};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm4",0.7943282,1,325};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm5",0.8912509,1,350};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm6",1.0,1,375};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm7",1.1220185,1,400};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_idle",0.2238721,1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm1",0.25118864,1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm2",0.17782794,1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm3",0.31622776,1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm4",0.35481337,1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm5",0.39810717,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm6",0.39810717,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm7",0.4466836,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_idle",0.31622776,1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm1",0.35481337,1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm2",0.39810717,1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm3",0.4466836,1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm4",0.5011872,1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm5",0.56234133,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm6",0.63095737,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm7",0.70794576,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.56234133,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.15848932,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
		};
		class Library
		{
			libTextDesc = "UAZ";
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec R svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: Right
			{
				useFlare = 1;
				position = "P svetlo";
			};
			class Left2: Left
			{
				useFlare = 1;
				position = "L svetlo";
			};
		};
		aggregateReflectors[] = {{ "Left","Right","Left2","Right2" }};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
	};
	class UAZ_MG: HAFM_UAZ_Base
	{
		scope = 2;
		model = "\HAFM_ArmA2_East_Wheeled\UAZ\uaz_mg";
		picture = "\HAFM_ArmA2_East_Wheeled\uaz\data\ico\uaz_mg_ca.paa";
		Icon = "\HAFM_ArmA2_East_Wheeled\uaz\data\ico\icomap_uaz_mg_ca.paa";
		displayName = "UAZ_MG";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "DShKM";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "DShKM";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "DShKM";
			};
		};
	};
	class UAZ_AGS30: HAFM_UAZ_Base
	{
		scope = 2;
		model = "\HAFM_ArmA2_East_Wheeled\UAZ\uaz_granade";
		picture = "\HAFM_ArmA2_East_Wheeled\uaz\data\ico\uaz_granade_CA.paa";
		Icon = "\HAFM_ArmA2_East_Wheeled\uaz\data\ico\icomap_Uaz_gl_CA.paa";
		mapSize = 4;
		displayName = "UAZ_AGS";
		gunnerHasFlares = "true";
		class AnimationSources: AnimationSources
		{
			class belt_rotation
			{
				source = "reload";
				weapon = "GMG_40mm";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = "false";
				weapons[] = {"GMG_40mm"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				magazines[] = {"96Rnd_40mm_G_belt","96Rnd_40mm_G_belt"};
				gunnerAction = "UAZ_Gunner02";
				gunnerInAction = "UAZ_Gunner02";
				ejectDeadGunner = "true";
				gunnerOpticsModel = "\HAFM_ArmA2_East_Wheeled\UAZ\optika_AGS30";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\ags30.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\ags30.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\ags30_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\tripod_ags.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\tripod_ags.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\weapons\tripod_ags_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\HAFM_ArmA2_East_Wheeled\UAZ\data\Uaz_main_CO.paa","\HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_mount_co.paa"};
	};
	class UAZ_Unarmed: HAFM_UAZ_Base
	{
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor = 0.05;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 0.05;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 0.05;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 0.05;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
		};
		scope = 2;
		model = "\HAFM_ArmA2_East_Wheeled\UAZ\uaz";
		picture = "\HAFM_ArmA2_East_Wheeled\UAZ\data\ico\uaz_CA.paa";
		Icon = "\HAFM_ArmA2_East_Wheeled\UAZ\data\ico\icomap_Uaz_CA.paa";
		mapSize = 4;
		displayName = "UAZ Unarmed";
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_main_metal_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_other_metal_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_destruct.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_in.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_in_damage.rvmat","HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_skla_in_damage.rvmat"};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\HAFM_ArmA2_East_Wheeled\UAZ\data\Uaz_main_CO.paa"};
	};
	class UAZ_SPG9: HAFM_UAZ_Base
	{
		scope = 2;
		model = "\HAFM_ArmA2_East_Wheeled\UAZ\uaz_spg9";
		picture = "\HAFM_ArmA2_East_Wheeled\UAZ\data\ico\uaz_spg9_CA.paa";
		Icon = "\HAFM_ArmA2_East_Wheeled\UAZ\data\ico\icomap_Uaz_spg9_CA.paa";
		mapSize = 4;
		displayName = "UAZ_SPG";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = "false";
				weapons[] = {"SPG9"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				magazines[] = {"PG9_AT","OG9_HE"};
				gunnerAction = "SPG_Car_Gunner";
				gunnerInAction = "SPG_Car_Gunner";
				ejectDeadGunner = "true";
				gunnerOpticsModel = "\HAFM_ArmA2_East_Wheeled\UAZ\2Dscope_SPG_4";
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SPG9";
			};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\HAFM_ArmA2_East_Wheeled\UAZ\data\Uaz_main_CO.paa","\HAFM_ArmA2_East_Wheeled\UAZ\data\uaz_mount_co.paa"};
	};
};
