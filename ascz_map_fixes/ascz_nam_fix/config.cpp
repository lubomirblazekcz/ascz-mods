class CfgPatches
{
	class ascz_nam_fix
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
	class MBG_Nam:CAWorld
	{
        icon = "";
		author = "Mondkalb";
		cutscenes[] = {"NamIntro"};
		description = "Vietnam";
		pictureMap = "\ascz_nam_fix\Data\Nam_ca.paa";
		pictureShot = "\ascz_nam_fix\Data\ui_nam_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class NamIntro
		{
			directory = "ascz_nam_fix\Scenes\intro.MBG_Nam";
		};
	};
};