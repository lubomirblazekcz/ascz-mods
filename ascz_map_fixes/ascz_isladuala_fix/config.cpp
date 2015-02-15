class CfgPatches
{
	class ascz_isladuala_fix
	{
	    units[] = {};
        worlds[] = {};
        weapons[] = {};
		requiredVersion = 1.2;
		requiredAddons[] = {"AiA_Worlds","A3_Map_IslaDuala3"};
		author[] = {"EvroMalarkey"};
		version = "1.2";
	};
};
class CfgWorlds
{
    class CAWorld;
	class IslaDuala3: CAWorld
    {
        description = "Isla Duala";
        icon = "";
    };
};