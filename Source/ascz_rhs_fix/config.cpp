class CfgPatches
{
	class ascz_rhs_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"rhsusf_c_troops"};
		version = "1.0";
	};
};

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
};