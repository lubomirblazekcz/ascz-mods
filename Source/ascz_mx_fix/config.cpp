class CfgPatches
{
	class ascz_mx_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F_EPB_Rifles_MX_Black"};
	};
};

class CfgWeapons
{
	class arifle_MXC_F;
	class arifle_MXC_Black_F: arifle_MXC_F
	{
        class ItemInfo
        {
            hiddenSelections[] = {"camo1"};
            hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
        };
	};
};