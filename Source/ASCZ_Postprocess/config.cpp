////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.53
//Mon Jun 30 20:12:13 2014 : Source 'file' date Mon Jun 30 20:12:13 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class C:/Users/EvroMalarkey/Desktop/Effects/config.bin{
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
	class A3_Modules
	{
		class Effects
		{
			delete moduleTracers;
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
          class ASCZ_Takistan
					{
						name = "Takistan";
						value = "ASCZ_Takistan";
						default = 0;
					};
				};
			};
			class CommitTime
			{
				displayName = "$STR_A3_CfgVehicles_ModulePostprocess_F_Arguments_CommitTime";
				description = "";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModulePostprocess_F_ModuleDescription";
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
  class ASCZ_Takistan
	{
    displayName = "Takistan";
		colorCorrections[] = {0.9, 1, 0, {0.1, 0.1, 0.1, -0.1}, {1, 1, 0.8, 0.528},  {1, 0.2, 0, 0}};
	};
};
//};
