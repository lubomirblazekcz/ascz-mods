class CfgPatches
{
	class ascz_capraia_fix
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
	class IsolaDiCapraia: CAWorld
	{
	    icon = "";
		author = "NGStudio";
		cutscenes[] = {"CapraiaIntro"};
		description = "Capraia";
		pictureMap = "\ascz_capraia_fix\Data\Capraia_ca.paa";
		pictureShot = "\ascz_capraia_fix\Data\ui_capraia_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class CapraiaIntro
		{
			directory = "ascz_capraia_fix\Scenes\intro.IsolaDiCapraia";
		};
	};
};