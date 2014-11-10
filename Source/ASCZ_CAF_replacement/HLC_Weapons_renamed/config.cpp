class CfgPatches
{
	class ascz_hlcweapons_renamed
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
	class hlc_M14_base;
	class hlc_g3_base;
	class hlc_fal_base;
	class hlc_Mp5_base;
	class NATO_Box_Base;
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
		displayName = "AEK-971S";
	};
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
		displayName = "Saiga12K";
	};
	class HLC_AK_ammobox: NATO_Box_Base
	{
	    displayName = "AK Supply Box";
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
	    displayName = "AK-74";
	};
	class HLC_M14_ammobox: NATO_Box_Base
	{
	    displayName = "M14 Supply Box";
	};
	class hlc_rifle_M14: hlc_M14_base
	{
	   displayName = "M14";
	};
	class hlc_rifle_m14sopmod: hlc_rifle_M14
	{
	    displayName = "M14 SOPMOD";
	};
	class hlc_rifle_M21: hlc_M14_base
	{
	   displayName = "M21";
	};
	class hlc_rifle_m14dmr: hlc_rifle_M21
	{
		displayName = "M14 DMR";
	};
	class HLC_AR_ammobox: NATO_Box_Base
	{
		displayName = "AR15 Supply Box";
	};
	class hlc_rifle_g3sg1: hlc_g3_base
	{
	    displayName = "G3/SG1";
	};
	class hlc_rifle_psg1: hlc_rifle_g3sg1
	{
		displayName = "PSG-1";
	};
	class hlc_rifle_g3a3: hlc_rifle_g3sg1
	{
	    displayName = "G3A3";
	};
	class hlc_rifle_g3ka4: hlc_rifle_g3a3
	{
	    displayName = "G3KA4 RAS";
	};
	class HLC_Rifle_g3ka4_GL: hlc_rifle_g3ka4
	{
	    displayName = "G3KA4 RAS(GL)";
	};
	class hlc_rifle_hk51: hlc_rifle_g3sg1
	{
		displayName = "MC51";
	};
	class hlc_rifle_hk53: hlc_rifle_g3sg1
	{
		displayName = "HK53";
	};
	class HLC_FAL_ammobox: NATO_Box_Base
	{
	    displayName = "FAL Supply Box";
	};
	class hlc_rifle_falosw: hlc_fal_base
	{
		displayName = "FAL OSW";
	};
	class hlc_rifle_osw_GL: hlc_rifle_falosw
	{
		displayName = "FAL OSW(GL)";
	};
	class hlc_rifle_SLR: hlc_fal_base
	{
		displayName = "SLR";
	};
	class hlc_rifle_STG58F: hlc_fal_base
	{
		displayName = "FAL STG58";
	};
	class hlc_rifle_L1A1SLR: hlc_rifle_SLR
	{
		displayName = "L1A1 SLR";
	};
    class hlc_rifle_FAL5061: hlc_fal_base
    {
        displayName = "FAL 'Para'";
	};
	class hlc_rifle_SLRchopmod: hlc_rifle_FAL5061
	{
		displayName = "SLR Chopmod";
	};
	class HLC_MP5_ammobox: NATO_Box_Base
	{
		displayName = "MP5 Supply Box";
	};
	class hlc_smg_mp5k_PDW: hlc_Mp5_base
	{
		displayName = "MP5K-PDW";
	};
	class hlc_smg_mp5k: hlc_smg_mp5k_PDW
	{
		displayName = "MP5K";
    };
	class hlc_smg_mp5a2: hlc_Mp5_base
	{
		displayName = "MP5A2";
	};
	class hlc_smg_MP5N: hlc_Mp5_base
	{
		displayName = "MP5N";
	};
	class hlc_smg_9mmar: hlc_smg_MP5N
	{
		displayName = "MP5N '9MMAR'";
    };		
	class hlc_smg_mp5a4: hlc_Mp5_base
	{
		displayName = "MP5A4";
	};
	class hlc_smg_mp510: hlc_smg_MP5N
	{
		displayName = "MP5/10";
    };
	class hlc_smg_mp5sd5: hlc_Mp5_base
	{
		displayName = "MP5SD5";
	};
	class hlc_smg_mp5a3: hlc_smg_mp5a2
	{
		displayName = "MP5A3";
	};
	class hlc_smg_mp5sd6: hlc_smg_mp5sd5
	{
		displayName = "MP5SD6";
	};
	class HLC_M60E4_ammobox: NATO_Box_Base
	{
		displayName = "M60E4 Supply Box";
	};
};