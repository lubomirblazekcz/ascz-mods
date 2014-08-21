#define true	1
#define false	0

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2

#define LockNo		0
#define LockCadet		1
#define LockYes		2

class CfgMovesBasic {
	class DefaultDie;	// External class reference
	
	class ManActions {
		Jackal_gunner_L2A1_BAF = "Jackal_gunner_L2A1_BAF";
		Jackal_gunner_GMG_BAF = "Jackal_gunner_GMG_BAF";
		Jackal_Cargo_BAF = "Jackal_Cargo_BAF";
		Jackal_driver_BAF = "Jackal_driver_BAF";
		Jackal_commander_BAF = "Jackal_commander_BAF";
		LR_driver_EP1 = "LR_driver_EP1";
		LR_Cargo01_EP1 = "LR_Cargo01_EP1";
		LR_Cargo02_EP1 = "LR_Cargo02_EP1";
		LR_Cargo03_EP1 = "LR_Cargo03_EP1";
		LR_Cargo04_EP1 = "LR_Cargo04_EP1";
		LR_Cargo05_EP1 = "LR_Cargo05_EP1";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	class States {
		class Crew;	// External class reference
		//class Stryker_Dead;	// External class reference
		
		class Jackal_gunner_L2A1_BAF : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\data\Anim\Jackal_BAF_gunner_L2A1";
			interpolateTo[] = {"Jackal_KIA_Gunner_BAF", 1};
			speed = 1e+010;
		};
		
		class Jackal_gunner_GMG_BAF : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\Jackal_BAF_gunner_GMG";
			interpolateTo[] = {"Jackal_KIA_Gunner_BAF", 1};
			speed = 1e+010;
		};
		
		class Jackal_Cargo_BAF : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\Jackal_BAF_cargo";
			interpolateTo[] = {"Unconscious", 1};
			speed = 1e+010;
		};
		
		class Jackal_driver_BAF : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\Jackal_BAF_driver";
			interpolateTo[] = {"Jackal_KIA_Driver_BAF", 1};
			speed = 1e+010;
		};
		
		class Jackal_commander_BAF : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\Jackal_BAF_commander";
			interpolateTo[] = {"Jackal_KIA_Driver_BAF", 1};
			speed = 1e+010;
		};
		
		class Jackal_KIA_Driver_BAF : DefaultDie {
			actions = "DeadActions";
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\Jackal_KIA_Driver";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class Jackal_KIA_Gunner_BAF : DefaultDie {
			actions = "DeadActions";
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\Jackal_KIA_Gunner";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class LR_driver_EP1 : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\LR_driver";
			interpolateTo[] = {"KIA_LR_driver_EP1", 1};
			speed = 1e+010;
		};
		
		class KIA_LR_driver_EP1 : DefaultDie {
			actions = "DeadActions";
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\KIA_LR_driver";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class LR_Cargo01_EP1 : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\LR_Cargo01";
			interpolateTo[] = {"KIA_LR_Cargo01_EP1", 1};
			speed = 1e+010;
		};
		
		class KIA_LR_Cargo01_EP1 : DefaultDie {
			actions = "DeadActions";
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\KIA_LR_Cargo01";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class LR_Cargo02_EP1 : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\LR_Cargo02";
			interpolateTo[] = {"KIA_LR_Cargo02_EP1", 1};
			speed = 1e+010;
		};
		
		class KIA_LR_Cargo02_EP1 : DefaultDie {
			actions = "DeadActions";
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\KIA_LR_Cargo02";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class LR_Cargo03_EP1 : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\LR_Cargo03";
			interpolateTo[] = {"KIA_LR_Cargo03_EP1", 1};
			speed = 1e+010;
		};
		
		class KIA_LR_Cargo03_EP1 : DefaultDie {
			actions = "DeadActions";
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\KIA_LR_Cargo03";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class LR_Cargo04_EP1 : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\LR_Cargo04";
			interpolateTo[] = {"KIA_LR_Cargo04_EP1", 1};
			speed = 1e+010;
		};
		
		class KIA_LR_Cargo04_EP1 : DefaultDie {
			actions = "DeadActions";
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\KIA_LR_Cargo04";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class LR_Cargo05_EP1 : Crew {
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\LR_Cargo05";
			interpolateTo[] = {"KIA_LR_Cargo05_EP1", 1};
			speed = 1e+010;
		};
		
		class KIA_LR_Cargo05_EP1 : DefaultDie {
			actions = "DeadActions";
			file = "\HAFM_ArmA2_UK_Wheeled\Data\Anim\KIA_LR_Cargo05";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
	};
};

class CfgPatches {
	class HAFM_UK_WHEELED_fix {
		units[] = {"BAF_Offroad_D", "BAF_Jackal2_L2A1_D", "BAF_Jackal2_GMG_D", "BAF_Offroad_W", "BAF_Jackal2_L2A1_W", "BAF_Jackal2_GMG_W"};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"HAFM_UK_WHEELED"};
	};
};

class WeaponFireGun;	// External class reference
class WeaponCloudsGun;	// External class reference
class WeaponFireMGun;	// External class reference
class WeaponCloudsMGun;	// External class reference
class RCWSOptics;	// External class reference

class cfgWeapons {
	class Default;	// External class reference
	class MGunCore;	// External class reference
	class MGun;	// External class reference
	class HMG_M2;	// External class reference
	
	class BAF_L2A1 : HMG_M2 {};
	
	class M240_veh : MGun {
		class GunClouds {};
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1", 1.0, 1, 15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2", 1.0, 1, 15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3", 1.0, 1, 15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4", 1.0, 1, 15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1", 1.0, 1, 15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2", 1.0, 1, 15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3", 1.0, 1, 15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4", 1.0, 1, 15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1", 1.0, 1, 15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2", 1.0, 1, 15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3", 1.0, 1, 15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4", 1.0, 1, 15};
		soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		scope = protected;
		displayName = "M240 Vehicle";
		soundContinuous = 0;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		magazines[] = {"200Rnd_762x51_M240"};
		magazineReloadTime = 5;
		canLock = LockNo;
		modes[] = {"manual", "close", "short", "medium", "far"};
		
		class manual : MGun {
			displayName = $STR_DN_M240;
			autoFire = true;
			begin1[] = {"A3\sounds_f\weapons\M200\M200_st_1", 1.77828, 1, 1200};
			begin2[] = {"A3\sounds_f\weapons\M200\M200_st_2", 1.77828, 1, 1200};
			soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			reloadTime = 0.075;
			dispersion = 0.0012;
			showToPlayer = true;
			burst = 1;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		
		class short : close {
			burst = 8;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		
		class medium : close {
			burst = 4;
			aiRateOfFire = 3;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		
		class far : close {
			burst = 5;
			aiRateOfFire = 5;	// delay between shots at given distance
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	
	class BAF_M240_veh : M240_veh {};
};

class cfgMagazines {
	class Default;	// External class reference
	class CA_Magazine;	// External class reference
	class VehicleMagazine;	// External class reference
	
	class 200Rnd_762x51_M240 : VehicleMagazine {
		scope = public;
		displayName = "200Rnd M240 Mag";
		count = 200;
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		maxLeadSpeed = 200;	// max estimated speed km/h
		tracersEvery = 4;
		nameSound = "mgun";
	};
};

class cfgAmmo {
	class Default;	// External class reference
	class BulletBase;	// External class reference
	class BulletCore;	// External class reference
	
	class B_762x51_Ball : BulletBase {
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;	// how much is visible when this weapon is fired
		audibleFire = 18;
		visibleFireTime = 3;	// how long is it visible
		cost = 1.2;
		airLock = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.0009324;
	};
};

class CfgVehicles {
	class LandVehicle;	// External class reference
	
	class Car : LandVehicle {
		class NewTurret;	// External class reference
	};
	
	class Car_F : Car {
		class AnimationSources;	// External class reference
		
		class Turrets {
			class MainTurret : NewTurret {};
		};
		
		class HitPoints {
			class HitLFWheel;	// External class reference
			class HitLF2Wheel;	// External class reference
			class HitRFWheel;	// External class reference
			class HitRF2Wheel;	// External class reference
			class HitGlass1;	// External class reference
			class HitGlass2;	// External class reference
			class HitGlass3;	// External class reference
			class HitGlass4;	// External class reference
			class HitGlass5;	// External class reference
			class HitGlass6;	// External class reference
		};
	};
	
	class BAF_Offroad_D : Car_F {
		scope = public;
		side = TWest;
		faction = BLU_F;
		displayname = "Land Rover Desert";
		
		class Library {
			libTextDesc = "Land Rover";
		};
		model = "HAFM_ArmA2_UK_Wheeled\LR_covered_soft_BAF";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
		picture = "\HAFM_ArmA2_UK_Wheeled\data\UI\Picture_lr_CA.paa";
		Icon = "\HAFM_ArmA2_UK_Wheeled\data\UI\Icon_lr_transport_CA.paa";
		mapSize = 4;
		accuracy = 0.25;	// accuracy needed to recognize type of this target
		unitInfoType = "UnitInfoShip";
		driverAction = "LR_Driver_EP1";
		cargoAction[] = {"LR_Cargo01_EP1", "LR_Cargo02_EP1", "LR_Cargo03_EP1", "LR_Cargo05_EP1", "LR_Cargo04_EP1", "LR_Cargo02_EP1", "LR_Cargo03_EP1"};
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.5, 0.5, 0.1};

		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		crewVulnerable = true;
		crewCrashProtection = 0.15;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		damperSize = 0.2;	// max. damper amplitude
		damperForce = 1;	// larger number more stiffness dampers
		damperDamping = 1;	// larger number less movement in dampers
		armor = 50;
		damageResistance = 0.00562;
		turnCoef = 2.5;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1.0;	// vehicle movement precision
		terrainCoef = 1.5;
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		wheelCircumference = 2.51;
		cost = 200000;
		precision = 15;
		armorGlass = 0.5;
		soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
		soundEnviron[] = {"", 0.562341, 1};
		transportMaxBackpacks = 5;
		transportSoldier = 6;
		transportAmmo = 0;
		maxSpeed = 110;	// max speed on level road, km/h
		armorWheels = 0.12;
		soundGear[] = {"", db-65, 1};
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250;
		
		class complexGearbox {
			GearboxRatios[] = {"R1", -2.475, "N", 0, "D1", 2.367, "D2", 1.67, "D3", 1.238, "D4", 0.99, "D5", 0.802, "D6", 0.601};
			TransmissionRatios[] = {"High", 6.0};
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
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20.0;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0, 0.15}, {0.25, 0.65}, {0.35, 0.75}, {0.461, 1.0}, {0.6, 0.95}, {0.7, 0.85}, {0.8, 0.75}, {1.0, 0.5}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.31;
		latency = 1.0;
		
		class Wheels {
			class LF {
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.126;
				mass = 25;
				MOI = 12.8;
				dampingRate = 0.1;
				maxBrakeTorque = 10000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.05;
				mMaxDroop = 0.1;
				sprungMass = 825;
				springStrength = 51625;
				springDamperRate = 8920;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			
			class LR : LF {
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3500;
			};
			
			class RF : LF {
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			
			class RR : RF {
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3500;
			};
		};
		
		class HitPoints : HitPoints {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				passThrough = false;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = false;
			};
			
			class HitLFWheel : HitLFWheel {
				armor = 0.5;
			};
			
			class HitLBWheel : HitLF2Wheel {
				armor = 0.5;
			};
			
			class HitRFWheel : HitRFWheel {
				armor = 0.5;
			};
			
			class HitRBWheel : HitRF2Wheel {
				armor = 0.5;
			};
		};
		
		class Reflectors {
			class Left {
				color[] = {1900, 1300, 950};
				ambient[] = {5, 5, 5};
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
				
				class Attenuation {
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			
			class Right : Left {
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			
			class Right2 : Right {
				useFlare = 1;
				position = "P svetlo";
			};
			
			class Left2 : Left {
				useFlare = 1;
				position = "L svetlo";
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose", db-7, 1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose", db-7, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_start", 0.316228, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_start", 0.398107, 1.0, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_stop", 0.316228, 1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_stop", 0.398107, 1.0, 200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01", 1.0, 1, 150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02", 1.0, 1, 150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03", 1.0, 1, 150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04", 1.0, 1, 150};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01", 1.0, 1, 100};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02", 1.0, 1, 100};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03", 1.0, 1, 100};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04", 1.0, 1, 100};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05", 1.0, 1, 100};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06", 1.0, 1, 100};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01", 1.0, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02", 1.0, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03", 1.0, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04", 1.0, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		class Sounds {
			class Idle_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_idle", db-10, 1, 100};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			
			class Engine {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm1", db-10, 1, 200};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			
			class Engine1_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm2", db-9, 1, 225};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			
			class Engine2_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm3", db-9, 1, 250};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			
			class Engine3_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm4", 0.398107, 1, 275};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			
			class Engine4_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm5", db-7, 1, 300};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			
			class Engine5_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm6", db-6, 1, 300};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			
			class Engine6_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm7", 0.562341, 1, 300};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			
			class IdleThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_idle", db-6, 1, 200};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			
			class EngineThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm1", 0.562341, 1, 250};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			
			class Engine1_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm2", 0.630957, 1, 275};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			
			class Engine2_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm3", db-3, 1, 300};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			
			class Engine3_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm4", db-2, 1, 325};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			
			class Engine4_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm5", db-1, 1, 350};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			
			class Engine5_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm6", db0, 1, 375};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			
			class Engine6_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm7", db1, 1, 400};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			
			class Idle_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_idle", db-13, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			
			class Engine_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm1", db-12, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			
			class Engine1_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm2", db-15, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			
			class Engine2_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm3", db-10, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			
			class Engine3_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm4", db-9, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			
			class Engine4_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm5", 0.398107, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			
			class Engine5_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm6", 0.398107, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			
			class Engine6_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm7", db-7, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			
			class IdleThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_idle", db-10, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			
			class EngineThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm1", db-9, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			
			class Engine1_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm2", 0.398107, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			
			class Engine2_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm3", db-7, 1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			
			class Engine3_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm4", db-6, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			
			class Engine4_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm5", 0.562341, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			
			class Engine5_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm6", 0.630957, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			
			class Engine6_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm7", db-3, 1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			
			class TiresRockOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-3, 1.0, 60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-3, 1.0, 60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-3, 1.0, 60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-3, 1.0, 60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-3, 1.0, 60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-3, 1.0, 60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", 0.562341, 1.0, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			
			class TiresRockIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-16, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class breaking_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			
			class acceleration_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			
			class turn_left_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			
			class turn_right_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			
			class breaking_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class acceleration_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			
			class turn_left_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			
			class turn_right_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class breaking_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class acceleration_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			
			class turn_left_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			
			class turn_right_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class breaking_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class acceleration_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			
			class turn_left_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			
			class turn_right_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
		};
		
		class Turrets {};
		
		class Damage {
			tex[] = {};
			mat[] = {"HAFM_ArmA2_UK_Wheeled\Data\LR_base_baf.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\LR_base_baf_damage.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\LR_base_baf_destruct.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\LR_glass_baf.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\LR_glass_baf_damage.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\LR_glass_baf_destruct.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\LR_Special_baf.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\LR_Special_baf_damage.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\LR_Special_baf_destruct.rvmat"};
		};
		
		class RenderTargets {
			class LeftMirror {
				renderTarget = "rendertarget0";
				
				class CameraView1 {
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			
			class RightMirror {
				renderTarget = "rendertarget1";
				
				class CameraView1 {
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			
			class FrontCam {
				renderTarget = "rendertarget2";
				
				class CameraView1 {
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		supplyRadius = 5;
		transportMaxMagazines = 90;
	};
	
	class BAF_Offroad_W : BAF_Offroad_D {
		scope = public;
		displayname = "Land Rover Woodland";
		crew = "B_Soldier_F";
		model = "HAFM_ArmA2_UK_Wheeled\LR_covered_soft_BAF_w";
	};
	
	class BAF_Jackal2_BASE_D : Car_F {
		brakeDistance = 10;	// vehicle movement precision
		scope = private;
		side = TWest;
		faction = BLU_F;
		holdOffroadFormation = "true";
		enableManualFire = "false";
		displayname = JACKAL2_BASE;
		MapSize = 6;
		maxSpeed = 180;	// max speed on level road, km/h
		crewVulnerable = true;
		crewCrashProtection = 0.15;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.8, 0.6, 0.3};

		canFloat = true;
		waterAngularDampingCoef = 10.0;
		waterResistanceCoef = 0.5;
		waterLeakiness = 2.5;
		engineShiftY = 0.8;
		normalSpeedForwardCoef = 0.52;
		damperSize = 0.2;	// max. damper amplitude
		damperForce = 0.8;	// larger number more stiffness dampers
		damperDamping = 1;	// larger number less movement in dampers
		armor = 80;
		armorStructural = 2;
		damageResistance = 0.03099;
		precision = 15;
		turnCoef = 2.5;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		terrainCoef = 2.5;
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		cost = 500000;
		armorGlass = 0.5;
		armorWheels = 0.1;
		soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
		soundEnviron[] = {"", 0.562341, 1};
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 100;
		wheelCircumference = 3.895;
		antiRollbarForceCoef = 120;
		antiRollbarForceLimit = 80;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 120;
		idleRpm = 800;
		redRpm = 4500;
		
		class complexGearbox {
			GearboxRatios[] = {"R1", -3.182, "N", 0, "D1", 4.182, "D2", 2.318, "D3", 1.85, "D4", 1.65, "D5", 1.45};
			TransmissionRatios[] = {"High", 5.539};
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
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20.0;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0, 0.0}, {0.178, 0.5}, {0.25, 0.85}, {0.4, 0.9}, {0.5, 1.0}, {0.725, 0.95}, {0.85, 0.6}, {1.0, 0.3}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.31;
		latency = 1.0;
		
		class Wheels {
			class LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.2;
				mass = 150;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 22500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 2066;
				springStrength = 801234;
				springDamperRate = 80600.6;
				longitudinalStiffnessPerUnitGravity = 12000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			
			class LR : LF {
				boneName = "wheel_1_2";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 275000;
			};
			
			class RF : LF {
				boneName = "wheel_2_1";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			
			class RR : RF {
				boneName = "wheel_2_2";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 275000;
			};
		};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getin", 0.562341, 1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getout", 0.562341, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start", 0.354813, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start", 0.707946, 1.0, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop", 0.354813, 1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop", 0.707946, 1.0, 200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01", 1.0, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02", 1.0, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03", 1.0, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04", 1.0, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01", 1.0, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02", 1.0, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03", 1.0, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04", 1.0, 1, 200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05", 1.0, 1, 200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06", 1.0, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01", 1.0, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02", 1.0, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03", 1.0, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04", 1.0, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		class Sounds {
			class Idle_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle", 0.398107, 1, 150};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class Engine {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1", db-7, 1, 250};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2", 0.562341, 1, 300};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid", db-3, 1, 350};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high", db0, 1, 400};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			
			class IdleThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle", 0.562341, 1, 200};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class EngineThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1", db-3, 1, 350};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2", db-1, 1, 400};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid", db1, 1, 425};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high", db2, 1, 450};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			
			class Idle_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle", db-12, 1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class Engine_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1", db-10, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2", 0.398107, 1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid", db-6, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high", 0.630957, 1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			
			class IdleThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle", db-9, 1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class EngineThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1", db-7, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2", 0.562341, 1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid", db-3, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high", db-2, 1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			
			class TiresRockOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db3, 1.0, 60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db3, 1.0, 60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db2, 1.0, 60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db1, 1.0, 60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db2, 1.0, 60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db1, 1.0, 60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db1, 1.0, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			
			class TiresRockIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.562341, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class breaking_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			
			class acceleration_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			
			class turn_left_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			
			class acceleration_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			
			class turn_left_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			
			class acceleration_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			
			class turn_left_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			
			class acceleration_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			
			class turn_left_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		transportSoldier = 2;
		driverAction = "Jackal_Driver_BAF";
		cargoAction[] = {"Jackal_Cargo_BAF", "Jackal_Cargo_BAF"};
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F"};
		cargoIsCoDriver[] = {"false", "false"};
		ejectDeadGunner = "false";
		ejectDeadCargo = "false";
		ejectDeadDriver = "false";
		ejectDeadCommander = "false";
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		
		class HitPoints : HitPoints {
			class HitBody {
				armor = 0.7;
				material = 50;
				name = "karoserie";
				visual = "zbytek";
				passThrough = true;
			};
			
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				passThrough = false;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = false;
			};
			
			class HitLFWheel : HitLFWheel {
				armor = 0.5;
			};
			
			class HitLBWheel : HitLF2Wheel {
				armor = 0.5;
			};
			
			class HitRFWheel : HitRFWheel {
				armor = 0.5;
			};
			
			class HitRBWheel : HitRF2Wheel {
				armor = 0.5;
			};
		};
		
		class Turrets : Turrets {
			class M420_Turret : MainTurret {
				gunnerName = "Commander";
				primaryGunner = 0;
				primaryObserver = "true";
				commanding = 2;
				body = "mainTurret_2";
				gun = "mainGun_2";
				animationSourceBody = "mainTurret_2";
				animationSourceGun = "mainGun_2";
				proxyIndex = 2;
				gunBeg = "usti hlavne_2";	// endpoint of the gun
				gunEnd = "konec hlavne_2";	// chamber of the gun
				memoryPointGun = "gun_muzzle";
				selectionFireAnim = "zasleh_2";
				memoryPointGunnerOptics = "gunnerview_2";
				LODTurnedOut = 1100;
				LODTurnedIn = 1100;
				minElev = -18;
				maxElev = 40;
				minTurn = -35;
				maxTurn = 45;
				initTurn = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerForceOptics = false;
				weapons[] = {"BAF_M240_veh", "SmokeLauncher"};
				magazines[] = {"200Rnd_762x51_M240", "200Rnd_762x51_M240", "200Rnd_762x51_M240", "200Rnd_762x51_M240", "200Rnd_762x51_M240", "200Rnd_762x51_M240", "200Rnd_762x51_M240", "SmokeLauncherMag", "SmokeLauncherMag"};
				soundServo[] = {};
				gunnerAction = "Jackal_commander_BAF";
				gunnerInAction = "Jackal_commander_BAF";
				ejectDeadGunner = "false";
				stabilizedInAxes = "StabilizedInAxesNone";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				
				class ViewGunner : ViewOptics {};
			};
		};
		
		class AnimationSources : AnimationSources {
			class ReloadAnim_2 {
				source = "reload";
				weapon = "BAF_M240_veh";
			};
			
			class ReloadMagazine_2 {
				source = "reloadmagazine";
				weapon = "BAF_M240_veh";
			};
			
			class Revolving_2 {
				source = "revolving";
				weapon = "BAF_M240_veh";
			};
		};
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\HAFM_ArmA2_UK_Wheeled\Data\jackal_base_co.paa", "\HAFM_ArmA2_UK_Wheeled\Data\jackal_mount_co.paa", "\HAFM_ArmA2_UK_Wheeled\Data\jackal_adds_co.paa"};
		
		class Damage {
			tex[] = {};
			mat[] = {"HAFM_ArmA2_UK_Wheeled\Data\Jackal_adds.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\Jackal_adds_damage.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\Jackal_adds_destruct.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\Jackal_base.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\Jackal_base_damage.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\Jackal_base_destruct.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\Jackal_mount.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\Jackal_mount_damage.rvmat", "HAFM_ArmA2_UK_Wheeled\Data\Jackal_mount_destruct.rvmat"};
		};
		
		class Reflectors {
			class Left {
				color[] = {1900, 1300, 950};
				ambient[] = {5, 5, 5};
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
				
				class Attenuation {
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			
			class Right : Left {
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			
			class Right2 : Right {
				useFlare = 1;
				position = "P svetlo";
			};
			
			class Left2 : Left {
				useFlare = 1;
				position = "L svetlo";
			};
		};
		aggregateReflectors[] = {{"Left", "Right"}};
		
		class Exhausts {
			class Exhaust1 {
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		
		class RenderTargets {
			class LeftMirror {
				renderTarget = "rendertarget0";
				
				class CameraView1 {
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			
			class RightMirror {
				renderTarget = "rendertarget1";
				
				class CameraView1 {
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		transportMaxMagazines = 90;
		
		class NVGMarkers {
			class NVGMarker01 {
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = true;
			};
		};
	};
	
	class BAF_Jackal2_L2A1_D : BAF_Jackal2_BASE_D {
		scope = public;
		model = "HAFM_ArmA2_UK_Wheeled\Jackal_L2A1_BAF";
		displayname = "Jackal HMG Desert";
		
		class Library {
			libTextDesc = JACKAL2_L2A1_D;
		};
		Picture = "\HAFM_ArmA2_UK_Wheeled\Data\UI\Picture_Jackal_L2A1_CA.paa";
		Icon = "\HAFM_ArmA2_UK_Wheeled\Data\UI\Icon_Jackal_L2A1_CA.paa";
		
		class Turrets : Turrets {
			class M420_Turret : M420_Turret {};
			
			class M2_Turret : MainTurret {
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 800, 1000, 1200, 1500};
				discreteDistanceInitIndex = 1;
				gunnerForceOptics = false;
				gunnerOutOpticsShowCursor = "false";
				weapons[] = {BAF_L2A1};
				minElev = -25;
				maxElev = 40;
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
				magazines[] = {"100Rnd_127x99_mag_Tracer_red", "100Rnd_127x99_mag_Tracer_red", "100Rnd_127x99_mag_Tracer_red", "100Rnd_127x99_mag_Tracer_red", "100Rnd_127x99_mag_Tracer_red", "100Rnd_127x99_mag_Tracer_red"};
				gunnerAction = "Jackal_gunner_L2A1_BAF";
				ejectDeadGunner = "false";
				castGunnerShadow = true;
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "usti hlavne";	// endpoint of the gun
				gunEnd = "konec hlavne";	// chamber of the gun
				memoryPointGunnerOptics = "gunnerview";
				optics = "true";
				gunnerOpticsModel = "HAFM_ArmA2_UK_Wheeled\ACOG_optic";
				
				class ViewOptics {
					visionMode[] = {"Normal"};
					minElev = -25;
					maxElev = 40;
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.0623;
					minFov = 0.0623;
					maxFov = 0.0623;
				};
				
				class ViewGunner : ViewOptics {
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				
				class GunFire : WeaponCloudsMGun {
					interval = 0.01;
				};
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
			};
		};
		
		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = BAF_L2A1;
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = BAF_L2A1;
			};
			
			class Revolving {
				source = "revolving";
				weapon = BAF_L2A1;
			};
		};
	};
	
	class BAF_Jackal2_GMG_D : BAF_Jackal2_BASE_D {
		scope = public;
		model = "HAFM_ArmA2_UK_Wheeled\Jackal_GMG_BAF";
		displayname = "Jackal GMG Desert";
		
		class Library {
			libTextDesc = JACKAL2_GMG;
		};
		Picture = "\HAFM_ArmA2_UK_Wheeled\Data\UI\Picture_Jackal_GMG_CA.paa";
		Icon = "\HAFM_ArmA2_UK_Wheeled\Data\UI\Icon_Jackal_GMG_ca.paa";
		
		class Turrets : Turrets {
			class M420_Turret : M420_Turret {};
			
			class GMG_Turret : MainTurret {
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100, 200, 300, 400, 600, 800, 1000, 1200, 1500, 1800};
				discreteDistanceInitIndex = 1;
				gunnerForceOptics = false;
				gunnerOutOpticsShowCursor = "false";
				minElev = -25;
				maxElev = 40;
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
				weapons[] = {"GMG_40mm"};
				magazines[] = {"96Rnd_40mm_G_belt", "96Rnd_40mm_G_belt", "96Rnd_40mm_G_belt"};
				gunnerAction = "Jackal_gunner_GMG_BAF";
				ejectDeadGunner = "false";
				castGunnerShadow = true;
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "usti hlavne";	// endpoint of the gun
				gunEnd = "konec hlavne";	// chamber of the gun
				
				class GunFire : WeaponCloudsMGun {
					interval = 0.01;
				};
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGunnerOptics = "gunnerview";
				optics = "true";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_NLAW";
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				displayName = "";
				
				class ViewOptics {
					visionMode[] = {"Normal"};
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.0623;
					minFov = 0.0623;
					maxFov = 0.0623;
				};
			};
		};
		
		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = "GMG_40mm";
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = "GMG_40mm";
			};
			
			class Revolving {
				source = "revolving";
				weapon = "GMG_40mm";
			};
		};
	};
	
	class BAF_Jackal2_GMG_W : BAF_Jackal2_GMG_D {
		scope = public;
		model = "HAFM_ArmA2_UK_Wheeled\Jackal_GMG_BAF_w";
		displayname = "Jackal GMG Woodland";
		crew = "B_Soldier_F";
		hiddenSelectionsTextures[] = {"\HAFM_ArmA2_UK_Wheeled\Data\jackal_base_woodlnd_co.paa", "\HAFM_ArmA2_UK_Wheeled\Data\jackal_mount_woodlnd_co.paa", "\HAFM_ArmA2_UK_Wheeled\Data\jackal_adds_woodlnd_co.paa"};
	};
	
	class BAF_Jackal2_L2A1_W : BAF_Jackal2_L2A1_D {
		model = "HAFM_ArmA2_UK_Wheeled\Jackal_L2A1_BAF_w";
		scope = public;
		displayname = "Jackal HMG Woodland";
		crew = "B_Soldier_F";
		hiddenSelectionsTextures[] = {"\HAFM_ArmA2_UK_Wheeled\Data\jackal_base_woodlnd_co.paa", "\HAFM_ArmA2_UK_Wheeled\Data\jackal_mount_woodlnd_co.paa", "\HAFM_ArmA2_UK_Wheeled\Data\jackal_adds_woodlnd_co.paa"};
	};
};
