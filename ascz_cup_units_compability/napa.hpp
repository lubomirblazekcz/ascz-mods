	class CUP_Creatures_Military_Napa_Soldier_Base: SoldierWB
	{
		genericnames = "CzechMen";
		identitytypes[] = {"Language_ACR_CZ","Language_CZ","Head_Euro","G_GUERIL_default"};
		side = 2;
		faction = "rhs_faction_insurgents";
		vehicleClass = "Men";
		modelSides[] 	= {6};
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","HandGrenade","HandGrenade"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class CUP_I_GUE_Soldier_AKSU: CUP_Creatures_Military_Napa_Soldier_Base /// class visible in editor
	{
		scope = 2;
		uniformClass 	= "CUP_U_I_Napa_Flecktarn";
	};

	class CUP_I_GUE_Soldier_AKM :  CUP_Creatures_Military_Napa_Soldier_Base /// class visible in editor
	{
		scope = 2;
		uniformClass 	= "CUP_U_I_Napa_Flecktarn2";
	};