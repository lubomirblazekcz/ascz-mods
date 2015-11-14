class CfgPatches
{
	class ascz_cup_units_compability
	{
		units[] = {"CUP_I_GUE_Soldier_AKSU","CUP_I_GUE_Soldier_AKM"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_USMC"};
	};
};

class DefaultEventhandlers;
class UniformSlotInfo;

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase{};
	#include "usmc.hpp"
//	#include "napa.hpp"
};