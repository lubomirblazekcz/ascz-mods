class CfgVehicles
	{
    class rhsusf_assault_eagleaiii_ucp;
    class rhsusf_assault_eagleaiii_ucp_medic: rhsusf_assault_eagleaiii_ucp
    {
        scope = 2;
    };
    class rhsusf_assault_eagleaiii_ucp_demo : rhsusf_assault_eagleaiii_ucp
    {
        scope = 2;
    };
    class rhsusf_assault_eagleaiii_ucp_engineer: rhsusf_assault_eagleaiii_ucp
    {
        scope = 2;
    };
	class SoldierEB;
	class rhs_infantry_msv_base: SoldierEB
		{
		faction = "ryd_rhs_faction_ru";
		};
	
	class rhs_pilot_base: rhs_infantry_msv_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_infantry_vdv_base: rhs_infantry_msv_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class MRAP_02_base_F;
		
	class rhs_tigr_base: MRAP_02_base_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_tigr_vdv: rhs_tigr_base {};
	
	class rhs_tigr_vmf: rhs_tigr_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_tigr_msv: rhs_tigr_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_tigr_vv: rhs_tigr_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
				
	class Tank_F;
	
	class rhs_tank_base: Tank_F {};
	
	class rhs_t80b: rhs_tank_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_2s3tank_base: Tank_F
		{
		faction = "ryd_rhs_faction_ru";
		};	
	
	class RHS_Mi24_base;

	class RHS_Mi24P_VVS_Base: RHS_Mi24_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi24P_vvs: RHS_Mi24P_VVS_Base {};
		
	class RHS_Mi24P_vvsc: RHS_Mi24P_vvs
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi24P_vdv: RHS_Mi24P_vvsc
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi24V_Base: RHS_Mi24_base {};
		
	class RHS_Mi24V_VVS_Base: RHS_Mi24V_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi24V_vvs: RHS_Mi24V_VVS_Base {};
		
	class RHS_Mi24V_vvsc: RHS_Mi24V_vvs
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi24V_vdv: RHS_Mi24V_vvsc
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class Heli_Transport_02_base_F;
		
	class RHS_Mi8_base: Heli_Transport_02_base_F {};
		
	class RHS_Mi8_VVS_Base: RHS_Mi8_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_mi8mtv3_base: rhs_mi8_base {};
		
	class RHS_Mi8MTV3_VVS_Base: RHS_Mi8MTV3_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_mi8amtsh_base: rhs_mi8mtv3_base {};
		
	class RHS_Mi8AMTSh_VVS_Base: RHS_Mi8AMTSh_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_mi8amt_base: rhs_mi8_base {};
		
	class RHS_Mi8AMT_VVS_Base: RHS_Mi8AMT_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base {};
		
	class RHS_Mi8mt_vvsc: RHS_Mi8mt_vvs
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi8mt_vdv: RHS_Mi8mt_vvsc
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi8mt_vv: RHS_Mi8mt_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi8MTV3_vvs: RHS_Mi8MTV3_VVS_Base {};
		
	class RHS_Mi8MTV3_vvsc: RHS_Mi8MTV3_vvs
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi8MTV3_vdv: RHS_Mi8MTV3_vvsc
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi8AMT_vvs: RHS_Mi8AMT_VVS_Base {};
		
	class RHS_Mi8AMT_vvsc: RHS_Mi8AMT_vvs
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi8AMT_vdv: RHS_Mi8AMT_vvsc
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Mi8AMTSh_vvs: RHS_Mi8AMTSh_VVS_Base {};
		
	class RHS_Mi8AMTSh_vvsc: RHS_Mi8AMTSh_vvs
		{
		faction = "ryd_rhs_faction_ru";
		};
	
	class O_Plane_CAS_02_F;
	
	class RHS_su25_base: O_Plane_CAS_02_F {};
		
	class RHS_Su25_VVS_Base: RHS_Su25_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Su25SM_vvs: RHS_Su25_VVS_Base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Su25SM_vvsc: RHS_Su25SM_vvs
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class Heli_Attack_02_base_F;
		
	class RHS_Ka52_base: Heli_Attack_02_base_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ka52_vvsc: RHS_Ka52_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ka52Black_base: RHS_Ka52_base {};
		
	class RHS_Ka52_vvs: RHS_Ka52Black_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class Wheeled_APC_F;
		
	class rhs_btr_base: Wheeled_APC_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr60_base: rhs_btr_base {};
		
	class rhs_btr60_vmf: rhs_btr60_base
		{
		faction = "ryd_rhs_faction_ru";
		};

	class rhs_btr60_vdv: rhs_btr60_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr60_vv: rhs_btr60_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr60_msv: rhs_btr60_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class APC_Tracked_02_base_F;
		
	class rhs_zsutank_base: APC_Tracked_02_base_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_zsu234_aa: rhs_zsutank_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class Offroad_01_base_F;
		
	class RHS_UAZ_Base: Offroad_01_base_F {};
	
	class RHS_UAZ_MSV_Base: RHS_UAZ_Base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_UAZ_MSV_01: RHS_UAZ_MSV_Base {};
		
	class rhs_uaz_vdv: RHS_UAZ_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_uaz_vmf: RHS_UAZ_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_uaz_vv: RHS_UAZ_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_uaz_open_Base: RHS_UAZ_Base {};
		
	class rhs_uaz_open_MSV_Base: rhs_uaz_open_Base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_uaz_open_MSV_01: rhs_uaz_open_MSV_Base {};
		
	class rhs_uaz_open_vdv: rhs_uaz_open_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_uaz_open_vmf: rhs_uaz_open_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_uaz_open_vv: rhs_uaz_open_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class Truck_F;
		
	class RHS_Ural_BaseTurret: Truck_F {};
		
	class RHS_Ural_Base: RHS_Ural_BaseTurret {};
		
	class RHS_Ural_MSV_Base: RHS_Ural_Base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_VDV_01: RHS_Ural_MSV_Base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_VMF_01: RHS_Ural_MSV_Base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_VV_01: RHS_Ural_MSV_Base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base {};
		
	class RHS_Ural_Open_VDV_01: RHS_Ural_Open_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_Open_VMF_01: RHS_Ural_Open_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_Open_VV_01: RHS_Ural_Open_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
		
	class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01 {};
		
	class RHS_Ural_Fuel_VDV_01: RHS_Ural_Fuel_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_Fuel_VMF_01: RHS_Ural_Fuel_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_Ural_Fuel_VV_01: RHS_Ural_Fuel_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_BM21_MSV_01: RHS_Ural_BaseTurret
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_BM21_VDV_01: RHS_BM21_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_BM21_VMF_01: RHS_BM21_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class RHS_BM21_VV_01: RHS_BM21_MSV_01
		{
		faction = "ryd_rhs_faction_ru";
		};
	
	class O_Truck_03_repair_F;
		
	class rhs_typhoon_base: O_Truck_03_repair_F {};
								
	class rhs_typhoon_vdv: rhs_typhoon_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class O_Heli_Light_02_unarmed_F;
		
	class rhs_ka60_grey: O_Heli_Light_02_unarmed_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_ka60_c: rhs_ka60_grey
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmd_base: Tank_F
		{
		faction = "ryd_rhs_faction_ru";
		};
	
	class rhs_bmp1tank_base: Tank_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp_base: rhs_bmp1tank_base {};
		
	class rhs_bmp1_vdv: rhs_bmp_base {};
		
	class rhs_bmp1_tv: rhs_bmp1_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1_msv: rhs_bmp1_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1_vmf: rhs_bmp1_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1_vv: rhs_bmp1_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1p_vdv: rhs_bmp1_vdv {};
		
	class rhs_bmp1p_tv: rhs_bmp1p_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1p_msv: rhs_bmp1p_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1p_vmf: rhs_bmp1p_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1p_vv: rhs_bmp1p_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1k_vdv: rhs_bmp1_vdv {};
		
	class rhs_bmp1k_tv: rhs_bmp1k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1k_msv: rhs_bmp1k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1k_vmf: rhs_bmp1k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1k_vv: rhs_bmp1k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1d_vdv: rhs_bmp1_vdv {};
		
	class rhs_bmp1d_tv: rhs_bmp1d_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1d_msv: rhs_bmp1d_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1d_vmf: rhs_bmp1d_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp1d_vv: rhs_bmp1d_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_prp3_vdv: rhs_bmp1_vdv {};
		
	class rhs_prp3_tv: rhs_prp3_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_prp3_msv: rhs_prp3_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_prp3_vmf: rhs_prp3_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_prp3_vv: rhs_prp3_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2e_vdv: rhs_bmp1_vdv {};
		
	class rhs_bmp2e_tv: rhs_bmp2e_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2e_msv: rhs_bmp2e_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2e_vmf: rhs_bmp2e_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2e_vv: rhs_bmp2e_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2_vdv: rhs_bmp2e_vdv {};
		
	class rhs_bmp2_tv: rhs_bmp2_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2_msv: rhs_bmp2_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2_vmf: rhs_bmp2_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2_vv: rhs_bmp2_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2k_vdv: rhs_bmp2_vdv {};
		
	class rhs_bmp2k_tv: rhs_bmp2k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2k_msv: rhs_bmp2k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2k_vmf: rhs_bmp2k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2k_vv: rhs_bmp2k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2d_vdv: rhs_bmp2_vdv {};
		
	class rhs_bmp2d_tv: rhs_bmp2d_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2d_msv: rhs_bmp2d_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2d_vmf: rhs_bmp2d_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp2d_vv: rhs_bmp2d_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
	
	class rhs_brm1k_base: rhs_bmp2e_vdv {};
	
	class rhs_brm1k_vdv: rhs_brm1k_base {};
		
	class rhs_brm1k_tv: rhs_brm1k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_brm1k_msv: rhs_brm1k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_brm1k_vmf: rhs_brm1k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_brm1k_vv: rhs_brm1k_vdv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_bmp3tank_base: Tank_F
		{
		faction = "ryd_rhs_faction_ru";
		};
					
	class rhs_btr70_vmf: rhs_btr_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr70_vdv: rhs_btr70_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr70_vv: rhs_btr70_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr70_msv: rhs_btr70_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr80_msv: rhs_btr70_msv {};
		
	class rhs_btr80_vdv: rhs_btr80_msv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr80_vv: rhs_btr80_msv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr80_vmf: rhs_btr80_msv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr80a_msv: rhs_btr80_msv {};
		
	class rhs_btr80a_vdv: rhs_btr80a_msv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr80a_vv: rhs_btr80a_msv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_btr80a_vmf: rhs_btr80a_msv
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class ThingX;
	class rhs_p37: ThingX
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_a3spruttank_base: Tank_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_a3t72tank_base: Tank_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class Car_F;

	class rhs_truck: Car_F
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_vmf: rhs_truck {};
		
	class rhs_gaz66_vdv: rhs_gaz66_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66o_vmf: rhs_gaz66_vmf {};
		
	class rhs_gaz66o_vdv: rhs_gaz66o_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};	
		
	class rhs_gaz66_vv: rhs_gaz66_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66o_vv: rhs_gaz66o_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_msv: rhs_gaz66_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66o_msv: rhs_gaz66o_vmf
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_r142_base: rhs_gaz66_vmf	{};
				
	class rhs_gaz66_r142_vdv: rhs_gaz66_r142_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_r142_vv: rhs_gaz66_r142_base
		{
		faction = "ryd_rhs_faction_ru";
		};
				
	class rhs_gaz66_r142_msv: rhs_gaz66_r142_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_ap2_base: rhs_gaz66_vmf {};	
		
	class rhs_gaz66_ap2_vdv: rhs_gaz66_ap2_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_ap2_vv: rhs_gaz66_ap2_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_ap2_msv: rhs_gaz66_ap2_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_repair_base: rhs_gaz66_vmf {};
	
	class rhs_gaz66_repair_vdv: rhs_gaz66_repair_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_repair_vv: rhs_gaz66_repair_base
		{
		faction = "ryd_rhs_faction_ru";
		};
		
	class rhs_gaz66_repair_msv: rhs_gaz66_repair_base
		{
		faction = "ryd_rhs_faction_ru";
		};	
	};