class CfgPatches
{
	class ASCZ_Postprocess
	{
		units[] = {"ModulePostprocess_F"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F_Curator","A3_Modules_F_Events"};
	};
};
class CfgFunctions
{
	class A3_Modules_F_Curator
	{
		class Effects
		{
			file = "a3\modules_f_curator\effects\functions";
			class modulePostprocess{};
		};
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
		};
	};
	class ModulePostprocess_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ModulePostprocess_F";
		scope = 2;
		scopeCurator = 2;
		isTriggerActivated = 1;
		category = "Environment";
		displayName = "$STR_A3_CfgVehicles_ModulePostprocess_F";
		function = "BIS_fnc_modulePostprocess";
		icon = "\a3\Modules_F_Curator\Data\iconPostprocess_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitPostprocess_ca.paa";
		curatorInfoType = "RscDisplayAttributesModulePostprocess";
		class Arguments
		{
			class Template
			{
				displayName = "$STR_A3_CfgVehicles_ModulePostprocess_F_Arguments_Template";
				description = "";
				class Values
				{
					class Default
					{
						name = "$STR_A3_CfgPostProcessTemplates_Default_0";
						value = "Default";
						default = 1;
					};
					class Survive
					{
						name = "$STR_A3_CfgPostProcessTemplates_Survive_0";
						value = "Survive";
						default = 0;
					};
					class RealIsBrown
					{
						name = "$STR_A3_CfgPostProcessTemplates_RealIsBrown_0";
						value = "RealIsBrown";
						default = 0;
					};
					class BlackAndWhite
					{
						name = "$STR_A3_CfgPostProcessTemplates_BlackAndWhite_0";
						value = "BlackAndWhite";
						default = 0;
					};
					class Mediterranean
					{
						name = "$STR_A3_CfgPostProcessTemplates_Mediterranean_0";
						value = "Mediterranean";
						default = 0;
					};
                    class ASCZ_MiddleEast
					{
						name = "Middle East";
						value = "ASCZ_MiddleEast";
						default = 0;
					};
                    class ASCZ_RealIsBrownLight
                    {
                        name = "Real Is Brown 2";
                        value = "ASCZ_RealIsBrownLight"
                        default = 0;
                    };
                    class ASCZ_Nightstalkers
                    {
                        name = "Nightstalkers";
                        value = "ASCZ_Nightstalkers"
                        default = 0;
                    };
                    class ASCZ_GrayTone
                    {
                        name = "Gray Tone";
                        value = "ASCZ_GrayTone"
                        default = 0;
                    };
                    class ASCZ_ColdTone
                    {
                        name = "Cold Tone";
                        value = "ASCZ_ColdTone"
                        default = 0;
                    };
				};
			};
		};
	};	
};
class CfgPostProcessTemplates
{
	class Default
	{
		colorCorrections[] = {1,1,0,{ 0,0,0,0 },{ 1,1,1,1 },{ 0,0,0,0 }};
		filmGrain[] = {0,0,0,0,0};
	};
	class EastWind
	{
		colorCorrections[] = {1,1.08,-0.06,{ 0.5,0.5,0.5,0 },{ 1.0,1.0,1.0,1.21 },{ 0.09,0.09,0.09,0.0 }};
	};
  class ASCZ_MiddleEast
	{
        displayName = "Middle East";
		colorCorrections[] = {0.9, 1, 0, {0.1, 0.1, 0.1, -0.1}, {1, 1, 0.8, 0.528},  {1, 0.2, 0, 0}};
	};
    class ASCZ_RealIsBrownLight
    {
        displayName = "Real Is Brown 2";
        colorCorrections[] = {1,1,0,{0.1,0.2,0.3,-0.3},{1,1,1,0.5},{0.5,0.2,0,1}};
    };
    class ASCZ_Nightstalkers
    {
        displayName = "Nightstalkers";
        colorCorrections[] = {1, 1.1, 0.0, {0.0, 0.0, 0.0, 0.0}, {1.0,0.7, 0.6, 0.60}, {0.200, 0.600, 0.100, 0.0}};
    };
    class ASCZ_GrayTone
    {
        displayName = "Gray Tone";
        colorCorrections[] = {1.0, 1.0, 0.0,{1.0, 1.0, 1.0, 0.0},{1.0, 1.0, 0.9, 0.35},{0.3,0.3,0.3,-0.1}};
    };
    class ASCZ_ColdTone
    {
        displayName = "Cold Tone";
        colorCorrections[] = {1.0, 1.0, 0.0,{0.2, 0.2, 1.0, 0.0},{0.4, 0.75, 1.0, 0.60},{0.5,0.3,1.0,-0.1}};
    };
};
//};
