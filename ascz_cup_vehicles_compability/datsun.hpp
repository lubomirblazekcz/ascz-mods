class Car;
	class Car_F: Car
	{
		class HitPoints /// we want to use hitpoints predefined for all cars
		{
			class HitLFWheel;
			class HitLBWheel;

			class HitRFWheel;
			class HitRBWheel;
			class HitBody;

			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};

		class AnimationSources;
		class Turrets
		{
			class MainTurret;
		};
		class CargoTurret;
		class EventHandlers;
	};


	class CUP_Datsun_Base : Car_F {};

	class CUP_Datsun_PK_Base : CUP_Datsun_Base {};

	class CUP_Datsun_civil_Base : CUP_Datsun_Base {};



	class CUP_O_Datsun_PK: CUP_Datsun_PK_Base
	{
		crew = "LOP_ChDKZ_Infantry_Rifleman";
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Wheeled";
		typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman", "LOP_ChDKZ_Infantry_Rifleman", "LOP_ChDKZ_Infantry_Rifleman"};
	};

	class CUP_O_Datsun_PK_Random: CUP_Datsun_PK_Base
	{
		crew = "LOP_ChDKZ_Infantry_Rifleman";
		faction = "LOP_ChDKZ";
		vehicleClass = "LOP_Wheeled";
		typicalCargo[] = {"LOP_ChDKZ_Infantry_Rifleman", "LOP_ChDKZ_Infantry_Rifleman", "LOP_ChDKZ_Infantry_Rifleman"};
	};



	class CUP_I_Datsun_PK: CUP_Datsun_PK_Base
	{
		crew = "LOP_NAPA_Infantry_Rifleman";
		faction = "LOP_NAPA";
		vehicleClass = "LOP_Wheeled";
		typicalCargo[] = {"LOP_NAPA_Infantry_Rifleman", "LOP_NAPA_Infantry_Rifleman", "LOP_NAPA_Infantry_Rifleman"};
	};

	class CUP_I_Datsun_PK_Random: CUP_Datsun_PK_Base
	{
		crew = "LOP_NAPA_Infantry_Rifleman";
		faction = "LOP_NAPA";
		vehicleClass = "LOP_Wheeled";
		typicalCargo[] = {"LOP_NAPA_Infantry_Rifleman", "LOP_NAPA_Infantry_Rifleman", "LOP_NAPA_Infantry_Rifleman"};
	};



	class CUP_I_Datsun_PK_TK: CUP_Datsun_PK_Base
	{
	    side = 0;
		crew = "LOP_AM_Infantry_Rifleman_O";
		faction = "LOP_AM_O";
		typicalCargo[] = {"LOP_AM_Infantry_Rifleman_O", "LOP_AM_Infantry_Rifleman_O", "LOP_AM_Infantry_Rifleman_O"};
		vehicleClass = "LOP_Wheeled";
	};

	class CUP_I_Datsun_PK_TK_Random: CUP_Datsun_PK_Base
	{
	    side = 0;
		crew = "LOP_AM_Infantry_Rifleman_O";
		faction = "LOP_AM_O";
		typicalCargo[] = {"LOP_AM_Infantry_Rifleman_O", "LOP_AM_Infantry_Rifleman_O", "LOP_AM_Infantry_Rifleman_O"};
		vehicleClass = "LOP_Wheeled";
	};






	class CUP_C_Datsun: CUP_Datsun_civil_Base
	{
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
	};

	class CUP_C_Datsun_4seat: CUP_Datsun_civil_Base
	{
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
	};

	class CUP_C_Datsun_Plain: CUP_Datsun_civil_Base
	{
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
	};

	class CUP_C_Datsun_Covered: CUP_Datsun_civil_Base
	{
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
	};

	class CUP_C_Datsun_Tubeframe: CUP_Datsun_civil_Base
	{
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
	};