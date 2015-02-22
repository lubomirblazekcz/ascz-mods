class CfgPatches
{
	class ascz_landrovers_replacement
	{
		units[] = {"TKA_A3_LandRover_MG"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] = {"acr_a3_landrover_c"};
	};
};
class CfgVehicles {
    class ACR_A3_LandRover_MG_Des;
	class TKA_A3_LandRover_MG: ACR_A3_LandRover_MG_Des
	{
		scope = 2;
		displayname = "Land Rover HMG";
		side = 0;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ascz_landrovers_replacement\lr_base_ind_co.paa"};
		typicalCargo[] = {"B_TKA_A3_Soldier"};
        author = "TKA_A3";
        vehicleClass = "Car";
        crew = "B_TKA_A3_Soldier";
		faction = "TKA_A3";
	};
};