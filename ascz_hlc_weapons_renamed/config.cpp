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
	class HLC_AK_ammobox: NATO_Box_Base
	{
	    displayName = "AK Supply Box";
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		displayName = "AK-74";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		displayName = "AKS-74";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
	};
	class hlc_rifle_ak12: hlc_rifle_aks74
	{
		displayName = "AK-12";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		displayName = "AKU-12";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
	};
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		displayName = "RPK-12";
        jsrs_soundeffect = "JSRS2_Distance_Effects_RPK";
	};
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
		displayName = "AKS-74U";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
	};
	class hlc_rifle_ak47: hlc_rifle_aks74
	{
		displayName = "AK-47";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";
	};
	class hlc_rifle_akm: hlc_rifle_ak47
	{
		displayName = "AKM";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";
	};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		displayName = "AKM (GL)";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		displayName = "RPK";
        jsrs_soundeffect = "JSRS2_Distance_Effects_RPK";
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		displayName = "AKS-74(GL)";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		displayName = "AEK-971S";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
	};
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
		displayName = "Saiga12K";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Shotgun";
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
	    displayName = "AK-74";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
	};
	class HLC_M14_ammobox: NATO_Box_Base
	{
	    displayName = "M14 Supply Box";
	};
	class hlc_rifle_M14: hlc_M14_base
	{
	   displayName = "M14";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M14";
	};
	class hlc_rifle_m14sopmod: hlc_rifle_M14
	{
	    displayName = "M14 SOPMOD";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M14";
	};
	class hlc_rifle_M21: hlc_M14_base
	{
	   displayName = "M21";
        jsrs_soundeffect = "JSRS2_Distance_Effects_DMR";
	};
	class hlc_rifle_m14dmr: hlc_rifle_M21
	{
		displayName = "M14 DMR";
        jsrs_soundeffect = "JSRS2_Distance_Effects_DMR";
	};
	class HLC_AR_ammobox: NATO_Box_Base
	{
		displayName = "AR15 Supply Box";
	};
	class hlc_rifle_g3sg1: hlc_g3_base
	{
	    displayName = "G3SG1";
        jsrs_soundeffect = "JSRS2_Distance_Effects_SCAR";
	};
	class hlc_rifle_psg1: hlc_rifle_g3sg1
	{
		displayName = "PSG-1";
        jsrs_soundeffect = "JSRS2_Distance_Effects_DMR";
	};
	class hlc_rifle_g3a3: hlc_rifle_g3sg1
	{
	    displayName = "G3A3";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class hlc_rifle_g3ka4: hlc_rifle_g3a3
	{
	    displayName = "G3KA4 RAS";
        jsrs_soundeffect = "";
	};
	class HLC_Rifle_g3ka4_GL: hlc_rifle_g3ka4
	{
	    displayName = "G3KA4 RAS(GL)";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Scar";
	};
	class hlc_rifle_hk51: hlc_rifle_g3sg1
	{
		displayName = "HK51";
        jsrs_soundeffect = "JSRS2_Distance_Effects_G36";
	};
	class hlc_rifle_hk53: hlc_rifle_g3sg1
	{
		displayName = "HK53";
        jsrs_soundeffect = "JSRS2_Distance_Effects_G36";
	};
	class HLC_FAL_ammobox: NATO_Box_Base
	{
	    displayName = "FAL Supply Box";
	};
	class hlc_rifle_falosw: hlc_fal_base
	{
		displayName = "FAL OSW";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
	class hlc_rifle_osw_GL: hlc_rifle_falosw
	{
		displayName = "FAL OSW(GL)";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
	class hlc_rifle_SLR: hlc_fal_base
	{
		displayName = "SLR";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
	class hlc_rifle_STG58F: hlc_fal_base
	{
		displayName = "FAL STG58";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
	class hlc_rifle_L1A1SLR: hlc_rifle_SLR
	{
		displayName = "L1A1 SLR";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
    class hlc_rifle_FAL5061: hlc_fal_base
    {
        displayName = "FAL 'Para'";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
	class hlc_rifle_SLRchopmod: hlc_rifle_FAL5061
	{
		displayName = "SLR Chopmod";
        jsrs_soundeffect = "JSRS2_Distance_Effects_Fal";
	};
	class HLC_MP5_ammobox: NATO_Box_Base
	{
		displayName = "MP5 Supply Box";
	};
	class hlc_smg_mp5k_PDW: hlc_Mp5_base
	{
		displayName = "MP5K-PDW";
        jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
	};
	class hlc_smg_mp5k: hlc_smg_mp5k_PDW
	{
		displayName = "MP5K";
        jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
    };
	class hlc_smg_mp5a2: hlc_Mp5_base
	{
		displayName = "MP5A2";
        jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
	};
	class hlc_smg_MP5N: hlc_Mp5_base
	{
		displayName = "MP5N";
        jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
	};
	class hlc_smg_9mmar: hlc_smg_MP5N
	{
		displayName = "MP5N '9MMAR'";
        jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
    };		
	class hlc_smg_mp5a4: hlc_Mp5_base
	{
		displayName = "MP5A4";
        jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
	};
	class hlc_smg_mp510: hlc_smg_MP5N
	{
		displayName = "MP5/10";
        jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
    };
	class hlc_smg_mp5sd5: hlc_Mp5_base
	{
		displayName = "MP5SD5";
	};
	class hlc_smg_mp5a3: hlc_smg_mp5a2
	{
		displayName = "MP5A3";
        jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
	};
	class hlc_smg_mp5sd6: hlc_smg_mp5sd5
	{
		displayName = "MP5SD6";
	};
	class HLC_M60E4_ammobox: NATO_Box_Base
	{
		displayName = "M60E4 Supply Box";
	};
    class hlc_M60e4_base;
    class hlc_lmg_M60E4: hlc_M60e4_base
	{
        jsrs_soundeffect = "JSRS2_Distance_Effects_zafir";
	};
	class hlc_ar15_base;
	class hlc_rifle_RU556: hlc_ar15_base
    {
		displayName = "AR-15 Sanitised Carbine";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
    };
	class hlc_rifle_RU5562: hlc_rifle_RU556
	{
		displayName = "AR-15 Magpul Carbine";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
	};
    class hlc_rifle_CQBR: hlc_rifle_RU556
    {
        displayName = "M4 CQB-R";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
    };
    class hlc_rifle_M4: hlc_rifle_RU556
    {
        displayName = "M4 (Handgrip)";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
    };
    class hlc_rifle_bcmjack: hlc_ar15_base
    {
        displayName = "AR-15 BCM 'Jack' Carbine";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
    };
    class hlc_rifle_Colt727: hlc_ar15_base
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
    };
    class hlc_rifle_Colt727_GL: hlc_rifle_Colt727
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
    };
    class hlc_rifle_Bushmaster300: hlc_rifle_Colt727
    {
        displayName = "M4A3";
        dfyre_soundeffect = "DFyre_A_Core_Effects_DF_WR_mx";
    };
    class hlc_rifle_vendimus: hlc_rifle_Bushmaster300
    {
        displayName = "AR-15 .300 Dissipator";
        dfyre_soundeffect = "DFyre_A_Core_Effects_DF_WR_mx";
    };
    class hlc_rifle_SAMR: hlc_rifle_RU556
    {
        displayName = "SAM-R";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
    };
    class hlc_rifle_samr2: hlc_rifle_SAMR
    {
        displayName = "SAM-R";
        jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
    };
    class hlc_rifle_honeybase: hlc_rifle_RU556
    {
        displayName = "AR-15 .300 Honey-Badger";
        dfyre_soundeffect = "DFyre_A_Core_Effects_DF_WR_mx";
    };
};