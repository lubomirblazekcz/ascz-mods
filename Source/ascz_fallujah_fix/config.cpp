class CfgPatches
{
	class ascz_fallujah_fix
	{
		units[] = {};
		worlds[] = {"fallujah"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"fallujah_hou","Utes"};
		author[] = {"EvroMalarkey"};
		version = "1.0";
	};
};

class CfgWorldList
{
	class fallujah{};
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
    class Utes: CAWorld{};
	class fallujah:Utes
	{
	    worldName = "shez\fallujah\fallujah.wrp";
		author = "Shezan74";
		cutscenes[] = {"FallujahIntro"};
		description = "Fallujah";
		icon = "";
		pictureMap = "\ascz_fallujah_fix\Data\Fallujah_ca.paa";
		pictureShot = "\ascz_fallujah_fix\Data\ui_fallujah_ca.paa";

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
		class FallujahIntro
		{
			directory = "ascz_fallujah_fix\Scenes\intro.fallujah";
		};
	};
};