
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CDF_A3_UAZ_Gunner01 = "CDF_A3_UAZ_Gunner01";
		CDF_A3_UAZ_Gunner02 = "CDF_A3_UAZ_Gunner02"; //AGS Gunner
		CDF_A3_SPG_Car_Gunner = "CDF_A3_SPG_Car_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class CDF_A3_Stryker_Dead: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\cdf_a3\cdf_a3_vehicles\data\anim\Stryker_Dead.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class Crew;
		class CDF_A3_UAZ_Gunner01: Crew
		{
			file="\cdf_a3\cdf_a3_vehicles\data\anim\UAZ_Gunner01.rtm";
			interpolateTo[]={"CDF_A3_Stryker_Dead",1};		//die outside vehicle
		};
		class CDF_A3_UAZ_Gunner02: Crew
		{
			file="\cdf_a3\cdf_a3_vehicles\data\anim\UAZ_Gunner02.rtm";
			interpolateTo[]={"CDF_A3_Stryker_Dead",1};		//die outside vehicle
		};
		class CDF_A3_SPG_Car_Gunner: Crew
		{
			file = "\cdf_a3\cdf_a3_vehicles\data\anim\UAZ_spg9_gunner.rtm";
			interpolateTo[] = {"CDF_A3_Stryker_Dead",1};
		};
	};
};