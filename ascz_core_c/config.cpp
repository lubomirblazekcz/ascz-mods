class CfgPatches
{
	class ascz_core_c
	{
		units[] = {"ascz_arsenal_box"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"ace_common","ace_movement","ascz_rhs_fix","ascz_lop_replacement","acr_a3_main","rhs_c_radio","UK3CB_BAF_Units_MTP"};
		version = "1.0";
		author[] = {"EvroMalarkey"};
	};
    class ascz_vts_box
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {};
        author[] = {"EvroMalarkey"};
        version = "1.0";
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
    class RHS_ENGF;
    class rhs_Female01ENG: RHS_ENGF
    {
        scope = 1;
    };
};

class CfgFatigue {
    MinValue1 = 0.2;
    MinValue2 = 0.8;
    NormalRunSpeed = 7.2;
    TiredRunSpeedLimit = 1.1;
    FrequencyMin = 0.2;
    FrequencyMax = 1.0;
    TotalLoadCoef = 0.8;
    MaxDuty = 10;
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

class cfgVehicles {

	class Scrapyard_base_F;
    class Land_PaperBox_open_full_F: Scrapyard_base_F
    {
        maximumLoad = 2000;
        transportMaxWeapons = 12;
        transportMaxMagazines = 64;
        transportMaxBackpacks = 12;
		supplyRadius = 1.4;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
    };

    class ascz_arsenal_box: Land_PaperBox_open_full_F
    {
            displayName = "[ACE] Arsenal";
            vehicleClass = "Ammo";
            class eventHandlers
            {
                init = "_this select 0 addAction [""<img image='\A3\Ui_f\data\Logos\arsenal_1024_ca.paa' size='1.8' shadow=0.1 />"", { [""Open"", true] call BIS_fnc_arsenal; }, """", 6];";
            };
    };
    class StaticMGWeapon;
    class UK3CB_BAF_Static_MG_Base: StaticMGWeapon {
        faction = "UK3CB_BAF_Faction";
    };
    class Mortar_01_base_F;
    class UK3CB_BAF_Static_Mortar_Base: Mortar_01_base_F {
        faction = "UK3CB_BAF_Faction";
    };
};

class CfgFactionClasses
{
    // BLUFOR
	class ACR_A3
	{
		priority = -1000;
	};
	class rhs_faction_usarmy_d;
	class ascz_rhs_faction_usarmy: rhs_faction_usarmy_d
	{
		priority = -999;
	};
	class rhs_faction_usmc_d;
	class ascz_rhs_faction_usmc: rhs_faction_usmc_d
	{
		priority = -998;
	};
	class rhs_faction_socom
	{
		priority = -997;
	};
	class rhs_faction_usn
	{
		priority = -996;
	};
	class UK3CB_BAF_Faction
	{
		priority = -995;
	};
	class CDF_A3
	{
		priority = -994;
	};
	class LOP_CDF
	{
		priority = -993;
	};
	class BLU_F
	{
		priority = -992;
	};
	class BLU_G_F
	{
		priority = -991;
	};
	class AFR_army
	{
		priority = -990;
	};
	class LOP_AA
	{
		displayName = "Afghan Army";
		priority = -989;
	};
	class LOP_IA
	{
		priority = -988;
	};

	//IND
	class rhs_faction_insurgents
	{
		priority = -9;
	};
	class LOP_RACS
	{
		priority = -8;
	};
	class IND_F
	{
		priority = -7;
	};
	class LOP_PMC
	{
		priority = -6;
	};
	class LOP_ISTS
	{
		priority = -5;
	};
	class LOP_AM
	{
		priority = -4;
	};
	class LOP_AFR
	{
		priority = -3;
	};
	class LOP_UA
	{
		priority = -2;
	};

    //OPFOR
	class rhs_faction_msv;
	class ascz_rhs_faction_ru: rhs_faction_msv
	{
		priority = -9;
	};
	class LOP_ChDKZ
	{
		priority = -8;
	};
	class LOP_SLA
	{
		priority = -7;
	};
	class OPF_F
	{
		priority = -6;
	};
	class TKA_A3
	{
		priority = -5;
	};
	class LOP_AM_O
	{
		priority = -4;
	};
	class LOP_US
	{
		priority = -3;
	};
	class MOL_army
	{
		priority = -2;
	};

	//CIV
	class CIV_F
	{
		priority = 1;
	};
	class rds_rus_civ
	{
		priority = 2;
	};
	class LOP_TAK_Civ
	{
		priority = 3;
	};
	class LOP_AFR_Civ
	{
		priority = 4;
	};
};