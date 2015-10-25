class CfgPatches
{
	class ascz_aliabad_fix
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
    class DefaultClutter;
	class MCN_Aliabad: Takistan
	{
	    icon = "";
		author = "McNools";
		cutscenes[] = {"AliabadIntro"};
		description = "Aliabad";
		pictureMap = "\ascz_aliabad_fix\Data\Aliabad_ca.paa";
		pictureShot = "\ascz_aliabad_fix\Data\ui_aliabad_ca.paa";
		
		class OutsideTerrain
		{
			satellite = "MCN\MCN_Aliabad\data\ali_satout_co.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "MCN\MCN_Aliabad\data\ali_hlina_nopx.paa";
					texture = "MCN\MCN_Aliabad\data\ali_hlina_co.paa";
				};
			};
		};
        class Clutter
        {
            class sm_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class sm_GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
        };
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class AliabadIntro
		{
			directory = "ascz_aliabad_fix\Scenes\intro.MCN_Aliabad";
		};
	};
};