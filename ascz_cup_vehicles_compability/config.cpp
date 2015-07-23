class CfgPatches
{
	class ascz_cup_vehicles_compability
	{
		units[] = {"CUP_B_AV8B_Empty","CUP_B_AV8B_LGB","CUP_B_AV8B","CUP_B_AV8B_Hydra19","CUP_B_AV8B_Heavy","CUP_B_AV8B_Deepstrike","CUP_B_AV8B_FFAR_7","CUP_B_AV8B_FFAR_19","CUP_B_AAV"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_TrackedVehicles_AAV", "CUP_AirVehicles_AV8B","CUP_WheeledVehicles_Datsun"};
	};
};

class DefaultEventhandlers;
class CfgVehicles
{
	#include "av8.hpp"
	#include "avv.hpp"
	#include "datsun.hpp"
};