class CfgPatches
{
	class ascz_reshmaan_fix
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
	class reshmaan: Takistan
	{
	    icon = "";
		author = "VesMen & Fogu";
		cutscenes[] = {"ReshmaanIntro"};
		description = "Reshmaan Province";
		pictureMap = "\ascz_reshmaan_fix\Data\Reshmaan_ca.paa";
		pictureShot = "\ascz_reshmaan_fix\Data\ui_reshmaan_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class ReshmaanIntro
		{
			directory = "ascz_reshmaan_fix\Scenes\intro.reshmaan";
		};
	};
};