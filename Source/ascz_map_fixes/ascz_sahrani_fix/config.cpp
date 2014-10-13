class CfgPatches
{
	class ascz_sahrani_fix
	{
	    units[] = {};
        worlds[] = {};
        weapons[] = {};
		requiredVersion = 1.2;
		requiredAddons[] = {"AiA_Worlds"};
		author[] = {"EvroMalarkey"};
		version = "1.2";
	};
};
class CfgWorlds
{
    class CAWorld;
	class smd_sahrani_A2:CAWorld
	{
		author = "SMD Team";
		cutscenes[] = {"smd_sahrani_a2Intro1"};
		description = "Sahrani SMD";
		pictureMap = "\ascz_sahrani_fix\Data\Sahrani_ca.paa";
		pictureShot = "\ascz_sahrani_fix\Data\ui_sahrani_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class smd_sahrani_a2Intro1
		{
			directory = "ascz_sahrani_fix\Scenes\intro.smd_sahrani_A2";
		};
	};
};