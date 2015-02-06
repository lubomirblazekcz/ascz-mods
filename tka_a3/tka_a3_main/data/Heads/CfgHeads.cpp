class CfgPatches
{
	class TKA_A3
	{
        author = "TKA_A3";
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
	    class TKA_A3_Aziz: Default
		{
			displayname = "Aziz";
			texture = "\tka_a3\tka_a3_main\data\Heads\Aziz_co.paa";
			head = "GreekHead_A3";
			identityTypes[] = {"Head_Aziz"};
			author = "TKA_A3";
			material = "\tka_a3\tka_a3_main\data\Heads\Aziz_co.rvmat";
			disabled = 0;
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		};
	};
};