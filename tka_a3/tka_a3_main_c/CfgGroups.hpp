class CfgGroups
{
    class East
    {
        class TKA_A3
        {
            name = "$STR_EP1_dn_cfggroups_east_tka_a3";

            class Infantry
            {
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class TK_InfantrySquad
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
                    faction = TKA_A3;
                    rarityGroup=0.7;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_SL";rank = "LIEUTENANT";position[] = {0,+5,0};};
                    class Unit1	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit4	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {9,0,0};};
                    class Unit5	{side = 0;vehicle = "B_TKA_A3_Soldier_LAT";rank = "CORPORAL";position[] = {11,0,0};};
                    class Unit6	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "PRIVATE";position[] = {13,0,0};};
                    class Unit7	{side = 0;vehicle = "B_TKA_A3_Soldier_AAT";rank = "PRIVATE";position[] = {15,0,0};};
                    class Unit8	{side = 0;vehicle = "B_TKA_A3_Soldier_AMG";rank = "PRIVATE";position[] = {17,0,0};};
                };

                class TK_InfantrySection
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
                    faction = TKA_A3;
                    rarityGroup=0.2;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {0,+5,0};};
                    class Unit1	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier";rank = "PRIVATE";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier";rank = "PRIVATE";position[] = {7,0,0};};
                };

                class TK_InfantrySectionAT
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
                    faction = TKA_A3;
                    rarityGroup=0.2;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_HAT";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 0;vehicle = "B_TKA_A3_Soldier_HAT";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit4	{side = 0;vehicle = "B_TKA_A3_Soldier_AAT";rank = "PRIVATE";position[] = {9,0,0};};
                };

                class TK_InfantrySectionAA
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
                    faction = TKA_A3;
                    rarityGroup=0.2;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_AA";rank = "LIEUTENANT";position[] = {0,+5,0};};
                    class Unit1	{side = 0;vehicle = "B_TKA_A3_Soldier_AA";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier_AA";rank = "SERGEANT";position[] = {5,0,0};};
                };

                class TK_InfantrySectionMG
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0";
                    faction = TKA_A3;
                    rarityGroup=0.2;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {0,+5,0};};
                    class Unit1	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "PRIVATE";position[] = {7,0,0};};
                    class Unit4	{side = 0;vehicle = "B_TKA_A3_Soldier_AMG";rank = "PRIVATE";position[] = {9,0,0};};
                };

                class TK_SniperTeam
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
                    faction = TKA_A3;
                    rarityGroup=0.05;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_SniperH";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 0;vehicle = "B_TKA_A3_Soldier_Spotter";rank = "SERGEANT";position[] = {3,0,0};};
                };

                class TK_SpecialPurposeSquad
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0";
                    faction = TKA_A3;
                    rarityGroup=0.5;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Special_Forces_TL";rank = "LIEUTENANT";position[] = {0,+5,0};};
                    class Unit1	{side = 0;vehicle = "B_TKA_A3_Special_Forces_MG";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "SERGEANT";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "SERGEANT";position[] = {7,0,0};};
                    class Unit4	{side = 0;vehicle = "B_TKA_A3_Special_Forces_MG";rank = "CORPORAL";position[] = {9,0,0};};
                    class Unit5	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "CORPORAL";position[] = {11,0,0};};
                    class Unit6	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "CORPORAL";position[] = {13,0,0};};
                };
            };

            class Motorized
            {
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";

                class TK_MotorizedInfanterySquad
                {
					name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_motorized_tk_motorizedinfanterysquad";
                    faction = TKA_A3;
                    rarityGroup=0.3;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_SL";rank = "SERGEANT";position[] = {3,+5,0};};
                    class Unit1	{side = 0;vehicle = "TKA_A3_Ural_Open";rank = "CORPORAL";position[] = {-5,0,0};}; // default v3s
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit4	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "CORPORAL";position[] = {9,0,0};};
                    class Unit5	{side = 0;vehicle = "B_TKA_A3_Soldier";rank = "CORPORAL";position[] = {11,0,0};};
                    class Unit6	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {13,0,0};};
                    class Unit7	{side = 0;vehicle = "B_TKA_A3_Soldier_LAT";rank = "CORPORAL";position[] = {15,0,0};};
                    class Unit8	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "PRIVATE";position[] = {17,0,0};};
                    class Unit9	{side = 0;vehicle = "B_TKA_A3_Soldier_AMG";rank = "PRIVATE";position[] = {19,0,0};};
                };

//                class TK_MotorizedReconSection
//                {
//                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_motorized_tk_motorizedreconsection";
//                    faction = TKA_A3;
//                    rarityGroup=0.3;
//                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_SL";rank = "SERGEANT";position[] = {3,+5,0};};
//                    class Unit1	{side = 0;vehicle = "UAZ_MG_TK_EP1";rank = "CORPORAL";position[] = {-5,0,0};};
//                    class Unit2	{side = 0;vehicle = "UAZ_AGS30_TK_EP1";rank = "CORPORAL";position[] = {-5,-7,0};};
//                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {5,0,0};};
//                };

                class TK_MotorizedPatrol
                {
                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_motorized_tk_motorizedpatrol";
                    faction = TKA_A3;
                    rarityGroup=0.4;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "SERGEANT";position[] = {3,+5,0};};
                    class Unit1	{side = 0;vehicle = "TKA_A3_UAZ_469";rank = "CORPORAL";position[] = {-5,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier";rank = "PRIVATE";position[] = {5,0,0};};
                };
            };

            class Mechanized
            {
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";

                class TK_MechanizedInfantrySquadBMP2
                {
                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_mechanized_tk_mechanizedinfantrysquadbmp2";
                    faction = TKA_A3;
                    rarityGroup=0.7;
                    class Unit0 	{side = 0;vehicle = "B_TKA_A3_Soldier_SL";rank = "LIEUTENANT";position[] = {3,+5,0};};
                    class Unit1	{side = 0;vehicle = "TKA_A3_BMP2";rank = "SERGEANT";position[] = {-5,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit4 	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {9,0,0};};
                    class Unit5	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {11,0,0};};
                    class Unit6	{side = 0;vehicle = "B_TKA_A3_Soldier_LAT";rank = "PRIVATE";position[] = {13,0,0};};
                    class Unit7	{side = 0;vehicle = "B_TKA_A3_Soldier_AAT";rank = "PRIVATE";position[] = {15,0,0};};
                    // class Unit8	{side = 0;vehicle = "B_TKA_A3_Soldier_AMG";rank = "PRIVATE";position[] = {17,0,0};};
                };

                class TK_MechanizedInfantrySquadBTR60
                {
                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_mechanized_tk_mechanizedinfantrysquadbtr60;
                    faction = TKA_A3;
                    rarityGroup=0.9;
                    class Unit0 	{side = 0;vehicle = "B_TKA_A3_Soldier_SL";rank = "LIEUTENANT";position[] = {3,+5,0};};
                    class Unit1	{side = 0;vehicle = "TKA_A3_BTR60";rank = "SERGEANT";position[] = {-5,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "SERGEANT";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit4 	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {9,0,0};};
                    class Unit5	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "PRIVATE";position[] = {11,0,0};};
                    class Unit6	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "SERGEANT";position[] = {13,0,0};};
                    class Unit7	{side = 0;vehicle = "B_TKA_A3_Soldier_LAT";rank = "CORPORAL";position[] = {15,0,0};};
                    class Unit8	{side = 0;vehicle = "B_TKA_A3_Soldier";rank = "CORPORAL";position[] = {17,0,0};};
                };

                class TK_MechanizedSpecialSquad
                {
                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_mechanized_tk_mechanizedspecialsquad";
                    faction = TKA_A3;
                    rarityGroup=0;
                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Special_Forces_TL";rank = "LIEUTENANT";position[] = {3,+5,0};};
                    class Unit1	{side = 0;vehicle = "TKA_A3_BTR60";rank = "SERGEANT";position[] = {-5,0,0};};
                    class Unit2	{side = 0;vehicle = "B_TKA_A3_Special_Forces_MG";rank = "SERGEANT";position[] = {5,0,0};};
                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Special_Forces_MG";rank = "SERGEANT";position[] = {7,0,0};};
                    class Unit4	{side = 0;vehicle = "B_TKA_A3_Special_Forces_MG";rank = "SERGEANT";position[] = {9,0,0};};
                    class Unit5	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "CORPORAL";position[] = {11,0,0};};
                    class Unit6	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "CORPORAL";position[] = {13,0,0};};
                    class Unit7	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "CORPORAL";position[] = {15,0,0};};
                    class Unit8	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "CORPORAL";position[] = {17,0,0};};
                    // class Unit9	{side = 0;vehicle = "B_TKA_A3_Special_Forces";rank = "CORPORAL";position[] = {19,0,0};};
                };

//                class TK_MechanizedReconSection
//                {
//                    name = "$STR_cfggroups_west_tka_a3_mechanized_cdf_mechreconsection";
//                    faction = TKA_A3;
//                    rarityGroup=0.7;
//                    class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_SL";rank = "SERGEANT";position[] = {3,+5,0};};
//                    class Unit1	{side = 0;vehicle = "BRDM2_TK_EP1";rank = "SERGEANT";position[] = {-5,0,0};};
//                    class Unit2	{side = 0;vehicle = "BRDM2_TK_EP1";rank = "SERGEANT";position[] = {-5,-7,0};};
//                    class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_MG";rank = "CORPORAL";position[] = {5,0,0};};
//                    class Unit4 	{side = 0;vehicle = "B_TKA_A3_Soldier_AR";rank = "CORPORAL";position[] = {7,0,0};};
//                    class Unit5	{side = 0;vehicle = "B_TKA_A3_Soldier_AT";rank = "CORPORAL";position[] = {9,0,0};};
//                    class Unit6	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "PRIVATE";position[] = {11,0,0};};
//                    class Unit7	{side = 0;vehicle = "B_TKA_A3_Soldier";rank = "PRIVATE";position[] = {13,0,0};};
//                };

//                class TK_MechanizedReconSectionAT
//                {
//                    name = "$STR_cfggroups_west_tka_a3_mechanized_cdf_mechatsection";
//                    faction = TKA_A3;
//                    rarityGroup=0.7;
//                    //class Unit0	{side = 0;vehicle = "B_TKA_A3_Soldier_GL";rank = "SERGEANT";position[] = {3,+5,0};};
//                    class Unit0	{side = 0;vehicle = "BRDM2_ATGM_TK_EP1";rank = "SERGEANT";position[] = {0,+10,0};};
//                    class Unit1	{side = 0;vehicle = "BRDM2_ATGM_TK_EP1";rank = "SERGEANT";position[] = {5,0,0};};
//                    //class Unit3	{side = 0;vehicle = "B_TKA_A3_Soldier_HAT";rank = "CORPORAL";position[] = {5,0,0};};
//                };
            };

            class Armored
            {
				name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";

                class TK_T72Platoon
                {
                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_armored_tk_t72platoon";
                    faction = TKA_A3;
                    rarityGroup=0.05;
                    class Unit0	{side = 0;vehicle = "TKA_A3_T72";rank = "CAPTAIN";position[] = {0,+10,0};};
                    class Unit1	{side = 0;vehicle = "TKA_A3_T72";rank = "LIEUTENANT";position[] = {5,0,0};};
                    class Unit2	{side = 0;vehicle = "TKA_A3_T72";rank = "LIEUTENANT";position[] = {10,0,0};};
                };

                class TK_T55Platoon
                {
                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_armored_tk_t55platoon";
                    faction = TKA_A3;
                    rarityGroup=0.05;
                    class Unit0	{side = 0;vehicle = "TKA_A3_T55";rank = "CAPTAIN";position[] = {0,+10,0};};
                    class Unit1	{side = 0;vehicle = "TKA_A3_T55";rank = "LIEUTENANT";position[] = {5,0,0};};
                    class Unit2	{side = 0;vehicle = "TKA_A3_T55";rank = "LIEUTENANT";position[] = {10,0,0};};
                };

                class TK_T34Platoon
                {
                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_armored_tk_t34platoon";
                    faction = TKA_A3;
                    rarityGroup=0.05;
                    class Unit0	{side = 0;vehicle = "TKA_A3_T34";rank = "CAPTAIN";position[] = {0,+10,0};};
                    class Unit1	{side = 0;vehicle = "TKA_A3_T34";rank = "LIEUTENANT";position[] = {5,0,0};};
                    class Unit2	{side = 0;vehicle = "TKA_A3_T34";rank = "LIEUTENANT";position[] = {10,0,0};};
                };
            };
            class Air
            {
                name = $STR_EP1_DN_CfgGroups_East_BIS_TK_Air;

//                class TK_An2Flight
//                {
//                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_air_tk_an2flight";
//                    faction = TKA_A3;
//                    rarityGroup = 0.3;
//
//                    minAltitude = 100;
//                    maxAltitude = 500;
//
//                    class Unit0 {side = 0; vehicle = "An2_TK_EP1"; rank = "CAPTAIN"; position[] = {0, 0, 0};};
//                };
                class TK_Mi24_DFlight
                {
                    name = "$STR_cfggroups_west_tka_a3_air_cdf_mi24dsquadron";
                    faction = TKA_A3;
                    rarityGroup = 0.3;

                    minAltitude = 40;
                    maxAltitude = 100;

                    class Unit0 {side = 0; vehicle = "TKA_A3_Mi_24p"; rank = "CAPTAIN"; position[] = {0, 0, 0};};
                };
                class TK_Mi_17Flight
                {
                    name = "$STR_cfggroups_west_tka_a3_air_cdf_mi8squadron";
                    faction = TKA_A3;
                    rarityGroup = 0.3;

                    minAltitude = 60;
                    maxAltitude = 150;

                    class Unit0 {side = 0; vehicle = "TKA_A3_Mi17"; rank = "CAPTAIN"; position[] = {0, +15, 0};};
                    class Unit1 {side = 0; vehicle = "TKA_A3_Mi17"; rank = "LIEUTENANT"; position[] = {15, 0, 0};};
                };
                class TK_Su25Flight
                {
                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_air_tk_su25flight";
                    faction = TKA_A3;
                    rarityGroup = 0.3;

                    minAltitude = 100;
                    maxAltitude = 500;

                    class Unit0 {side = 0; vehicle = "TKA_A3_Su25SM"; rank = "CAPTAIN"; position[] = {0, 20, 0};};
                    class Unit1 {side = 0; vehicle = "TKA_A3_Su25SM"; rank = "LIEUTENANT"; position[] = {20, 0, 0};};
                };
//                class TK_UH1HFlight
//                {
//                    name = "$STR_tka_a3_dn_cfggroups_east_bis_tk_air_tk_uh1hflight";
//                    faction = TKA_A3;
//                    rarityGroup = 0.3;
//
//                    minAltitude = 60;
//                    maxAltitude = 150;
//
//                    class Unit0 {side = 0; vehicle = "UH1H_TK_EP1"; rank = "CAPTAIN"; position[] = {0, +15, 0};};
//                    class Unit1 {side = 0; vehicle = "UH1H_TK_EP1"; rank = "LIEUTENANT"; position[] = {15, 0, 0};};
//                };
            };
        };
    };
};