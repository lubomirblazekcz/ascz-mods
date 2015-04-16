class CfgPatches
{
	class ASCZ_Heads
	{
        author = "Taurus";
        hideName=0;
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
		class Default;
		class WhiteHead_01;
		class AfricanHead_01;
		class AsianHead_A3_01;
		class GreekHead_A3_01;
		class Kerry;
		class Custom
		{
			material = "ASCZ_Heads\data\Custom.rvmat";
		};
		class Miller: Default
		{
			disabled = 0;
			displayname = "Miller";
			author = "$STR_A3_Bohemia_Interactive";
		};
		class asczHead_Mailler: Miller
		{
			disabled = 0;
			displayname = "Mailler";
			head = "NATOHead_A3";
			author = "$STR_A3_Bohemia_Interactive";
		};
		class kerry_B2_F: Kerry
		{
			disabled = 0;
			displayname = "Kerry";
			author = "$STR_A3_Bohemia_Interactive";
		};
		class IG_Leader: Default
		{
			disabled = 0;
			displayname = "Stavrou";
			author = "$STR_A3_Bohemia_Interactive";
		};
		class O_Colonel: Default
		{
			disabled = 0;
			author = "$STR_A3_Bohemia_Interactive";
		};
		class Nikos: GreekHead_A3_01
		{
			disabled = 0;
			author = "$STR_A3_Bohemia_Interactive";
		};
		class asczHead_troska_A3: WhiteHead_01
		{
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
		class asczHead_dick_A3: WhiteHead_01
		{
			displayname = "Dick";
			head = "DefaultHead_A3";
			texture = "ASCZ_Heads\data\Dick_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Dick.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		class asczHead_logan_A3: WhiteHead_01
		{
			displayname = "Logan";
			texture = "ASCZ_Heads\data\Logan_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Logan.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class asczHead_austin_A3: WhiteHead_01
		{
			displayname = "Austin";
			texture = "ASCZ_Heads\data\Austin_ksicht.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Austin.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class asczHead_obacki_A3: Default
		{
			displayname = "O'Backi";
			texture = "ASCZ_Heads\data\OBacki_ksicht.paa";
			head = "GreekHead_A3";
			identityTypes[] = {"Head_TK"};
			author = "Taurus";
			material = "ASCZ_Heads\data\OBacki.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class asczHead_sokolov_A3: WhiteHead_01
		{
			displayname = "Sokolov";
			head = "DefaultHead_A3";
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
		class asczHead_price_A3: WhiteHead_01
		{
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
		class asczHead_mctavish_A3: WhiteHead_01
		{
			displayname = "MacTavish";
			texture = "ASCZ_Heads\data\MacTavish_ksicht.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\MacTavish.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat";
		};
		class asczHead_spanel_A3: WhiteHead_01
		{
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
		class asczHead_voodoo_A3: WhiteHead_01
		{
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
		class asczHead_beardy_A3: WhiteHead_01
		{
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
		class asczHead_woods_A3: WhiteHead_01
		{
			displayname = "Woods";
			head = "GreekHead_A3";
			texture = "ASCZ_Heads\data\Woods_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Woods.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_white_old.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_white_old.rvmat";
			disabled = 0;
		};
		class asczHead_redfield_A3: WhiteHead_01
		{
			displayname = "Redfield";
			head = "NATOHead_A3";
			texture = "ASCZ_Heads\data\Redfield_ksicht.paa";
			identityTypes[] = {"Head_Euro","Head_NATO"};
			author = "Taurus";
			material = "ASCZ_Heads\data\Redfield.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_white_hairy_1_co.paa";
			materialHL = "\A3\Characters_F_epb\Heads\Data\hl_white_17.rvmat";
			textureHL2 = "ASCZ_Heads\data\Redfield_rucenohy.paa";
			materialHL2 = "\A3\Characters_F_epb\Heads\Data\hl_white_17.rvmat";
			disabled = 0;
		};
		class asczHead_foley_A3: AfricanHead_01
		{
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
		class asczHead_murphy_A3: AfricanHead_01
		{
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
		class asczHead_josephe_A3: AfricanHead_01
		{
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
		class asczHead_neumann_A3: WhiteHead_01
		{
			displayname = "Neumann";
			texture = "ASCZ_Heads\data\Neumann_ksicht.paa";
			material = "ASCZ_Heads\data\Neumann.rvmat";
			head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "ASCZ_Heads\data\Neumann_rucenohy.paa";
			materialHL = "ASCZ_Heads\data\Neumann_rucenohy.rvmat";
			textureHL2 = "ASCZ_Heads\data\Neumann_rucenohy.paa";
			materialHL2 = "ASCZ_Heads\data\Neumann_rucenohy.rvmat";
			disabled = 0;
		};
		class asczHead_nevim_A3: WhiteHead_01
		{
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
		class asczHead_novotny_A3: WhiteHead_01
		{
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
		class asczHead_brown_A3: WhiteHead_01
		{
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
		class asczHead_picleson_A3: WhiteHead_01
		{
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
		class asczHead_vlk_A3: WhiteHead_01
		{
			displayname = "Vlk";
			texture = "ASCZ_Heads\data\Vlk_ksicht.paa";
			material = "ASCZ_Heads\data\Vlk.rvmat";
			head = "GreekHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			author = "Taurus";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
		class asczHead_xong_A3: AsianHead_A3_01
		{
			author = "Taurus";
			displayname = "Xong";
			head = "AsianHead_A3";
			texture = "ASCZ_Heads\data\Xong_ksicht.paa";
			material = "ASCZ_Heads\data\Xong.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
		};
		class asczHead_olson_A3: WhiteHead_01
		{
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
		class asczHead_taurus_A3: WhiteHead_01
		{
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
		class asczHead_taurus_c1_A3: asczHead_taurus_A3 //Camo1
		{
		displayname = "Taurusky (Camo1)";
		texture = "ASCZ_Heads\data\Taurus_ksicht.paa";
		material = "ASCZ_Heads\data\Camos\Camo1.rvmat";
		identityTypes[] = {"Head_Euro_C1","Head_NATO_C1"};
		author = "Taurus";
		};
	};
};