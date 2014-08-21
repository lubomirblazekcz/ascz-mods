class CfgPatches
{
	class ascz_namalsk_fix_misc
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"NS2"};
		author[] = {"EvroMalarkey"};
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
