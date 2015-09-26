	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};

	class CUP_MH60S_Base: Helicopter_Base_H {};
	class CUP_MH60S_FFV_Base: CUP_MH60S_Base {};

	class CUP_B_MH60S_USMC: CUP_MH60S_Base
	{
		faction="rhs_faction_usmc_wd";
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot","rhsusf_usmc_marpat_wd_helipilot", "rhsusf_usmc_marpat_wd_helipilot"};
	};

	class CUP_B_MH60S_FFV_USMC: CUP_MH60S_FFV_Base
	{
		faction="rhs_faction_usmc_wd";
		crew = "rhsusf_usmc_marpat_wd_helipilot";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_helipilot","rhsusf_usmc_marpat_wd_helipilot", "rhsusf_usmc_marpat_wd_helipilot"};
	};
