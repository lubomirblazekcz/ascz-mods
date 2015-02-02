class CfgGroups
{
    class West
    {
        name = "$STR_A3_CfgGroups_West0";
        class CDF_A3
        {
            name = "CDF";
            //INFANTRY
            class Infantry
            {
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                //CDF RIFLE SQUAD
                class CDF_InfSquad
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
                    faction = CDF_A3;
                    rarityGroup=0.6;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "LIEUTENANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit4	{side = 1;vehicle = "B_CDF_A3_Soldier";rank = "CORPORAL";position[] = {9,0,0};};
                    class Unit5	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "CORPORAL";position[] = {11,0,0};};
                    class Unit6	{side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "PRIVATE";position[] = {13,0,0};};
                    class Unit7	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "PRIVATE";position[] = {15,0, 0};};
                    class Unit8	{side = 1;vehicle = "B_CDF_A3_Soldier";rank = "PRIVATE";position[] = {17,0,0};};
                    class Unit9	{side = 1;vehicle = "B_CDF_A3_Soldier_Medic";rank = "PRIVATE";position[] = {19,0,0};};
                };

                //CDF WEAPONS SQUAD
                class CDF_InfSquad_Weapons
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
                    faction = CDF_A3;
                    rarityGroup=0.6;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "LIEUTENANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_AR";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit4	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {9,0,0};};
                    class Unit5	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {11,0,0};};
                    class Unit6	{side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "PRIVATE";position[] = {13,0,0};};
                    class Unit7	{side = 1;vehicle = "B_CDF_A3_Soldier_Marksman";rank = "PRIVATE";position[] = {15,0, 0};};
                };

                //CDF AT TEAM
                class CDF_InfSection_AT
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
                    faction = CDF_A3;
                    rarityGroup=0.2;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_AR";rank = "PRIVATE";position[] = {7,0,0};};
                };

                //CDF AA TEAM
                class CDF_InfSection_AA
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
                    faction = CDF_A3;
                    rarityGroup=0.1;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_Strela";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_Strela";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "PRIVATE";position[] = {7,0,0};};
                };

                //CDF WEAPONS TEAM
                class CDF_InfSection_MG
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0";
                    faction = CDF_A3;
                    rarityGroup=0.1;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_AR";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "PRIVATE";position[] = {7,0,0};};
                };

                //CDF PATROL
                class CDF_InfSection_Patrol
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0";
                    faction = CDF_A3;
                    rarityGroup=0.3;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_Militia";rank = "CORPORAL";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_Militia";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_Militia";rank = "PRIVATE";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_Militia";rank = "PRIVATE";position[] = {7,0,0};};
                };

                //CDF SNIPER TEAM
                class CDF_SniperTeam
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
                    faction = CDF_A3;
                    rarityGroup=0.05;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_Sniper";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_Sniper";rank = "CORPORAL";position[] = {3,0,0};};
                };
            };
            //MOTORIZED
            class Motorized
            {
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
                //CDF MOTORIZED RIFLE SQUAD
                class CDF_MotInfSquad
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
                    faction = CDF_A3;
                    rarityGroup=0.4;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "LIEUTENANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "CDF_A3_Ural";rank = "SERGEANT";position[] = {-5,0,0};}; //vehicle
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit4 {side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit5	{side = 1;vehicle = "B_CDF_A3_Soldier";rank = "CORPORAL";position[] = {9,0,0};};
                    class Unit6	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "CORPORAL";position[] = {11,0,0};};
                    class Unit7	{side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "PRIVATE";position[] = {13,0,0};};
                    class Unit8	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "PRIVATE";position[] = {15,0, 0};};
                    class Unit9	{side = 1;vehicle = "B_CDF_A3_Soldier";rank = "PRIVATE";position[] = {17,0,0};};
                    class Unit10 {side = 1;vehicle = "B_CDF_A3_Soldier_Medic";rank = "PRIVATE";position[] = {19,0,0};};
                };
                //CDF MOTORIZED PATROL
                class CDF_MotInfSection
                {
                    name = "$STR_CfgGroups_West_CDF_A3_Motorized_CDF_MotInfSection";
                    faction = CDF_A3;
                    rarityGroup=0.15;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "CDF_A3_UAZ_469";rank = "CORPORAL";position[] = {-5,0,0};}; //vehicle
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "PRIVATE";position[] = {3,0,0};};
                };

                //CDF MOTORIZED WEAPONS PATROL
//                class CDF_MotInfSection_Weapons
//                {
//                    name = "$STR_CfgGroups_West_CDF_A3_Motorized_CDF_MotInfSection_Weapons";
//                    faction = CDF_A3;
//                    rarityGroup=0.2;
//                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
//                    class Unit1	{side = 1;vehicle = "UAZ_AGS30_CDF";rank = "CORPORAL";position[] = {-5,0,0};}; //vehicle
//                    class Unit2	{side = 1;vehicle = "UAZ_AGS30_CDF";rank = "CORPORAL";position[] = {-5,-7,0};}; //vehicle
//                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "PRIVATE";position[] = {3,0,0};};
//                };
            };
            //MECHANIZED UNITS
            class Mechanized
            {
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
                //CDF MECHANIZED RIFLE SQUAD
                class CDF_MechInfSquad
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
                    faction = CDF_A3;
                    rarityGroup=0.9;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "CDF_A3_BMP2";rank = "SERGEANT";position[] = {-5,0,0};}; //vehicle
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit4 {side = 1;vehicle = "B_CDF_A3_Soldier_Marksman";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit5	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "PRIVATE";position[] = {9,0,0};};
                    class Unit6	{side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "PRIVATE";position[] = {11,0,0};};
                    class Unit7	{side = 1;vehicle = "B_CDF_A3_Soldier";rank = "PRIVATE";position[] = {13,0,0};};
                };

                //CDF RECON SECTION
//                class CDF_MechReconSection
//                {
//                    name = $STR_CfgGroups_West_CDF_A3_Mechanized_CDF_MechReconSection;
//                    faction = CDF_A3;
//                    rarityGroup=0.5;
//                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
//                    class Unit1	{side = 1;vehicle = "BRDM2_CDF";rank = "SERGEANT";position[] = {-5,0,0};}; //vehicle
//                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
//                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {5,0,0};};
//                };

                //CDF MECH PATROL AT (BRDM)
//                class CDF_MechATSection
//                {
//                    name = $STR_CfgGroups_West_CDF_A3_Mechanized_CDF_MechATSection;
//                    faction = CDF_A3;
//                    rarityGroup=0.5;
//                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
//                    class Unit1	{side = 1;vehicle = "BRDM2_ATGM_CDF";rank = "SERGEANT";position[] = {-5,0,0};}; //vehicle
//                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
//                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {5,0,0};};
//                };
            };
            class Armored
            {
				name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
                //CDF TANK PLATOON
                class CDF_TankPlatoon
                {
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
                    faction = CDF_A3;
                    rarityGroup=0.25;
                    class Unit0 {side = 1;vehicle = "CDF_A3_T72";rank = "CAPTAIN";position[] = {0,+10,0};};
                    class Unit1	{side = 1;vehicle = "CDF_A3_T72";rank = "LIEUTENANT";position[] = {5,0,0};};
                    class Unit2	{side = 1;vehicle = "CDF_A3_T72";rank = "SERGEANT";position[] = {10,0,0};};
                };
            };

            //AIR
            class Air
            {
                name = "$STR_CfgGroups_West_CDF_A3_Air";

                //CDF Mi-24D squadron
                class CDF_Mi24DSquadron
                {
                    name = "$STR_CfgGroups_West_CDF_A3_Air_CDF_Mi24DSquadron";
                    faction = CDF_A3;
                    rarityGroup = 0.1;

                    //ACM entries:
                    minAltitude = 40;
                    maxAltitude = 100;

                    class Unit0 {side = 1; vehicle = "CDF_A3_Mi_24p"; rank = "CAPTAIN"; position[] = {0, +15, 0};};
                    class Unit1 {side = 1; vehicle = "CDF_A3_Mi_24p"; rank = "LIEUTENANT"; position[] = {15, 0, 0};};
                };

                //CDF Mi-8 squadron
                class CDF_Mi8Squadron
                {
                    name = "$STR_CfgGroups_West_CDF_A3_Air_CDF_Mi8Squadron";
                    faction = CDF_A3;
                    rarityGroup = 0.3;

                    //ACM entries:
                    minAltitude = 60;
                    maxAltitude = 150;

                    class Unit0 {side = 1; vehicle = "CDF_A3_Mi17"; rank = "CAPTAIN"; position[] = {0, +15, 0};};
                    class Unit1 {side = 1; vehicle = "CDF_A3_Mi17"; rank = "LIEUTENANT"; position[] = {15, 0, 0};};
                };
            };
        };
    };
};