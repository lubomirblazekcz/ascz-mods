class CfgFactionClasses
{
	class rhs_faction_msv;
	class ascz_rhs_faction_ru: rhs_faction_msv
    {
		displayName = "$STR_ASCZ_RHS_FACTION";
        icon = "\ascz_rhs_fix\data\icon_ru_co.paa";
    };
    class rhs_faction_usarmy_d;
    class ascz_rhs_faction_usarmy: rhs_faction_usarmy_d
    {
        displayName = "US Army";
        icon = "\ascz_rhs_fix\data\icon_usa_co.paa";
    };
    class rhs_faction_usmc_d;
    class ascz_rhs_faction_usmc: rhs_faction_usmc_d
    {
        displayName = "USMC";
        priority = -3;
    };
    class rhs_faction_usn {
        displayName = "USN";
        priority = -2;
    };
    class rhs_faction_socom {
        displayName = "SOCOM";
        priority = -1;
    };
};