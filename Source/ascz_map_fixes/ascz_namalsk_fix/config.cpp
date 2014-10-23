class CfgPatches
{
	class ascz_namalsk_fix
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
    class Utes;
	class namalsk: Utes
	{
        icon = "";
		author = "Sumrak";
		cutscenes[] = {"intro"};
		description = "Namalsk";
		pictureMap = "\ascz_namalsk_fix\Data\namalsk_ca.paa";
		pictureShot = "\ascz_namalsk_fix\Data\ui_namalsk_ca.paa";
		class CfgEnvSounds;
		class EnvSounds: CfgEnvSounds
        {
            class Rain
            {
                name = "$STR_DN_RAIN";
                sound[] = {"A3\sounds_f\ambient\rain\rain_new_1",0.35481337,1,200};
                soundNight[] = {"A3\sounds_f\ambient\rain\rain_new_2",0.31622776,1,200};
            };
        };
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class intro
		{
			directory = "ascz_namalsk_fix\Scenes\intro.namalsk";
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class nsw_er7mm: CA_Magazine
	{
		scope = 1;
	};
};
class CfgWeapons
{
	class Default;
	class ItemCore: Default{};
	class APSI: ItemCore
	{
		scope = 1;
	};
	class BrokenItemRadio: ItemCore
	{
		scope = 1;
	};
	class BrokenItemGPS: ItemCore
	{
		scope = 1;
	};
	class BrokenNVGoggles: ItemCore
	{
		scope = 1;
	};
	class mut_heart: ItemCore
	{
		scope = 1;
	};
	class RifleCore;
	class Rifle: RifleCore{};
	class nsw_er7s: Rifle
	{
		scope = 1;
	};
	class nsw_er7a: Rifle
	{
		scope = 1;
	};
};