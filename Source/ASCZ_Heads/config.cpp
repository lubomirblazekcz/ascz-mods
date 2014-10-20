class CfgPatches {
	class ASCZ_Heads {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_epa","A3_Characters_F_epb","A3_Characters_F_epc"};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			author = "$STR_a3_bohemia_interactive";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class Custom : Custom {
			displayname = "$STR_CFG_FACES_CUSTOM";
			texture = "";
			head = "DefaultHead_A3";
			identityTypes[] = {"Custom"};
			material = "ASCZ_Heads\data\Custom.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
		};
		
		class asczHead_taurus_A3 : Default {
			displayname = "Taurusky";
			texture = "ASCZ_Heads\data\Taurus_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Taurus.rvmat";
			disabled = 0;
			textureHL = "ASCZ_Heads\data\Taurus_rucenohy.paa";
			materialHL = "ASCZ_Heads\data\Taurus_rucenohy.rvmat";
			textureHL2 = "ASCZ_Heads\data\Taurus_rucenohy.paa";
			materialHL2 = "ASCZ_Heads\data\Taurus_rucenohy.rvmat";
		};
		
		class asczHead_troska_A3 : Default {
			displayname = "Troska";
			texture = "ASCZ_Heads\data\Troska_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Troska.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};

		class asczHead_obacki_A3 : Default {
			displayname = "O'Backi";
			texture = "ASCZ_Heads\data\OBacki_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\OBacki.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};	
		
		class asczHead_sokolov_A3 : Default {
			displayname = "Sokolov";
			head = "NATOHead_A3";
			material = "ASCZ_Heads\data\Sokolov.rvmat";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			texture = "ASCZ_Heads\data\Sokolov_ksicht.paa";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialHL = "\A3\Characters_F_epb\Heads\Data\hl_white_20.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialHL2 = "\A3\Characters_F_epb\Heads\Data\hl_white_20.rvmat";
			disabled = 0;
		};
		
		class asczHead_price_A3 : Default {
			displayname = "Price";
			texture = "ASCZ_Heads\data\Price_ksicht.paa";
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
		
		class asczHead_mctavish_A3 : Default {
			displayname = "MacTavish";
			texture = "ASCZ_Heads\data\MacTavish_ksicht.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\MacTavish.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
		};
		
		class asczHead_spanel_A3 : Default {
			displayname = "Spanel";
			texture = "ASCZ_Heads\data\Spanel_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Spanel.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialHL = "\A3\Characters_F_epb\Heads\Data\hl_white_20.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialHL2 = "\A3\Characters_F_epb\Heads\Data\hl_white_20.rvmat";
		};
		
		class asczHead_voodoo_A3 : Default {
			displayname = "Voodoo";
			head = "KerryHead_A3";
			texture = "ASCZ_Heads\data\Voodoo_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Voodoo.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_beardy_A3 : Default {
			displayname = "Beardy";
			head = "NATOHead_A3";
			texture = "ASCZ_Heads\data\Beardy_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Beardy.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_old.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_old.rvmat";
			disabled = 0;
		};
		
		class asczHead_redfield_A3 : Default {
			displayname = "Redfield";
			head = "NATOHead_A3";
			texture = "ASCZ_Heads\data\Redfield_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Redfield.rvmat";
			textureHL = "ASCZ_Heads\data\Redfield_rucenohy.paa";
			materialHL = "\A3\Characters_F_epb\Heads\Data\hl_white_17.rvmat";
			textureHL2 = "ASCZ_Heads\data\Redfield_rucenohy.paa";
			materialHL2 = "\A3\Characters_F_epb\Heads\Data\hl_white_17.rvmat";
			disabled = 0;
		};
		
		class asczHead_foley_A3 : Default {
			displayname = "Foley";
			texture = "ASCZ_Heads\data\Foley_ksicht.paa";
			material = "ASCZ_Heads\data\Foley.rvmat";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO","Head_African"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_murphy_A3: Default {
			displayname = "Murphy";
			texture = "ASCZ_Heads\data\Murphy_ksicht.paa";
			material = "ASCZ_Heads\data\Murphy.rvmat";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO","Head_African"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_josephe_A3: Default {
			displayname = "Josephe";
			texture = "ASCZ_Heads\data\Josephe_ksicht.paa";
			material = "ASCZ_Heads\data\Josephe.rvmat";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO","Head_African"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_pernet_A3: Default {
			displayname = "Pernet";
			texture = "ASCZ_Heads\data\Pernet_ksicht.paa";
			material = "ASCZ_Heads\data\Pernet.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_nevim_A3: Default {
			displayname = "Nevim";
			texture = "ASCZ_Heads\data\Nevim_ksicht.paa";
			material = "ASCZ_Heads\data\Nevim.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_novotny_A3: Default {
			displayname = "Novotny";
			texture = "ASCZ_Heads\data\Novotny_ksicht.paa";
			material = "ASCZ_Heads\data\Novotny.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_brown_A3: Default {
			displayname = "Brown";
			texture = "ASCZ_Heads\data\Brown_ksicht.paa";
			material = "ASCZ_Heads\data\Brown.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_picleson_A3: Default {
			displayname = "Picleson";
			texture = "ASCZ_Heads\data\Picleson_ksicht.paa";
			material = "ASCZ_Heads\data\Picleson.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_nikos_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_nikos_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			disabled = 0;
		};
		
		class asczHead_olson_A3: Default {
			displayname = "Olson";
			texture = "ASCZ_Heads\data\Olson_ksicht.paa";
			material = "ASCZ_Heads\data\Olson.rvmat";
		    head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		
		class BIHead_Miller2_A3 : Default {
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
		
		class BIHead_Kerry_A3 : Default {
			displayname = "Kerry";
			head = "KerryHead_A3";
			texture = "\A3\Characters_F_EPA\Heads\Data\m_kerry_B2_co.paa";
			identityTypes[] = {"kerry_B2"};
			author = "$STR_a3_bohemia_interactive";
			material = "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat";
			textureHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
			textureHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_co.paa";
			materialHL2 = "\A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat";
		};
		
		class BIHead_Stavrou_A3 : Default {
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
		
		class BIHead_Nikos_A3 : Default {
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
		
		class BIHead_Nikos2_A3 : Default {
			displayname = "Dikos";
			texture = "\A3\Characters_F\Heads\Data\m_nikos_co.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "$STR_a3_bohemia_interactive";
			material = "\A3\Characters_F\Heads\Data\m_nikos.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
		};
		
		class BIHead_Miller_A3 : Default {
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_Miller0";
			head = "Miller";
			texture = "\A3\Characters_F\Heads\Data\m_Miller_co.paa";
			identityTypes[] = {"Miller"};
			material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
	};
};