class CfgPatches
{
	class ascz_hlcweapons_aks
	{
		requiredaddons[] = {"hlcweapons_aks"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		version = "V1.1";
		author = "toadie";
	};
};



class CfgWeapons
{
	class hlc_ak_base;
	class hlc_rifle_ak74: hlc_ak_base
	{
		displayName = "AK-74";
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		displayName = "AKS-74";
	};
	class hlc_rifle_ak12: hlc_rifle_aks74
	{
		displayName = "AK-12";
	};
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
		displayName = "AKS-74U";
	};
	class hlc_rifle_ak47: hlc_rifle_aks74
	{
		displayName = "AK-47";
	};
	class hlc_rifle_akm: hlc_rifle_ak47
	{
		displayName = "AKM";
	};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		displayName = "AKM (GL)";
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		displayName = "RPK";
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		displayName = "AKS-74(GL)";
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		displayName = "ZID AEK-971S";
	};
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
		displayName = "Saiga12K";
	};
};