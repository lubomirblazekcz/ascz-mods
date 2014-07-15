////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.52
//Sat Jul 05 23:10:14 2014 : Source 'file' date Sat Jul 05 23:10:14 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class hafm_arma2_helis : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AH64_gunner_EP1 = "AH64_gunner_EP1";
		AH64_pilot_EP1 = "AH64_pilot_EP1";
		UH1H_Cargo_EP1 = "UH1H_Cargo_EP1";
		UH1H_Pilot_EP1 = "UH1H_Pilot_EP1";
		UH60M_Gunner_EP1 = "UH60M_Gunner_EP1";
		UH60M_Pilot_EP1 = "UH60M_Pilot_EP1";
		UH60M_Cargo_EP1 = "UH60M_Cargo_EP1";
		UH60_Cargo02 = "UH60_Cargo02";
		AH1Z_Pilot = "AH1Z_Pilot";
		AH1Z_Gunner = "AH1Z_Gunner";
		UH1Y_Pilot = "UH1Y_Pilot";
		UH1Y_Gunner = "UH1Y_Gunner";
		UH1Y_Gunner02 = "UH1Y_Gunner02";
		UH1Y_Cargo01 = "UH1Y_Cargo01";
		UH1Y_Cargo02 = "UH1Y_Cargo02";
		UH1Y_Cargo03 = "UH1Y_Cargo03";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AH64_gunner_EP1: Crew
		{
			file = "\hafm_arma2_helis\AH64\Anims\AH64_gunner.rtm";
			connectTo[] = {"KIA_AH64_gunner_EP1",1};
			speed = 1e+010;
		};
		class KIA_AH64_gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\AH64\Anims\KIA_AH64_gunner.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class AH64_pilot_EP1: Crew
		{
			file = "\hafm_arma2_helis\AH64\Anims\AH64_Pilot.rtm";
			connectTo[] = {"KIA_AH64_pilot_EP1",1};
			speed = 1e+010;
		};
		class KIA_AH64_pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\AH64\Anims\KIA_AH64_pilot.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1H_Cargo_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\UH1H_Cargo";
			connectTo[] = {"UH1H_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class UH1H_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\AH64\Anims\UH1H_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1H_Pilot_EP1: Crew
		{
			file = "\hafm_arma2_helis\AH64\Anims\UH1H_Pilot";
			connectTo[] = {"UH1H_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class UH60M_Gunner_EP1: Crew
		{
			file = "\hafm_arma2_helis\uh60m\Anims\UH60M_Gunner";
			connectTo[] = {"UH60M_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class UH60M_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\uh60m\Anims\UH60M_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH60M_Pilot_EP1: Crew
		{
			file = "\hafm_arma2_helis\uh60m\Anims\UH60M_Pilot";
			connectTo[] = {"UH60M_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class UH60M_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\uh60m\Anims\UH60M_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH60M_Cargo_EP1: Crew
		{
			file = "\hafm_arma2_helis\uh60m\Anims\UH60M_Pilot";
			connectTo[] = {"UH60M_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class UH60M_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\uh60m\Anims\UH60M_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH60_Cargo02: Crew
		{
			file = "\hafm_arma2_helis\uh60m\Anims\UH60_Cargo02_V0.rtm";
			connectTo[] = {"KIA_UH60_Cargo02",1};
			speed = 1e+010;
		};
		class KIA_UH60_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\uh60m\Anims\KIA_UH60_Cargo02.rtm";
			speed = 1e+010;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class AH1Z_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\ah1z\Anims\AH1Z_Dead.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class KIA_AH1Z_Pilot: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\hafm_arma2_helis\ah1z\Anims\KIA_AH1Z_Pilot.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class AH1Z_Pilot: Crew
		{
			file = "\hafm_arma2_helis\ah1z\Anims\AH1Z_Pilot.rtm";
			interpolateTo[] = {"KIA_AH1Z_Pilot",1};
		};
		class KIA_AH1Z_Gunner: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\hafm_arma2_helis\ah1z\Anims\KIA_AH1Z_Gunner.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class AH1Z_Gunner: Crew
		{
			file = "\hafm_arma2_helis\ah1z\Anims\AH1Z_Gunner.rtm";
			interpolateTo[] = {"KIA_AH1Z_Gunner",1};
		};
		class KIA_UH1Y_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\UH1Y\Anims\KIA_UH1Y_Pilot.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Pilot: Crew
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\UH1Y_Pilot.rtm";
			interpolateTo[] = {"KIA_UH1Y_Pilot",1};
		};
		class KIA_UH1Y_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\UH1Y\Anims\KIA_UH1Y_Gunner01.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Gunner: Crew
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\UH1Y_Gunner.rtm";
			interpolateTo[] = {"KIA_UH1Y_Gunner",1};
		};
		class KIA_UH1Y_Gunner02: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\UH1Y\Anims\KIA_UH1Y_Pilot.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Gunner02: Crew
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\UH1Y_Pilot.rtm";
			interpolateTo[] = {"KIA_UH1Y_Gunner02",1};
		};
		class KIA_UH1Y_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\hafm_arma2_helis\UH1Y\Anims\KIA_cargo_01.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class UH1Y_Cargo01: Crew
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_01.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo01",0.1};
			connectTo[] = {"UH1Y_Cargo01",0.3,"UH1Y_Cargo01_V1",0.1,"UH1Y_Cargo01_V2",0.1,"UH1Y_Cargo01_V3",0.1};
			equivalentTo = "UH1Y_Cargo01";
			variantsAI[] = {"UH1Y_Cargo01",0.4,"UH1Y_Cargo01_V1",0.2,"UH1Y_Cargo01_V2",0.2,"UH1Y_Cargo01_V3",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo01_V1: UH1Y_Cargo01
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_01nadech.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo01",1};
			connectTo[] = {"UH1Y_Cargo01",0.1};
			speed = 0.395;
			looped = "false";
			variantAfter[] = {5,5,5};
		};
		class UH1Y_Cargo01_V2: UH1Y_Cargo01_V1
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_01poposed.rtm";
			speed = 0.588;
		};
		class UH1Y_Cargo01_V3: UH1Y_Cargo01_V1
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_01presunruky.rtm";
			speed = 0.491;
		};
		class KIA_UH1Y_Cargo02: KIA_UH1Y_Cargo01
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\KIA_cargo_02.rtm";
		};
		class UH1Y_Cargo02: Crew
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_02.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo02",0.1};
			connectTo[] = {"UH1Y_Cargo02",0.3,"UH1Y_Cargo02_V1",0.1,"UH1Y_Cargo02_V2",0.1,"UH1Y_Cargo02_V3",0.1};
			equivalentTo = "UH1Y_Cargo02";
			variantsAI[] = {"UH1Y_Cargo02",0.4,"UH1Y_Cargo02_V1",0.2,"UH1Y_Cargo02_V2",0.2,"UH1Y_Cargo02_V3",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo02_V1: UH1Y_Cargo02
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_02poposed.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo02",1};
			connectTo[] = {"UH1Y_Cargo02",0.1};
			speed = 0.652;
			looped = "false";
			variantAfter[] = {5,5,5};
		};
		class UH1Y_Cargo02_V2: UH1Y_Cargo02_V1
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_02predklon.rtm";
			speed = 0.3125;
		};
		class UH1Y_Cargo02_V3: UH1Y_Cargo02_V1
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_02presunruky.rtm";
			speed = 0.37;
		};
		class KIA_UH1Y_Cargo03: KIA_UH1Y_Cargo01
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\KIA_cargo_03.rtm";
		};
		class UH1Y_Cargo03: Crew
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_03.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo03",0.1};
			connectTo[] = {"UH1Y_Cargo03",0.3,"UH1Y_Cargo03_V1",0.1,"UH1Y_Cargo03_V2",0.1,"UH1Y_Cargo03_V3",0.1};
			equivalentTo = "UH1Y_Cargo03";
			variantsAI[] = {"UH1Y_Cargo03",0.4,"UH1Y_Cargo03_V1",0.1,"UH1Y_Cargo03_V2",0.25,"UH1Y_Cargo03_V3",0.25};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UH1Y_Cargo03_V1: UH1Y_Cargo03
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_03predklon.rtm";
			interpolateTo[] = {"KIA_UH1Y_Cargo03",1};
			connectTo[] = {"UH1Y_Cargo03",0.1};
			speed = 0.37;
			looped = "false";
			variantAfter[] = {5,5,5};
		};
		class UH1Y_Cargo03_V2: UH1Y_Cargo03_V1
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_03presunruky.rtm";
			speed = 0.37;
			variantAfter[] = {5,5,5};
		};
		class UH1Y_Cargo03_V3: UH1Y_Cargo03_V1
		{
			file = "\hafm_arma2_helis\UH1Y\Anims\cargo_03protazenizad.rtm";
			speed = 0.491;
			variantAfter[] = {5,5,5};
		};
	};
};
class CfgPatches
{
	class ascz_hafm_helis_fix
	{
		units[] = {"UH1H","AH64D","UH60M","UH60M_MEV","AH1Z","UH1Y","CH47F"};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"HAFM_ArmA2_Helis"};
	};
};
class CfgVehicleClasses
{
	class HAFM_Helis_US
	{
		displayName = "US Helicopters";
	};
};
class CfgVehicles
{
	class AllVehicles;
	class thingX;
	class Air: AllVehicles
	{
		class NewTurret;
		class ViewPilot;
	};
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class AnimationSources;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
	};
	class PlaneWreck;
	class HelicopterWreck;
	class UH1H_base: Helicopter
	{
		author = "Aplion";
		destrType = "DestructWreck";
		scope = 0;
		side = 1;
		faction = "BLU_F";
		vehicleClass = "HAFM_Helis_US";
		picture = "\HAFM_ArmA2_Helis\UI\Picture_uh1h_CA.paa";
		icon = "\HAFM_ArmA2_Helis\UI\Icon_uh1h_CA.paa";
		mapSize = 14;
		model = "HAFM_ArmA2_Helis\UH1H\UH1H.p3d";
		displayName = "UH1H";
		driverRightHandAnimName = "pilot_stick";
		class MFD{};
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		driverAction = "pilot_Heli_Transport_01";
		availableForSupportTypes[] = {"CAS_Heli"};
		cargoAction[] = {"passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear"};
		cargoPreciseGetInOut[] = {0};
		GetInAction = "ChopperLight_L_In_H";
		getOutAction = "GetOutLow";
		usePreciseGetInAction = 1;
		cargoGetInAction[] = {"GetInHeli_Transport_01Cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		class Library
		{
			libTextDesc = "UH1H";
		};
		cargoIsCoDriver[] = {"false","false","false","false","false"};
		transportSoldier = 5;
		driverOpticsModel = "";
		gunnerOpticsModel = "";
		simulation = "helicopterX";
		threat[] = {0.4,0,0};
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\open_close",0.31622776,1};
		soundGetOut[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\open_close",0.31622776,1,40};
		soundEnviron[] = {"",0.031622775,1.0};
		soundEngineOnInt[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_start_int",0.4466836,1.0};
		soundEngineOnExt[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_start_ext",0.4466836,1.0,700};
		soundEngineOffInt[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_stop_int",0.4466836,1.0};
		soundEngineOffExt[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_stop_ext",0.4466836,1.0,700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		class Sounds
		{
			class Engine
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_engine_ext_2",1.0,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_rotor_ext_1",2.5118864,1.0,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class RotorHighOut
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_rotor_high_ext_1",2.5118864,1.0,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class EngineIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_engine_int_1",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_rotor_int_1",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_rotor_high_int_1",3.1622777,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 30;
				initElev = -30;
				minTurn = -173;
				maxTurn = -3;
				initTurn = -70;
				soundServo[] = {"",0.01,1.0};
				stabilizedInAxes = "StabilizedInAxesNone";
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunBeg = "muzzle";
				gunEnd = "chamber";
				gunnerName = "DoorGunner";
				memoryPointsGetInGunner = "pos Gunner";
				memoryPointsGetInGunnerDir = "pos Gunner dir";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				commanding = -3;
				primaryGunner = 0;
				class ViewOptics
				{
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
				gunnerCompartments = "Compartment2";
			};
			class LeftDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret_2";
				gun = "Gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				weapons[] = {"M240_veh_2"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				memoryPointsGetInGunner = "pos Gunner";
				memoryPointsGetInGunnerDir = "pos Gunner dir";
				proxyIndex = 2;
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 0;
				memoryPointGunnerOptics = "gunnerview_2";
				selectionFireAnim = "zasleh_1";
				gunnerName = "CrewChief";
				commanding = -2;
				minElev = -50;
				maxElev = 30;
				initElev = -30;
				minTurn = 3;
				maxTurn = 173;
				initTurn = 80;
				primaryGunner = 1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M240_veh";
			};
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "M240_veh_2";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "M240_veh_2";
			};
			class Revolving_2
			{
				source = "revolving";
				weapon = "M240_veh_2";
			};
		};
		armor = 25;
		damageResistance = 0.00394;
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.0388,0.0388,0.0388,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				brightness = 0.05;
				blinking = "false";
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_Helis\UH1H\Data\UH1D.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit1.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit1.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit1_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit2.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit2.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit2_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit3.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit3.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_cockpit3_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_glass.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_glass_damage.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_glass_damage.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_in.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_in.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_in_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_instruments.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_instruments.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_instruments_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_rotor.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_rotor.rvmat","HAFM_ArmA2_Helis\UH1H\Data\UH1D_rotor_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\data\default.rvmat","HAFM_ArmA2_Helis\UH1H\data\default.rvmat","HAFM_ArmA2_Helis\UH1H\Data\default_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\data\default.rvmat","HAFM_ArmA2_Helis\UH1H\data\default.rvmat","HAFM_ArmA2_Helis\UH1H\data\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","alpha"};
		irScanRangeMin = 100;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
	};
	class UH1H: UH1H_base
	{
		scope = 2;
		side = 1;
		model = "HAFM_ArmA2_Helis\UH1H\UH1H.p3d";
		displayName = "UH1H Huey";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
		driverAction = "pilot_Heli_Transport_01";
		cargoAction[] = {"passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands"};
		cargoPreciseGetInOut[] = {0};
		GetInAction = "ChopperLight_L_In_H";
		getOutAction = "GetOutLow";
		usePreciseGetInAction = 1;
		cargoGetInAction[] = {"GetInHeli_Transport_01Cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoCanEject = 1;
		driverCanEject = 0;
		helmetMountedDisplay = 0;
		hiddenSelectionsTextures[] = {"HAFM_ArmA2_Helis\UH1H\data\uh1d_co.paa","HAFM_ArmA2_Helis\UH1H\data\uh1d_in_co.paa","HAFM_ArmA2_Helis\UH1H\data\default_co.paa","HAFM_ArmA2_Helis\UH1H\data\alpha_ca.paa"};
		class TransportWeapons{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class UH1HWreck: HelicopterWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\HAFM_ArmA2_Helis\UH1H\UH1HWreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
		class Eventhandlers{};
	};
	class AH64_base: Helicopter
	{
		author = "Aplion";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_air_gunship_s"};
				speechPlural[] = {"veh_air_gunship_p"};
			};
		};
		driveOnComponent[] = {"Wheels"};
		liftForceCoef = 1.0;
		bodyFrictionCoef = 0.5;
		altFullForce = 3000;
		altNoForce = 5000;
		displayName = "AH64_base";
		side = 1;
		accuracy = 0.5;
		class Library
		{
			libTextDesc = "AH64";
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,"0.27+0.23"};
					pos10[] = {"<null>","<null>"};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,"0.34+0.23"};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class GunnerAim: Pos10Vector
					{
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,"0.27+0.23"};
						pos10[] = {"<null>","<null>"};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,"0.27+0.23"};
						pos3[] = {"<null>","0.27+0.23"};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,"<null>"};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,"0.34+0.23"};
						pos10[] = {"<null>","<null>"};
						type = "horizon";
						angle = 0;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					alpha = 0.6;
					color[] = {0.0,1.0,0.0};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "PlaneW",{ 0,"<null>" },1 },{ "PlaneW",{ "<null>","<null>" },1 },{ "PlaneW",{ 0.02,0 },1 },{ "PlaneW",{ "<null>","<null>" },1 },{ "PlaneW",{ 0,"<null>" },1 },{ "PlaneW",{ "<null>","<null>" },1 },{ "PlaneW",{ -0.02,0 },1 },{ "PlaneW",{ "<null>","<null>" },1 },{ "PlaneW",{ 0,"<null>" },1 },{  }};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "Velocity",{ 0,"<null>" },1 },{ "Velocity",{ "<null>","<null>" },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ "<null>","<null>" },1 },{ "Velocity",{ 0,"<null>" },1 },{ "Velocity",{ "<null>","<null>" },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ "<null>","<null>" },1 },{ "Velocity",{ 0,"<null>" },1 },{  },{ "Velocity",{ 0.04,"<null>" },1 },{ "Velocity",{ 0.02,"<null>" },1 },{  },{ "Velocity",{ -0.04,"<null>" },1 },{ "Velocity",{ -0.02,"<null>" },1 },{  },{ "Velocity",{ 0,"<null>" },1 },{ "Velocity",{ 0,"<null>" },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.52,"0.08+0.06" },1 },{ { 0.5,"0.06+0.06" },1 },{ { 0.48,"0.08+0.06" },1 },{  },{ { "0.5-0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9-0.04" },1 },{  },{ { "0.5-0.1",0.9 },1 },{ { "0.5-0.092",0.9 },1 },{  },{ { "0.5+0.1",0.9 },1 },{ { "0.5+0.092",0.9 },1 },{  },{ { 0.5,"0.9-0.04" },1 },{ { 0.5,"0.9-0.032" },1 },{  },{ { 0.5,"0.9+0.04" },1 },{ { 0.5,"0.9+0.032" },1 },{  }};
					};
					class Gunner
					{
						type = "line";
						width = 4.0;
						points[] = {{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{  },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{  },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{  },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,"<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>",0 },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ 0,"<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>",0 },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ 0,"<null>" },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  },{ "Target",{ "<null>","<null>" },1 },{ "Target",{ "<null>","<null>" },1 },{ "Target",{ "<null>","<null>" },1 },{ "Target",{ "<null>","<null>" },1 },{ "Target",{ "<null>","<null>" },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,"<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>",0 },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ 0,"<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>",0 },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ 0,"<null>" },1 },{  },{ "Target",{ "<null>","<null>" },1 },{ "Target",{ "<null>","<null>" },1 },{ "Target",{ "<null>","<null>" },1 },{ "Target",{ "<null>","<null>" },1 },{ "Target",{ "<null>","<null>" },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ -0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ -0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ 0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ 0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",-0.15 },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",0.15 },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ "0.15-0.02",-0.15 },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ "0.15-0.02",0.15 },1 },{  }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ -0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ -0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ 0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ 0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",-0.25 },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",0.25 },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ "0.25-0.05",-0.25 },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ "0.25-0.05",0.25 },1 },{  },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{  },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{  },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{  },{ "WeaponAim",{ "<null>","<null>" },1 },{ "WeaponAim",{ "<null>","<null>" },1 },{  }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.06,0.47 },1};
						right[] = {{ "0.14-0.02",0.47 },1};
						down[] = {{ 0.06,0.52 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {{ "0.86-0.15",0.47 },1};
						right[] = {{ "0.94-0.15-0.02",0.47 },1};
						down[] = {{ "0.86-0.15",0.52 },1};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeAGL";
						sourceScale = 1;
						align = "right";
						width = 4.0;
						pos[] = {0.86,0.82};
						right[] = {"0.94-0.02",0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = "false";
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.88 },1};
						right[] = {{ "0.16-0.02",0.88 },1};
						down[] = {{ 0.1,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.93 },1};
						right[] = {{ "0.16-0.02",0.93 },1};
						down[] = {{ 0.1,0.97 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						width = 4.0;
						pos[] = {"0.32-0.01","0.0+0.05"};
						right[] = {"0.38-0.01","0.0+0.05"};
						down[] = {"0.32-0.01","0.04+0.05"};
						lineXleft = "0.06+0.05";
						lineYright = "0.05+0.05";
						lineXleftMajor = "0.07+0.05";
						lineYrightMajor = "0.04+0.05";
						bottom = 0.7;
						center = 0.5;
						top = 0.3;
						step = 10;
						StepSize = "(0.70- 0.3)/15";
						horizontal = "true";
						min = "none";
						max = "none";
						numberEach = 3;
						majorLineEach = 3;
					};
					class HorizontalLine
					{
						clipTL[] = {0.2,0.12};
						clipBR[] = {0.8,0.96};
						class HorizontalLineDraw
						{
							type = "line";
							source = "Level0";
							points[] = {{ "Level0",{ "-6*0.075/2",0.02 },1 },{ "Level0",{ "-5*0.075/2",0.02 },1 },{  },{ "Level0",{ "-4*0.075/2",0.02 },1 },{ "Level0",{ "-3*0.075/2",0.02 },1 },{  },{ "Level0",{ "-2*0.075/2",0.02 },1 },{ "Level0",{ "-1*0.075/2",0.02 },1 },{  },{ "Level0",{ "1*0.075/2",0.02 },1 },{ "Level0",{ "2*0.075/2",0.02 },1 },{  },{ "Level0",{ "3*0.075/2",0.02 },1 },{ "Level0",{ "4*0.075/2",0.02 },1 },{  },{ "Level0",{ "5*0.075/2",0.02 },1 },{ "Level0",{ "6*0.075/2",0.02 },1 }};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0.0,0.0};
				helmetDown[] = {-0.0,-0.05,0.0};
			};
		};
		availableForSupportTypes[] = {"CAS_Heli"};
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		simulation = "helicopterX";
		threat[] = {0.8,1,0.6};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\HAFM_ArmA2_Helis\ah64\data\ah64d_body_co.paa","\HAFM_ArmA2_Helis\ah64\data\ah64d_details_co.paa","\HAFM_ArmA2_Helis\ah64\data\ah64d_alfa_ca.paa"};
	};
	class AH64D: AH64_base
	{
		side = 1;
		scope = 2;
		faction = "BLU_F";
		vehicleClass = "HAFM_Helis_US";
		accuracy = 5;
		cost = 10000000;
		model = "\HAFM_ArmA2_Helis\AH64\AH64D";
		armor = 50;
		driverCanEject = 0;
		damageResistance = 0.00555;
		laserScanner = 1;
		MainRotorSpeed = -1.0;
		backRotorSpeed = 3.0;
		driverRightHandAnimName = "stick";
		weapons[] = {"FFARLauncher","CMFlareLauncher"};
		magazines[] = {"38Rnd_FFAR","168Rnd_CMFlare_Chaff_Magazine"};
		availableForSupportTypes[] = {"CAS_Heli"};
		class TransportItems{};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"HAFM_ArmA2_Helis\AH64\Sounds\close",0.31622776,1};
		soundGetOut[] = {"HAFM_ArmA2_Helis\AH64\Sounds\open",0.31622776,1,40};
		soundEnviron[] = {"",0.031622775,1.0};
		soundDammage[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\alarm_loop1",0.56234133,1};
		soundEngineOnInt[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_start_int",0.1,1.0};
		soundEngineOnExt[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_stop_ext",0.56234133,1.0,800};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.1,1.5};
		class Sounds
		{
			class Engine
			{
				sound[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_engine_1",3.1622777,1.0,1000};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_rotor_ext2",3.1622777,1.0,1200};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_rotor_high_ext2",1.7782794,1.0,1300};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_engine_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_rotor_int2",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"HAFM_ArmA2_Helis\AH64\Sounds\AH64_rotor_high_int2",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		picture = "\HAFM_ArmA2_Helis\UI\Picture_ah64d_CA.paa";
		icon = "\HAFM_ArmA2_Helis\UI\Icon_ah64d_CA.paa";
		mapSize = 15.5;
		maxSpeed = 293;
		displayName = "AH64D Apache";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverAction = "AH64_Pilot_EP1";
		driverInAction = "AH64_Pilot_EP1";
		destrType = "DestructWreck";
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		selectionFireAnim = "zasleh";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class WhiteBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				intensity = 75;
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class AnimationSources
		{
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class Gatling
			{
				source = "revolving";
				weapon = "M230";
			};
			class Hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
		class HitPoints: HitPoints{};
		dammageHalf[] = {"\HAFM_ArmA2_Helis\ah64\data\AH64D_mfd_normal_co.paa","\HAFM_ArmA2_Helis\ah64\data\AH64D_mfd_malfc_co.paa"};
		dammageFull[] = {"\HAFM_ArmA2_Helis\ah64\data\AH64D_mfd_normal_co.paa","\HAFM_ArmA2_Helis\ah64\data\AH64D_mfd_malfc_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_Helis\ah64\Data\AH64D_body.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_body_damage.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_body_destruct.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_details.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_details_damage.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_details_destruct.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_inter.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_inter_damage.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_inter_destruct.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_glass.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_glass_damage.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_glass_damage.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_glass_in.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_glass_in_damage.rvmat","HAFM_ArmA2_Helis\ah64\Data\AH64D_glass_in_damage.rvmat","HAFM_ArmA2_Helis\ah64\data\default.rvmat","HAFM_ArmA2_Helis\ah64\data\default.rvmat","HAFM_ArmA2_Helis\uh1h\data\default_destruct.rvmat"};
		};
		enableManualFire = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				gunnerAction = "Heli_Attack_02_Gunner_SettleIn";
				gunnerInAction = "Heli_Attack_02_Gunner_SettleIn";
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				weapons[] = {"M230","HellfireLauncher"};
				magazines[] = {"1200Rnd_30x113mm_M789_HEDP","8Rnd_Hellfire"};
				soundServo[] = {"",0.01,1.0};
				enableManualFire = 1;
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				memoryPointGun = "machinegun";
				turretInfoType = "RscOptics_Heli_Attack_02_gunner";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 2;
				gunnerOpticsModel = "\HAFM_ArmA2_Helis\ah64\gunnerOptics_ah64";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\HAFM_ArmA2_Helis\ah64\gunnerOptics_ah64";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\HAFM_ArmA2_Helis\ah64\gunnerOptics_ah64_2";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\HAFM_ArmA2_Helis\ah64\gunnerOptics_ah64_3";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
	};
	class AH64DWreck: HelicopterWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\HAFM_ArmA2_Helis\AH64\Ah64DWreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
		class Eventhandlers{};
	};
	class UH60_Base: Helicopter
	{
		author = "Aplion";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		availableForSupportTypes[] = {"CAS_Heli"};
		helmetMountedDisplay = 0;
		cargoCanEject = 1;
		driverCanEject = 0;
		class MFD{};
	};
	class UH60M_base: UH60_Base
	{
		scope = 0;
		model = "\HAFM_ArmA2_Helis\UH60M\UH60M.p3d";
		displayName = "UH60_base";
		destrType = "DestructWreck";
		helmetMountedDisplay = 0;
		picture = "\HAFM_ArmA2_Helis\UI\Picture_uh60m_CA.paa";
		icon = "\HAFM_ArmA2_Helis\UI\Icon_uh60m_CA.paa";
		mapSize = 17;
		class MFD{};
		class Library
		{
			libTextDesc = "UH60M";
		};
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		gunnerAction = "ManActTestDriver";
		transportSoldier = 13;
		fuelCapacity = 600;
		maxSpeed = 295;
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		memoryPointsGetInGunner = "pos gunner";
		memoryPointsGetInGunnerDir = "pos gunner dir";
		memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};
		cargoIsCoDriver[] = {"false","false"};
		availableForSupportTypes[] = {"CAS_Heli"};
		simulation = "helicopterX";
		threat[] = {0.8,0.1,0.3};
		class TransportWeapons{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 17;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 3;
			};
		};
		radarType = 4;
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\open_close",0.31622776,1};
		soundGetOut[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\open_close",0.31622776,1,40};
		soundEnviron[] = {"",0.031622775,1.0};
		soundEngineOnInt[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_start_int",0.4466836,1.0};
		soundEngineOnExt[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_start_ext",0.4466836,1.0,700};
		soundEngineOffInt[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_stop_int",0.4466836,1.0};
		soundEngineOffExt[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_stop_ext",0.4466836,1.0,700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		class Sounds
		{
			class Engine
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_engine_ext_2",1.0,0.8,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_rotor_ext_1",2.5118864,1.1,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class RotorHighOut
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_rotor_high_ext_1",2.5118864,1.1,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class EngineIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_engine_int_1",1.0,0.8};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_rotor_int_1",1.7782794,1.1};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1H\Sounds\UH1H_rotor_high_int_1",3.1622777,1.1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		driverInAction = "UH60M_Pilot_EP1";
		driverAction = "UH60M_Pilot_EP1";
		cargoAction[] = {"UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02"};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class WhiteBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				intensity = 75;
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
			};
		};
		class AnimationSources: AnimationSources{};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_Helis\UH60M\Data\uh60m_dust_filter.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_dust_filter.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_dust_filter_destruct.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_engine.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_engine.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_engine_destruct.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_fuselage.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_fuselage.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_fuselage_destruct.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_interior.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_interior.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_interior_destruct.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_navijak.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_navijak.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_navijak_destruct.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_glass.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_glass_damage.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_glass_damage.rvmat","HAFM_ArmA2_Helis\UH1H\data\default.rvmat","HAFM_ArmA2_Helis\UH1H\data\default.rvmat","HAFM_ArmA2_Helis\UH60M\Data\default_destruct.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_engine_MEV.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_engine_MEV.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_engine_MEV_destruct.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_fuselage_MEV.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_fuselage_MEV.rvmat","HAFM_ArmA2_Helis\UH60M\Data\uh60m_fuselage_MEV_destruct.rvmat","HAFM_ArmA2_Helis\UH1H\data\default.rvmat","HAFM_ArmA2_Helis\UH1H\data\default.rvmat","HAFM_ArmA2_Helis\UH1H\data\default_destruct.rvmat"};
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"HAFM_ArmA2_Helis\uh60m\data\uh60m_fuselage_co.paa","HAFM_ArmA2_Helis\uh60m\data\uh60m_engine_co.paa","HAFM_ArmA2_Helis\uh60m\data\default_co.paa"};
	};
	class UH60M_US_base: UH60M_base
	{
		side = 1;
		faction = "BLU_F";
		vehicleClass = "HAFM_Helis_US";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class UH60M: UH60M_US_base
	{
		scope = 2;
		accuracy = 1.5;
		displayName = "UH60M";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -7;
				maxTurn = 183;
				initTurn = 0;
				soundServo[] = {"",0.01,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				selectionFireAnim = "zasleh";
				weapons[] = {"M134_minigun"};
				magazines[] = {"5000Rnd_762x51_Belt"};
				gunnerName = "CREWCHIEF";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "UH60M_Gunner_EP1";
				gunnerInAction = "UH60M_Gunner_EP1";
				commanding = -2;
				primaryGunner = 1;
				class ViewOptics
				{
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
				gunnerCompartments = "Compartment2";
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret_2";
				gun = "Gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				weapons[] = {"M134_minigun_2"};
				magazines[] = {"5000Rnd_762x51_Belt"};
				stabilizedInAxes = "StabilizedInAxesNone";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerName = "DOORGUNNER";
				commanding = -3;
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -183;
				maxTurn = 7;
				initTurn = 0;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				primaryGunner = 0;
				memoryPointGun = "machinegun_1";
				memoryPointGunnerOptics = "gunnerview_2";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
		};
	};
	class UH60M_MEV: UH60M_US_base
	{
		scope = 2;
		accuracy = 1.5;
		model = "\HAFM_ArmA2_Helis\UH60M\UH60M_MEV.p3d";
		displayName = "UH60M-MEV";
		attendant = 1;
		memoryPointSupply = "pos Codriver dir";
		transportSoldier = 7;
		vehicleClass = "HAFM_Helis_US";
		simulation = "helicopterX";
		threat[] = {0,0,0};
		class Turrets{};
		cargoAction[] = {"UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60_Cargo02","UH60M_Gunner_EP1","UH60M_Gunner_EP1","UH60M_Pilot_EP1"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"HAFM_ArmA2_Helis\uh60m\data\uh60m_fuselage_mev_co.paa","HAFM_ArmA2_Helis\uh60m\data\uh60m_engine_mev_co.paa","HAFM_ArmA2_Helis\uh60m\data\default_co.paa"};
	};
	class AH1_Base: Helicopter
	{
		author = "Aplion";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_air_gunship_s"};
				speechPlural[] = {"veh_air_gunship_p"};
			};
		};
		scope = 0;
		side = 1;
		faction = "BLU_F";
		vehicleClass = "HAFM_Helis_US";
		accuracy = 0.5;
		availableForSupportTypes[] = {"CAS_Heli"};
		displayName = "AH1";
		hiddenSelections[] = {"Camo1","Camo2"};
		driverCanEject = 0;
		altFullForce = 4000;
		altNoForce = 6000;
		fuelCapacity = 2500;
		fuelConsumptionRate = 0.138;
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		bodyFrictionCoef = 0.9;
		supplyRadius = -1;
		maxFordingDepth = 0.75;
		mainBladeRadius = 8.5;
		mainRotorSpeed = 1.5;
		backRotorSpeed = 4.0;
		liftForceCoef = 1.3;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.502,0.49};
					pos10[] = {1.112,1.03};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.502,0.49};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class GunnerAim: Pos10Vector
					{
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.49};
						pos10[] = {1.11,1.03};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.49};
						pos3[] = {0.683,0.49};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.652};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.49};
						pos10[] = {1.11,1.03};
						type = "horizon";
						angle = 0;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					alpha = 0.6;
					color[] = {0.0,1.0,0.0};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "PlaneW",{ 0,-0.0177049 },1 },{ "PlaneW",{ 0.014,-0.0123934 },1 },{ "PlaneW",{ 0.02,0 },1 },{ "PlaneW",{ 0.014,0.0123934 },1 },{ "PlaneW",{ 0,0.0177049 },1 },{ "PlaneW",{ -0.014,0.0123934 },1 },{ "PlaneW",{ -0.02,0 },1 },{ "PlaneW",{ -0.014,-0.0123934 },1 },{ "PlaneW",{ 0,-0.0177049 },1 },{  }};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "Velocity",{ 0,-0.0177049 },1 },{ "Velocity",{ 0.014,-0.0123934 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.0123934 },1 },{ "Velocity",{ 0,0.0177049 },1 },{ "Velocity",{ -0.014,0.0123934 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.0123934 },1 },{ "Velocity",{ 0,-0.0177049 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.0354098 },1 },{ "Velocity",{ 0,-0.0177049 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.52,"0.08+0.06" },1 },{ { 0.5,"0.06+0.06" },1 },{ { 0.48,"0.08+0.06" },1 },{  },{ { "0.5-0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9-0.04" },1 },{  },{ { "0.5-0.1",0.9 },1 },{ { "0.5-0.092",0.9 },1 },{  },{ { "0.5+0.1",0.9 },1 },{ { "0.5+0.092",0.9 },1 },{  },{ { 0.5,"0.9-0.04" },1 },{ { 0.5,"0.9-0.032" },1 },{  },{ { 0.5,"0.9+0.04" },1 },{ { 0.5,"0.9+0.032" },1 },{  }};
					};
					class Gunner
					{
						type = "line";
						width = 4.0;
						points[] = {{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9+0.008" },1 },{ "GunnerAim",{ "0.5+0.015","0.9-0.008" },1 },{ "GunnerAim",{ "0.5-0.015","0.9-0.008" },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.0442623 },1 },{ "WeaponAim",{ 0,0.0132787 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.0442623 },1 },{ "WeaponAim",{ 0,-0.0132787 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,-0.0885246 },1 },{ "WeaponAim",{ 0.05,-0.0770164 },1 },{ "WeaponAim",{ 0.087,-0.0442623 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.0442623 },1 },{ "WeaponAim",{ 0.05,0.0770164 },1 },{ "WeaponAim",{ 0,0.0885246 },1 },{ "WeaponAim",{ -0.05,0.0770164 },1 },{ "WeaponAim",{ -0.087,0.0442623 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.0442623 },1 },{ "WeaponAim",{ -0.05,-0.0770164 },1 },{ "WeaponAim",{ 0,-0.0885246 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  },{ "Target",{ 0,-0.0619672 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0619672 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0619672 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,-0.221311 },1 },{ "WeaponAim",{ 0.125,-0.192541 },1 },{ "WeaponAim",{ 0.2175,-0.110656 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.110656 },1 },{ "WeaponAim",{ 0.125,0.192541 },1 },{ "WeaponAim",{ 0,0.221311 },1 },{ "WeaponAim",{ -0.125,0.192541 },1 },{ "WeaponAim",{ -0.2175,0.110656 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.110656 },1 },{ "WeaponAim",{ -0.125,-0.192541 },1 },{ "WeaponAim",{ 0,-0.221311 },1 },{  },{ "Target",{ 0,-0.0619672 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.0619672 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.0619672 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ -0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ -0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ 0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ 0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",-0.15 },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",0.15 },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ "0.15-0.02",-0.15 },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ "0.15-0.02",0.15 },1 },{  }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ -0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ -0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ 0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ 0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",-0.25 },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",0.25 },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ "0.25-0.05",-0.25 },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ "0.25-0.05",0.25 },1 },{  }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.06,0.47 },1};
						right[] = {{ "0.14-0.02",0.47 },1};
						down[] = {{ 0.06,0.52 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {{ "0.86-0.15",0.47 },1};
						right[] = {{ "0.94-0.15-0.02",0.47 },1};
						down[] = {{ "0.86-0.15",0.52 },1};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeAGL";
						sourceScale = 1;
						align = "right";
						width = 4.0;
						pos[] = {0.86,0.82};
						right[] = {"0.94-0.02",0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = "(0.85- 0.2)/20";
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.88 },1};
						right[] = {{ "0.16-0.02",0.88 },1};
						down[] = {{ 0.1,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.93 },1};
						right[] = {{ "0.16-0.02",0.93 },1};
						down[] = {{ 0.1,0.97 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						width = 4.0;
						pos[] = {"0.32-0.01","0.0+0.05"};
						right[] = {"0.38-0.01","0.0+0.05"};
						down[] = {"0.32-0.01","0.04+0.05"};
						lineXleft = "0.06+0.05";
						lineYright = "0.05+0.05";
						lineXleftMajor = "0.07+0.05";
						lineYrightMajor = "0.04+0.05";
						bottom = 0.7;
						center = 0.5;
						top = 0.3;
						step = 10;
						StepSize = "(0.70- 0.3)/15";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 3;
						majorLineEach = 3;
					};
					class HorizontalLine
					{
						clipTL[] = {0.2,0.12};
						clipBR[] = {0.8,0.96};
						class HorizontalLineDraw
						{
							type = "line";
							source = "Level0";
							points[] = {{ "Level0",{ "-6*0.075/2",0.02 },1 },{ "Level0",{ "-5*0.075/2",0.02 },1 },{  },{ "Level0",{ "-4*0.075/2",0.02 },1 },{ "Level0",{ "-3*0.075/2",0.02 },1 },{  },{ "Level0",{ "-2*0.075/2",0.02 },1 },{ "Level0",{ "-1*0.075/2",0.02 },1 },{  },{ "Level0",{ "1*0.075/2",0.02 },1 },{ "Level0",{ "2*0.075/2",0.02 },1 },{  },{ "Level0",{ "3*0.075/2",0.02 },1 },{ "Level0",{ "4*0.075/2",0.02 },1 },{  },{ "Level0",{ "5*0.075/2",0.02 },1 },{ "Level0",{ "6*0.075/2",0.02 },1 }};
						};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.055,0.0,0.0};
				helmetDown[] = {-0.0,-0.05,0.0};
			};
		};
	};
	class AH1Z: AH1_Base
	{
		selectionHRotorStill = "mainRotorStatic";
		selectionHRotorMove = "mainRotorBlurred";
		selectionVRotorStill = "tailRotorStatic";
		selectionVRotorMove = "tailRotorBlurred";
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		selectionFireAnim = "muzzleflash";
		availableForSupportTypes[] = {"CAS_Heli"};
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		hiddenSelectionsTextures[] = {"HAFM_ArmA2_Helis\ah1z\data\ah1z_body_co.paa","HAFM_ArmA2_Helis\ah1z\data\ah1z_engines_co.paa"};
		crew = "B_Helipilot_F";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		displayName = "AH-1Z Viper";
		vehicleClass = "HAFM_Helis_US";
		accuracy = 1000;
		driverAction = "AH1Z_Pilot";
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		maxSpeed = 280;
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverCompartments = "Compartment1";
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\heli_door_01",0.31622776,1};
		soundGetOut[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\heli_door_01",0.31622776,1,50};
		soundEnviron[] = {"",0.031622775,1.0};
		soundDammage[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\alarm_loop1",0.001,1};
		soundEngineOnInt[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-start-final",0.031622775,1.0};
		soundEngineOnExt[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\ext\ext-motor-start",1.7782794,1.0,700};
		soundEngineOffInt[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-stop-final",0.031622775,1.0};
		soundEngineOffExt[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\ext\ext-motor-stop",1.7782794,1.0,700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\ext-ah1z-engine-01",3.1622777,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-rotor-single5b",3.1622777,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-rotor-single5a",3.1622777,1.0,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-fly-mode7",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-rotor-single5b",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-rotor-single5a",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class WhiteBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				intensity = 75;
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class HitPoints: HitPoints{};
		armor = 40;
		damageResistance = 0.00593;
		cost = 10000000;
		model = "\HAFM_ArmA2_Helis\ah1z\ah1z";
		picture = "\HAFM_ArmA2_Helis\ui\ah1z_CA.paa";
		mapSize = 15.5;
		Icon = "\HAFM_ArmA2_Helis\ui\icomap_ah1z_CA.paa";
		weapons[] = {"FFARLauncher","CMFlareLauncher"};
		magazines[] = {"38Rnd_FFAR","168Rnd_CMFlare_Chaff_Magazine"};
		enableManualFire = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				gunnerAction = "AH1Z_Gunner";
				gunnerInAction = "AH1Z_Gunner";
				gunnerCompartments = "Compartment2";
				weapons[] = {"M197","HellfireLauncher","SidewinderLaucher_AH1Z"};
				magazines[] = {"750Rnd_M197_AH1","8Rnd_Hellfire","2Rnd_Sidewinder_AH1Z"};
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				memoryPointGun = "machinegun";
				minElev = -60;
				maxElev = 10;
				initElev = 0;
				minTurn = -70;
				maxTurn = 70;
				initTurn = 0;
				gunnerOpticsModel = "\HAFM_ArmA2_Helis\ah1z\optika_AH1Z";
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 2;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\HAFM_ArmA2_Helis\ah1z\optika_AH1Z";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\HAFM_ArmA2_Helis\ah1z\optika_AH1Z";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\HAFM_ArmA2_Helis\ah1z\optika_AH1Z";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
		simulation = "helicopterX";
		threat[] = {0.8,1,0.6};
		class AnimationSources: AnimationSources
		{
			class 20mmBarrels
			{
				source = "revolving";
				weapon = "M197";
			};
			class mainRotor_folded
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 1;
			};
			class mainRotor_unfolded: mainRotor_folded
			{
				initPhase = 0;
			};
			class rotorShaft_unfolded: mainRotor_unfolded{};
		};
		laserScanner = 1;
		class Library
		{
			libTextDesc = "AH1Z";
		};
		dammageHalf[] = {"\HAFM_ArmA2_Helis\ah1z\data\ah1z_monitor_glass_ca.paa","\HAFM_ArmA2_Helis\ah1z\data\ah1z_monitor_glass_destr_co.paa"};
		dammageFull[] = {"\HAFM_ArmA2_Helis\ah1z\data\ah1z_monitor_glass_ca.paa","\HAFM_ArmA2_Helis\ah1z\data\ah1z_monitor_glass_destr_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_Helis\ah1z\data\ah1z_body.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_body_damage.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_body_destruct.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_glass.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_glass_damage.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_glass_damage.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_glass_in.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_glass_in_damage.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_glass_in_damage.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_cockpit.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_cockpit.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_cockpit_destruct.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_engines.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_engines_damage.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_engines_destruct.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_monitors.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_monitors.rvmat","HAFM_ArmA2_Helis\ah1z\data\ah1z_monitors_destruct.rvmat"};
		};
		destrType = "DestructWreck";
	};
	class AH1ZWreck: HelicopterWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\HAFM_ArmA2_Helis\ah1z\AH1ZWreck.p3d";
		typicalCargo[] = {};
		irTarget = "false";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 2;
		class Eventhandlers{};
	};
	class UH1_Base: Helicopter
	{
		author = "Aplion";
		destrType = "DestructWreck";
		scope = 0;
		side = 1;
		model = "\HAFM_ArmA2_Helis\UH1Y\UH1Y.p3d";
		picture = "\HAFM_ArmA2_Helis\UI\picture_UH1Y_CA.paa";
		icon = "\HAFM_ArmA2_Helis\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "UH1Y Venom";
		faction = "BLU_F";
		vehicleClass = "HAFM_Helis_US";
		availableForSupportTypes[] = {"CAS_Heli"};
		cargoCanEject = 1;
		driverCanEject = 0;
		helmetMountedDisplay = 0;
		crewVulnerable = 1;
		maxFordingDepth = 0.55;
		mainBladeRadius = 8.5;
		altFullForce = 4000;
		altNoForce = 6000;
		fuelCapacity = 2500;
		fuelConsumptionRate = 0.138;
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		bodyFrictionCoef = 0.9;
		supplyRadius = -1;
		liftForceCoef = 1.3;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		class MFD{};
		class Library
		{
			libTextDesc = "UH1Y";
		};
		maxSpeed = 293;
		mainRotorSpeed = 1.5;
		backRotorSpeed = 4.0;
		armor = 30;
		damageResistance = 0.00244;
		weapons[] = {"FFARLauncher_14","CMFlareLauncher"};
		magazines[] = {"14Rnd_FFAR","168Rnd_CMFlare_Chaff_Magazine"};
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		nightVision = 1;
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		radarType = 4;
		simulation = "helicopterX";
		threat[] = {0.8,1,0.6};
		memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};
		driverAction = "UH1Y_Pilot";
		driverInAction = "UH1Y_Pilot";
		cargoAction[] = {"UH1Y_Cargo02","UH1Y_Cargo03","UH1Y_Cargo03","UH1Y_Cargo02","UH1Y_Cargo01","UH1Y_Cargo01","UH1Y_Cargo01"};
		cargoIsCoDriver[] = {"false","false","false","false","false","false","false"};
		driverCanSee = 31;
		gunnerCanSee = 31;
		gunnerUsesPilotView = 1;
		gunnerOpticsModel = "";
		transportSoldier = 7;
		crew = "B_Helipilot_F";
		transportAmmo = 0;
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 11;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 3;
			};
		};
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		minFireTime = 30;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		class ViewPilot: ViewPilot
		{
			initFov = 1.4;
			minFov = 0.6;
			maxFov = 1.0;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -60;
				maxElev = 30;
				initElev = 0;
				minTurn = -5;
				maxTurn = 185;
				initTurn = 0;
				soundServo[] = {"",0.01,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M134_minigun"};
				magazines[] = {"5000Rnd_762x51_Belt"};
				gunnerName = "CrewChief";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "UH1Y_Gunner";
				gunnerInAction = "UH1Y_Gunner";
				commanding = -2;
				primaryGunner = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.0;
					minFov = 0.25;
					maxFov = 0.8;
				};
				gunnerCompartments = "Compartment2";
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = "StabilizedInAxesNone";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				gunnerName = "DoorGunner";
				commanding = -3;
				minTurn = -180;
				maxTurn = 0;
				initTurn = 0;
				weapons[] = {"M134_minigun_2"};
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				primaryGunner = 0;
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
			};
			class CoPilotObs: MainTurret
			{
				isCopilot = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				proxyIndex = 3;
				gunnerName = "CoPilotObs";
				gunnerAction = "UH1Y_Gunner02";
				gunnerInAction = "UH1Y_Gunner02";
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				outGunnerMayFire = 1;
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGun = "gun_end";
				commanding = -1;
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				primaryGunner = 0;
				minElev = -80;
				maxElev = 25;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				gunnerOpticsModel = "\HAFM_ArmA2_Helis\uh1y\optika_SOFLAM";
				memoryPointGunnerOptics = "commanderview";
				gunnerForceOptics = "false";
				gunnerOpticsShowCursor = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.4;
					minFov = 0.3;
					maxFov = 1.0;
				};
				gunnerCompartments = "Compartment2";
				startEngine = 0;
				soundServo[] = {"",0.01,1.0};
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				selectionFireAnim = "";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
			class HUDAction
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
			};
			class HUDAction_1
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
		};
		class UserActions
		{
			class HUDoff
			{
				displayName = "HUD On";
				displayNameDefault = "HUD On";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = "true";
				condition = "(player==driver this)and(this animationphase ""HUDAction"" !=1)";
				statement = "this animate [""HUDAction"",1];this animate [""HUDAction_1"",1]";
			};
			class HUDon
			{
				displayName = "HUD Off";
				displayNameDefault = "HUD Off";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = "true";
				condition = "(player==driver this)and(this animationphase ""HUDAction"" !=0)";
				statement = "this animate [""HUDAction"",0];this animate [""HUDAction_1"",0]";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class WhiteBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				intensity = 75;
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_Helis\uh1y\data\uh1y_sklo.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_sklo_damage.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_sklo_damage.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_sklo_in.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_sklo_in_damage.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_sklo_in_damage.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_ext.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_ext_damage.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_ext_destruct.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_int.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_int_damage.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_int_destruct.rvmat","HAFM_ArmA2_Helis\uh1y\data\launcher.rvmat","HAFM_ArmA2_Helis\uh1y\data\launcher.rvmat","HAFM_ArmA2_Helis\uh1y\data\launcher_destruct.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_cockpit.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_cockpit_damage.rvmat","HAFM_ArmA2_Helis\uh1y\data\uh1y_cockpit_destruct.rvmat"};
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"\HAFM_ArmA2_Helis\UH1Y\Sounds\heli_door_01",0.31622776,1};
		soundGetOut[] = {"\HAFM_ArmA2_Helis\UH1Y\Sounds\heli_door_01",0.31622776,1,40};
		soundEnviron[] = {"",0.031622775,1.0};
		soundDammage[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\alarm_loop1",0.31622776,1};
		soundEngineOnInt[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-start-final",0.4466836,1.0};
		soundEngineOnExt[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\ext\ext-motor-start",0.4466836,1.0,700};
		soundEngineOffInt[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-stop-final",0.4466836,1.0};
		soundEngineOffExt[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\ext\ext-motor-stop",0.4466836,1.0,700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\ext\ext-fly-mode2",2.5118864,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-rotor-single5b",2.5118864,1.0,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class RotorHighOut
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-rotor-single5a",2.5118864,1.0,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.14,2.0,0.5};
			};
			class EngineIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-fly-mode7",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-rotor-single5b",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"HAFM_ArmA2_Helis\UH1Y\Sounds\int\int-rotor-single5a",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
	};
	class UH1Y: UH1_Base
	{
		scope = 2;
	};
	class CH_47F_base: Helicopter
	{
		author = "Aplion";
		destrType = "DestructWreck";
		scope = 0;
		displayName = "CH47F";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "HAFM_Helis_US";
		crew = "B_Helipilot_F";
		accuracy = 0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		gearRetracting = 1;
		gearUpTime = 1;
		gearDownTime = 1;
		mainBladeRadius = 9.2;
		liftForceCoef = 1.3;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		bodyFrictionCoef = 0.9;
		armor = 30;
		damageResistance = 0.001;
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		cargoAction[] = {"passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear","passenger_mantisrear"};
		cargoIsCoDriver[] = {"true","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false","false"};
		transportSoldier = 24;
		transportMaxBackpacks = 10;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		radarType = 4;
		enableManualFire = 0;
		maxFordingDepth = 0.55;
		simulation = "helicopterX";
		threat[] = {0.8,1,0.6};
		helmetMountedDisplay = 0;
		cargoCanEject = 1;
		driverCanEject = 0;
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 28;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
		};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
			};
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"HAFM_ArmA2_Helis\CH47\sounds\close",0.31622776,1};
		soundGetOut[] = {"HAFM_ArmA2_Helis\CH47\sounds\open",0.31622776,1,40};
		soundDammage[] = {"HAFM_ArmA2_Helis\CH47\sounds\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_start_int",0.1,1.0};
		soundEngineOnExt[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_stop_ext",0.56234133,1.0,800};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_engine_high_ext",1.0,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_rotor_ext",3.1622777,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_rotor_forsage_ext",3.1622777,1.0,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_engine_high_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_rotor_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"HAFM_ArmA2_Helis\CH47\sounds\CH47_rotor_forsage_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Library
		{
			libTextDesc = "CH-47F";
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class WhiteBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				intensity = 75;
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_ArmA2_Helis\CH47\data\ch47_1.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_1_damage.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_1_destruct.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_2.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_2_damage.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_2_destruct.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_1_int.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_1_int.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_1_int_destruct.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_2_int.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_2_int.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_2_int_destruct.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_sklo_in.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_sklo_in_damage.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_sklo_in_damage.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_sklo.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_sklo_damage.rvmat","HAFM_ArmA2_Helis\CH47\data\ch47_sklo_damage.rvmat","HAFM_ArmA2_Helis\CH47\data\default.rvmat","HAFM_ArmA2_Helis\CH47\data\default.rvmat","HAFM_ArmA2_Helis\CH47\data\default_destruct.rvmat"};
		};
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		driverCanSee = 31;
		gunnerCanSee = 31;
	};
	class CH_47F: CH_47F_base
	{
		accuracy = 1000;
		model = "\HAFM_ArmA2_Helis\CH47\CH_47F";
		scope = 2;
		maxSpeed = 293;
		nameSound = "veh_helicopter";
		displayName = "CH-47F Chinook";
		picture = "\HAFM_ArmA2_Helis\UI\Picture_ch47f_CA.paa";
		icon = "\HAFM_ArmA2_Helis\UI\Icon_ch47f_CA.paa";
		mapSize = 25;
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverAction = "pilot_Heli_Transport_01";
		LockDetectionSystem = "2 + 8 + 4";
		incomingMissileDetectionSystem = 16;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -50;
				maxElev = 30;
				initElev = -30;
				minTurn = -3;
				maxTurn = 173;
				initTurn = 0;
				soundServo[] = {"",0.01,1.0};
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "machinegun_1";
				animationSourceHatch = "";
				stabilizedInAxes = "StabilizedInAxesNone";
				selectionFireAnim = "zasleh";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M134_minigun"};
				magazines[] = {"5000Rnd_762x51_Belt"};
				gunnerName = "Crew Chief";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "gunner_standup01";
				gunnerInAction = "gunner_standup01";
				gunnerForceOptics = 1;
				commanding = -1;
				primaryGunner = 1;
				outGunnerMayFire = 1;
				class ViewOptics
				{
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
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60;
				maxElev = 30;
				initElev = -30;
				minTurn = -173;
				maxTurn = 3;
				initTurn = 0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = "StabilizedInAxesNone";
				selectionFireAnim = "zasleh_1";
				proxyIndex = 2;
				weapons[] = {"M134_minigun_2"};
				magazines[] = {"5000Rnd_762x51_Belt"};
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerName = "Door Gunner";
				commanding = -2;
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				primaryGunner = 0;
				preciseGetInOut = 1;
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
			};
			class CopilotTurret: NewTurret
			{
				isCopilot = 1;
				weapons[] = {};
				magazines[] = {};
				body = "Turret_3";
				gun = "";
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 3;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
			class CargoDoor
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName = "Open Ramp";
				position = "crewactions";
				radius = 15;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" == 0 and (alive this) and player == driver this;";
				statement = "this animate [""Ramp"", 1];";
				onlyforplayer = 1;
			};
			class CloseCargoDoor
			{
				displayName = "Close Ramp";
				position = "crewactions";
				radius = 15;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" > 0 and (alive this) and player == driver this;";
				statement = "this animate [""Ramp"", 0];";
				onlyforplayer = 1;
			};
		};
	};
	class CH_47FWreck: HelicopterWreck
	{
		scope = 1;
		class Armory
		{
			disabled = 1;
		};
		model = "\HAFM_ArmA2_Helis\CH47\CH_47FWreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
		class Eventhandlers{};
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "\HAFM_ArmA2_Helis\ah64\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyAIM9XSidewinder: ProxyWeapon
	{
		model = "\HAFM_ArmA2_Helis\ah1z\AIM9XSidewinder";
		simulation = "maverickweapon";
	};
};
class CfgAmmo
{
	class Default;
	class RocketCore;
	class RocketBase;
	class BulletBase;
	class MissileCore;
	class MissileBase;
	class B_762x51_Ball;
	class B_30mm_HE;
	class B_20mm;
	class B_30x113mm_M789_HEDP: B_30mm_HE
	{
		hit = 67;
		indirectHit = 15;
		indirectHitRange = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		explosive = 0.3;
		caliber = 2.5;
		airFriction = -0.00078;
	};
	class B_20mm_AP: B_20mm
	{
		hit = 45;
		indirectHit = 10;
		indirectHitRange = 2;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		caliber = 2.33;
	};
	class M_Sidewinder_AA: MissileBase
	{
		model = "\HAFM_ArmA2_Helis\ah1z\sidewinder_fly";
		proxyShape = "\HAFM_ArmA2_Helis\ah1z\sidewinder_proxy";
		hit = 350;
		indirectHit = 85;
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airLock = 1;
		irLock = 1;
		cost = 15000;
		maxSpeed = 728;
		timeToLive = 35;
		sideAirFriction = 0.2;
		trackOversteer = 1.0;
		trackLead = 1;
		initTime = 0.0;
		thrustTime = 5.0;
		thrust = 2900;
		fuseDistance = 500;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		weaponLockSystem = "2 + 16";
		whistleDist = 20;
	};
	class M_Hellfire_AT: MissileBase
	{
		model = "\HAFM_ArmA2_Helis\ah64\AGM114Hellfire";
		proxyShape = "\HAFM_ArmA2_Helis\ah64\AGM114Hellfire_proxy";
		hit = 1100;
		indirectHit = 20;
		indirectHitRange = 2;
		cost = 10000;
		maxSpeed = 425;
		irLock = 1;
		laserLock = 1;
		airLock = 0;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 9;
		timeToLive = 20;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		initTime = 0.0;
		thrustTime = 3.25;
		thrust = 130;
		fuseDistance = 5;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		weaponLockSystem = "2 + 16";
		whistleDist = 4;
	};
	class R_Hydra_HE: RocketBase
	{
		model = "\HAFM_ArmA2_Helis\ah64\70mmRocket";
		hit = 250;
		indirectHit = 50;
		indirectHitRange = 15;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 2Rnd_Sidewinder_AH1Z: VehicleMagazine
	{
		scope = 2;
		displayName = "SIDEWINDER";
		ammo = "M_Sidewinder_AA";
		count = 2;
		initSpeed = 0;
		maxLeadSpeed = 450;
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1100};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
	class 750Rnd_M197_AH1: VehicleMagazine
	{
		scope = 2;
		displayName = "M197";
		ammo = "B_20mm_AP";
		count = 750;
		initSpeed = 1036;
		maxLeadSpeed = 200;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	class 100Rnd_762x51_M240: VehicleMagazine
	{
		scope = 1;
		displayName = "100rnd_M240";
		count = 100;
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "100RND_M240";
	};
	class 1200Rnd_30x113mm_M789_HEDP: VehicleMagazine
	{
		scope = 1;
		displayName = "1200Rnd 30x113mm M789 HEDP";
		ammo = "B_30x113mm_M789_HEDP";
		count = 1200;
		initSpeed = 805;
		tracersEvery = 1;
		maxLeadSpeed = 500;
		nameSound = "cannon";
		airLock = 1;
	};
	class 8Rnd_Hellfire: VehicleMagazine
	{
		scope = 2;
		displayName = "HELLFIRE";
		count = 8;
		ammo = "M_Hellfire_AT";
		initSpeed = 0;
		maxLeadSpeed = 200;
		sound[] = {"\HAFM_ArmA2_Helis\ah64\Sounds\TOW_2",3.1622777,1};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.0,1.1,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
		reloadSound[] = {"A3\sounds_f\dummysound",0.00031622776,1};
		nameSound = "missiles";
	};
	class 14Rnd_FFAR: VehicleMagazine
	{
		scope = 2;
		displayName = "FFAR";
		ammo = "R_Hydra_HE";
		count = 14;
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"\HAFM_ArmA2_Helis\ah64\Sounds\rocketLauncher_Shot21",3.1622777,1};
		reloadSound[] = {"A3\sounds_f\dummysound",0.00031622776,1};
	};
	class 28Rnd_FFAR: 14Rnd_FFAR
	{
		count = 28;
	};
	class 38Rnd_FFAR: 14Rnd_FFAR
	{
		count = 38;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
	class Default;
	class M134_minigun;
	class LauncherCore;
	class RocketPods;
	class CannonCore;
	class MissileLauncher;
	class MGun;
	class M134_minigun_2: M134_minigun{};
	class SidewinderLaucher_AH1Z: MissileLauncher
	{
		scope = 2;
		displayName = "AIM-9X Sidewinder";
		displayNameMagazine = "AIM-9X Sidewinder";
		shortNameMagazine = "AIM-9X";
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		sound[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.0,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		weaponSoundEffect = "DefaultRifle";
		reloadTime = 0.1;
		magazineReloadTime = 30;
		magazines[] = {"2Rnd_Sidewinder_AH1Z"};
		cursor = "EmptyCursor";
		cursorAim = "missile";
		cursorSize = 1;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 4000;
		weaponLockDelay = 3.0;
	};
	class M197: CannonCore
	{
		scope = 1;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		cursorSize = 1;
		displayName = "M197";
		ballisticsComputer = 1;
		autoFire = 1;
		nameSound = "cannon";
		magazines[] = {"750Rnd_M197_AH1"};
		canLock = 2;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "M197";
			autoFire = 1;
			sound[] = {"\HAFM_ArmA2_Helis\AH64\sounds\a10vulcanVII",3.1622777,1,1100};
			reloadTime = 0.06;
			dispersion = 0.00025;
			showToPlayer = 1;
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
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 700;
			minRangeProbab = 0.05;
			midRange = 900;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1200;
			midRangeProbab = 0.4;
			maxRange = 1400;
			maxRangeProbab = 0.01;
		};
	};
	class M240_veh: MGun
	{
		scope = 1;
		displayName = "M240";
		soundContinuous = "false";
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		magazines[] = {"100Rnd_762x51_M240"};
		magazineReloadTime = 3;
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "M240";
			autoFire = 1;
			reloadTime = 0.075;
			dispersion = 0.0012;
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
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class M240_veh_2: M240_veh{};
	class FFARLauncher: RocketPods
	{
		magazines[] = {"38Rnd_FFAR","28Rnd_FFAR"};
		displayName = "HYDRA";
		modes[] = {"Far_AI","Burst"};
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		class Far_AI: RocketPods
		{
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "HYDRA-SINGLE";
			sound[] = {"\HAFM_ArmA2_Helis\ah64\Sounds\RocketLauncher_Shot21",3.1622777,1,1100};
			soundFly[] = {"\HAFM_ArmA2_Helis\ah64\Sounds\rocket_fly1",5.623413,1.2,700};
			burst = 1;
			reloadTime = 0.08;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst: RocketPods
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "HYDRA-PAIR";
			burst = 1;
			reloadTime = 0.08;
			soundContinuous = 1;
			autoFire = 1;
			sound[] = {"\HAFM_ArmA2_Helis\ah64\Sounds\RocketLauncher_Shot21",3.1622777,1,1100};
			soundFly[] = {"\HAFM_ArmA2_Helis\ah64\Sounds\rocket_fly1",5.623413,1.2,700};
		};
	};
	class FFARLauncher_14: FFARLauncher
	{
		magazines[] = {"14Rnd_FFAR"};
	};
	class HellfireLauncher: MissileLauncher
	{
		scope = 2;
		autoFire = 0;
		displayName = "HELLFIRE";
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		nameSound = "MissileLauncher";
		sound[] = {"\HAFM_ArmA2_Helis\ah64\Sounds\RocketLauncher_Shot05",1.922776,1,1100};
		soundFly[] = {"\HAFM_ArmA2_Helis\ah64\Sounds\rocket_fly1",100.0,0.8,800};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
		reloadTime = 1;
		magazines[] = {"8Rnd_Hellfire"};
		weaponLockDelay = 3.0;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 4000;
		cursorAim = "bomb";
		cursor = "EmptyCursor";
		cursorSize = 1;
		textureType = "fullAuto";
	};
	class M230: CannonCore
	{
		scope = 1;
		displayName = "M230";
		nameSound = "cannon";
		autoFire = 1;
		magazines[] = {"1200Rnd_30x113mm_M789_HEDP"};
		canLock = 2;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		ballisticsComputer = 1;
		aiDispersionCoefX = 6;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "M230";
			autoFire = 1;
			sound[] = {"\HAFM_ArmA2_Helis\AH64\sounds\a10vulcanVII",3.1622777,1,1100};
			reloadTime = 0.096;
			dispersion = 0.002;
			soundContinuous = 0;
			initspeed = 820;
			showToPlayer = "true";
			burst = 1;
			multiplier = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class close: manual
		{
			showToPlayer = "false";
			soundBurst = "false";
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.04;
			midRange = 200;
			midRangeProbab = 0.2;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 1000;
			minRange = 800;
			minRangeProbab = 0.1;
			midRange = 1000;
			midRangeProbab = 0.2;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};
	};
};
//};
