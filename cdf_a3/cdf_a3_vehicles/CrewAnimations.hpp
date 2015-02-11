
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CDF_A3_UAZ_Gunner01 = "CDF_A3_UAZ_Gunner01";
		CDF_A3_UAZ_Gunner02 = "CDF_A3_UAZ_Gunner02"; //AGS Gunner
		CDF_A3_SPG_Car_Gunner = "CDF_A3_SPG_Car_Gunner";
        CDF_A3_BRDM2_Driver = "CDF_A3_BRDM2_Driver";
        CDF_A3_BRDM2_Gunner = "CDF_A3_BRDM2_Gunner";
        CDF_A3_BRDM2_Cargo01 = "CDF_A3_BRDM2_Cargo01";
        CDF_A3_BRDM2_Cargo02 = "CDF_A3_BRDM2_Cargo02";
        CDF_A3_GAZ_Gunner = "CDF_A3_GAZ_Gunner";
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
		class CDF_A3_KIA_BRDM2_Driver:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\cdf_a3\cdf_a3_vehicles\data\anim\AnimPath\KIA_BRDM2_Driver.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class CDF_A3_BRDM2_Driver: Crew
		{
			file="\cdf_a3\cdf_a3_vehicles\data\anim\BRDM2_Driver.rtm";
			interpolateTo[]={"CDF_A3_KIA_BRDM2_Driver",1};
		};
		class CDF_A3_KIA_BRDM2_Gunner:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\cdf_a3\cdf_a3_vehicles\data\anim\KIA_BRDM2_Gunner.rtm";
			soundEnabled=0;
			connectTo[] = {"DeadState",0.1};
		};
		class CDF_A3_BRDM2_Gunner: Crew
		{
			file="\cdf_a3\cdf_a3_vehicles\data\anim\BRDM2_Gunner.rtm";
			interpolateTo[]={"CDF_A3_KIA_BRDM2_Gunner",1};
		};
		class CDF_A3_KIA_BRDM2_Cargo01:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\cdf_a3\cdf_a3_vehicles\data\anim\KIA_BRDM2_Cargo01.rtm";
			soundEnabled=0;
			connectTo[] = {"DeadState",0.1};
		};
		class CDF_A3_BRDM2_Cargo01: Crew
		{
			file="\cdf_a3\cdf_a3_vehicles\data\anim\BRDM2_Cargo01.rtm";
			interpolateTo[]={"CDF_A3_KIA_BRDM2_Cargo01",1};
		};
		class CDF_A3_KIA_BRDM2_Cargo02:DefaultDie
		{
			actions = DeadActions;
			speed = 0.5;
			looped=false;
			terminal = 1;
			file="\cdf_a3\cdf_a3_vehicles\data\anim\KIA_BRDM2_Cargo02.rtm";
			soundEnabled=0;
			connectTo[] = {"DeadState",0.1};
		};
		class CDF_A3_BRDM2_Cargo02: Crew
		{
			file="\cdf_a3\cdf_a3_vehicles\data\anim\BRDM2_Cargo02.rtm";
			interpolateTo[]={"CDF_A3_KIA_BRDM2_Cargo02",1};
		};
		class CDF_A3_KIA_GAZ_Gunner: DefaultDie
		{
			actions = DeadActions;
			file="\cdf_a3\cdf_a3_vehicles\data\anim\KIA_GAZ_Gunner.rtm";
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"DeadState",0.1};
		};
		class CDF_A3_GAZ_Gunner: Crew
		{
			file="\cdf_a3\cdf_a3_vehicles\data\anim\Stryker_GunnerOut.rtm";
			interpolateTo[]={"KIA_GAZ_Gunner",1};
		};
	};
};