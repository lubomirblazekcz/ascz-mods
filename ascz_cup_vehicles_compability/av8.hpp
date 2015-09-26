	class Air;
	class Plane: Air
	{
		class HitPoints;
		class Turrets
		{
			class CopilotTurret;
		};
	};

	class Plane_Base_F: Plane
	{
		class NewTurret;
		class AnimationSources;
		class HitPoints: HitPoints
		{
//			class HitHull;
		};
		class Turrets : Turrets
		{

		};
		class ViewPilot;
		class ViewGunner;
	};

	class CUP_AV8B_Base : Plane_Base_F
	{
		faction="rhs_faction_usmc_wd";
		vehicleClass = "rhs_vehclass_aircraft";
	};

	class CUP_B_AV8B_Empty : CUP_AV8B_Base
	{
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot"};
		vehicleClass = "rhs_vehclass_aircraft";
	};

	class CUP_B_AV8B_LGB: CUP_AV8B_Base
	{
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot"};
		vehicleClass = "rhs_vehclass_aircraft";
	};

	class CUP_B_AV8B : CUP_AV8B_Base
	{
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot"};
		vehicleClass = "rhs_vehclass_aircraft";
	};

	class CUP_B_AV8B_Hydra19 : CUP_AV8B_Base
	{
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot"};
		vehicleClass = "rhs_vehclass_aircraft";
	};

	class CUP_B_AV8B_Heavy : CUP_AV8B_Base
	{
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot"};
		vehicleClass = "rhs_vehclass_aircraft";
	};

	class CUP_B_AV8B_Deepstrike : CUP_AV8B_Base
	{
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot"};
		vehicleClass = "rhs_vehclass_aircraft";
	};

	class CUP_B_AV8B_FFAR_7 : CUP_AV8B_Base
	{
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot"};
		vehicleClass = "rhs_vehclass_aircraft";
	};

	class CUP_B_AV8B_FFAR_19 : CUP_AV8B_Base
	{
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot"};
		vehicleClass = "rhs_vehclass_aircraft";
	};