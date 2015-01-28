class CfgPatches
{
	class ascz_podagorsk_fix
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
    class Chernarus;
    class DefaultClutter;
	class FDF_Isle1_a: Chernarus
	{
	    icon = "";
		author = "FDF Team";
		cutscenes[] = {"PodagorskIntro"};
		description = "Podagorsk";
		pictureMap = "\ascz_podagorsk_fix\Data\Podagorsk_ca.paa";
		pictureShot = "\ascz_podagorsk_fix\Data\ui_podagorsk_ca.paa";

        class clutter
        {
            class GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.9;
                scaleMax = 1.05;
            };
            class GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
                scaleMin = 0.7;
                scaleMax = 1.05;
            };
            class GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class FernAutumn: DefaultClutter
            {
                scaleMin = 0.6;
                scaleMax = 1.3;
            };
            class FernAutumnTall: DefaultClutter
            {
                scaleMin = 0.7;
                scaleMax = 1.2;
            };
            class FDF_GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
                scaleMin = 0.5;
                scaleMax = 1;
            };
            class FDF_GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
                scaleMin = 0.5;
                scaleMax = 1;
            };
        };
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class PodagorskIntro
		{
			directory = "ascz_podagorsk_fix\Scenes\intro.FDF_Isle1_a";
		};
	};
};