class CfgPatches
{
	class ascz_torabora_fix
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
	class torabora: Takistan
	{
		author = "Chill xl";
		cutscenes[] = {"ToraBoraIntro"};
		description = "ToraBora";
		pictureMap = "\ascz_torabora_fix\Data\ToraBora_Ca.paa";
		pictureShot = "\ascz_torabora_fix\Data\ui_torabora_ca.paa";
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class ToraBoraIntro
		{
			directory = "ascz_torabora_fix\Scenes\intro.torabora";
		};
	};
};