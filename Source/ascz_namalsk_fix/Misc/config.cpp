////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.53
//Tue Jul 01 22:08:22 2014 : Source 'file' date Tue Jul 01 22:08:22 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class C:/Users/EvroMalarkey/Desktop/config.bin{
class CfgPatches
{
	class ascz_namalsk_fix_misc
	{
		units[] = {"land_hut_old01","land_dum_ras","land_vetrani","land_terain_velke_panely","land_terain_panely_kratke","land_terain_panely_slope","land_terain_dlazice_kratke","land_seb_bouda3","land_seb_bouda1","Land_seb_bouda_plech","Land_budova1_winter","Land_budova2_winter","Land_budova3_winter","Land_budova4_winter","Land_budova5_winter","land_mala_rovinka_nelepi","land_most_betonovy_hajzlik","land_vag_zbozi1","land_vag_polozeny","land_vag_masina","land_seb_mine_near_bordel","land_seb_rozvodna","land_seb_nadrze","land_seb_mine_maringotka","land_seb_nasypka","land_seb_panely","land_seb_spadly_stozar","land_seb_trubice_beton","land_tanl_entrance_n","land_tanl_entrance","Land_AII_vrsek","Land_seb_residental","Land_fuelstation_w","Land_hlaska","Land_most_blok","Land_nadrazi_nastupiste","Land_nam_container","Land_posed_ns","Land_seb_main_fac","Land_seb_mine_main_opt","Land_seb_mine_near","Land_seb_near_fac","Land_seb_vod_vez","Land_Tovarna1","Land_vys_antena","Land_vys_budova_p1","Land_vys_budova_p2","Land_x_nadrz","Land_x_skladiste_low_tex","Land_x_vetraci_komin","Land_x_vez_tex","Land_AII_middle_floor","sad_target","land_terain_base_a"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"NS2"};
		author[] = {"Sumrak"};
	};
};
class CfgVehicleClasses
{
	class Nightstalkers_obj
	{
		displayName = "$STR_NSO";
	};
};
class CfgRecoils
{
	nsw_er7Recoil[] = {0,0,0,0.1,0.03,0.04,0.05,-0.03,-0.08,0.05,0,0};
	nsw_er7RecoilProne[] = {0,0,0,0.1,0.003,0.005,0.05,-0.003,-0.01,0.05,0,0};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase: BulletCore{};
	class B_762x51_er7: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.000932;
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class nsw_er7mm: CA_Magazine
	{
		scope = 1;
		displayName = "$STR_NSW_ER7_A";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		count = 25;
		ammo = "B_762x51_er7";
		initSpeed = 5200;
		sound[] = {"\ca\Weapons\Data\Sound\M21_single_shot_v3",10.0,1,1600};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4",0.01,1,10};
		descriptionShort = "$STR_NSW_ER7_A_D";
	};
};
class CfgWeapons
{
	class Default;
	class ItemCore: Default{};
	class APSI: ItemCore
	{
		scope = 1;
		displayName = "$STR_APSI";
		picture = "\nst\ns2\inv\apsi_icon_ca.paa";
		descriptionShort = "$STR_APSI_DESC";
		class Library
		{
			libTextDesc = "$STR_APSI_LIB_DESC";
		};
	};
	class BrokenItemRadio: ItemCore
	{
		scope = 1;
		displayName = "$STR_NS_BrokenItemRadio";
		model = "\nst\ns_dayz\items\radio\radio_dzn.p3d";
		picture = "\nst\ns2\inv\gear_picture_radio_ca.paa";
		descriptionShort = "$STR_NS_BrokenItemRadio_DESC";
	};
	class BrokenItemGPS: ItemCore
	{
		scope = 1;
		displayName = "$STR_NS_BrokenItemGPS";
		model = "\nst\ns_dayz\items\gps\gps_dzn.p3d";
		picture = "\nst\ns2\inv\gear_picture_gps_ca.paa";
		descriptionShort = "$STR_NS_BrokenItemGPS_DESC";
	};
	class BrokenNVGoggles: ItemCore
	{
		scope = 1;
		displayName = "$STR_NS_BrokenNV";
		model = "\nst\ns_dayz\items\nvg\nvg_dzn.p3d";
		picture = "\nst\ns2\inv\w_nvg_ca.paa";
		descriptionShort = "$STR_NS_BrokenItemGPS_DESC";
	};
	class mut_heart: ItemCore
	{
		scope = 1;
		displayName = "$STR_MUT_HEART";
		picture = "\nst\ns2\inv\heart_icon_ca.paa";
		descriptionShort = "$STR_MUT_HEART_DESC";
	};
	class RifleCore;
	class Rifle: RifleCore{};
	class nsw_er7s: Rifle
	{
		scope = 1;
		model = "\nst\ns2\weapons\nsw_er7s.p3d";
		picture = "\nst\ns2\weapons\data\e_er7_s_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		dexterity = 1.15;
		displayName = "$STR_NSW_ER7_S";
		modelOptics = "\ca\weapons\2Dscope_MilDot_10";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomMin = 0.0249;
		opticsZoomMax = 0.0249;
		opticsZoomInit = 0.0249;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		begin1[] = {"nst\ns2\weapons\sounds\er7_fire.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
		reloadMagazineSound[] = {"nst\ns2\weapons\sounds\er7_reload.wss",0.1,1,20};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 2500;
		midRangeProbab = 0.7;
		maxRange = 5000;
		maxRangeProbab = 0.05;
		dispersion = 2e-005;
		magazines[] = {"nsw_er7mm"};
		reloadTime = 1.5;
		backgroundReload = 1;
		recoil = "nsw_er7Recoil";
		recoilProne = "nsw_er7RecoilProne";
		value = 3000;
		aiRateOfFire = 8.0;
		aiRateOfFireDistance = 3000;
		class Library
		{
			libTextDesc = "$STR_NSW_ER7_D";
		};
		descriptionShort = "$STR_NSW_ER7_DS_SS";
	};
	class nsw_er7a: Rifle
	{
		scope = 1;
		model = "\nst\ns2\weapons\nsw_er7a.p3d";
		picture = "\nst\ns2\weapons\data\e_er7_a_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_ca.paa";
		dexterity = 1.15;
		displayName = "$STR_NSW_ER7_R";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		begin1[] = {"nst\ns2\weapons\sounds\er7_fire.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
		reloadMagazineSound[] = {"nst\ns2\weapons\sounds\er7_reload.wss",0.1,1,20};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 2500;
		midRangeProbab = 0.7;
		maxRange = 5000;
		maxRangeProbab = 0.05;
		dispersion = 2e-005;
		magazines[] = {"nsw_er7mm"};
		reloadTime = 1.5;
		backgroundReload = 1;
		recoil = "nsw_er7Recoil";
		recoilProne = "nsw_er7RecoilProne";
		value = 3000;
		aiRateOfFire = 8.0;
		aiRateOfFireDistance = 3000;
		class Library
		{
			libTextDesc = "$STR_NSW_ER7_D";
		};
		descriptionShort = "$STR_NSW_ER7_DS_RS";
	};
};
class CfgVehicles
{
	class House;
	class Strategic;
	class Thing;
	class sad_target: Thing
	{
		scope = 2;
		model = "\nst\ns2\mp\obj\sd_target.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		displayName = "$STR_sd_target";
		vehicleClass = "Nightstalkers_obj";
		simulation = "thing";
		animated = 0;
		mapSize = 0.7;
		destrType = "DestructEngine";
	};
	class ns_zarivka: House
	{
		scope = 2;
		model = "\nst\ns2\misc\aiimisc\zarivka.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		displayName = "Floor light";
		vehicleClass = "Nightstalkers_obj";
		mapSize = 0.2;
		destrType = "DestructNo";
	};
	class ns_kompiky: House
	{
		scope = 2;
		model = "\nst\ns2\misc\aiimisc\stoly.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		displayName = "Laptops and PCs";
		mapSize = 0.2;
		vehicleClass = "Nightstalkers_obj";
		destrType = "DestructNo";
		hiddenSelections[] = {"mon1","mon2","mon3","mon4","mon5"};
		class eventHandlers
		{
			init = "_this execVM ""\nst\ns2\misc\aiimisc\random_screens.sqf"";";
		};
	};
	class ns_servery: House
	{
		scope = 2;
		model = "\nst\ns2\misc\aiimisc\servery.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		displayName = "Servers in rack";
		mapSize = 0.2;
		vehicleClass = "Nightstalkers_obj";
		destrType = "DestructNo";
	};
	class _placka: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\_placka.p3d";
	};
	class land_tanl_entrance: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\mount\tanl_entrance.p3d";
	};
	class land_tanl_entrance_n: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\mount\tanl_entrance_n.p3d";
	};
	class land_seb_spadly_stozar: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\seb_spadly_stozar.p3d";
	};
	class land_seb_trubice_beton: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\seb_trubice_beton.p3d";
		displayName = "$STR_sebtrubky";
	};
	class land_seb_rozvodna: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\seb_rozvodna.p3d";
	};
	class land_seb_panely: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\seb_panely.p3d";
	};
	class land_kontejner_des: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\misc\kontejner_des.p3d";
	};
	class land_seb_nasypka: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\seb_nasypka.p3d";
	};
	class land_seb_mine_maringotka: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\seb_mine_maringotka.p3d";
		displayName = "$STR_MARINADA";
		animated = 1;
		class AnimationSources
		{
			class dvere_sebb2
			{
				animPeriod = 2;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere_sebb2";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere_sebb2"" < 0.5";
				statement = "this animate [""dvere_sebb2"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere_sebb2";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_sebb2"" >= 0.5";
				statement = "this animate [""dvere_sebb2"", 0]";
			};
		};
	};
	class land_seb_mine_near_bordel: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\seb_mine_near_bordel.p3d";
	};
	class land_seb_nadrze: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\seb\seb_nadrze.p3d";
	};
	class land_vag_masina: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\trains\vag_masina.p3d";
	};
	class land_vag_polozeny: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\trains\vag_polozeny.p3d";
	};
	class land_vag_zbozi1: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\trains\vag_zbozi1.p3d";
	};
	class land_most_betonovy_hajzlik: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\brensk\most_betonovy_hajzlik.p3d";
	};
	class land_mala_rovinka_nelepi: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\brensk\mala_rovinka_nelepi.p3d";
	};
	class land_AI: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\AI.p3d";
	};
	class land_AI_entrance: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\AI_entrance.p3d";
	};
	class land_AII_entrance: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\AII_entrance.p3d";
	};
	class land_vetrani: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\vetrani.p3d";
	};
	class land_terain_velke_panely: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\terain_velke_panely.p3d";
	};
	class land_terain_panely_slope: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\terain_panely_slope.p3d";
	};
	class land_terain_panely_kratke: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\terain_panely_kratke.p3d";
	};
	class land_terain_dlazice_kratke: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\terain_dlazice_kratke.p3d";
	};
	class land_terain_base_a: House
	{
		destrType = "DestructNo";
		model = "\nst\ns2\build\labs\terain_base_a.p3d";
	};
	class Land_nam_container: House
	{
		scope = 2;
		vehicleClass = "Nightstalkers_obj";
		displayName = "$STR_NAC_CARGO";
		destrType = "DestructNo";
		model = "\nst\ns2\misc\containers\nam_container.p3d";
		icon = "\Ca\buildings2\data\Icons\icon_container_ca.paa";
		mapSize = 0.7;
	};
	class bl_bleez: House
	{
		scope = 1;
		model = "\nst\ns2\visual\bleez.p3d";
		vehicleClass = "Nightstalkers_obj";
		displayName = "Blowout - FX";
		mapSize = 0.7;
	};
	class bl_krabka: House
	{
		scope = 1;
		model = "\nst\ns2\visual\krabice.p3d";
		vehicleClass = "Nightstalkers_obj";
		displayName = "Krabice - FX";
		mapSize = 0.7;
	};
	class bl_inv_braka: House
	{
		scope = 1;
		model = "\nst\ns2\visual\inv_krabka.p3d";
		vehicleClass = "Nightstalkers_obj";
		displayName = "Krabice - Action";
		mapSize = 0.7;
	};
	class bl_st: House
	{
		scope = 1;
		model = "\nst\ns2\visual\st.p3d";
		vehicleClass = "Nightstalkers_obj";
		displayName = "ST - FX";
		mapSize = 0.7;
	};
	class Land_Mil_Barracks_i;
	class Land_budova4_winter: Land_Mil_Barracks_i
	{
		model = "\nst\ns2\build\bar\budova4_winter.p3d";
	};
	class Land_budova1_winter: House
	{
		model = "\nst\ns2\build\bar\budova1_winter.p3d";
	};
	class Land_budova2_winter: House
	{
		model = "\nst\ns2\build\bar\budova2_winter.p3d";
	};
	class Land_budova3_winter: House
	{
		model = "\nst\ns2\build\bar\budova3_winter.p3d";
	};
	class Land_budova5_winter: House
	{
		model = "\nst\ns2\build\bar\budova5_winter.p3d";
	};
	class land_fuelstation_w: Strategic
	{
		icon = "\Ca\buildings\Icons\i_fuel_CA.paa";
		model = "\nst\ns2\build\bar\fuelstation_w.p3d";
		scope = 1;
		animated = 0;
		armor = 20;
		displayName = "$STR_DN_FUEL_STATION";
		accuracy = 0.5;
		transportFuel = 0;
		nameSound = "fuelstation";
		class DestructionEffects
		{
			class FuelStationExp
			{
				simulation = "particles";
				type = "FuelStationExp";
				position = "";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.001;
			};
			class FuelStationSmk1
			{
				simulation = "particles";
				type = "FuelStationSmk1";
				position = "";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.001;
			};
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "DestructionFire";
				intensity = 0.001;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelFire1
			{
				simulation = "particles";
				type = "FuelFire1";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelSmoke1
			{
				simulation = "particles";
				type = "FuelSmoke1";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelSmoke2
			{
				simulation = "particles";
				type = "FuelSmoke2";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelDestr
			{
				simulation = "destroy";
				type = "FuelStationDestr";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_most_blok: House
	{
		access = 2;
		scope = 1;
		displayName = "$STR_most";
		model = "\nst\NS2\build\brensk\most_blok.p3d";
		armor = 100;
		class Destruction
		{
			animations[] = {{ "nst\NS2\build\brensk\rtm\brg_destruct.rtm",0.2,17 },{ "nst\NS2\build\brensk\rtm\brg_destruct.rtm",0.2,17 },{ "nst\NS2\build\brensk\rtm\brg_destruct.rtm",0.2,17 },{ "nst\NS2\build\brensk\rtm\brg_destruct.rtm",0.2,17 },{ "nst\NS2\build\brensk\rtm\brg_destruct.rtm",0.2,17 }};
		};
	};
	class land_nadrazi_nastupiste: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_nastupiste";
		model = "\nst\NS2\build\brensk\nadrazi_nastupiste.p3d";
	};
	class land_AII_vrsek: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\NS2\build\labs\AII_vrsek.p3d";
	};
	class land_AII_upper_part: House
	{
		access = 2;
		scope = 1;
		displayName = "$STR_hala1";
		destrType = "DestructNo";
		model = "\nst\NS2\build\labs\AII_upper_part.p3d";
		ladders[] = {{ "start1","end1" }};
	};
	class land_AII_middle_floor: House
	{
		access = 2;
		scope = 1;
		displayName = "$STR_hala1";
		destrType = "DestructNo";
		model = "\nst\NS2\build\labs\AII_middle_floor.p3d";
		ladders[] = {{ "start1","end1" }};
	};
	class land_AII_last_floor: House
	{
		access = 2;
		scope = 1;
		displayName = "$STR_hala1";
		destrType = "DestructNo";
		model = "\nst\NS2\build\labs\AII_last_floor.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
	};
	class Land_vys_budova_p1: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		animated = 1;
		model = "\nst\ns2\build\mount\vys_budova_p1.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
		class AnimationSources
		{
			class vys_budova_d1
			{
				animPeriod = 2;
			};
			class vys_budova_d2: vys_budova_d1{};
			class vys_budova_d3: vys_budova_d1{};
			class vys_budova_d4: vys_budova_d1{};
			class vys_budova_d5: vys_budova_d1{};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_d1_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d1"" < 0.5";
				statement = "this animate [""vys_budova_d1"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_d1_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d1"" >= 0.5";
				statement = "this animate [""vys_budova_d1"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_d2_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d2"" < 0.5";
				statement = "this animate [""vys_budova_d2"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_d2_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d2"" >= 0.5";
				statement = "this animate [""vys_budova_d2"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_d3_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d3"" < 0.5";
				statement = "this animate [""vys_budova_d3"", 1]";
			};
			class CloseDoors3
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_d3_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d3"" >= 0.5";
				statement = "this animate [""vys_budova_d3"", 0]";
			};
			class OpenDoors4
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_d4_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d4"" < 0.5";
				statement = "this animate [""vys_budova_d4"", 1]";
			};
			class CloseDoors4
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_d4_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d4"" >= 0.5";
				statement = "this animate [""vys_budova_d4"", 0]";
			};
			class OpenDoors5
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_d5_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d5"" < 0.5";
				statement = "this animate [""vys_budova_d5"", 1]";
			};
			class CloseDoors5
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_d5_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_d5"" >= 0.5";
				statement = "this animate [""vys_budova_d5"", 0]";
			};
		};
	};
	class Land_vys_budova_p2: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		animated = 1;
		model = "\nst\ns2\build\mount\vys_budova_p2.p3d";
		class AnimationSources
		{
			class vys_budova_v1_1
			{
				animPeriod = 2;
			};
			class vys_budova_v1_2: vys_budova_v1_1{};
			class vys_budova_v2_1: vys_budova_v1_1{};
			class vys_budova_v2_2: vys_budova_v1_1{};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_v1_1_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_v1_1"" < 0.5";
				statement = "this animate [""vys_budova_v1_1"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_v1_1_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_v1_1"" >= 0.5";
				statement = "this animate [""vys_budova_v1_1"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_v1_2_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_v1_2"" < 0.5";
				statement = "this animate [""vys_budova_v1_2"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_v1_2_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_v1_2"" >= 0.5";
				statement = "this animate [""vys_budova_v1_2"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_v2_1_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_v2_1"" < 0.5";
				statement = "this animate [""vys_budova_v2_1"", 1]";
			};
			class CloseDoors3
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_v2_1_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_v2_1"" >= 0.5";
				statement = "this animate [""vys_budova_v2_1"", 0]";
			};
			class OpenDoors4
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "vys_budova_v2_2_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_v2_2"" < 0.5";
				statement = "this animate [""vys_budova_v2_2"", 1]";
			};
			class CloseDoors4
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "vys_budova_v2_2_osa";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""vys_budova_v2_2"" >= 0.5";
				statement = "this animate [""vys_budova_v2_2"", 0]";
			};
		};
	};
	class land_seb_vod_vez: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\ns2\build\seb\seb_vod_vez.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
	};
	class land_seb_mine_main_opt: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_dul";
		model = "\nst\ns2\build\seb\seb_mine_main_opt.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" },{ "start3","end3" }};
	};
	class land_x_vetraci_komin: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\NS2\build\x\x_vetraci_komin.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
	};
	class land_seb_residental: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\NS2\build\seb\seb_residental.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" }};
	};
	class land_x_vez_tex: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\NS2\build\x\x_vez_tex.p3d";
	};
	class land_x_nadrz: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_nadrzka";
		model = "\nst\NS2\build\x\x_nadrz.p3d";
		ladders[] = {{ "start1","end1" }};
	};
	class land_x_skladiste_low_tex: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\NS2\build\x\x_skladiste_low_tex.p3d";
		ladders[] = {{ "start1","end1" }};
	};
	class land_seb_near_fac: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\ns2\build\seb\seb_near_fac.p3d";
		ladders[] = {{ "start1","end1" }};
	};
	class land_seb_main_fac: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\ns2\build\seb\seb_main_fac.p3d";
		ladders[] = {{ "start1","end1" },{ "start2","end2" },{ "start3","end3" },{ "start4","end4" }};
	};
	class land_seb_mine_near: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\ns2\build\seb\seb_mine_near.p3d";
		ladders[] = {{ "start1","end1" }};
	};
	class Land_hut_old01: House
	{
		scope = 1;
		armor = 500;
		model = "\nst\ns2\build\arma1\hut_old01.p3d";
		class DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\hut_old02_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_dum_ras: House
	{
		scope = 1;
		model = "\nst\ns2\build\arma1\dum_ras.p3d";
		ladders[] = {{ "start","end" }};
		armor = 300;
		class DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\dum_rasovna_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_Tovarna1: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_hala1";
		model = "\nst\ns2\build\arma1\Tovarna1.p3d";
		ladders[] = {{ "start","end" }};
	};
	class land_hlaska: House
	{
		access = 2;
		scope = 1;
		nameSound = "guardtower";
		displayName = "$STR_hlaska";
		model = "\nst\ns2\build\arma1\hlaska.p3d";
		ladders[] = {{ "start","end" }};
	};
	class land_posed_ns: House
	{
		access = 2;
		scope = 1;
		nameSound = "guardtower";
		displayName = "$STR_hlaska";
		model = "\nst\ns2\build\arma1\posed_ns.p3d";
		ladders[] = {{ "start","end" }};
	};
	class Land_seb_bouda_plech: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_domek1";
		model = "\nst\NS2\build\seb\seb_bouda_plech.p3d";
	};
	class land_seb_bouda3: House
	{
		access = 2;
		scope = 1;
		destrType = "DestructNo";
		displayName = "$STR_domek1";
		model = "\nst\NS2\build\seb\seb_bouda3.p3d";
	};
	class land_seb_bouda1: House
	{
		access = 2;
		scope = 1;
		animated = 1;
		destrType = "DestructNo";
		displayName = "$STR_domek1";
		model = "\nst\ns2\build\seb\seb_bouda1.p3d";
		class AnimationSources
		{
			class dvere_sebb1
			{
				animPeriod = 2;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere_sebb1";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere_sebb1"" < 0.5";
				statement = "this animate [""dvere_sebb1"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere_sebb1";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_sebb1"" >= 0.5";
				statement = "this animate [""dvere_sebb1"", 0]";
			};
		};
	};
	class land_vys_antena: House
	{
		access = 2;
		scope = 1;
		animated = 1;
		displayName = "$STR_vys_antena";
		model = "\nst\NS2\build\mount\vys_antena.p3d";
		class MarkerLights
		{
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {1,1,1,1};
				ambient[] = {0.1,0.1,0.1,1};
				brightness = 0.02;
				blinking = 1;
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {1.0,0.1,0.1,1};
				ambient[] = {0.1,0.01,0.01,1};
				brightness = 0.02;
				blinking = 1;
			};
		};
		ladders[] = {{ "start1","end1" },{ "start2","end2" },{ "start3","end3" },{ "start4","end4" },{ "start5","end5" },{ "start6","end6" }};
		class AnimationSources
		{
			class dvere_dole
			{
				animPeriod = 2;
			};
			class dvere_prvni: dvere_dole{};
			class dvere_druhe: dvere_dole{};
			class dvere_treti: dvere_dole{};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere_dole";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_dole"" < 0.5";
				statement = "this animate [""dvere_dole"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere_dole";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_dole"" >= 0.5";
				statement = "this animate [""dvere_dole"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere_prvni";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_prvni"" < 0.5";
				statement = "this animate [""dvere_prvni"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere_prvni";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_prvni"" >= 0.5";
				statement = "this animate [""dvere_prvni"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere_druhe";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_druhe"" < 0.5";
				statement = "this animate [""dvere_druhe"", 1]";
			};
			class CloseDoors3
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere_druhe";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_druhe"" >= 0.5";
				statement = "this animate [""dvere_druhe"", 0]";
			};
			class OpenDoors4
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dvere_treti";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_treti"" < 0.5";
				statement = "this animate [""dvere_treti"", 1]";
			};
			class CloseDoors4
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dvere_treti";
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "this animationPhase ""dvere_treti"" >= 0.5";
				statement = "this animate [""dvere_treti"", 0]";
			};
		};
	};
};
//};
