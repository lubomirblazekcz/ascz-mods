class CfgPatches
{
	class UU_rds_a2port_cman
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"rds_a2port_cman"};
		author[] = {"Haleks"};
		versionDesc = "Unlocked Uniforms";
	};
};
class CfgVehicles
{
	class Civilian_F;
	class RDS_Civilian_Base: Civilian_F
	{
		modelsides[] = {3,2,1,0};
	};
};
