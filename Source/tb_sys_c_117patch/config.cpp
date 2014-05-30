class CfgPatches
{
	class tb_sys_c_117patch
	{
		requiredaddons[] = {"acre_sys_radio","acre_sys_prc117f"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};
class CfgWeapons
{
	class ACRE_BaseRadio;
	class ACRE_PRC117F: ACRE_BaseRadio
	{
		simulation = "ItemRadio";
		class ItemInfo
		{
			allowedSlots[] = {901};
			mass = 82;
		};
	};
};