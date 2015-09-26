class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_02_base_F: Tank_F {};

	class CUP_AAV_Base:  APC_Tracked_02_base_F {};


	class CUP_B_AAV_USMC: CUP_AAV_Base {
		vehicleClass = "Armored";
		crew = "rhsusf_usmc_marpat_wd_crewman";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_crewman","rhsusf_usmc_marpat_wd_crewman","rhsusf_usmc_marpat_wd_crewman"};
	};