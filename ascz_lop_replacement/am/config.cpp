class DefaultEventhandlers;
class CfgPatches
{
	class lop_faction_am_o
	{
		units[] = {
					"LOP_AM_Infantry_TL_O",
                    "LOP_AM_Infantry_SL_O",
                    "LOP_AM_Infantry_Medic_O",
                    "LOP_AM_Infantry_AR_O",
                    "LOP_AM_Infantry_AT_O",
                    "LOP_AM_Infantry_Marksman_O",
                    "LOP_AM_Infantry_Engineer_O",
                    "LOP_AM_Infantry_Rifleman_O",
                    "LOP_AM_Infantry_GL_O",
                    "LOP_AM_Landrover_O",
                    "LOP_AM_Landrover_M2_O",
                    "LOP_AM_Offroad_O",
                    "LOP_AM_Offroad_M2_O",
                    "LOP_AM_Truck_O",
                    "LOP_AM_M113_W_O",
                    "LOP_AM_BTR60_O",
                    "LOP_AM_T72BA_O",
                    "LOP_AM_Static_M2_O",
                    "LOP_AM_Static_M2_MiniTripod_O",
                    "LOP_AM_Static_Mk19_TriPod_O"
                    };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"lop_faction_am"};
	};
};
class CfgVehicles
{
    class Land;
    class Man : Land {
        class Eventhandlers;
    };

    class CAManBase : Man {
        class HitPoints {
            class HitHead;
            class HitBody;
            class HitHands;
            class HitLegs;
        };
        class EventHandlers;
    };
    class Civilian : CAManBase {
        class EventHandlers;
    };
    class Civilian_F : Civilian {
        class NewTurret;
    };
    class C_man_1 : Civilian_F {
        class EventHandlers;
    };
    class SoldierGB : CAManBase {
        class EventHandlers;
    };
    class I_Soldier_base_F : SoldierGB {
        class EventHandlers;	// External class reference
    };
    class I_Soldier_SL_F : I_Soldier_base_F {
        class EventHandlers;	// External class reference
    };
    class I_Soldier_TL_F : I_Soldier_base_F {
        class EventHandlers;	// External class reference
    };
    class I_Medic_F : I_Soldier_base_F {
        class EventHandlers;	// External class reference
    };
    class I_Soldier_AR_F : I_Soldier_base_F {
        class EventHandlers;	// External class reference
    };
    class I_Soldier_AT_F : I_Soldier_base_F {
        class EventHandlers;	// External class reference
    };
    class I_Engineer_F : I_Soldier_base_F {
        class EventHandlers;	// External class reference
    };
    class I_Soldier_F : I_Soldier_base_F {
        class EventHandlers;	// External class reference
    };
    class I_Soldier_GL_F : I_Soldier_base_F {
        class EventHandlers;	// External class reference
    };
    class LOP_AM_Infantry_TL: I_Soldier_TL_F {};
    class LOP_AM_Infantry_TL_O: LOP_AM_Infantry_TL {
        faction = "LOP_AM_O";
        side = 0;
    };
    class LOP_AM_Infantry_SL: I_Soldier_SL_F {};
    class LOP_AM_Infantry_SL_O: LOP_AM_Infantry_SL {
        side = 0;
        faction = "LOP_AM_O";
    };
    class LOP_AM_Infantry_Corpsman: I_Medic_F {};
    class LOP_AM_Infantry_Corpsman_O: LOP_AM_Infantry_Corpsman {
        side = 0;
        faction = "LOP_AM_O";
    };
    class LOP_AM_Infantry_AR: I_Soldier_AR_F {};
    class LOP_AM_Infantry_AR_O: LOP_AM_Infantry_AR {
        side = 0;
        faction = "LOP_AM_O";
    };
    class LOP_AM_Infantry_AT: I_Soldier_AT_F {};
    class LOP_AM_Infantry_AT_O: LOP_AM_Infantry_AT {
        side = 0;
        faction = "LOP_AM_O";
    };
    class LOP_AM_Infantry_Marksman: I_Soldier_F {
        weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
        Items[] = {"FirstAidKit","FirstAidKit"};
        RespawnItems[] = {"FirstAidKit","FirstAidKit"};
        magazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    };
    class LOP_AM_Infantry_Marksman_O: LOP_AM_Infantry_Marksman {
        side = 0;
        faction = "LOP_AM_O";
    };
    class LOP_AM_Infantry_Engineer: I_Engineer_F {};
    class LOP_AM_Infantry_Engineer_O: LOP_AM_Infantry_Engineer {
        side = 0;
        faction = "LOP_AM_O";
    };
    class LOP_AM_Infantry_Rifleman:  I_Soldier_F {};
    class LOP_AM_Infantry_Rifleman_O:  LOP_AM_Infantry_Rifleman {
        side = 0;
        faction = "LOP_AM_O";
    };
    class LOP_AM_Infantry_GL: I_Soldier_GL_F {};
    class LOP_AM_Infantry_GL_O: LOP_AM_Infantry_GL {
        side = 0;
        faction = "LOP_AM_O";
    };

	class B_G_Van_01_transport_F;
	class LOP_AM_Truck: B_G_Van_01_transport_F {};
    class LOP_AM_Truck_O: LOP_AM_Truck {
        side = 0;
        faction = "LOP_AM_O";
    };

    class B_G_Offroad_01_F;
    class LOP_AM_Offroad: B_G_Offroad_01_F {};
    class LOP_AM_Offroad_O: LOP_AM_Offroad {
        side = 0;
        faction = "LOP_AM_O";
    };

    class B_G_Offroad_01_armed_F;
    class LOP_AM_Offroad_M2: B_G_Offroad_01_armed_F {};
    class LOP_AM_Offroad_M2_O: LOP_AM_Offroad_M2 {
        side = 0;
        faction = "LOP_AM_O";
    };

    class LOP_LandRover_base_02;
    class LOP_AM_Landrover: LOP_LandRover_base_02 {};
    class LOP_AM_Landrover_O: LOP_AM_Landrover {
        side = 0;
        faction = "LOP_AM_O";
    };

    class LOP_LandRover_mg_base;
    class LOP_AM_Landrover_M2: LOP_LandRover_mg_base {};
    class LOP_AM_Landrover_M2_O: LOP_AM_Landrover_M2 {
        side = 0;
        faction = "LOP_AM_O";
    };

    class rhs_t72ba_tv { class EventHandlers; };
    class rhsusf_m113_usarmy { class EventHandlers; };
    class rhs_btr60_msv { class EventHandlers; };

    class LOP_AM_BTR60: rhs_btr60_msv {};
    class LOP_AM_BTR60_O: LOP_AM_BTR60 {
        side = 0;
        faction = "LOP_AM_O";
    };

    class LOP_AM_T72BA: rhs_t72ba_tv {};
    class LOP_AM_T72BA_O: LOP_AM_T72BA {
        side = 0;
        faction = "LOP_AM_O";
    };

    class LOP_AM_M113_W: rhsusf_m113_usarmy {};
    class LOP_AM_M113_W_O: LOP_AM_M113_W {
        side = 0;
        faction = "LOP_AM_O";
    };

    class RHS_M2StaticMG_D;
    class RHS_M2StaticMG_MiniTripod_D;
    class RHS_MK19_TriPod_D;
    class LOP_AM_Static_M2: RHS_M2StaticMG_D {};
    class LOP_AM_Static_M2_O: LOP_AM_Static_M2 {
        side = 0;
        faction = "LOP_AM_O";
    };

    class LOP_AM_Static_M2_MiniTripod: RHS_M2StaticMG_MiniTripod_D {};
    class LOP_AM_Static_M2_MiniTripod_O: LOP_AM_Static_M2_MiniTripod {
        side = 0;
        faction = "LOP_AM_O";
    };

    class LOP_AM_Static_Mk19_TriPod: RHS_MK19_TriPod_D {};
    class LOP_AM_Static_Mk19_TriPod_O: LOP_AM_Static_Mk19_TriPod {
        side = 0;
        faction = "LOP_AM_O";
    };
};