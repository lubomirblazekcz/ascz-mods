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
                name = $STR_CfgGroups_West_CDF_Infantry;
                //CDF RIFLE SQUAD
                class CDF_InfSquad
                {
                    name = $STR_CfgGroups_West_CDF_Infantry_CDF_InfSquad;
                    faction = CDF;
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
                    name = $STR_CfgGroups_West_CDF_Infantry_CDF_InfSquad_Weapons;
                    faction = CDF;
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
                    name = $STR_CfgGroups_West_CDF_Infantry_CDF_InfSection_AT;
                    faction = CDF;
                    rarityGroup=0.2;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_AR";rank = "PRIVATE";position[] = {7,0,0};};
                };

                //CDF AA TEAM
                class CDF_InfSection_AA
                {
                    name = $STR_CfgGroups_West_CDF_Infantry_CDF_InfSection_AA;
                    faction = CDF;
                    rarityGroup=0.1;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_Strela";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_Strela";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "PRIVATE";position[] = {7,0,0};};
                };

                //CDF WEAPONS TEAM
                class CDF_InfSection_MG
                {
                    name = $STR_CfgGroups_West_CDF_Infantry_CDF_InfSection_MG;
                    faction = CDF;
                    rarityGroup=0.1;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_AR";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "PRIVATE";position[] = {7,0,0};};
                };

                //CDF PATROL
                class CDF_InfSection_Patrol
                {
                    name = $STR_CfgGroups_West_CDF_Infantry_CDF_InfSection_Patrol;
                    faction = CDF;
                    rarityGroup=0.3;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_Militia";rank = "CORPORAL";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_Militia";rank = "CORPORAL";position[] = {3,0,0};};
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_Militia";rank = "PRIVATE";position[] = {5,0,0};};
                    class Unit3 {side = 1;vehicle = "B_CDF_A3_Soldier_Militia";rank = "PRIVATE";position[] = {7,0,0};};
                };

                //CDF SNIPER TEAM
                class CDF_SniperTeam
                {
                    name = $STR_CfgGroups_West_CDF_Infantry_CDF_SniperTeam;
                    faction = CDF;
                    rarityGroup=0.05;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_Sniper";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "B_CDF_A3_Soldier_Sniper";rank = "CORPORAL";position[] = {3,0,0};};
                };
            };
            //MOTORIZED
            class Motorized
            {
                name = $STR_CfgGroups_West_CDF_Motorized;
                //CDF MOTORIZED RIFLE SQUAD
                class CDF_MotInfSquad
                {
                    name = $STR_CfgGroups_West_CDF_Motorized_CDF_MotInfSquad;
                    faction = CDF;
                    rarityGroup=0.4;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "LIEUTENANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "Ural_CDF";rank = "SERGEANT";position[] = {-5,0,0};}; //vehicle
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
                    name = $STR_CfgGroups_West_CDF_Motorized_CDF_MotInfSection;
                    faction = CDF;
                    rarityGroup=0.15;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "UAZ_CDF";rank = "CORPORAL";position[] = {-5,0,0};}; //vehicle
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "PRIVATE";position[] = {3,0,0};};
                };

                //CDF MOTORIZED WEAPONS PATROL
                class CDF_MotInfSection_Weapons
                {
                    name = $STR_CfgGroups_West_CDF_Motorized_CDF_MotInfSection_Weapons;
                    faction = CDF;
                    rarityGroup=0.2;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "UAZ_AGS30_CDF";rank = "CORPORAL";position[] = {-5,0,0};}; //vehicle
                    class Unit2	{side = 1;vehicle = "UAZ_AGS30_CDF";rank = "CORPORAL";position[] = {-5,-7,0};}; //vehicle
                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "PRIVATE";position[] = {3,0,0};};
                };
            };
            //MECHANIZED UNITS
            class Mechanized
            {
                name = $STR_CfgGroups_West_CDF_Mechanized;
                //CDF MECHANIZED RIFLE SQUAD
                class CDF_MechInfSquad
                {
                    name = $STR_CfgGroups_West_CDF_Mechanized_CDF_MechInfSquad;
                    faction = CDF;
                    rarityGroup=0.9;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "BMP2_CDF";rank = "SERGEANT";position[] = {-5,0,0};}; //vehicle
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "CORPORAL";position[] = {5,0,0};};
                    class Unit4 {side = 1;vehicle = "B_CDF_A3_Soldier_Marksman";rank = "CORPORAL";position[] = {7,0,0};};
                    class Unit5	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "PRIVATE";position[] = {9,0,0};};
                    class Unit6	{side = 1;vehicle = "B_CDF_A3_Soldier_GL";rank = "PRIVATE";position[] = {11,0,0};};
                    class Unit7	{side = 1;vehicle = "B_CDF_A3_Soldier";rank = "PRIVATE";position[] = {13,0,0};};
                };

                //CDF RECON SECTION
                class CDF_MechReconSection
                {
                    name = $STR_CfgGroups_West_CDF_Mechanized_CDF_MechReconSection;
                    faction = CDF;
                    rarityGroup=0.5;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "BRDM2_CDF";rank = "SERGEANT";position[] = {-5,0,0};}; //vehicle
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {5,0,0};};
                };

                //CDF MECH PATROL AT (BRDM)
                class CDF_MechATSection
                {
                    name = $STR_CfgGroups_West_CDF_Mechanized_CDF_MechATSection;
                    faction = CDF;
                    rarityGroup=0.5;
                    class Unit0 {side = 1;vehicle = "B_CDF_A3_Soldier_TL";rank = "SERGEANT";position[] = {0,+5,0};};
                    class Unit1	{side = 1;vehicle = "BRDM2_ATGM_CDF";rank = "SERGEANT";position[] = {-5,0,0};}; //vehicle
                    class Unit2	{side = 1;vehicle = "B_CDF_A3_Soldier_MG";rank = "SERGEANT";position[] = {3,0,0};};
                    class Unit3	{side = 1;vehicle = "B_CDF_A3_Soldier_RPG";rank = "CORPORAL";position[] = {5,0,0};};
                };
            };
            class Armored
            {
                name = $STR_CfgGroups_West_CDF_Armored;
                //CDF TANK PLATOON
                class CDF_TankPlatoon
                {
                    name = $STR_CfgGroups_West_CDF_Armored_CDF_TankPlatoon;
                    faction = CDF;
                    rarityGroup=0.25;
                    class Unit0 {side = 1;vehicle = "T72_CDF";rank = "CAPTAIN";position[] = {0,+10,0};};
                    class Unit1	{side = 1;vehicle = "T72_CDF";rank = "LIEUTENANT";position[] = {5,0,0};};
                    class Unit2	{side = 1;vehicle = "T72_CDF";rank = "SERGEANT";position[] = {10,0,0};};
                };
            };

            //AIR
            class Air
            {
                name = $STR_CfgGroups_West_CDF_Air;

                //CDF Mi-24D squadron
                class CDF_Mi24DSquadron
                {
                    name = $STR_CfgGroups_West_CDF_Air_CDF_Mi24DSquadron;
                    faction = CDF;
                    rarityGroup = 0.1;

                    //ACM entries:
                    minAltitude = 40;
                    maxAltitude = 100;

                    class Unit0 {side = 1; vehicle = "Mi24_D"; rank = "CAPTAIN"; position[] = {0, +15, 0};};
                    class Unit1 {side = 1; vehicle = "Mi24_D"; rank = "LIEUTENANT"; position[] = {15, 0, 0};};
                };

                //CDF Mi-8 squadron
                class CDF_Mi8Squadron
                {
                    name = $STR_CfgGroups_West_CDF_Air_CDF_Mi8Squadron;
                    faction = CDF;
                    rarityGroup = 0.3;

                    //ACM entries:
                    minAltitude = 60;
                    maxAltitude = 150;

                    class Unit0 {side = 1; vehicle = "Mi17_CDF"; rank = "CAPTAIN"; position[] = {0, +15, 0};};
                    class Unit1 {side = 1; vehicle = "Mi17_CDF"; rank = "LIEUTENANT"; position[] = {15, 0, 0};};
                };
            };
        };
    };
};