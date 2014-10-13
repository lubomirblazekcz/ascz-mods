class CfgPatches
{
	class ascz_clafghan_fix
	{
		units[] = {"Clafghan"};
		worlds[] = {"Clafghan"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"clafghan", "AiA_Worlds"};
		author[] = {"EvroMalarkey"};
		version = "1.0";
	};
};

class CfgWorldList
{
	class clafghan{};
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
    class Takistan: CAWorld{};
	class clafghan: Takistan
	{
	    worldName = "cla\clafghan\clafghan.wrp";
		author = "Minimalaco + Robster";
		cutscenes[] = {"clafghanIntro"};
		description = "Clafghan";
		pictureMap = "\ascz_clafghan_fix\Data\Clafghan_ca.paa";
		pictureShot = "\ascz_clafghan_fix\Data\ui_clafghan_ca.paa";

        dynLightMinBrightnessAmbientCoef = 0.5;
        dynLightMinBrightnessAbsolute = 0.05;
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
		class clafghanIntro
		{
			directory = "ascz_clafghan_fix\Scenes\intro.Clafghan";
		};
	};
};