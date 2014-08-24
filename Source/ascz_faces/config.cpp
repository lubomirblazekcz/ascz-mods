class CfgPatches {
	class ascz_faces {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgFaces {
	class Default {
		class Custom;	// External class reference
	};
	
	class Man_A3 : Default {
		class Custom : Custom {
			displayname = "$STR_CFG_FACES_CUSTOM";
			texture = "\A3\Characters_F_epb\Heads\Data\m_White_17_co.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {"Custom"};
			material = "\A3\Characters_F_epb\Heads\Data\m_White_17.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
		};
		
		class ArmaSeriesHead_taurus : Default {
			displayname = "Taurus";
			texture = "ascz_faces\data\taurus_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ascz_faces\data\taurus.rvmat";
			disabled = 0;
			textureHL = "ascz_faces\data\taurus_rucenohy.paa";
			materialHL = "ascz_faces\data\taurus_rucenohy.rvmat";
			textureHL2 = "ascz_faces\data\taurus_rucenohy.paa";
			materialHL2 = "ascz_faces\data\taurus_rucenohy.rvmat";
		};

		class ArmaSeriesHead_obacki : Default {
			displayname = "O'Backi";
			texture = "ascz_faces\data\obacki_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ascz_faces\data\obacki.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};	
		
		class ArmaSeriesHead_sokolov : Default {
			displayname = "Sokolov";
			head = "NATOHead_A3";
			material = "ascz_faces\data\Sokolov.rvmat";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			texture = "ascz_faces\data\Sokolov_ksicht.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialHL = "\A3\Characters_F_epb\Heads\Data\hl_white_20.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialHL2 = "\A3\Characters_F_epb\Heads\Data\hl_white_20.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_price : Default {
			displayname = "Price";
			texture = "ascz_faces\data\price_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "\A3\Characters_F\Heads\Data\m_greek_03.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_old.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_old.rvmat";
		};
		
		class ArmaSeriesHead_mctavish : Default {
			displayname = "MacTavish";
			texture = "ascz_faces\data\mactavish_ksicht.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ascz_faces\data\mactavish.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
		};
		
		class ArmaSeriesHead_spanel : Default {
			displayname = "Spanel";
			texture = "ascz_faces\data\spanel_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ascz_faces\data\spanel.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialHL = "\A3\Characters_F_epb\Heads\Data\hl_white_20.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialHL2 = "\A3\Characters_F_epb\Heads\Data\hl_white_20.rvmat";
		};
		
		class ArmaSeriesHead_voodoo : Default {
			displayname = "Voodoo";
			head = "DefaultHead_A3";
			texture = "ascz_faces\data\voodoo_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "\A3\Characters_F_epa\Heads\Data\m_kerry_b2.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_beardy : Default {
			displayname = "Beardy";
			head = "NATOHead_A3";
			texture = "ascz_faces\data\Beardy_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ascz_faces\data\beardy.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_old.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_old.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_filipsons : Default {
			displayname = "Filipsons";
			head = "NATOHead_A3";
			texture = "ascz_faces\data\filipsons_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "\A3\Characters_F\Heads\Data\m_White_15.rvmat";
			textureHL = "\A3\Characters_F_epb\Heads\Data\hl_white_17_co.paa";
			materialHL = "\A3\Characters_F_epb\Heads\Data\hl_white_17.rvmat";
			textureHL2 = "\A3\Characters_F_epb\Heads\Data\hl_white_17_co.paa";
			materialHL2 = "\A3\Characters_F_epb\Heads\Data\hl_white_17.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_foley : Default {
			displayname = "Foley";
			texture = "ascz_faces\data\Foley_ksicht.paa";
			material = "ascz_faces\data\Foley.rvmat";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO","Head_African"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_murphy: Default {
			displayname = "Murphy";
			texture = "ascz_faces\data\Murphy_ksicht.paa";
			material = "ascz_faces\data\Murphy.rvmat";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO","Head_African"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_josephe: Default {
			displayname = "Josephe";
			texture = "ascz_faces\data\Josephe_ksicht.paa";
			material = "ascz_faces\data\Josephe.rvmat";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO","Head_African"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_pernet: Default {
			displayname = "Pernet";
			texture = "ascz_faces\data\Pernet_ksicht.paa";
			material = "ascz_faces\data\Pernet.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_nevim: Default {
			displayname = "Nevim";
			texture = "ascz_faces\data\Nevim_ksicht.paa";
			material = "ascz_faces\data\Nevim.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_novotny: Default {
			displayname = "Novotny";
			texture = "ascz_faces\data\Novotny_ksicht.paa";
			material = "ascz_faces\data\Novotny.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_brown: Default {
			displayname = "Brown";
			texture = "ascz_faces\data\Brown_ksicht.paa";
			material = "ascz_faces\data\Brown.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_picleson: Default {
			displayname = "Picleson";
			texture = "ascz_faces\data\Picleson_ksicht.paa";
			material = "ascz_faces\data\Picleson.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_nikos_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_nikos_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			disabled = 0;
		};
		
		class ArmaSeriesHead_olson: Default {
			displayname = "Olson";
			texture = "ascz_faces\data\Olson_ksicht.paa";
			material = "ascz_faces\data\Olson.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class Miller_2 : Default {
			displayname = "Mailer";
			head = "DefaultHead_A3";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "$STR_a3_bohemia_interactive";
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		
		class Stavrou : Default {
			displayname = "Stavrou";
			head = "IG_Leader";
			texture = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader_co.paa";
			identityTypes[] = {"IG_Leader"};
			author = "$STR_a3_bohemia_interactive";
			material = "\A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_Stavrou_dirty_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat";
			disabled = 0;
		};
		
		class Nikos : Default {
			displayname = "Nikos";
			texture = "\A3\Characters_F\Heads\Data\m_nikos_co.paa";
			head = "Nikos";
			identityTypes[] = {"Nikos"};
			author = "$STR_a3_bohemia_interactive";
			material = "\A3\Characters_F\Heads\Data\m_nikos.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_nikos_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_nikos_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
		};
		
		class Miller : Default {
			displayname = "Miller";
			head = "Miller";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			identityTypes[] = {"Miller"};
			author = "$STR_a3_bohemia_interactive";
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
	};
	
	class AnimalHead {
		class Default {
			displayname = "$STR_FN_AnimalHead_Default";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "";
			identityTypes[] = {"Animal"};
			material = "";
		};
		
		class Animal : Default {};
	};
	
	class WomanHead_A3 {
		class Default {
			displayname = "$STR_CFG_FACES_Default";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "WomanHead_A3";
			identityTypes[] = {"Woman"};
			material = "";
		};
		
		class Woman_A3 : Default {};
	};
};



class CfgNonAIVehicles {
	class ProxyBysta {
		autocenter = false;
		scope = public;
		reversed = true;
		animated = true;
		model = "";
		simulation = "ProxySubpart";
	};
};

class MaskFace_A3 {
	mask[] = {"face_hub", 1, "face_jawbone", 1, "face_jowl", 1, "face_chopright", 1, "face_chopleft", 1, "face_liplowermiddle", 1, "face_liplowerright", 1, "face_liplowerleft", 1, "face_chin", 1, "face_tongue", 1, "face_cornerright", 1, "face_cheeksideright", 1, "face_cornerleft", 1, "face_cheeksideleft", 1, "face_cheekfrontright", 1, "face_cheekfrontleft", 1, "face_cheekupperright", 1, "face_cheekupperleft", 1, "face_lipuppermiddle", 1, "face_lipupperright", 1, "face_lipupperleft", 1, "face_nostrilright", 1, "face_nostrilleft", 1, "face_forehead", 1, "face_browfrontright", 1, "face_browfrontleft", 1, "face_browmiddle", 1, "face_browsideright", 1, "face_browsideleft", 1, "face_eyelids", 1, "face_eyelidupperright", 1, "face_eyelidupperleft", 1, "face_eyelidlowerright", 1, "face_eyelidlowerleft", 1, "eyeleft", 1, "eyeright", 1, "neck", 1, "neck1", 1, "head", 1};
};

class MaskFaceWoman_A3 {
	mask[] = {"face_hub", 1, "face_jawbone", 1, "face_jowl", 1, "face_chopright", 1, "face_chopleft", 1, "face_liplowermiddle", 1, "face_liplowerright", 1, "face_liplowerleft", 1, "face_chin", 1, "face_tongue", 1, "face_cornerright", 1, "face_cheeksideright", 1, "face_cornerleft", 1, "face_cheeksideleft", 1, "face_cheekfrontright", 1, "face_cheekfrontleft", 1, "face_cheekupperright", 1, "face_cheekupperleft", 1, "face_lipuppermiddle", 1, "face_lipupperright", 1, "face_lipupperleft", 1, "face_nostrilright", 1, "face_nostrilleft", 1, "face_forehead", 1, "face_browfrontright", 1, "face_browfrontleft", 1, "face_browmiddle", 1, "face_browsideright", 1, "face_browsideleft", 1, "face_eyelids", 1, "face_eyelidupperright", 1, "face_eyelidupperleft", 1, "face_eyelidlowerright", 1, "face_eyelidlowerleft", 1, "eyeleft", 1, "eyeright", 1, "neck", 1, "neck1", 1, "head", 1};
};

class LipMask_A3 {
	mask[] = {"face_hub", 1, "face_jawbone", 1, "face_jowl", 1, "face_chopright", 1, "face_chopleft", 1, "face_liplowermiddle", 1, "face_liplowerright", 1, "face_liplowerleft", 1, "face_chin", 1, "face_tongue", 1, "face_cornerright", 1, "face_cheeksideright", 1, "face_cornerleft", 1, "face_cheeksideleft", 1, "face_cheekfrontright", 1, "face_cheekfrontleft", 1, "face_cheekupperright", 1, "face_cheekupperleft", 1, "face_lipuppermiddle", 1, "face_lipupperright", 1, "face_lipupperleft", 1, "face_nostrilright", 1, "face_nostrilleft", 1, "face_forehead", 1, "face_browfrontright", 1, "face_browfrontleft", 1, "face_browmiddle", 1, "face_browsideright", 1, "face_browsideleft", 1, "face_eyelids", 1, "face_eyelidupperright", 1, "face_eyelidupperleft", 1, "face_eyelidlowerright", 1, "face_eyelidlowerleft", 1};
};

class CfgHeads {
	class Default_A3 {
		model = "\A3\characters_f\Heads\m_white_01";
		
		class Wounds {
			tex[] = {};
			mat[] = {"ascz_faces\custom.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		selectionPersonalityHL = "hl";
		
		class Grimaces {
			class Eyes {
				type = "eyes";
				eyeMaxAngle = 0.26;
				eyelidUpStartAngle = 0.0;
				eyelidUpMaxAngle = 3.14;
				eyelidDownStartAngle = 0.0;
				eyelidDownMaxAngle = 3.14;
			};
			
			class Lipsync {
				type = "lipsync";
				vizem[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", "A3\Characters_F\Heads\Anim\male\vizem\a.rtm", "A3\Characters_F\Heads\Anim\male\vizem\e2.rtm", "A3\Characters_F\Heads\Anim\male\vizem\f.rtm", "A3\Characters_F\Heads\Anim\male\vizem\m.rtm", "A3\Characters_F\Heads\Anim\male\vizem\y.rtm", "A3\Characters_F\Heads\Anim\male\vizem\v.rtm", "A3\Characters_F\Heads\Anim\male\vizem\i.rtm"};
			};
			
			class RTM_Face {
				type = "rtm";
				anim = "A3\Characters_F\Heads\Anim\male\Neutral.rtm";
				anims[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", 1};
			};
			
			class NeutralFace : RTM_Face {
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
			};
			
			class DeadFace : RTM_Face {
				anims[] = {"A3\Characters_F\Heads\Anim\male\Dead.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\Dead.rtm", 1};
			};
			
			class UnconsciousFace : RTM_Face {
				anims[] = {"A3\Characters_F\Heads\Anim\male\unconscious.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\unconscious.rtm", 1};
			};
			
			class DangerFace : RTM_Face {
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
			};
			
			class HurtFace : RTM_Face {
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3.0};
			};
			
			class AwareFace : RTM_Face {
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
			};
			
			class SafeFace : RTM_Face {
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still2_09.rtm", 4.6, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still2_09.rtm", 4.6, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
			};
			
			class CombatFace : RTM_Face {
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3.0, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5.0, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6.0, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4.0, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6.0};
			};
			
			class Neutral {
				type = "compound";
				
				class Items {
					class NeutralFace : MaskFace_A3 {};
					
					class Lipsync : LipMask_A3 {};
				};
			};
			
			class Dead {
				type = "compound";
				
				class Items {
					class DeadFace : MaskFace_A3 {};
				};
			};
			
			class Unconscious {
				type = "compound";
				
				class Items {
					class UnconsciousFace : MaskFace_A3 {};
				};
			};
			
			class Danger {
				type = "compound";
				
				class Items {
					class DangerFace : MaskFace_A3 {};
					
					class Lipsync : LipMask_A3 {};
				};
			};
			
			class Hurt {
				type = "compound";
				
				class Items {
					class HurtFace : MaskFace_A3 {};
					
					class Lipsync : LipMask_A3 {};
				};
			};
			
			class Aware {
				type = "compound";
				
				class Items {
					class AwareFace : MaskFace_A3 {};
					
					class Lipsync : LipMask_A3 {};
				};
			};
			
			class Safe {
				type = "compound";
				
				class Items {
					class SafeFace : MaskFace_A3 {};
					
					class Lipsync : LipMask_A3 {};
				};
			};
			
			class Combat {
				type = "compound";
				
				class Items {
					class CombatFace : MaskFace_A3 {};
					
					class Lipsync : LipMask_A3 {};
				};
			};
		};
	};
	
	class DefaultHead_A3 : Default_A3 {
		model = "\A3\characters_f\Heads\m_white_01";
		
		class Wounds {
			tex[] = {};
			mat[] = {"ascz_faces\custom.rvmat", "A3\Characters_F\Heads\Data\m_white_01.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_02.rvmat", "A3\characters_f\Heads\Data\m_white_02_injury.rvmat", "A3\characters_f\Heads\Data\m_white_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_03.rvmat", "A3\characters_f\Heads\Data\m_white_03_injury.rvmat", "A3\characters_f\Heads\Data\m_white_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_04.rvmat", "A3\characters_f\Heads\Data\m_white_04_injury.rvmat", "A3\characters_f\Heads\Data\m_white_04_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_05.rvmat", "A3\characters_f\Heads\Data\m_white_05_injury.rvmat", "A3\characters_f\Heads\Data\m_white_05_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_06.rvmat", "A3\characters_f\Heads\Data\m_white_06_injury.rvmat", "A3\characters_f\Heads\Data\m_white_06_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_07.rvmat", "A3\characters_f\Heads\Data\m_white_07_injury.rvmat", "A3\characters_f\Heads\Data\m_white_07_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_08.rvmat", "A3\characters_f\Heads\Data\m_white_08_injury.rvmat", "A3\characters_f\Heads\Data\m_white_08_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_09.rvmat", "A3\characters_f\Heads\Data\m_white_09_injury.rvmat", "A3\characters_f\Heads\Data\m_white_09_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_10.rvmat", "A3\characters_f\Heads\Data\m_white_10_injury.rvmat", "A3\characters_f\Heads\Data\m_white_10_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_11.rvmat", "A3\characters_f\Heads\Data\m_white_11_injury.rvmat", "A3\characters_f\Heads\Data\m_white_11_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_12.rvmat", "A3\characters_f\Heads\Data\m_white_12_injury.rvmat", "A3\characters_f\Heads\Data\m_white_12_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_13.rvmat", "A3\characters_f\Heads\Data\m_white_13_injury.rvmat", "A3\characters_f\Heads\Data\m_white_13_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_14.rvmat", "A3\characters_f\Heads\Data\m_white_14_injury.rvmat", "A3\characters_f\Heads\Data\m_white_14_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_15.rvmat", "A3\characters_f\Heads\Data\m_white_15_injury.rvmat", "A3\characters_f\Heads\Data\m_white_15_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat"};
		};
	};
	
	
};