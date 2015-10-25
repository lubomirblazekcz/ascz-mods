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

		class OutsideTerrain
		{
			satellite = "cla\clafghan\data\cla_cg_satout_co.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "cla\clafghan\data\cla_cg_terron_nopx.paa";
					texture = "cla\clafghan\data\cla_cg_terron_co.paa";
				};
			};
		};
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