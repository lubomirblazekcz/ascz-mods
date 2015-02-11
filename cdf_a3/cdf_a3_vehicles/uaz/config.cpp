class CfgPatches
{
	class cdf_a3_vehicles_uaz
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cdf_a3_vehicles"};
		magazines[] = {};
		ammo[] = {};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
    class Car: LandVehicle
    {
        class HitPoints;
        class NewTurret;
    };
    class Car_F: Car
    {
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
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class EventHandlers;
        class AnimationSources;
    };
    class Offroad_01_base_F: Car_F{};
    class RHS_UAZ_Base: Offroad_01_base_F{};
    class CDF_A3_UAZ_Base: RHS_UAZ_Base {
		accuracy = 0.25;
        class Turrets
        {
			class MainTurret: NewTurret{};
        };
		delete UserActions;
		delete RenderTargets;
		attenuationEffectType = "OpenCarAttenuation";
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		transportSoldier = 1;
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
    };
	class CDF_A3_UAZ_MG_Base: CDF_A3_UAZ_Base
	{
		model = "\cdf_a3\cdf_a3_vehicles\uaz\uaz_mg.p3d";
		picture = "\cdf_a3\cdf_a3_vehicles\uaz\data\uaz_mg_ca.paa";
		Icon = "\cdf_a3\cdf_a3_vehicles\uaz\data\icomap_uaz_mg_ca.paa";
		displayName = "UAZ (DShKM)";
		gunnerOpticsShowCursor = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				gunnerForceOptics = 0;
				weapons[] = {"RDS_DSHKM"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				magazines[] = {"RDS_150Rnd_127x107_DSHKM","RDS_150Rnd_127x107_DSHKM","RDS_150Rnd_127x107_DSHKM","RDS_150Rnd_127x107_DSHKM"};
				gunnerAction = "CDF_A3_UAZ_Gunner01";
				gunnerInAction = "CDF_A3_UAZ_Gunner01";
				ejectDeadGunner = 1;
				minElev = -25;
				maxElev = "+60";
				stabilizedInAxes = 0;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_skla.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

                "RDS_StaticW\DShKM\data\dshk.rvmat",
                "RDS_StaticW\DShKM\data\dshk_damage.rvmat",
                "RDS_StaticW\DShKM\data\dshk_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "RDS_DSHKM";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "RDS_DSHKM";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "RDS_DSHKM";
			};
		};
	};
	class CDF_A3_UAZ_AGS30_Base: CDF_A3_UAZ_Base
	{
		model = "\cdf_a3\cdf_a3_vehicles\uaz\uaz_granade.p3d";
		picture = "\cdf_a3\cdf_a3_vehicles\uaz\data\uaz_granade_CA.paa";
		Icon = "\cdf_a3\cdf_a3_vehicles\uaz\data\icomap_Uaz_gl_CA.paa";
		displayName = "UAZ (AGS-30)";
		gunnerHasFlares = 1;
		gunnerOpticsShowCursor = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"RDS_AGS30"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				magazines[] = {"RDS_29Rnd_30mm_AGS30","RDS_29Rnd_30mm_AGS30","RDS_29Rnd_30mm_AGS30","RDS_29Rnd_30mm_AGS30"};
				gunnerAction = "CDF_A3_UAZ_Gunner02";
				gunnerInAction = "CDF_A3_UAZ_Gunner02";
				ejectDeadGunner = 1;
				minElev = -25;
				maxElev = "+60";
				gunnerOpticsModel = "\RDS_StaticW\optika_AGS30.p3d";
				stabilizedInAxes = 0;
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class belt_rotation
			{
				source = "reload";
				weapon = "RDS_AGS30";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
                "RDS_StaticW\AGS30\data\ags30.rvmat",
                "RDS_StaticW\AGS30\data\ags30.rvmat",
                "cdf_a3\cdf_a3_vehicles\uaz\data\ags30_destruct.rvmat",

                "RDS_StaticW\AGS30\data\tripod_ags.rvmat",
                "RDS_StaticW\AGS30\data\tripod_ags.rvmat",
                "cdf_a3\cdf_a3_vehicles\uaz\data\tripod_ags_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_skla.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat"
			};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_vehicles\uaz\data\Uaz_main_CO.paa","\cdf_a3\cdf_a3_vehicles\uaz\data\uaz_mount_co.paa"};
	};
	class CDF_A3_UAZ_SPG9_Base: CDF_A3_UAZ_Base
	{
		model = "\cdf_a3\cdf_a3_vehicles\uaz\uaz_spg9.p3d";
		picture = "\cdf_a3\cdf_a3_vehicles\uaz\data\uaz_spg9_CA.paa";
		Icon = "\cdf_a3\cdf_a3_vehicles\uaz\data\icomap_Uaz_spg9_CA.paa";
		displayName = "UAZ (SPG-9)";
		gunnerOpticsShowCursor = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"RDS_SPG9"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				magazines[] = {"RDS_PG9_AT","RDS_OG9_HE","RDS_PG9_AT","RDS_OG9_HE","RDS_PG9_AT","RDS_OG9_HE"};
				gunnerAction = "CDF_A3_SPG_Car_Gunner";
				gunnerInAction = "CDF_A3_SPG_Car_Gunner";
				ejectDeadGunner = 1;
				minElev = -25;
				maxElev = "+60";
				stabilizedInAxes = 0;
				gunnerOpticsModel = "\RDS_StaticW\2Dscope_SPG_4.p3d";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_skla.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

                "RDS_StaticW\DShKM\data\dshk.rvmat",
                "RDS_StaticW\DShKM\data\dshk_damage.rvmat",
                "RDS_StaticW\DShKM\data\dshk_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "RDS_SPG9";
			};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\cdf_a3\cdf_a3_vehicles\uaz\data\Uaz_main_CO.paa","\cdf_a3\cdf_a3_vehicles\uaz\data\uaz_mount_co.paa"};
	};
};
