class CfgVehicles
{
    // AFRF
    // Infantry
	class SoldierEB;
	class rhs_infantry_msv_base: SoldierEB
    {
        faction = "ascz_rhs_faction_ru";
        vehicleClass = "rhs_vehclass_infantry_msv";
        modelsides[] = {6};
    };
	class rhs_infantry_vdv_base: rhs_infantry_msv_base
    {
        faction = "ascz_rhs_faction_ru";
        vehicleClass = "rhs_vehclass_infantry_vdv";
        modelsides[] = {6};
    };
	class rhs_pilot_base: rhs_infantry_msv_base
    {
        faction = "ascz_rhs_faction_ru";
        vehicleClass = "rhs_vehclass_infantry";
    };

	// Vehicles
	class MRAP_02_base_F;
	class rhs_tigr_base: MRAP_02_base_F
    {
        faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };
	class rhs_tigr_vdv: rhs_tigr_base
	{
	    displayName = "GAZ-233011 Tigr (VDV)";
		vehicleclass = "Car";
	};
	class rhs_tigr_vmf: rhs_tigr_vdv
    {
        faction = "ascz_rhs_faction_ru";
        displayName = "GAZ-233011 Tigr (VMF)";
		vehicleclass = "Car";
    };
	class rhs_tigr_msv: rhs_tigr_vdv
    {
        faction = "ascz_rhs_faction_ru";
        displayName = "GAZ-233011 Tigr (MSV)";
		vehicleclass = "Car";
    };
		
	class rhs_tigr_vv: rhs_tigr_vdv
    {
        faction = "ascz_rhs_faction_ru";
        displayName = "GAZ-233011 Tigr (VV)";
		vehicleclass = "Car";
    };
    class rhs_tigr_3camo_vdv: rhs_tigr_base
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_3camo_vmf: rhs_tigr_3camo_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_3camo_msv: rhs_tigr_3camo_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_3camo_vv: rhs_tigr_3camo_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_ffv_vdv: rhs_tigr_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_ffv_vmf: rhs_tigr_ffv_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_ffv_msv: rhs_tigr_ffv_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_ffv_vv: rhs_tigr_ffv_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_ffv_3camo_vdv: rhs_tigr_ffv_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_ffv_3camo_vmf: rhs_tigr_ffv_3camo_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_ffv_3camo_msv: rhs_tigr_ffv_3camo_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
    class rhs_tigr_ffv_3camo_vv: rhs_tigr_ffv_3camo_vdv
    {
        faction = "ascz_rhs_faction_ru";
        vehicleclass = "Car";
    };
				
	class Tank_F;
	class rhs_tank_base: Tank_F
	{
		vehicleclass = "Armored";
	};
	class rhs_t80b: rhs_tank_base
    {
        faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
	class rhs_2s3tank_base: Tank_F
    {
        faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
	
	class RHS_Mi24_base;
	class RHS_Mi24P_VVS_Base: RHS_Mi24_base
    {
        faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
	class RHS_Mi24P_vvs: RHS_Mi24P_VVS_Base
	{
	    displayName = "Mi-24P (VVS)";
		vehicleclass = "Air";
	};
	class RHS_Mi24P_vvsc: RHS_Mi24P_vvs
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-24P (VVS Camo)";
		vehicleclass = "Air";
    };
	class RHS_Mi24P_vdv: RHS_Mi24P_vvsc
    {
        faction = "ascz_rhs_faction_ru";
		displayName = "Mi-24P (VDV)";
		vehicleclass = "Air";
    };
		
	class RHS_Mi24V_Base: RHS_Mi24_base {};
	class RHS_Mi24V_VVS_Base: RHS_Mi24V_base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
	class RHS_Mi24V_vvs: RHS_Mi24V_VVS_Base
	{
		displayName = "Mi-24V (VVS)";
		vehicleclass = "Air";
	};
	class RHS_Mi24V_vvsc: RHS_Mi24V_vvs
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-24V (VVS Camo)";
		vehicleclass = "Air";
    };
	class RHS_Mi24V_vdv: RHS_Mi24V_vvsc
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-24V (VDV)";
		vehicleclass = "Air";
    };
    class RHS_Mi24P_CAS_VVS_Base: RHS_Mi24P_VVS_Base {};
	class RHS_Mi24P_CAS_vvs : RHS_Mi24P_CAS_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
    class RHS_Mi24P_CAS_vvsc: RHS_Mi24P_CAS_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi24P_CAS_vdv : RHS_Mi24P_CAS_VVS_Base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };

    class RHS_Mi24P_AT_VVS_Base: RHS_Mi24P_VVS_Base {};
	class RHS_Mi24P_AT_vvs : RHS_Mi24P_AT_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
	class RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvs
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
	class RHS_Mi24P_AT_vdv : RHS_Mi24P_AT_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};

	class RHS_Mi24V_FAB_VVS_Base: RHS_Mi24V_VVS_Base {};
	class RHS_Mi24V_FAB_vvs: RHS_Mi24V_FAB_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
	class RHS_Mi24V_FAB_vvsc:  RHS_Mi24V_fab_vvs
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
	class RHS_Mi24V_FAB_vdv: RHS_Mi24V_FAB_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};

    class RHS_Mi24V_UPK23_VVS_Base: RHS_Mi24V_VVS_Base {};
	class RHS_Mi24V_UPK23_vvs: RHS_Mi24V_UPK23_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
	class RHS_Mi24V_UPK23_vvsc:  RHS_Mi24V_upk23_vvs
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
	class RHS_Mi24V_UPK23_vdv: RHS_Mi24V_UPK23_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};

	class RHS_Mi24V_AT_VVS_Base: RHS_Mi24V_VVS_Base {};
	class RHS_Mi24V_AT_vvs: RHS_Mi24V_AT_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
	class RHS_Mi24V_AT_vvsc:  RHS_Mi24V_AT_vvs
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
	class RHS_Mi24V_AT_vdv: RHS_Mi24V_AT_VVS_Base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
	};
		
	class Heli_Transport_02_base_F;
	class RHS_Mi8_base: Heli_Transport_02_base_F {};
	class RHS_Mi8_VVS_Base: RHS_Mi8_base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
	class rhs_mi8mtv3_base: rhs_mi8_base {};
	class RHS_Mi8MTV3_VVS_Base: RHS_Mi8MTV3_base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
	class rhs_mi8amtsh_base: rhs_mi8mtv3_base {};
	class RHS_Mi8AMTSh_VVS_Base: RHS_Mi8AMTSh_base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
	class rhs_mi8amt_base: rhs_mi8_base {};
	class RHS_Mi8AMT_VVS_Base: RHS_Mi8AMT_base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
	class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base
	{
		displayName = "Mi-8MT (VVS)";
		vehicleclass = "Air";
	};
	class RHS_Mi8mt_vvsc: RHS_Mi8mt_vvs
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-8MT (VVS Camo)";
		vehicleclass = "Air";
    };
	class RHS_Mi8mt_vdv: RHS_Mi8mt_vvsc
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-8MT (VDV)";
		vehicleclass = "Air";
    };
	class RHS_Mi8mt_vv: RHS_Mi8mt_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-8MT (VV)";
		vehicleclass = "Air";
    };
	class RHS_Mi8MTV3_vvs: RHS_Mi8MTV3_VVS_Base
	{
		displayName = "Mi-8MTV-3 (VVS)";
		vehicleclass = "Air";
	};
	class RHS_Mi8MTV3_vvsc: RHS_Mi8MTV3_vvs
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-8MTV-3 (VVS Camo)";
		vehicleclass = "Air";
    };
	class RHS_Mi8MTV3_vdv: RHS_Mi8MTV3_vvsc
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-8MTV-3 (VDV)";
		vehicleclass = "Air";
    };
	class RHS_Mi8AMT_vvs: RHS_Mi8AMT_VVS_Base
	{
		displayName = "Mi-8AMT (VVS)";
		vehicleclass = "Air";
	};
	class RHS_Mi8AMT_vvsc: RHS_Mi8AMT_vvs
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-8AMT (VVS Camo)";
		vehicleclass = "Air";
    };
	class RHS_Mi8AMT_vdv: RHS_Mi8AMT_vvsc
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-8AMT (VDV)";
		vehicleclass = "Air";
    };
	class RHS_Mi8AMTSh_vvs: RHS_Mi8AMTSh_VVS_Base
	{
		displayName = "Mi-8AMTSh (VVS)";
		vehicleclass = "Air";
	};
	class RHS_Mi8AMTSh_vvsc: RHS_Mi8AMTSh_vvs
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Mi-8AMTSh (VVS Camo)";
		vehicleclass = "Air";
    };

    class RHS_Mi8mt_Cargo_vvs: RHS_Mi8mt_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8mt_Cargo_vvsc: RHS_Mi8mt_Cargo_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8mt_Cargo_vdv: RHS_Mi8mt_Cargo_vvsc
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8mt_Cargo_vv: RHS_Mi8mt_Cargo_vvsc
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };

    class RHS_Mi8MTV3_UPK23_vvs: RHS_Mi8MTV3_VVS
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8MTV3_UPK23_vdv: RHS_Mi8MTV3_UPK23_vvsc
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };

    class RHS_Mi8MTV3_FAB_vvs: RHS_Mi8MTV3_VVS
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8MTV3_FAB_vvsc: RHS_Mi8MTV3_FAB_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8MTV3_FAB_vdv: RHS_Mi8MTV3_FAB_vvsc
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };

    class RHS_Mi8AMTSh_UPK23_vvs: RHS_Mi8AMTSh_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };

    class RHS_Mi8AMTSh_UPK23_vvsc: RHS_Mi8AMTSh_UPK23_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8AMTSh_FAB_vvs: RHS_Mi8AMTSh_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
    class RHS_Mi8AMTSh_FAB_vvsc: RHS_Mi8AMTSh_FAB_vvs
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };

    class rhs_pchela1t_base;
	class rhs_pchela1t_vvs: rhs_pchela1t_base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Autonomous";
	};
	class rhs_pchela1t_vvsc: rhs_pchela1t_base
	{
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Autonomous";
	};

    class OTR21_Base;
    class rhs_9k79: OTR21_Base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };
    class rhs_9k79_K: rhs_9k79
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };
    class rhs_9k79_B: rhs_9k79
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };

	class O_Plane_CAS_02_F;
	class RHS_su25_base: O_Plane_CAS_02_F {};
	class RHS_Su25_VVS_Base: RHS_Su25_base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
	class RHS_Su25SM_vvs: RHS_Su25_VVS_Base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Su-25SM (VVS)";
		vehicleclass = "Air";
    };
	class RHS_Su25SM_vvsc: RHS_Su25SM_vvs
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Su-25SM (VVS Camo)";
		vehicleclass = "Air";
    };
		
	class Heli_Attack_02_base_F;
	class RHS_Ka52_base: Heli_Attack_02_base_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Air";
    };
	class RHS_Ka52_vvsc: RHS_Ka52_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Ka-52 (VVS Camo)";
		vehicleclass = "Air";
    };
	class RHS_Ka52Black_base: RHS_Ka52_base {};
	class RHS_Ka52_vvs: RHS_Ka52Black_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Ka-52 (VVS)";
		vehicleclass = "Air";
    };
		
	class Wheeled_APC_F;
	class rhs_btr_base: Wheeled_APC_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
	class rhs_btr60_base: rhs_btr_base {};
	class rhs_btr60_vmf: rhs_btr60_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-60 (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_btr60_vdv: rhs_btr60_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-60 (VDV)";
		vehicleclass = "Armored";
    };
	class rhs_btr60_vv: rhs_btr60_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-60 (VV)";
		vehicleclass = "Armored";
    };
	class rhs_btr60_msv: rhs_btr60_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-60 (MSV)";
		vehicleclass = "Armored";
    };
		
	class APC_Tracked_02_base_F;
	class rhs_zsutank_base: APC_Tracked_02_base_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
	class rhs_zsu234_aa: rhs_zsutank_base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
		
	class Offroad_01_base_F;
	class RHS_UAZ_Base: Offroad_01_base_F {};
	class RHS_UAZ_MSV_Base: RHS_UAZ_Base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };
	class RHS_UAZ_MSV_01: RHS_UAZ_MSV_Base
	{
		displayName = "UAZ-469 (MSV)";
		vehicleclass = "Car";
	};
	class rhs_uaz_vdv: RHS_UAZ_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "UAZ-469 (VDV)";
		vehicleclass = "Car";
    };
	class rhs_uaz_vmf: RHS_UAZ_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "UAZ-469 (VMF)";
		vehicleclass = "Car";
    };
	class rhs_uaz_vv: RHS_UAZ_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "UAZ-469 (VV)";
		vehicleclass = "Car";
    };
		
	class rhs_uaz_open_Base: RHS_UAZ_Base {};
	class rhs_uaz_open_MSV_Base: rhs_uaz_open_Base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };
	class rhs_uaz_open_MSV_01: rhs_uaz_open_MSV_Base
	{
		displayName = "UAZ-469 Open (MSV)";
		vehicleclass = "Car";
	};
	class rhs_uaz_open_vdv: rhs_uaz_open_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "UAZ-469 Open (VDV)";
		vehicleclass = "Car";
    };
	class rhs_uaz_open_vmf: rhs_uaz_open_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "UAZ-469 Open (VMF)";
		vehicleclass = "Car";
    };
	class rhs_uaz_open_vv: rhs_uaz_open_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "UAZ-469 Open (VV)";
		vehicleclass = "Car";
    };
		
	class Truck_F;
	class RHS_Ural_BaseTurret: Truck_F {};
	class RHS_Ural_Base: RHS_Ural_BaseTurret {};
	class RHS_Ural_MSV_Base: RHS_Ural_Base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };
	class RHS_Ural_VDV_01: RHS_Ural_MSV_Base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 (VDV)";
		vehicleclass = "Car";
    };
	class RHS_Ural_VMF_01: RHS_Ural_MSV_Base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 (VMF)";
		vehicleclass = "Car";
    };
	class RHS_Ural_VV_01: RHS_Ural_MSV_Base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 (VV)";
		vehicleclass = "Car";
    };
		
	class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base {};
	class RHS_Ural_Open_VDV_01: RHS_Ural_Open_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 Open (VDV)";
		vehicleclass = "Car";
    };
	class RHS_Ural_Open_VMF_01: RHS_Ural_Open_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 Open (VMF)";
		vehicleclass = "Car";
    };
	class RHS_Ural_Open_VV_01: RHS_Ural_Open_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 Open (VV)";
		vehicleclass = "Car";
    };
		
	class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
	class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		displayName = "URAL-4320 Fuel (MSV)";
		vehicleclass = "Car";
	};
	class RHS_Ural_Fuel_VDV_01: RHS_Ural_Fuel_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 Fuel (VDV)";
		vehicleclass = "Car";
    };
	class RHS_Ural_Fuel_VMF_01: RHS_Ural_Fuel_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 Fuel (VMF)";
		vehicleclass = "Car";
    };
	class RHS_Ural_Fuel_VV_01: RHS_Ural_Fuel_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "URAL-4320 Fuel (VV)";
		vehicleclass = "Car";
    };
		
	class RHS_BM21_MSV_01: RHS_Ural_BaseTurret
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BM-21 (MSV)";
		vehicleclass = "Car";
    };
	class RHS_BM21_VDV_01: RHS_BM21_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BM-21 (VDV)";
		vehicleclass = "Car";
    };
	class RHS_BM21_VMF_01: RHS_BM21_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BM-21 (VMF)";
		vehicleclass = "Car";
    };
	class RHS_BM21_VV_01: RHS_BM21_MSV_01
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BM-21 (VV)";
		vehicleclass = "Car";
    };
	
	class O_Truck_03_repair_F;
	class rhs_typhoon_base: O_Truck_03_repair_F {};
	class rhs_typhoon_vdv: rhs_typhoon_base
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };
		
	class O_Heli_Light_02_unarmed_F;
	class rhs_ka60_grey: O_Heli_Light_02_unarmed_F
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Ka-60 (VVS)";
		vehicleclass = "Air";
    };
	class rhs_ka60_c: rhs_ka60_grey
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "Ka-60 (VVS Camo)";
		vehicleclass = "Air";
    };
		
	class rhs_bmd_base: Tank_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
	class rhs_bmp1tank_base: Tank_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
	class rhs_bmp_base: rhs_bmp1tank_base
	{
		vehicleclass = "Armored";
	};
	class rhs_bmp1_vdv: rhs_bmp_base
	{
		displayName = "BMP-1 (VDV)";
		vehicleclass = "Armored";
	};
	class rhs_bmp1_tv: rhs_bmp1_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1 (TV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1_msv: rhs_bmp1_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1 (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1_vmf: rhs_bmp1_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1 (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1_vv: rhs_bmp1_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1 (VV)";
		vehicleclass = "Armored";
    };

	class rhs_bmp1p_vdv: rhs_bmp1_vdv
	{
		displayName = "BMP-1P (VDV)";
		vehicleclass = "Armored";
	};
		
	class rhs_bmp1p_tv: rhs_bmp1p_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1P (TV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1p_msv: rhs_bmp1p_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1P (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1p_vmf: rhs_bmp1p_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1P (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1p_vv: rhs_bmp1p_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1P (VV)";
		vehicleclass = "Armored";
    };
		
	class rhs_bmp1k_vdv: rhs_bmp1_vdv
	{
		displayName = "BMP-1K (VDV)";
		vehicleclass = "Armored";
	};
	class rhs_bmp1k_tv: rhs_bmp1k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1K (TV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1k_msv: rhs_bmp1k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1K (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1k_vmf: rhs_bmp1k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1K (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1k_vv: rhs_bmp1k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1K (VV)";
		vehicleclass = "Armored";
    };
		
	class rhs_bmp1d_vdv: rhs_bmp1_vdv
	{
		displayName = "BMP-1D (VDV)";
		vehicleclass = "Armored";
	};
	class rhs_bmp1d_tv: rhs_bmp1d_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1D (TV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1d_msv: rhs_bmp1d_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1D (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1d_vmf: rhs_bmp1d_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1D (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_bmp1d_vv: rhs_bmp1d_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-1D (VV)";
		vehicleclass = "Armored";
    };
		
	class rhs_prp3_vdv: rhs_bmp1_vdv
	{
		displayName = "PRP-3 (VDV)";
		vehicleclass = "Armored";
	};
	class rhs_prp3_tv: rhs_prp3_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "PRP-3 (TV)";
		vehicleclass = "Armored";
    };
	class rhs_prp3_msv: rhs_prp3_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "PRP-3 (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_prp3_vmf: rhs_prp3_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "PRP-3 (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_prp3_vv: rhs_prp3_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "PRP-3 (VV)";
		vehicleclass = "Armored";
    };
		
	class rhs_bmp2e_vdv: rhs_bmp1_vdv
	{
		displayName = "BMP-2E (VDV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2e_tv: rhs_bmp2e_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2E (TV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2e_msv: rhs_bmp2e_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2E (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2e_vmf: rhs_bmp2e_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2E (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2e_vv: rhs_bmp2e_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2E (VV)";
		vehicleclass = "Armored";
    };
		
	class rhs_bmp2_vdv: rhs_bmp2e_vdv
	{
		displayName = "BMP-2 (VDV)";
		vehicleclass = "Armored";
	};
	class rhs_bmp2_tv: rhs_bmp2_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2 (TV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2_msv: rhs_bmp2_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2 (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2_vmf: rhs_bmp2_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2 (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2_vv: rhs_bmp2_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2 (VV)";
		vehicleclass = "Armored";
    };
		
	class rhs_bmp2k_vdv: rhs_bmp2_vdv
	{
		displayName = "BMP-2K (VDV)";
		vehicleclass = "Armored";
	};
	class rhs_bmp2k_tv: rhs_bmp2k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2K (TV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2k_msv: rhs_bmp2k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2K (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2k_vmf: rhs_bmp2k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2K (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2k_vv: rhs_bmp2k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2K (VV)";
		vehicleclass = "Armored";
    };
		
	class rhs_bmp2d_vdv: rhs_bmp2_vdv
	{
		displayName = "BMP-2D (VDV)";
		vehicleclass = "Armored";
	};
	class rhs_bmp2d_tv: rhs_bmp2d_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2D (TV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2d_msv: rhs_bmp2d_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2D (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2d_vmf: rhs_bmp2d_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2D (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_bmp2d_vv: rhs_bmp2d_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BMP-2D (VV)";
		vehicleclass = "Armored";
    };
	
	class rhs_brm1k_base: rhs_bmp2e_vdv {};
	class rhs_brm1k_vdv: rhs_brm1k_base
	{
		displayName = "BRM-1K (VDV)";
		vehicleclass = "Armored";
	};
	class rhs_brm1k_tv: rhs_brm1k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BRM-1K (TV)";
		vehicleclass = "Armored";
    };
	class rhs_brm1k_msv: rhs_brm1k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BRM-1K (MSV)";
		vehicleclass = "Armored";
    };
	class rhs_brm1k_vmf: rhs_brm1k_vdv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BRM-1K (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_brm1k_vv: rhs_brm1k_vdv
		{
		faction = "ascz_rhs_faction_ru";
		displayName = "BRM-1K (VV)";
		vehicleclass = "Armored";
    };
		
	class rhs_bmp3tank_base: Tank_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };

	class rhs_btr70_vmf: rhs_btr_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-70 (VMF)";
		vehicleclass = "Armored";
    };
	class rhs_btr70_vdv: rhs_btr70_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-70 (VDV)";
		vehicleclass = "Armored";
    };
	class rhs_btr70_vv: rhs_btr70_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-70 (VV)";
		vehicleclass = "Armored";
    };
	class rhs_btr70_msv: rhs_btr70_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-70 (MSF)";
		vehicleclass = "Armored";
    };
		
	class rhs_btr80_msv: rhs_btr70_msv
	{
		displayName = "BTR-80 (MSV)";
		vehicleclass = "Armored";
	};
	class rhs_btr80_vdv: rhs_btr80_msv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-80 (VDV)";
		vehicleclass = "Armored";
    };
	class rhs_btr80_vv: rhs_btr80_msv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-80 (VV)";
		vehicleclass = "Armored";
    };
	class rhs_btr80_vmf: rhs_btr80_msv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-80 (VMF)";
		vehicleclass = "Armored";
    };

	class rhs_btr80a_msv: rhs_btr80_msv
	{
		displayName = "BTR-80A (MSV)";
		vehicleclass = "Armored";
	};
	class rhs_btr80a_vdv: rhs_btr80a_msv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-80A (VDV)";
		vehicleclass = "Armored";
    };
	class rhs_btr80a_vv: rhs_btr80a_msv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-80A (VV)";
		vehicleclass = "Armored";
    };
	class rhs_btr80a_vmf: rhs_btr80a_msv
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "BTR-80A (VMF)";
		vehicleclass = "Armored";
    };
		
	class ThingX;
	class rhs_p37: ThingX
    {
		faction = "ascz_rhs_faction_ru";
    };
	class rhs_a3spruttank_base: Tank_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
	class rhs_a3t72tank_base: Tank_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Armored";
    };
	class rhs_bmd4_vdv: rhs_a3spruttank_base
	{
		vehicleclass = "Armored";
	};
	class rhs_bmd4m_vdv: rhs_bmd4_vdv
	{
		vehicleclass = "Armored";
	};
	class rhs_bmd4ma_vdv: rhs_bmd4m_vdv
	{
		vehicleclass = "Armored";
	};
		
	class Car_F;
	class rhs_truck: Car_F
    {
		faction = "ascz_rhs_faction_ru";
		vehicleclass = "Car";
    };
	class rhs_gaz66_vmf: rhs_truck
	{
		displayName = "GAZ-66 (VMF)";
		vehicleclass = "Car";
	};
	class rhs_gaz66_vdv: rhs_gaz66_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 (VDV)";
		vehicleclass = "Car";
    };
		
	class rhs_gaz66o_vmf: rhs_gaz66_vmf
	{
		displayName = "GAZ-66 Open (VMF)";
		vehicleclass = "Car";
	};
	class rhs_gaz66o_vdv: rhs_gaz66o_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 Open (VDV)";
		vehicleclass = "Car";
    };
		
	class rhs_gaz66_vv: rhs_gaz66_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 (VV)";
		vehicleclass = "Car";
    };
	class rhs_gaz66o_vv: rhs_gaz66o_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 Open (VV)";
		vehicleclass = "Car";
    };
		
	class rhs_gaz66_msv: rhs_gaz66_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 (MSV)";
		vehicleclass = "Car";
    };
	class rhs_gaz66o_msv: rhs_gaz66o_vmf
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 Open (MSV)";
		vehicleclass = "Car";
    };
		
	class rhs_gaz66_r142_base: rhs_gaz66_vmf {};
	class rhs_gaz66_r142_vdv: rhs_gaz66_r142_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 R-142N (VDV)";
		vehicleclass = "Car";
    };
	class rhs_gaz66_r142_vv: rhs_gaz66_r142_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 R-142N (VV)";
		vehicleclass = "Car";
    };
	class rhs_gaz66_r142_msv: rhs_gaz66_r142_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 R-142N (MSV)";
		vehicleclass = "Car";
    };
		
	class rhs_gaz66_ap2_base: rhs_gaz66_vmf {};
	class rhs_gaz66_ap2_vdv: rhs_gaz66_ap2_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 AP-2 (VDV)";
		vehicleclass = "Car";
    };
	class rhs_gaz66_ap2_vv: rhs_gaz66_ap2_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 AP-2 (VV)";
		vehicleclass = "Car";
    };
	class rhs_gaz66_ap2_msv: rhs_gaz66_ap2_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 AP-2 (MSV)";
		vehicleclass = "Car";
    };
		
	class rhs_gaz66_repair_base: rhs_gaz66_vmf {};
	class rhs_gaz66_repair_vdv: rhs_gaz66_repair_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 ESB-8IM (VDV)";
		vehicleclass = "Car";
    };
	class rhs_gaz66_repair_vv: rhs_gaz66_repair_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 ESB-8IM (VV)";
		vehicleclass = "Car";
    };
	class rhs_gaz66_repair_msv: rhs_gaz66_repair_base
    {
		faction = "ascz_rhs_faction_ru";
		displayName = "GAZ-66 ESB-8IM (MSV)";
		vehicleclass = "Car";
    };
    class rhs_gaz66_ammo_base;
    class rhs_gaz66_ammo_vmf: rhs_gaz66_ammo_base
    {
        faction = "ascz_rhs_faction_ru";
    };
    class rhs_gaz66_ammo_vdv: rhs_gaz66_ammo_base
    {
        faction = "ascz_rhs_faction_ru";
    };
    class rhs_gaz66_ammo_vv: rhs_gaz66_ammo_base
    {
        faction = "ascz_rhs_faction_ru";
    };
    class rhs_gaz66_ammo_msv: rhs_gaz66_ammo_base
    {
        faction = "ascz_rhs_faction_ru";
    };
    class rhs_nsv_tripod_base;
    class RHS_NSV_TriPod_MSV: rhs_nsv_tripod_base
    {
        faction = "ascz_rhs_faction_ru";
    };
    class RHS_NSV_TriPod_VDV: rhs_nsv_tripod_base
    {
       faction = "ascz_rhs_faction_ru";
    };

    // USAF
    // Backpacks
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

    // Infantry
	class rhsusf_infantry_army_base: SoldierEB
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ocp";
        modelsides[] = {6};
	};
	class rhsusf_army_ocp_autorifleman;
	class rhsusf_army_ocp_autoriflemana;
	class rhsusf_army_ocp_machinegunner;
	class rhsusf_army_ocp_machinegunnera;
	class rhsusf_army_ocp_aa;
	class rhsusf_army_ocp_crewman;
	class rhsusf_army_ocp_combatcrewman;
	class rhsusf_army_ocp_driver;
	class rhsusf_army_ocp_engineer;
	class rhsusf_army_ocp_grenadier;
	class rhsusf_army_ocp_marksman;
	class rhsusf_army_ocp_medic;
	class rhsusf_army_ocp_rifleman;
	class rhsusf_army_ocp_rifleman_m16;
	class rhsusf_army_ocp_riflemanl;
	class rhsusf_army_ocp_riflemanat;
	class rhsusf_army_ocp_javelin;
	class rhsusf_army_ocp_sniper;
	class rhsusf_army_ocp_squadleader;
	class rhsusf_army_ocp_teamleader;
	class rhsusf_army_ocp_helipilot;
	class rhsusf_army_ocp_helicrew;
	class rhsusf_army_ocp_rifleman_82nd;
	class rhsusf_army_ocp_rifleman_101st;
	class rhsusf_army_ocp_rifleman_10th;
    class rhsusf_army_ocp_jfo;
    class rhsusf_army_ocp_fso;
    class rhsusf_army_ocp_officer;
    class rhsusf_army_ocp_rifleman_m4;
    class rhsusf_army_ocp_rifleman_m590;
    class rhsusf_army_ocp_uav;
	class rhsusf_army_ucp_autorifleman: rhsusf_army_ocp_autorifleman
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
	class rhsusf_army_ucp_autoriflemana: rhsusf_army_ocp_autoriflemana
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
    };
    class rhsusf_army_ucp_machinegunner: rhsusf_army_ocp_machinegunner
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_machinegunnera: rhsusf_army_ocp_machinegunnera
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_aa: rhsusf_army_ocp_aa
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_crewman: rhsusf_army_ocp_crewman
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_combatcrewman: rhsusf_army_ocp_combatcrewman
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_driver: rhsusf_army_ocp_driver
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_engineer: rhsusf_army_ocp_engineer
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_grenadier: rhsusf_army_ocp_grenadier
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_marksman: rhsusf_army_ocp_marksman
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_medic: rhsusf_army_ocp_medic
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_rifleman: rhsusf_army_ocp_rifleman
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
	class rhsusf_army_ucp_rifleman_m16: rhsusf_army_ocp_rifleman_m16
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
    };
    class rhsusf_army_ucp_riflemanl: rhsusf_army_ocp_riflemanl
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_riflemanat: rhsusf_army_ocp_riflemanat
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_javelin: rhsusf_army_ocp_javelin
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
	class rhsusf_army_ucp_sniper: rhsusf_army_ocp_sniper
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
    };
    class rhsusf_army_ucp_squadleader: rhsusf_army_ocp_squadleader
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_teamleader:  rhsusf_army_ocp_teamleader
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_helipilot: rhsusf_army_ocp_helipilot
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_helicrew: rhsusf_army_ocp_helicrew
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};

    class rhsusf_army_ucp_rifleman_82nd : rhsusf_army_ocp_rifleman_82nd
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
    };

    class rhsusf_army_ucp_rifleman_101st : rhsusf_army_ocp_rifleman_101st
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
    };

    class rhsusf_army_ucp_rifleman_10th : rhsusf_army_ocp_rifleman_10th
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
    };
	class rhsusf_army_ucp_jfo: rhsusf_army_ocp_jfo
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
	class rhsusf_army_ucp_fso: rhsusf_army_ocp_fso
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
    class rhsusf_army_ucp_officer : rhsusf_army_ocp_officer
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
    };
    class rhsusf_army_ucp_rifleman_m4: rhsusf_army_ocp_rifleman_m4
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
    };
	class rhsusf_army_ucp_rifleman_m590: rhsusf_army_ocp_rifleman_m590
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};
	class rhsusf_army_ucp_uav: rhsusf_army_ocp_uav
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "rhs_vehclass_infantry_ucp";
	};

    class rhsusf_infantry_usmc_base : rhsusf_infantry_army_base
	{
        faction = "ascz_rhs_faction_usmc";
		vehicleClass = "rhs_vehclass_infantry_usmc";
        modelsides[] = {6};
	};
	class rhsusf_infantry_usmc_fr_base : rhsusf_infantry_usmc_base
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr";
        modelsides[] = {6};
    };

    class rhsusf_usmc_marpat_wd_rifleman;
    class rhsusf_usmc_marpat_wd_rifleman_light;
    class rhsusf_usmc_marpat_wd_rifleman_m4;
    class rhsusf_usmc_marpat_wd_riflemanat;
    class rhsusf_usmc_marpat_wd_rifleman_m590;
    class rhsusf_usmc_marpat_wd_grenadier;
    class rhsusf_usmc_marpat_wd_autorifleman;
    class rhsusf_usmc_marpat_wd_autorifleman_m249;
    class rhsusf_usmc_marpat_wd_autorifleman_m249_ass;
    class rhsusf_usmc_marpat_wd_machinegunner;
    class rhsusf_usmc_marpat_wd_machinegunner_ass;
    class rhsusf_usmc_marpat_wd_officer;
    class rhsusf_usmc_marpat_wd_squadleader;
    class rhsusf_usmc_marpat_wd_teamleader;
    class rhsusf_usmc_marpat_wd_fso;
    class rhsusf_usmc_marpat_wd_jfo;
    class rhsusf_usmc_marpat_wd_engineer;
    class rhsusf_usmc_marpat_wd_uav;
    class rhsusf_usmc_marpat_wd_javelin;
    class rhsusf_usmc_marpat_wd_stinger;
    class rhsusf_usmc_marpat_wd_marksman;
    class rhsusf_usmc_marpat_wd_spotter;
    class rhsusf_usmc_marpat_wd_sniper;
    class rhsusf_usmc_marpat_wd_crewman;
    class rhsusf_usmc_marpat_wd_combatcrewman;
    class rhsusf_usmc_marpat_wd_driver;
    class rhsusf_usmc_marpat_wd_helipilot;
    class rhsusf_usmc_marpat_wd_helicrew;
    class rhsusf_usmc_marpat_d_rifleman: rhsusf_usmc_marpat_wd_rifleman
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_rifleman_light : rhsusf_usmc_marpat_wd_rifleman_light
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_rifleman_m4 : rhsusf_usmc_marpat_wd_rifleman_m4
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_riflemanat : rhsusf_usmc_marpat_wd_riflemanat
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_rifleman_m590 : rhsusf_usmc_marpat_wd_rifleman_m590
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_grenadier : rhsusf_usmc_marpat_wd_grenadier
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };

    // MGs
    class rhsusf_usmc_marpat_d_autorifleman : rhsusf_usmc_marpat_wd_autorifleman
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_autorifleman_m249 : rhsusf_usmc_marpat_wd_autorifleman_m249
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_autorifleman_m249_ass : rhsusf_usmc_marpat_wd_autorifleman_m249_ass
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_machinegunner : rhsusf_usmc_marpat_wd_machinegunner
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_machinegunner_ass : rhsusf_usmc_marpat_wd_machinegunner_ass
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };

    // Leaders
    class rhsusf_usmc_marpat_d_officer : rhsusf_usmc_marpat_wd_officer
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_squadleader : rhsusf_usmc_marpat_wd_squadleader
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_teamleader : rhsusf_usmc_marpat_wd_teamleader
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_fso : rhsusf_usmc_marpat_wd_fso
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_jfo : rhsusf_usmc_marpat_wd_jfo
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };

    // Support
    class rhsusf_usmc_marpat_d_engineer : rhsusf_usmc_marpat_wd_engineer
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_uav : rhsusf_usmc_marpat_wd_uav
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_javelin : rhsusf_usmc_marpat_wd_javelin
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_stinger : rhsusf_usmc_marpat_wd_stinger
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_marksman: rhsusf_usmc_marpat_wd_marksman
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_spotter: rhsusf_usmc_marpat_wd_spotter
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_sniper: rhsusf_usmc_marpat_wd_sniper
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };

    // Ground Crew
    class rhsusf_usmc_marpat_d_crewman : rhsusf_usmc_marpat_wd_crewman
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_combatcrewman : rhsusf_usmc_marpat_wd_combatcrewman
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_driver : rhsusf_usmc_marpat_wd_driver
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_helipilot : rhsusf_usmc_marpat_wd_helipilot
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };
    class rhsusf_usmc_marpat_d_helicrew : rhsusf_usmc_marpat_wd_helicrew
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_d";
    };

    // Force Recon
    class rhsusf_usmc_fr_marpat_wd_rifleman;
    class rhsusf_usmc_fr_marpat_wd_light;
    class rhsusf_usmc_fr_marpat_wd_rifleman_cqb;
    class rhsusf_usmc_fr_marpat_wd_riflemanat;
    class rhsusf_usmc_fr_marpat_wd_rifleman_m590;
    class rhsusf_usmc_fr_marpat_wd_grenadier;
    class rhsusf_usmc_fr_marpat_wd_autorifleman;
    class rhsusf_usmc_fr_marpat_wd_autorifleman_m249;
    class rhsusf_usmc_fr_marpat_wd_autorifleman_m249_ass;
    class rhsusf_usmc_fr_marpat_wd_machinegunner;
    class rhsusf_usmc_fr_marpat_wd_machinegunner_ass;
    class rhsusf_usmc_fr_marpat_wd_squadleader;
    class rhsusf_usmc_fr_marpat_wd_teamleader;
    class rhsusf_usmc_fr_marpat_wd_engineer;
    class rhsusf_usmc_fr_marpat_wd_marksman;
    class rhsusf_usmc_fr_marpat_wd_spotter;
    class rhsusf_usmc_fr_marpat_wd_sniper;
    class rhsusf_usmc_fr_marpat_d_rifleman : rhsusf_usmc_fr_marpat_wd_rifleman
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_light : rhsusf_usmc_fr_marpat_wd_light
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_rifleman_cqb : rhsusf_usmc_fr_marpat_wd_rifleman_cqb
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_riflemanat : rhsusf_usmc_fr_marpat_wd_riflemanat
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_rifleman_m590 : rhsusf_usmc_fr_marpat_wd_rifleman_m590
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_grenadier : rhsusf_usmc_fr_marpat_wd_grenadier
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };

    // MG
    class rhsusf_usmc_fr_marpat_d_autorifleman : rhsusf_usmc_fr_marpat_wd_autorifleman
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_autorifleman_m249 : rhsusf_usmc_fr_marpat_wd_autorifleman_m249
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_autorifleman_m249_ass : rhsusf_usmc_fr_marpat_wd_autorifleman_m249_ass
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_machinegunner : rhsusf_usmc_fr_marpat_wd_machinegunner
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_machinegunner_ass : rhsusf_usmc_fr_marpat_wd_machinegunner_ass
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };

    // Leaders
    class rhsusf_usmc_fr_marpat_d_squadleader : rhsusf_usmc_fr_marpat_wd_squadleader
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_teamleader : rhsusf_usmc_fr_marpat_wd_teamleader
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };

    // Support
    class rhsusf_usmc_fr_marpat_d_engineer : rhsusf_usmc_fr_marpat_wd_engineer
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_marksman : rhsusf_usmc_fr_marpat_wd_marksman
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_spotter: rhsusf_usmc_fr_marpat_wd_spotter
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };
    class rhsusf_usmc_fr_marpat_d_sniper: rhsusf_usmc_fr_marpat_wd_sniper
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "rhs_vehclass_infantry_usmc_fr_d";
    };

    class rhsusf_airforce_jetpilot: rhsusf_usmc_marpat_wd_rifleman_m4
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Men";
    };
    class rhsusf_airforce_pilot: rhsusf_airforce_jetpilot
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Men";
    };

	// Vehicles
	class Plane_CAS_01_base_F;
	class RHS_A10: Plane_CAS_01_base_F
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
	};

    class Heli_Attack_01_base_F;
    class RHS_AH64_base: Heli_Attack_01_base_F
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
	};
    class RHS_AH64D: RHS_AH64_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
	};
    class RHS_AH64D_wd: RHS_AH64D
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
        scope =1;
	};
    class RHS_AH64DGrey: RHS_AH64D
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
    };

    class RHS_CH_47F_base;
    class RHS_CH_47F: RHS_CH_47F_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
	};
    class RHS_CH_47F_light: RHS_CH_47F
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
		displayName = "CH-47 (Desert)";
	};

    class RHS_UH60M_US_base;
    class RHS_UH60M: RHS_UH60M_US_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
	};
    class RHS_UH60M_MEV: RHS_UH60M
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
	};
    class RHS_UH60M_d: RHS_UH60M
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
        scope = 1;
	};
    class RHS_UH60M_MEV_d: RHS_UH60M_MEV
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
        scope = 1;
	};
	class RHS_UH60M_MEV2 : RHS_UH60M_MEV
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
	};
	class RHS_UH60M_MEV2_d : RHS_UH60M_MEV2
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
	};

    class RHS_M2A2_Base;
    class RHS_M2A2: RHS_M2A2_Base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A2_BUSKI: RHS_M2A2
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A3: RHS_M2A2
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A3_BUSKI: RHS_M2A3
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A3_BUSKIII: RHS_M2A3_BUSKI
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A3_BUSKIII_wd: RHS_M2A3_BUSKIII
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M6: RHS_M2A2_Base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A2_wd: RHS_M2A2
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A2_BUSKI_WD: RHS_M2A2_BUSKI
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A3_BUSKI_wd: RHS_M2A3_BUSKI
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M2A3_wd: RHS_M2A3
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class RHS_M6_wd: RHS_M6
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};

    class rhsusf_hmmwe_base;
    class rhsusf_m998_w_2dr : rhsusf_hmmwe_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_2dr: rhsusf_m998_w_2dr
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_s_2dr: rhsusf_m998_w_2dr
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_s_2dr: rhsusf_m998_w_s_2dr
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_2dr_halftop: rhsusf_m998_w_2dr
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_2dr_halftop: rhsusf_m998_w_2dr_halftop
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_s_2dr_halftop: rhsusf_m998_w_2dr
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_s_2dr_halftop: rhsusf_m998_w_s_2dr_halftop
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_2dr_fulltop: rhsusf_m998_w_2dr_halftop
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_2dr_fulltop: rhsusf_m998_w_2dr_fulltop
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_s_2dr_fulltop: rhsusf_m998_w_2dr_fulltop
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_s_2dr_fulltop: rhsusf_m998_w_s_2dr_fulltop
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_4dr: rhsusf_m998_w_4dr
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_s_4dr: rhsusf_m998_w_4dr
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_s_4dr: rhsusf_m998_w_s_4dr
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_4dr_halftop: rhsusf_m998_w_4dr_halftop
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_s_4dr_halftop: rhsusf_m998_w_4dr_halftop
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_s_4dr_halftop: rhsusf_m998_w_s_4dr_halftop
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_4dr_fulltop: rhsusf_m998_w_4dr_fulltop
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m998_w_s_4dr_fulltop: rhsusf_m998_w_2dr
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m998_d_s_4dr_fulltop: rhsusf_m998_w_s_4dr_fulltop
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};

    class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m1025_d: rhsusf_m1025_w
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
	};
    class rhsusf_m1025_w_s: rhsusf_m1025_w
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m1025_d_s: rhsusf_m1025_w
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
	};
    class rhsusf_m1025_w_m2: rhsusf_m1025_w
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
    };
    class rhsusf_m1025_d_m2: rhsusf_m1025_w_m2
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
    };
    class rhsusf_m1025_w_s_m2: rhsusf_m1025_w_m2
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
    };
    class rhsusf_m1025_d_s_m2: rhsusf_m1025_w_m2
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
    };
    class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
    };
    class rhsusf_m1025_d_Mk19: rhsusf_m1025_w_Mk19
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Car";
    };
    class rhsusf_m1025_w_s_Mk19: rhsusf_m1025_w_Mk19
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
    };
    class rhsusf_m1025_d_s_Mk19: rhsusf_m1025_w_Mk19
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
    };

    class rhsusf_m1a1tank_base;
    class rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a1aimd_usarmy: rhsusf_m1a1tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a1aim_tuski_d: rhsusf_m1a1aim_tuski_wd
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a1fep_wd: rhsusf_m1a1tank_base
	{
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a1fep_od: rhsusf_m1a1tank_base
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Armored";
    };

    class rhsusf_m1a2tank_base;
    class rhsusf_m1a2sep1d_usarmy: rhsusf_m1a2tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a2sep1wd_usarmy: rhsusf_m1a2tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m1a2sep1tuskiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};

    class rhsusf_m109tank_base;
    class rhsusf_m109_usarmy: rhsusf_m109tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m109d_usarmy: rhsusf_m109tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};

    class rhsusf_m113tank_base;
    class rhsusf_m113_usarmy: rhsusf_m113tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_m113d_usarmy: rhsusf_m113tank_base
	{
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Armored";
	};
    class rhsusf_rg33_base;
    class rhsusf_rg33_d: rhsusf_rg33_base
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_rg33_wd: rhsusf_rg33_base
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_rg33_m2_d: rhsusf_rg33_base
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_rg33_m2_wd: rhsusf_rg33_m2_d
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_rg33_usmc_d: rhsusf_rg33_d
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
    };
    class rhsusf_rg33_usmc_wd: rhsusf_rg33_wd
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
    };
    class rhsusf_rg33_m2_usmc_d: rhsusf_rg33_m2_d
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
    };
    class rhsusf_rg33_m2_usmc_wd: rhsusf_rg33_m2_d
    {
        faction = "ascz_rhs_faction_usmc";
        vehicleClass = "Car";
    };
    class rhsusf_fmtv_base;
    class rhsusf_M1078A1P2_B_wd_fmtv_usarmy: rhsusf_fmtv_base
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M1078A1P2_wd_fmtv_usarmy: rhsusf_M1078A1P2_B_wd_fmtv_usarmy
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M1078A1P2_B_d_fmtv_usarmy: rhsusf_M1078A1P2_B_wd_fmtv_usarmy
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M1078A1P2_d_fmtv_usarmy: rhsusf_M1078A1P2_B_d_fmtv_usarmy
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M1083A1P2_B_wd_fmtv_usarmy: rhsusf_fmtv_base
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M1083A1P2_wd_fmtv_usarmy: rhsusf_M1083A1P2_B_wd_fmtv_usarmy
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M1083A1P2_B_d_fmtv_usarmy: rhsusf_M1083A1P2_B_wd_fmtv_usarmy
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M1083A1P2_d_fmtv_usarmy: rhsusf_M1083A1P2_B_d_fmtv_usarmy
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_HEMTT_A2_base;
    class rhsusf_M977A2_usarmy_wd: rhsusf_HEMTT_A2_base
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M977A2_CPK_usarmy_wd: rhsusf_M977A2_usarmy_wd
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M978A2_usarmy_wd: rhsusf_M977A2_usarmy_wd
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class rhsusf_M978A2_CPK_usarmy_wd: rhsusf_M978A2_usarmy_wd
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "car";
    };
    class RHS_C130J_Base;
    class RHS_C130J: RHS_C130J_Base
    {
        faction = "ascz_rhs_faction_usarmy";
        vehicleClass = "Air";
    };




    class RHS_M2StaticMG_base;
    class RHS_M2StaticMG_MiniTripod_base;
    class RHS_MK19_TriPod_base;
	class RHS_M2StaticMG_D: RHS_M2StaticMG_base
	{
        faction = "ascz_rhs_faction_usarmy";
	};
	class RHS_M2StaticMG_MiniTripod_D: RHS_M2StaticMG_MiniTripod_base
	{
        faction = "ascz_rhs_faction_usarmy";
	};
	class RHS_M2StaticMG_WD: RHS_M2StaticMG_base
	{
        faction = "ascz_rhs_faction_usarmy";
	};
	class RHS_M2StaticMG_MiniTripod_WD: RHS_M2StaticMG_MiniTripod_base
	{
        faction = "ascz_rhs_faction_usarmy";
	};
	class RHS_MK19_TriPod_D: RHS_MK19_TriPod_base
	{
        faction = "ascz_rhs_faction_usarmy";
	};
	class RHS_MK19_TriPod_WD: RHS_MK19_TriPod_base
	{
        faction = "ascz_rhs_faction_usarmy";
	};


    class RDS_ZU23_AAF;
    class RDS_DSHKM_AAF;
    class RDS_DSHkM_Mini_TriPod;
    class RDS_KORD_AAF;
    class RDS_KORD_high_AAF;
    class RDS_AGS_AAF;
    class RDS_Metis_AAF;
    class RDS_SPG9_AAF;
    class RDS_Igla_AA_pod_AAF;
    class RDS_2b14_82mm_AAF;
    class RDS_D30_AAF;
    class RDS_D30_AT_AAF;
    class RDS_ZU23_RHS_MSV: RDS_ZU23_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RDS_KORD_RHS_MSV: RDS_KORD_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RDS_KORD_high_RHS_MSV: RDS_KORD_high_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RDS_AGS_RHS_MSV: RDS_AGS_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RDS_Metis_RHS_MSV: RDS_Metis_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RDS_SPG9_RHS_MSV: RDS_SPG9_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RDS_Igla_AA_pod_RHS_MSV: RDS_Igla_AA_pod_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RDS_2b14_82mm_RHS_MSV: RDS_2b14_82mm_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman","rhs_msv_rifleman"};
    };
    class RDS_D30_RHS_MSV: RDS_D30_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman","rhs_msv_rifleman","rhs_msv_rifleman"};
    };
    class RDS_D30_AT_RHS_MSV: RDS_D30_AT_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman","rhs_msv_rifleman","rhs_msv_rifleman"};
    };

    class RDS_ZU23_RHS_VDV: RDS_ZU23_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman"};
    };
    class RDS_KORD_RHS_VDV: RDS_KORD_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman"};
    };
    class RDS_KORD_high_RHS_VDV: RDS_KORD_high_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman"};
    };
    class RDS_AGS_RHS_VDV: RDS_AGS_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman"};
    };
    class RDS_Metis_RHS_VDV: RDS_Metis_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman"};
    };
    class RDS_SPG9_RHS_VDV: RDS_SPG9_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman"};
    };
    class RDS_Igla_AA_pod_RHS_VDV: RDS_Igla_AA_pod_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman"};
    };
    class RDS_2b14_82mm_RHS_VDV: RDS_2b14_82mm_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman","rhs_VDV_rifleman"};
    };
    class RDS_D30_RHS_VDV: RDS_D30_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman","rhs_VDV_rifleman","rhs_VDV_rifleman"};
    };
    class RDS_D30_AT_RHS_VDV: RDS_D30_AT_AAF
    {
        author = "reyhard (BIS port)";
        side = 0;
        faction = "ascz_rhs_faction_ru";
        crew = "rhs_VDV_rifleman";
        typicalCargo[] = {"rhs_VDV_rifleman","rhs_VDV_rifleman","rhs_VDV_rifleman"};
    };

    class RDS_M119_AAF;
    class RDS_M252_AAF;
    class RDS_TOW_TriPod_AAF;
    class RDS_MK19_TriPod_AAF;
    class RDS_M2StaticMG_AAF;
    class RDS_M2StaticMG_MiniTripod_AAF;
    class RDS_M119_RHS_OCP: RDS_M119_AAF
    {
        author = "reyhard (BIS port)";
        side = 1;
        faction = "ascz_rhs_faction_usarmy";
        crew = "rhsusf_army_ocp_riflemanl";
        typicalCargo[] = {"rhsusf_army_ocp_riflemanl"};
    };
    class RDS_TOW_TriPod_RHS_OCP: RDS_TOW_TriPod_AAF
    {
        author = "reyhard (BIS port)";
        side = 1;
        faction = "ascz_rhs_faction_usarmy";
        crew = "rhsusf_army_ocp_riflemanl";
        typicalCargo[] = {"rhsusf_army_ocp_riflemanl"};
    };
    class RDS_M252_RHS_OCP: RDS_M252_AAF
    {
        author = "reyhard (BIS port)";
        side = 1;
        faction = "ascz_rhs_faction_usarmy";
        crew = "rhsusf_army_ocp_riflemanl";
        typicalCargo[] = {"rhsusf_army_ocp_riflemanl","rhsusf_army_ocp_riflemanl"};
    };
    class RDS_M119_RHS_UCP: RDS_M119_AAF
    {
        author = "reyhard (BIS port)";
        side = 1;
        faction = "ascz_rhs_faction_usarmy";
        crew = "rhsusf_army_ucp_riflemanl";
        typicalCargo[] = {"rhsusf_army_ucp_riflemanl"};
    };
    class RDS_TOW_TriPod_RHS_UCP: RDS_TOW_TriPod_AAF
    {
        author = "reyhard (BIS port)";
        side = 1;
        faction = "ascz_rhs_faction_usarmy";
        crew = "rhsusf_army_ucp_riflemanl";
        typicalCargo[] = {"rhsusf_army_ucp_riflemanl"};
    };
    class RDS_M252_RHS_UCP: RDS_M252_AAF
    {
        author = "reyhard (BIS port)";
        side = 1;
        faction = "ascz_rhs_faction_usarmy";
        crew = "rhsusf_army_ucp_riflemanl";
        typicalCargo[] = {"rhsusf_army_ucp_riflemanl","rhsusf_army_ucp_riflemanl"};
    };
};