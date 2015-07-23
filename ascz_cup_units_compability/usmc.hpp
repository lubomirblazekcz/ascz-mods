
	class CUP_Creatures_Military_USMC_Soldier_Base: SoldierWB
    {
    	faction = "CUP_B_USMC";
    	modelSides[] 	= {6};
    };
	class CUP_Creatures_Military_FR_Soldier_Base: SoldierWB
    {
    	faction = "CUP_B_USMC";
    	modelSides[] 	= {6};
    };

    // Uniform Models
    class CUP_B_USMC_Soldier_01: CUP_Creatures_Military_USMC_Soldier_Base {};
    class CUP_B_USMC_Soldier_02: CUP_Creatures_Military_USMC_Soldier_Base {};
    class CUP_B_USMC_Soldier_03 : CUP_Creatures_Military_USMC_Soldier_Base {};
    class CUP_B_USMC_Soldier_04: CUP_Creatures_Military_USMC_Soldier_Base {};
    class CUP_B_USMC_Soldier_05: CUP_Creatures_Military_USMC_Soldier_Base {};
    class CUP_B_USMC_Soldier_06: CUP_Creatures_Military_USMC_Soldier_Base {};
    class CUP_B_USMC_Soldier_07 : CUP_Creatures_Military_USMC_Soldier_Base {};
    class CUP_B_USMC_Soldier_08 : CUP_Creatures_Military_USMC_Soldier_Base {};

    class CUP_B_USMC_Soldier : CUP_B_USMC_Soldier_03
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_Light: CUP_B_USMC_Soldier_02
    {
    	scope = 1;
    	scopeCurator = 0;

    };

    class CUP_B_USMC_SpecOps_SD : CUP_B_USMC_Soldier_03
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_GL : CUP_B_USMC_Soldier_07
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Officer: CUP_B_USMC_Soldier_01
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_SL : CUP_B_USMC_Soldier_02
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Solider_TL : CUP_B_USMC_Soldier_07
    {
    	scope = 1;
    	scopeCurator = 0;
    };


    class CUP_B_USMC_Soldier_AT_Base : CUP_B_USMC_Soldier_02
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Solider_LAT : CUP_B_USMC_Soldier_AT_Base
    {
    	scope = 1;
    	scopeCurator = 0;

    };

    class CUP_B_USMC_Soldier_AT: CUP_B_USMC_Soldier_AT_Base	//USMC_Soldier_AT: USMC_Soldier_AT_Base
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_HAT: CUP_B_USMC_Soldier_AT_Base	//USMC_Soldier_HAT: USMC_Soldier_AT_Base
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_AA: CUP_B_USMC_Soldier_AT_Base
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Medic : CUP_B_USMC_Soldier_02
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_AR: CUP_B_USMC_Soldier_05
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_MG: CUP_B_USMC_Soldier_05
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Spotter: CUP_B_USMC_Soldier_08
    {
    	scope = 1;
    	scopeCurator = 0;
    };


    class CUP_B_USMC_Sniper_M40A3: CUP_B_USMC_Soldier_08
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Sniper_M107: CUP_B_USMC_Sniper_M40A3	//USMC_SoldierS_Spotter: USMC_Soldier_Base
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Soldier_Marksman: CUP_B_USMC_Soldier_03
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_SpecOps: CUP_B_USMC_Soldier_07
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Engineer: CUP_B_USMC_Soldier_02
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_USMC_Pilot: CUP_B_USMC_Soldier_06
    {
    	scope = 1;
    	scopeCurator = 0;

    };

    class CUP_B_USMC_Crew: CUP_B_USMC_Soldier_02
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_01: CUP_Creatures_Military_FR_Soldier_Base // Officer Uniform
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_02: CUP_Creatures_Military_FR_Soldier_Base // Officer Uniform
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_03: CUP_Creatures_Military_FR_Soldier_Base // Officer Uniform
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_04: CUP_Creatures_Military_FR_Soldier_Base // Officer Uniform
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_05: CUP_Creatures_Military_FR_Soldier_Base // Officer Uniform
    {
    	scope = 1;
    	scopeCurator = 0;
    };

    class CUP_B_FR_Soldier_06: CUP_Creatures_Military_FR_Soldier_Base // Officer Uniform
    {
    	scope = 1;
    	scopeCurator = 0;
    };