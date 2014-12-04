class CfgGroups
	{
	class East
		{
		class ascz_rhs_faction_ru
			{
			name = "$STR_ASCZ_RHS_FACTION";
			
			class rhs_group_rus_msv_infantry
				{
				name = "$STR_RHS_GROUP_MSV_infantry";
				aliveCategory = "Infantry";
				class rhs_group_rus_msv_infantry_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					class Unit9
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {17,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_section_mg
					{
					name = "$STR_RHS_GROUPS_SECTION_MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_section_marksman
					{
					name = "$STR_RHS_GROUPS_SECTION_MARKSMAN";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_section_AT
					{
					name = "$STR_RHS_GROUPS_SECTION_AT";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_lat";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_section_AA
					{
					name = "$STR_RHS_GROUPS_SECTION_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_fireteam
					{
					name = "$STR_RHS_GROUPS_RUS_FIRETEAM";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_infantry_MANEUVER
					{
					name = "$STR_RHS_GROUPS_RUS_MANEUVER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					};
				};
			class rhs_group_rus_msv_Ural
				{
				name = "$STR_RHS_GROUP_MSV_Ural";
				aliveCategory = "Motorized";
				class rhs_group_rus_msv_Ural_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_uaz_msv_01";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_Ural_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_msv_Ural_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_Ural_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_Ural_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_Ural_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_msv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_msv_gaz66
				{
				name = "$STR_RHS_GROUP_vdv_gaz66";
				aliveCategory = "Motorized";
				class rhs_group_rus_msv_gaz66_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_uaz_msv_01";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_gaz66_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_msv_gaz66_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_gaz66_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_gaz66_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_gaz66_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_msv_btr70
				{
				name = "$STR_RHS_GROUP_MSV_BTR70";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_btr70_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_btr70_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_msv_btr70_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_btr70_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_btr70_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_btr70_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_msv_BTR80
				{
				name = "$STR_RHS_GROUP_MSV_BTR80";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_BTR80_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_msv_BTR80a
				{
				name = "$STR_RHS_GROUP_MSV_BTR80a";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_BTR80a_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80a_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80a_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80a_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80a_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_BTR80a_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_msv_bmp1
				{
				name = "$STR_RHS_GROUP_MSV_BMP1";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_bmp1_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1k_msv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_bmp1_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_msv_bmp1_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_msv_bmp1_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_msv_bmp1_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_msv_bmp1_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_msv_bmp2
				{
				name = "$STR_RHS_GROUP_MSV_BMP2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_msv_bmp2_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2k_msv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_msv_bmp2_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_msv_bmp2_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_bmp2_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_bmp2_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_msv_bmp2_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_MSV_BMP3
				{
				name = "$STR_RHS_GROUP_MSV_BMP3";
				aliveCategory = "Mechanized";
				class rhs_group_rus_MSV_BMP3_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_MSV_BMP3_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_MSV_BMP3_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_MSV_BMP3_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_MSV_BMP3_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_MSV_BMP3_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp3_msv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_msv_bm21
				{
				aliveCategory = "Artillery";
				name = "BM-21 Artillery";
				class RHS_SPGPlatoon_msv_bm21
					{
					name = "BM-21 Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_BM21_MSV_01";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_BM21_MSV_01";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_BM21_MSV_01";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "RHS_BM21_MSV_01";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					class Unit4
						{
						side = 0;
						vehicle = "RHS_BM21_MSV_01";
						rank = "SERGEANT";
						position[] = {60,-60,3};
						};
					class Unit5
						{
						side = 0;
						vehicle = "RHS_BM21_MSV_01";
						rank = "CORPORAL";
						position[] = {80,-60,3};
						};
					};
				class RHS_SPGSection_msv_bm21
					{
					name = "BM-21 Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_BM21_MSV_01";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_BM21_MSV_01";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					};
				};
				
			class rhs_group_rus_tv_72
				{
				name = "T-72 Groups";
				aliveCategory = "Armored";
				class RHS_T72BAPlatoon
					{
					name = "T-72 g.1984 Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T72BAPlatoon_AA
					{
					name = "T-72 g.1984 Platoon (Combined)";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					};
				class RHS_T72BASection
					{
					name = "T-72 g.1984 Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_t72ba_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
						};
					};
				class RHS_T72BBPlatoon
					{
					name = "T-72 g.1984 (ERA) Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T72BBPlatoon_AA
					{
					name = "T-72 g.1984 (ERA) Platoon (Combined)";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T72BBSection
					{
					name = "T-72 g.1984 (ERA) Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T72BB_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
						};
					};
				class RHS_T72BCPlatoon
					{
					name = "T-72 g.1989 Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T72BCPlatoon_AA
					{
					name = "T-72 g.1989 Platoon (Combined)";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					};
				class RHS_T72BCSection
					{
					name = "T-72 g.1989 Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T72BC_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
						};
					};
				};
			class rhs_group_rus_tv_80
				{
				name = "T-80 Groups";
				aliveCategory = "Armored";
				class RHS_T80Platoon
					{
					name = "T-80 Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T80Platoon_AA
					{
					name = "T-80 Platoon (Combined)";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T80Section
					{
					name = "T-80 Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
						};
					};
				class RHS_T80BPlatoon
					{
					name = "T-80B Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T80BPlatoon_AA
					{
					name = "T-80B Platoon (Combined)";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					};
				class RHS_T80BSection
					{
					name = "T-80B Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80B";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
						};
					};
				class RHS_T80BVPlatoon
					{
					name = "T-80BV Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T80BVPlatoon_AA
					{
					name = "T-80BV Platoon (Combined)";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					};
				class RHS_T80BVSection
					{
					name = "T-80BV Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80BV";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
						};
					};
				class RHS_T80APlatoon
					{
					name = "T-80A Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T80APlatoon_AA
					{
					name = "T-80A Platoon (Combined)";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					};
				class RHS_T80ASection
					{
					name = "T-80A Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80A";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
						};
					};
				class RHS_T80UPlatoon
					{
					name = "T-80U Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					};
				class RHS_T80UPlatoon_AA
					{
					name = "T-80U Platoon (Combined)";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					};
				class RHS_T80USection
					{
					name = "T-80U Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_T80U";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
						};
					};
				};
			class rhs_group_rus_tv_2s3
				{
				name = "2S3 Artillery";
				aliveCategory = "Artillery";
				class RHS_SPGPlatoon_tv_2s3
					{
					name = "Artillery 2S3 Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					};
				class RHS_SPGSection_tv_2s3
					{
					name = "Artillery 2S3 Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_2s3_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					};
				};
				
			class rhs_group_rus_vdv_infantry
				{
				name = "$STR_RHS_GROUP_vdv_infantry";
				aliveCategory = "Infantry";
				class rhs_group_rus_vdv_infantry_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					class Unit9
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {17,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_section_mg
					{
					name = "$STR_RHS_GROUPS_SECTION_MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_section_marksman
					{
					name = "$STR_RHS_GROUPS_SECTION_MARKSMAN";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_section_AT
					{
					name = "$STR_RHS_GROUPS_SECTION_AT";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_lat";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_section_AA
					{
					name = "$STR_RHS_GROUPS_SECTION_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_fireteam
					{
					name = "$STR_RHS_GROUPS_RUS_FIRETEAM";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_infantry_MANEUVER
					{
					name = "$STR_RHS_GROUPS_RUS_MANEUVER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_Ural
				{
				name = "$STR_RHS_GROUP_vdv_Ural";
				aliveCategory = "Motorized";
				class rhs_group_rus_vdv_Ural_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_uaz_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_Ural_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_Ural_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_Ural_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_Ural_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_Ural_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_Ural_vdv_01";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_gaz66
				{
				name = "$STR_RHS_GROUP_vdv_gaz66";
				aliveCategory = "Motorized";
				class rhs_group_rus_vdv_gaz66_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_uaz_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_gaz66_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_gaz66_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_gaz66_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_gaz66_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_gaz66_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_gaz66_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_btr60
				{
				name = "$STR_RHS_GROUP_vdv_btr60";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_btr60_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_btr60_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_btr60_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_btr60_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_btr60_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_btr60_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr60_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_btr70
				{
				name = "$STR_RHS_GROUP_vdv_BTR70";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_btr70_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_btr70_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_btr70_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_btr70_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_btr70_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_btr70_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr70_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_BTR80
				{
				name = "$STR_RHS_GROUP_msv_BTR80";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_BTR80_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_btr80_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_BTR80a
				{
				name = "$STR_RHS_GROUP_msv_BTR80a";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_BTR80a_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80a_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80a_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80a_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80a_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_BTR80a_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_BTR80a_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_bmp1
				{
				name = "$STR_RHS_GROUP_vdv_BMP1";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmp1_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1k_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp1_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp1_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp1_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp1_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp1_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp1p_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_bmp2
				{
				name = "$STR_RHS_GROUP_vdv_BMP2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmp2_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2k_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp2_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp2_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp2_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp2_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_bmp2_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmp2_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_bmd1
				{
				name = "$STR_RHS_GROUP_vdv_bmd1";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd1_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd1pk";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd1_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd1_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd1_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd1_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd1_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd1p";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_bmd2
				{
				name = "$STR_RHS_GROUP_vdv_bmd2";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd2_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd2k";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd2_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_bmd2m";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd2_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_bmd2m";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd2_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_bmd2m";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd2_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_bmd2m";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd2_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd2m";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_bmd4
				{
				name = "$STR_RHS_GROUP_vdv_bmd4";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd4_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd4_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_bmd4m
				{
				name = "$STR_RHS_GROUP_vdv_bmd4m";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd4m_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4m_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4m_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4m_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4m_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4m_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd4m_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_bmd4ma
				{
				name = "$STR_RHS_GROUP_vdv_bmd4ma";
				aliveCategory = "Mechanized";
				class rhs_group_rus_vdv_bmd4ma_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4ma_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4ma_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4ma_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4ma_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_bmd4ma_squad_aa
					{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_bmd4ma_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_mi8
				{
				name = "$STR_RHS_GROUP_vdv_mi8";
				aliveCategory = "Airborne";
				class rhs_group_rus_vdv_mi8_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "RHS_Mi8MTV3_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_mi8_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "RHS_Mi8MTV3_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					class Unit9
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
						};
					class Unit10
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
						};
					};
				class rhs_group_rus_vdv_mi8_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "RHS_Mi8MTV3_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					class Unit9
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
						};
					class Unit10
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
						};
					};
				class rhs_group_rus_vdv_mi8_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "RHS_Mi8MTV3_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					class Unit9
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
						};
					class Unit10
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
						};
					};
				class rhs_group_rus_vdv_mi8_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "RHS_Mi8MTV3_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					class Unit8
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
						};
					class Unit9
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {17,0,0};
						};
					class Unit10
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {19,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_mi24
				{
				name = "$STR_RHS_GROUP_vdv_mi24";
				aliveCategory = "Airborne";
				class rhs_group_rus_vdv_mi24_chq
					{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_mi24v_vdv";
						rank = "SERGEANT";
						position[] = {5,0,0};
						};
					};
				class rhs_group_rus_vdv_mi24_squad
					{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_mi24v_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					class Unit7
						{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
						};
					};
				class rhs_group_rus_vdv_mi24_squad_2mg
					{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_mi24v_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_mi24_squad_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_mi24v_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				class rhs_group_rus_vdv_mi24_squad_mg_sniper
					{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "ryd_rhs_faction_ru";
					side = 0;
					rarityGroup = 0.75;
					class Unit0
						{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "SERGEANT";
						position[] = {-5,0,0};
						};
					class Unit2
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
						};
					class Unit3
						{
						side = 0;
						vehicle = "rhs_mi24v_vdv";
						rank = "CORPORAL";
						position[] = {5,0,0};
						};
					class Unit4
						{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
						};
					class Unit5
						{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
						};
					class Unit6
						{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {11,0,0};
						};
					};
				};
			class rhs_group_rus_vdv_bm21
				{
				name = "BM-21 Artillery";
				aliveCategory = "Artillery";
				class RHS_SPGPlatoon_vdv_bm21
					{
					name = "BM-21 Platoon";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_BM21_vdv_01";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_BM21_vdv_01";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					class Unit2
						{
						side = 0;
						vehicle = "RHS_BM21_vdv_01";
						rank = "SERGEANT";
						position[] = {20,-30,3};
						};
					class Unit3
						{
						side = 0;
						vehicle = "RHS_BM21_vdv_01";
						rank = "CORPORAL";
						position[] = {40,-60,3};
						};
					class Unit4
						{
						side = 0;
						vehicle = "RHS_BM21_vdv_01";
						rank = "SERGEANT";
						position[] = {60,-60,3};
						};
					class Unit5
						{
						side = 0;
						vehicle = "RHS_BM21_vdv_01";
						rank = "CORPORAL";
						position[] = {80,-60,3};
						};
					};
				class RHS_SPGSection_vdv_bm21
					{
					name = "BM-21 Section";
					side = 0;
					faction = "ryd_rhs_faction_ru";
					class Unit0
						{
						side = 0;
						vehicle = "RHS_BM21_vdv_01";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
						};
					class Unit1
						{
						side = 0;
						vehicle = "RHS_BM21_vdv_01";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
						};
					};
				};									
			};
		};
        class West
        {
            class rhs_faction_usarmy_d
            {
                name = "US Army";
                class rhs_group_nato_usarmy_d_infantry
                {
                    name = "Infantry (UCP)";
                };
            };
            class rhs_faction_usarmy_wd
            {
                name = "US Army (Woodland)";
                class rhs_group_nato_usarmy_wd_infantry
                {
                    name = "Infantry (OCP)";
                };
            };
        };
	};