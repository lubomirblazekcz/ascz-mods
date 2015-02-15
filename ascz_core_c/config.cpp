class CfgPatches
{
	class ascz_core_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"rhs_c_radio", "AGM_Core"};
		version = "1.0";
		author[] = {"EvroMalarkey"};
	};
};
class CfgVoice
{
	class ENG;
	class Male01ENG: ENG
	{
		scope = 1;
	};
	class Male02ENG: ENG
	{
		scope = 1;
	};
	class Male03ENG: ENG
	{
		scope = 1;
	};
	class Male04ENG: ENG
	{
		scope = 1;
	};
	class Male05ENG: ENG
	{
		scope = 1;
	};
	class Male06ENG: ENG
	{
		scope = 1;
	};
	class Male07ENG: ENG
	{
		scope = 1;
	};
	class Male08ENG: ENG
	{
		scope = 1;
	};
	class Male09ENG: ENG
	{
		scope = 1;
	};
	class Male10ENG: ENG
	{
		scope = 1;
	};
	class Male11ENG: ENG
	{
		scope = 1;
	};
	class Male12ENG: ENG
	{
		scope = 1;
	};
	class ENGB;
	class Male01ENGB: ENGB
	{
		scope = 1;
	};
	class Male02ENGB: ENGB
	{
		scope = 1;
	};
	class Male03ENGB: ENGB
	{
		scope = 1;
	};
	class Male04ENGB: ENGB
	{
		scope = 1;
	};
	class Male05ENGB: ENGB
	{
		scope = 1;
	};
	class GRE;
	class Male01GRE: GRE
	{
		scope = 1;
	};
	class Male02GRE: GRE
	{
		scope = 1;
	};
	class Male03GRE: GRE
	{
		scope = 1;
	};
	class Male04GRE: GRE
	{
		scope = 1;
	};
	class Male05GRE: GRE
	{
		scope = 1;
	};
	class Male06GRE: GRE
	{
		scope = 1;
	};
	class PER;
	class Male01PER: PER
	{
		scope = 1;
	};
	class Male02PER: PER
	{
		scope = 1;
	};
	class Male03PER: PER
	{
		scope = 1;
	};
	class ENGVR;
	class Male01ENGVR: ENGVR
	{
		scope = 1;
	};
	class GREVR;
	class Male01GREVR: GREVR
	{
		scope = 1;
	};
	class PERVR;
	class Male01PERVR: PERVR
	{
		scope = 1;
	};
	class CZ_ACR;
	class Male01CZ_ACR: CZ_ACR
	{
		scope = 1;
	};
	class Male02CZ_ACR: CZ_ACR
	{
		scope = 1;
	};
	class Male03CZ_ACR: CZ_ACR
	{
		scope = 1;
	};
	class Male04CZ_ACR: CZ_ACR
	{
		scope = 1;
	};
	class Male05CZ_ACR: CZ_ACR
	{
		scope = 1;
	};
	class RUS;
	class rhs_Male01RUS: RUS
	{
		scope = 1;
	};
	class rhs_Male02RUS: RUS
	{
		scope = 1;
	};
	class rhs_Male03RUS: RUS
	{
		scope = 1;
	};
	class rhs_Male04RUS: RUS
	{
		scope = 1;
	};
	class rhs_Male05RUS: RUS
	{
		scope = 1;
	};
    class CZ;
    class Male01CZ: CZ
    {
        scope = 1;
    };
    class Male02CZ: CZ
    {
        scope = 1;
    };
    class Male03CZ: CZ
    {
        scope = 1;
    };
    class Male04CZ: CZ
    {
        scope = 1;
    };
    class Male05CZ: CZ
    {
        scope = 1;
    };
};


class CfgMovesBasic
{
    class Actions
    {
        class RifleBaseLowStandActions;
        class RifleBaseStandActions: RifleBaseLowStandActions
        {
            TactF = "AmovPercMrunSrasWrflDf_ldst";
            TactLF = "AmovPercMrunSrasWrflDfl_ldst";
            TactRF = "AmovPercMrunSrasWrflDfr_ldst";
            TactL = "AmovPercMrunSrasWrflDl_ldst";
            TactR = "AmovPercMrunSrasWrflDr_ldst";
            TactLB = "AmovPercMrunSrasWrflDbl_ldst";
            TactRB = "AmovPercMrunSrasWrflDbr_ldst";
            TactB = "AmovPercMrunSrasWrflDb_ldst";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic
{
    class States
    {
        class AmovPercMwlkSlowWrflDf;
        class AmovPercMtacSlowWrflDf: AmovPercMwlkSlowWrflDf
        {
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDf_ldst";
            leftHandIKCurve[] = {1};
            speed = 0.684541;
            duty = 0.3;
            interpolationSpeed = 3.05;
        };

        // Direction anims
        class AmovPercMtacSlowWrflDbl: AmovPercMtacSlowWrflDf
        {
            speed = 0.684541;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbl";
        };
        class AmovPercMtacSlowWrflDb: AmovPercMtacSlowWrflDf
        {
            speed = 0.684541;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDb";
        };
        class AmovPercMtacSlowWrflDbr: AmovPercMtacSlowWrflDf
        {
            speed = 0.684541;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbr";
        };
        class AmovPercMwlkSlowWrflDfl;
		class AmovPercMtacSlowWrflDfl: AmovPercMwlkSlowWrflDfl
		{
            speed = 0.684541;
            duty = 0.3;
            interpolationSpeed = 3.05;
            leftHandIKCurve[] = {1};
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDfl_ldst";
		};
		class AmovPercMtacSlowWrflDfr: AmovPercMtacSlowWrflDf
		{
            speed = 0.684541;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfr";
		};
		class AmovPercMtacSlowWrflDl: AmovPercMtacSlowWrflDf
		{
            speed = 0.684541;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDl";
	    };
		class AmovPercMtacSlowWrflDr: AmovPercMtacSlowWrflDf
		{
            speed = 0.684541;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDr";
		};
    };
};