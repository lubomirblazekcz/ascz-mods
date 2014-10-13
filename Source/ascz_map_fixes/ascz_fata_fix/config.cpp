class CfgPatches
{
	class ascz_fata_fix
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
	class fata: Takistan
	{
	    icon = "";
		author = "Minimalaco";
		cutscenes[] = {"FataIntro"};
		description = "Fata";
		pictureMap = "\ascz_fata_fix\Data\Fata_ca.paa";
		pictureShot = "\ascz_fata_fix\Data\ui_fata_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class FataIntro
		{
			directory = "ascz_fata_fix\Scenes\intro.Fata";
		};
	};
};