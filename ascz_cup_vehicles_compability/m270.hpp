	class CUP_M270_HE_Base: Tank_F {};

	class CUP_M270_DPICM_Base: CUP_M270_HE_Base {};
	
	class CUP_B_M270_HE_USMC: CUP_M270_HE_Base
	{
		faction = "rhs_faction_usmc_wd";
		crew = "rhsusf_usmc_marpat_wd_crewman";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_crewman","rhsusf_usmc_marpat_wd_crewman"};
	};

	class CUP_B_M270_DPICM_USMC: CUP_M270_DPICM_Base
	{
		faction = "rhs_faction_usmc_wd";
		crew = "rhsusf_usmc_marpat_wd_crewman";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_crewman","rhsusf_usmc_marpat_wd_crewman"};
	};
	
	class CUP_B_M270_HE_USA: CUP_M270_HE_Base
	{
		faction = "rhs_faction_usarmy_d";
		crew = "rhsusf_army_ucp_crewman";
		typicalCargo[] = {"rhsusf_army_ucp_crewman","rhsusf_army_ucp_crewman"};
	};

	class CUP_B_M270_DPICM_USA: CUP_M270_DPICM_Base
	{
		faction = "rhs_faction_usarmy_d";
		crew = "rhsusf_army_ucp_crewman";
		typicalCargo[] = {"rhsusf_army_ucp_crewman","rhsusf_army_ucp_crewman"};
	};