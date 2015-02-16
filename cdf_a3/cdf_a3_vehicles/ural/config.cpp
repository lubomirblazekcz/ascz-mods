class CfgPatches
{
	class cdf_a3_vehicles_ural
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
			class MainTurret: NewTurret
			{
				disableSoundAttenuation = 1;
				class ViewOptics;
			};
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
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};
    class RHS_Ural_BaseTurret: Truck_F {};
    class CDF_A3_Ural_Support_Base: RHS_Ural_BaseTurret
    {
        transportSoldier = 2;
        cargoProxyIndexes[] = {1,2};
        getInProxyOrder[] = {1,2};
        class Turrets {};
        vehicleclass = "Support";
    };

	class CDF_A3_Ural_Repair_Base: CDF_A3_Ural_Support_Base
	{
		picture="\rhsafrf\addons\rhs_a2port_car\data\ico\ural_repair_CA.paa";
		Icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_Rep_CA.paa";
		mapSize = 8;
		vehicleClass= "Support";

		displayName="Ural (Repair)";

		model="cdf_a3\cdf_a3_vehicles\ural\ural_repair.p3d";

		transportSoldier = 2;
		transportRepair = 200000000;

		supplyRadius = 6.8;

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",

				"cdf_a3\cdf_a3_vehicles\ural\data\ural_repair.rvmat",
				"cdf_a3\cdf_a3_vehicles\ural\data\ural_repair_damage.rvmat",
				"cdf_a3\cdf_a3_vehicles\ural\data\ural_repair_destruct.rvmat",

				"rhsafrf\addons\rhs_tigr\data\glass.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"a3\data_f\glass_veh_int.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat"
			};
		};
	};

	class CDF_A3_Ural_Empty_Base: CDF_A3_Ural_Repair_Base
	{
		picture="\rhsafrf\addons\rhs_a2port_car\data\ico\ural_ca.paa";
		Icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_ca.paa";
		mapSize = 8;
		vehicleClass= "Car";

		displayName="Ural (Empty)";

		model="cdf_a3\cdf_a3_vehicles\ural\ural_empty.p3d";

		transportSoldier = 2;
		transportRepair = 0;

		supplyRadius = 0;

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"cdf_a3\cdf_a3_vehicles\ural\data\ural_reammo.rvmat",
				"cdf_a3\cdf_a3_vehicles\ural\data\ural_reammo_damage.rvmat",
				"cdf_a3\cdf_a3_vehicles\ural\data\ural_reammo_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",

				"a3\data_f\glass_veh.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"a3\data_f\glass_veh_int.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat"
			};
		};
	};

	class CDF_A3_Ural_Reammo_Base: CDF_A3_Ural_Support_Base
	{
		vehicleClass = "Support";

		displayName="Ural (Ammo)";
		model="cdf_a3\cdf_a3_vehicles\ural\ural_reammo.p3d";
		picture="\rhsafrf\addons\rhs_a2port_car\data\ico\ural_reammo_CA.paa";
		Icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_Rea_CA.paa";
		mapSize = 8;

		transportSoldier = 2;

//		class TransportMagazines
//		{
//			mag_xx(30Rnd_545x39_AK,150);
//			mag_xx(100Rnd_762x54_PK,25);
//			mag_xx(8Rnd_9x18_Makarov,100);
//			mag_xx(HandGrenade,50);
//			mag_xx(10Rnd_762x54_SVD,50);
//			mag_xx(5Rnd_127x108_KSVK,50);
//			mag_xx(PG7VR,15);
//			mag_xx(1Rnd_HE_GP25,15);
//			mag_xx(FlareWhite_GP25,15);
//			mag_xx(FlareGreen_GP25,15);
//			mag_xx(FlareRed_GP25,15);
//			mag_xx(FlareYellow_GP25,15);
//			mag_xx(SmokeShell,15);
//			mag_xx(SmokeShellRed,15);
//			mag_xx(SmokeShellGreen,15);
//			mag_xx(Strela,1);
//			mag_xx(PipeBomb,15);
//		};
//		class TransportWeapons
//		{
//			weap_xx(Strela,1);
//			weap_xx(RPG7V,2);
//		};
		transportAmmo = 300000;

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"cdf_a3\cdf_a3_vehicles\ural\data\ural_reammo.rvmat",
				"cdf_a3\cdf_a3_vehicles\ural\data\ural_reammo_damage.rvmat",
				"cdf_a3\cdf_a3_vehicles\ural\data\ural_reammo_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",

				"rhsafrf\addons\rhs_tigr\data\glass.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"a3\data_f\glass_veh_int.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat"
			};
		};
	};
	class CDF_A3_Ural_ZU23_Base : RHS_Ural_BaseTurret
	{
		displayName="Ural (ZU-23)";
		model="cdf_a3\cdf_a3_vehicles\ural\Ural_ZU23.p3d";

		attenuationEffectType = "OpenCarAttenuation";
		soundAttenuationCargo[] = {1,1,0,0};

		vehicleClass = "Car";
		picture="\rhsafrf\addons\rhs_a2port_car\data\ico\ural_zu23_CA.paa";
		Icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_zu23_CA.paa";
		mapSize = 8;

		accuracy=0.22;

		maxSpeed=80;
		transportAmmo = 0;
		transportRepair = 0;

		cost=50000;
		armor=32;
		damageResistance = 0.00243;

		initCargoAngleY=+185; // cargo viewing limitations

		cargoAction[] =
		{
			"passenger_apc_narrow_generic01","passenger_apc_narrow_generic03still","passenger_apc_narrow_generic03still" //Hilux_cargo01
		};

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_destruct.rvmat",

				"RDS_StaticW\zu23\Data\zu23_base.rvmat",
				"RDS_StaticW\zu23\Data\zu23_base_damage.rvmat",
				"RDS_StaticW\zu23\Data\zu23_base_destruct.rvmat",

				"RDS_StaticW\zu23\Data\zu23.rvmat",
				"RDS_StaticW\zu23\Data\zu23_damage.rvmat",
				"RDS_StaticW\zu23\Data\zu23_destruct.rvmat",

				"rhsafrf\addons\rhs_tigr\data\glass.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"a3\data_f\glass_veh_int.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat"
			};
		};
		transportSoldier = 3;

		driverCompartments = 1;
		cargoCompartments[] = {1,1,2};
		enableManualFire=0;
		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				commanding = -1;
				body = "mainTurret";
				gun = "mainGun";
				minElev=-10; maxElev=+85;initElev=11.5;
				weapons[]={"RDS_2A14"};
				magazines[]={"RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85","RDS_40Rnd_23mm_AZP85"};
				gunnerAction = "passenger_apc_narrow_generic03still";
				gunnerOpticsModel = "\RDS_StaticW\zu23\2Dscope_RUAA5";
				gunnergetInAction = "GetInHigh";
				gunnergetOutAction = "GetOutHigh";
				stabilizedInAxes = "StabilizedInAxesNone";
				memoryPointsGetInGunner= "pos_Gunner";
				memoryPointsGetInGunnerDir= "pos_Gunner_dir";
				gunnerCompartments = 2;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
                startEngine = 0;
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.093; minFov=0.058; maxFov=0.200;  // 5x zoom (initFov=0.093; minFov=0.093; maxFov=0.093;)
				};
			};
		};
		class AnimationSources:AnimationSources
		{
			class fire_anim
			{
				source="reload";
				weapon="RDS_2A14";
			};
		};
	};
};
