class CfgPatches
{
	class ascz_aia_fix
	{
	    units[] = {};
        worlds[] = {};
        weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"AiA_Worlds"};
		author[] = {"EvroMalarkey"};
		version = "1.0";
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class Lighting;
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
			};
		};
		class DefaultClutter;
	};
	class CAWorld: DefaultWorld
	{
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
            };
        };
    };
    class Chernarus: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"ChernarusIntro"};
    };
    class Bootcamp_ACR: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"Bootcamp_ACRIntro"};
        class clutter
        {
            class GrassCrookedSmall: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1;
            };
            class GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.05;
            };
            class GrassCrookedGreenSmall: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1;
            };
            class GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
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
        };
    };
    class Desert_E: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"Desert_EIntro"};
    };
    class Intro: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"IntroIntro"};
    };
    class Porto: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"PortoIntro"};
    };
    class ProvingGrounds_PMC: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"ProvingGrounds_PMCIntro"};
    };
    class Sara: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"SaraIntro"};
    };
    class Shapur_BAF: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"Shapur_BAFIntro"};
    };
    class Takistan: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"TakistanIntro"};
    };
    class Utes: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"UtesIntro"};
		class Clutter
		{
			class UTFernAutumn: DefaultClutter
			{
				scaleMin = 0.6;
				scaleMax = 1.3;
			};
			class UTFernAutumnTall: DefaultClutter
			{
				scaleMin = 0.7;
				scaleMax = 1.2;
			};
			class GrassCrookedForest: DefaultClutter
			{
				model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
		};
    };
    class Woodland_ACR: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"Woodland_ACRIntro"};
        class clutter
        {
            class GrassCrooked: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrooked.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.05;
            };
            class GrassCrookedGreen: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedGreen.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.05;
            };
            class GrassCrookedForest: DefaultClutter
            {
                model = "AiA\Worlds\Clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
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
        };
    };
    class Zargabad: CAWorld
    {
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"ZargabadIntro"};
    };
	class Chernarus_Summer: Chernarus
	{
		description = "$STR_SUMMER_CHERNARUS";
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"Chernarus_SummerIntro"};
		pictureMap = "\ascz_aia_fix\Data\Chernarus_Summer_ca.paa";
	};
	class Sara_dbe1: CAWorld
	{
		description = "$STR_UNITED_SAHRANI";
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"Sara_dbe1Intro"};
	};
	class SaraLite: CAWorld
	{
		description = "$STR_SOUTHERN_SAHRANI";
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"SaraLiteIntro"};
	};
	class Mountains_ACR: CAWorld
	{
		description = "$STR_TAKISTAN_MOUNTAINS";
		author = "$STR_a3_bohemia_interactive";
		cutscenes[] = {"Mountains_ACRIntro"};
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class ChernarusIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Chernarus";
		};
		class Bootcamp_ACRIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Bootcamp_ACR";
		};
		class Desert_EIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Desert_E";
		};
		class IntroIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Intro";
		};
		class PortoIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Porto";
		};
		class ProvingGrounds_PMCIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.ProvingGrounds_PMC";
		};
		class SaraIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Sara";
		};
		class Shapur_BAFIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Shapur_BAF";
		};
		class TakistanIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Takistan";
		};
		class UtesIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.utes";
		};
		class Woodland_ACRIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Woodland_ACR";
		};
		class ZargabadIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Zargabad";
		};
		class Chernarus_SummerIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Chernarus_Summer";
		};
		class Sara_dbe1Intro
		{
			directory = "ascz_aia_fix\Scenes\intro.Sara_dbe1";
		};
		class SaraLiteIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.SaraLite";
		};
		class Mountains_ACRIntro
		{
			directory = "ascz_aia_fix\Scenes\intro.Mountains_ACR";
		};
	};
};