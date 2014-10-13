class CfgPatches
{
	class ascz_afghanvillage_fix
	{
		units[] = {"praa_av"};
		worlds[] = {"praa_av"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"praa_av", "AiA_Worlds"};
		author[] = {"EvroMalarkey"};
		version = "1.0";
	};
};

class CfgWorldList
{
	class praa_av{};
};
class CfgWorlds
{
    class Takistan;
	class praa_av: Takistan
	{
	    icon = "";
		author = "Minimalaco and Robster";
		cutscenes[] = {"afghanvillageIntro"};
		description = "Afghan Village";
		pictureMap = "\ascz_afghanvillage_fix\Data\AfghanVillage_Ca.paa";
		pictureShot = "\ascz_afghanvillage_fix\Data\ui_afghanvillage_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class afghanvillageIntro
		{
			directory = "ascz_afghanvillage_fix\Scenes\intro.praa_av";
		};
	};
};