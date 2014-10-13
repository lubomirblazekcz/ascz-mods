class CfgPatches
{
	class ascz_fallujah_fix
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
    class Utes;
	class fallujah:Utes
	{
		author = "Shezan74";
		cutscenes[] = {"FallujahIntro"};
		description = "Fallujah";
		icon = "";
		pictureMap = "\ascz_fallujah_fix\Data\Fallujah_ca.paa";
		pictureShot = "\ascz_fallujah_fix\Data\ui_fallujah_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class FallujahIntro
		{
			directory = "ascz_fallujah_fix\Scenes\intro.fallujah";
		};
	};
};