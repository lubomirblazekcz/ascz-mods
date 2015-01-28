class CfgPatches
{
	class ascz_clafghan_fix
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
    class Takistan;
	class clafghan: Takistan
	{
	    icon = "";
		author = "Minimalaco + Robster";
		cutscenes[] = {"clafghanIntro"};
		description = "Clafghan";
		pictureMap = "\ascz_clafghan_fix\Data\Clafghan_ca.paa";
		pictureShot = "\ascz_clafghan_fix\Data\ui_clafghan_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class clafghanIntro
		{
			directory = "ascz_clafghan_fix\Scenes\intro.Clafghan";
		};
	};
};