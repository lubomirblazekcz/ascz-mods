class CfgPatches
{
	class ascz_podagorsk_fix
	{
		units[] = {"FDF_Isle1_a"};
		worlds[] = {"FDF_Isle1_a"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"FDF_Isle1_a", "AiA_Worlds"};
		author[] = {"EvroMalarkey"};
		version = "1.0";
	};
};

class CfgWorldList
{
	class FDF_Isle1_a{};
};
class CfgWorlds
{
    class DefaultWorld
    	{
    		class Weather
    		{
    			class Overcast;
    		};
    	};
    	class CAWorld: DefaultWorld
    	{
    		class Grid{};
    		class DayLightingBrightAlmost;
    		class DayLightingRainy;
    		class DefaultClutter;
    		class Weather: Weather
    		{
    			class Lighting;
    			class Overcast: Overcast
    			{
    				class Weather1;
    				class Weather2;
    				class Weather3;
    				class Weather4;
    				class Weather5;
    				class Weather6;
    			};
    		};
    	};
    class DefaultLighting;
    class Chernarus: CAWorld{};
	class FDF_Isle1_a: Chernarus
	{
	    icon = "";
		worldName = "\ca\FDF_Isle1_a\FDF_Isle1_a.wrp";
		author = "FDF Team";
		cutscenes[] = {"PodagorskIntro"};
		description = "Podagorsk";
		pictureMap = "\ascz_podagorsk_fix\Data\Podagorsk_ca.paa";
		pictureShot = "\ascz_podagorsk_fix\Data\ui_podagorsk_ca.paa";

        dynLightMinBrightnessAmbientCoef = 0.5;
        dynLightMinBrightnessAbsolute = 0.05;
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
        class Sea
        {
            seaTexture = "a3\data_f\seatexture_co.paa";
            seaMaterial = "#water";
            shoreMaterial = "#shore";
            shoreFoamMaterial = "#shorefoam";
            shoreWetMaterial = "#shorewet";
            WaterMapScale = 20;
            WaterGrid = 50;
            MaxTide = 0;
            MaxWave = 0.25;
            SeaWaveXScale = "2.0/50";
            SeaWaveZScale = "1.0/50";
            SeaWaveHScale = 1.0;
            SeaWaveXDuration = 5000;
            SeaWaveZDuration = 10000;
        };
        class Underwater
        {
            noWaterFog = -0.001;
            fullWaterFog = 0.001;
            deepWaterFog = 200;
            waterFogDistanceNear = 10;
            waterFogDistance = 40;
            waterColor[] = {0.04,0.16,0.22};
            deepWaterColor[] = {0.0,0.001,0.009};
            surfaceColor[] = {0.04,0.16,0.22};
            deepSurfaceColor[] = {0.0,0.001,0.009};
        };
        class SeaWaterShaderPars
        {
            refractionMoveCoef = 0.03;
            minWaterOpacity = 0.0;
            waterOpacityDistCoef = 0.4;
            underwaterOpacity = 0.5;
            waterOpacityFadeStart = 60;
            waterOpacityFadeLength = 120;
        };
		class Weather: Weather
            {
                class Overcast: Overcast
                {
                    class Weather1: Weather1
                    {
                        sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
                        skyR = "A3\Map_Stratis\Data\sky_veryclear_lco.paa";
                        horizon = "A3\Map_Stratis\Data\sky_veryclear_horizont_sky.paa";
                    };
                    class Weather7: Weather1
                    {
                        sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
                        skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                        horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    };
                    class Weather2: Weather2
                    {
                        sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
                        skyR = "A3\Map_Stratis\Data\sky_almostclear_lco.paa";
                        horizon = "A3\Map_Stratis\Data\sky_almostclear_horizont_sky.paa";
                    };
                    class Weather3: Weather3
                    {
                        sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
                        skyR = "A3\Map_Stratis\Data\sky_semicloudy_lco.paa";
                        horizon = "A3\Map_Stratis\Data\sky_semicloudy_horizont_sky.paa";
                    };
                    class Weather4: Weather4
                    {
                        sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
                        skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                        horizon = "A3\Map_Stratis\Data\sky_cloudy_horizont_sky.paa";
                    };
                    class Weather5: Weather5
                    {
                        sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
                        skyR = "A3\Map_Stratis\Data\sky_mostlycloudy_lco.paa";
                        horizon = "A3\Map_Stratis\Data\sky_mostlycloudy_horizont_sky.paa";
                    };
                    class Weather6: Weather6
                    {
                        sky = "A3\Map_Stratis\Data\sky_veryclear_sky.paa";
                        skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                        horizon = "A3\Map_Stratis\Data\sky_overcast_horizont_sky.paa";
                    };
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