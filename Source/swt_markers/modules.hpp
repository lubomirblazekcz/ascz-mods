class CfgFactionClasses
{
	class swt_markers_a3
	{
		displayName = "Sweet Markers System";
		priority = 0;
		side = 7;
	};
};


class CfgVehicles
{
	class Logic;
	class Module_F;
	class swt_markers_disable: Module_F
	{
		scope = 2;
		author = "swatSTEAM";
		displayName = "$STR_SWT_M_MODUL_BRIEF";
		category = "swt_markers_a3";

		function = "";
		functionPriority = 1;
		class init
		{
			postInit = 1;
		};
		isGlobal = 2;
		isTriggerActivated = 0;
		class Eventhandlers  {
			init = "_this spawn compile preprocessFileLineNumbers '\swt_markers_a3\swt_disable.sqf';";
		};
	};

	class swt_markers_uniq_maps: Module_F
	{
		scope = 2;
		author = "swatSTEAM";
		displayName = "$STR_SWT_M_MODUL_UNIQ";
		category = "swt_markers_a3";

		function = "";
		functionPriority = 1;
		class init
		{
			postInit = 1;
		};
		isGlobal = 2;
		isTriggerActivated = 0;
		class Eventhandlers  {
			init = "_this spawn compile preprocessFileLineNumbers '\swt_markers_a3\uniq_maps.sqf';";
		};
	};

	class swt_markers_params: Module_F
	{
		scope = 2;
		author = "swatSTEAM";
		displayName = "$STR_SWT_M_MODUL_CONF";
		category = "swt_markers_a3";

		function = "";
		functionPriority = 1;
		class init
		{
			postInit = 1;
		};
		isGlobal = 2;
		isTriggerActivated = 0;
		class Eventhandlers {
			init = "_this spawn compile preprocessFileLineNumbers '\swt_markers_a3\swt_markers_params.sqf';";
		};
		class Arguments
		{
			class Loads
  			{
				displayName = "$STR_SWT_M_MODUL_LOAD";
				description = "$STR_SWT_M_MODUL_LOAD_T";
				typeName = "BOOL";
				class values
				{
					class On	{name = "On";	value = true; default = 1;};
					class Off	{name = "Off"; value = false;};
				};
			};
			class Loads_for
  			{
				displayName = "$STR_SWT_M_MODUL_LOAD_FOR";
				description = "$STR_SWT_M_MODUL_LOAD_FOR_T";
				typeName = "BOOL";
				class values
				{
					class On	{name = "$STR_SWT_M_MODUL_LOAD_FOR_LEAD";	value = true; default = 1;};
					class Off	{name = "$STR_SWT_M_MODUL_LOAD_FOR_ALL"; value = false;};
				};
			};
			class Loads_brif
  			{
				displayName = "$STR_SWT_M_MODUL_LOAD_WHEN";
				description = "$STR_SWT_M_MODUL_LOAD_WHEN";
				typeName = "BOOL";
				class values
				{
					class On	{name = "$STR_SWT_M_MODUL_LOAD_WHEN_A";	value = true; default = 1;};
					class Off	{name = "$STR_SWT_M_MODUL_LOAD_WHEN_BRIEF"; value = false;};
				};
			};
			class Fast
  			{
				displayName = "$STR_SWT_M_MODUL_FAST";
				description = "$STR_SWT_M_MODUL_FAST";
				typeName = "BOOL";
				class values
				{
					class On	{name = "On";	value = true;};
					class Off	{name = "Off"; value = false; default = 1;};
				};
			};
			class Fast_for
  			{
				displayName = "$STR_SWT_M_MODUL_FAST_FOR";
				description = "$STR_SWT_M_MODUL_FAST_FOR";
				typeName = "BOOL";
				class values
				{
					class On	{name = "$STR_SWT_M_MODUL_LOAD_FOR_LEAD";	value = true; default = 1;};
					class Off	{name = "$STR_SWT_M_MODUL_LOAD_FOR_ALL"; value = false;};
				};
			};
		};
	};
};
