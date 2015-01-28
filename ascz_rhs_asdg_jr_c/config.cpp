class CfgPatches
{
	class ascz_rhs_asdg_jr_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
        rhsusf_acc_anpeq15 = 1;
        rhsusf_acc_anpeq15A = 1;
        rhsusf_acc_anpeq15_light = 1;
	};
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		rhsusf_acc_EOTECH = 1;
		rhsusf_acc_LEUPOLDMK4 = 1;
		rhsusf_acc_LEUPOLDMK4_2 = 1;
		rhsusf_acc_ELCAN = 1;
		rhsusf_acc_ACOG = 1;
		rhsusf_acc_ACOG2 = 1;
		rhsusf_acc_ACOG3 = 1;
		rhsusf_acc_compm4 = 1;
	};
};