class CfgPatches
{
	class ascz_lop_replacement
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"lop_main", "rhs_cti_insurgents","lop_faction_am","lop_faction_pmc","lop_faction_cdf","lop_faction_ia"};
	};
};

class CfgFactionClasses {
	class rhs_faction_insurgents
	{
		displayName = "NAPA";
		icon = "\ASCZ_lop_replacement\napa\icon_napa_co.paa";
		primarylanguage = "ACR_CZ";
	};
	class LOP_CDF {
		displayName = "CDF 2014";
		priority = 1;
	};
	class LOP_PMC {
		displayName = "PMC";
	};
    class LOP_AM_O {
		displayName = "Takistani Militia";
        primarylanguage = "TK";
        priority = 101;
        side = 0;
		icon = "\ASCZ_lop_replacement\am\icon_tkm_co.paa";
    };
    class LOP_AM {
		displayName = "Takistani Locals";
		primarylanguage = "TK";
		priority = 2;
        side = 2;
		icon = "\ASCZ_lop_replacement\am\icon_tkg_co.paa";
    };
    class GUE {
        side = 2;
        displayName = "GUE";
    };
};

//class CfgVehicleClasses {
//	class LOP_Men {
//		displayName = "$STR_DN_MEN";
//	};
//	class LOP_Men_police {
//		displayName = "$STR_DN_MenCIV";
//	};
//	class LOP_Wheeled {
//		displayName = "$STR_DN_CARS";
//	};
//	class LOP_Support {
//		displayName = "$STR_DN_SUPPORTS";
//	};
//	class LOP_Aircraft {
//		displayName = "$STR_DN_AIR";
//	};
//	class LOP_Armored {
//		displayName = "$STR_DN_ARMORED";
//	};
//	class LOP_Static {
//		displayName = "$STR_A3_CfgVehicleClasses_Static0";
//	};
//};

class CfgGroups
{
	class West
	{
		class LOP_CDF
		{
			name = "CDF 2014";
        };
        class LOP_IA
        {
            class Mechanized
            {
                class LOP_IA_Mech_squad_BMP2
                {
                    class Unit6
                    {
                        vehicle = "LOP_IA_BMP2";
                    };
                };
                class LOP_IA_Mech_squad_BMP1
                {
                    class Unit6
                    {
                        vehicle = "LOP_IA_BMP1";
                    };
                };
            };
        };
    };
	class EAST
	{
		class LOP_AM_O
		{
			name = "Takistani Militia";
			class Infantry
			{
				name = "Infantry";
				class LOP_AM_Support_section
				{
					name = "Support team";
					faction = "LOP_AM_O";
					side = 0;
					aliveCategory = "Infantry";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_TL_O";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_SL_O";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Corpsman_O";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AT_O";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Rifleman_O";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AR_O";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_GL_O";
						rank = "Private";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AR_O";
						rank = "Private";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_GL_O";
						rank = "Private";
						position[] = {17,0,0};
					};
				};
				class LOP_AM_Patrol_section
				{
					name = "Sentry";
					faction = "LOP_AM_O";
					side = 0;
					aliveCategory = "Infantry";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Rifleman_O";
						rank = "Private";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Rifleman_O";
						rank = "Private";
						position[] = {3,0,0};
					};
				};
				class LOP_AM_AT_section
				{
					name = "Anti-armor Team";
					faction = "LOP_AM_O";
					side = 0;
					aliveCategory = "Infantry";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_TL_O";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_SL_O";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Corpsman_O";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AT_O";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AT_O";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Rifleman_O";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Rifleman_O";
						rank = "Private";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AT_O";
						rank = "Private";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Rifleman_O";
						rank = "Private";
						position[] = {17,0,0};
					};
				};
				class LOP_AM_Rifle_squad
				{
					name = "Rifle squad";
					faction = "LOP_AM_O";
					side = 0;
					aliveCategory = "Infantry";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_TL_O";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_SL_O";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Corpsman_O";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Marksman_O";
						rank = "Corporal";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AT_O";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Rifleman_O";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Rifleman_O";
						rank = "Private";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AR_O";
						rank = "Private";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_GL_O";
						rank = "Private";
						position[] = {17,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Inf.";
				class LOP_AM_Motor_squad_LR
				{
					name = "Squad (Landrover .50cal)";
					faction = "LOP_AM_O";
					side = 0;
					aliveCategory = "Motorized";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_TL_O";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_SL_O";
						rank = "Corporal";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_Corpsman_O";
						rank = "Corporal";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_AR_O";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_GL_O";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "LOP_AM_Infantry_GL_O";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "LOP_AM_Landrover_M2_O";
						rank = "Sergeant";
						position[] = {15,0,0};
					};
				};
			};
			class Armored
			{
				name = "Tank Groups";
				class LOP_AM_T72_Platoon
				{
					name = "T72 Platoon";
					faction = "LOP_AM_O";
					side = 0;
					aliveCategory = "Armored";
					class Unit0
					{
						side = 0;
						vehicle = "LOP_AM_T72BA_O";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LOP_AM_T72BA_O";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LOP_AM_T72BA_O";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
	    };
	};
    class Indep
    {
        class LOP_PMC
        {
            name = "PMC";
        };
        class rhs_faction_insurgents
        {
            name = "NAPA";
            delete rhs_group_indp_ins_bmd2;
            delete rhs_group_indp_ins_btr70;
			class rhs_group_indp_ins_72
			{
				name = "T-72 Groups";
				aliveCategory="Armored";


				class RHS_T72BBPlatoon
				{
					name = "T-72 g.1984 Platoon";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0
					{
						side = 2;
						vehicle = "ascz_rhs_T72BB";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ascz_rhs_T72BB";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ascz_rhs_T72BB";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				delete RHS_T72BBPlatoon_AA;
				delete RHS_T72BBSection;
			};
        };
		class LOP_AM
		{
			name = "Takistani Local";
	    };
    };
};