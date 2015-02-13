private ["_bmd","_path","_boardNum","_class","_habartype"];
_bmd = _this select 0;

if(local _bmd)then{

	_habartype = 2;
	_bmd setVariable ["unload",0];

	if (isNil "cBMDFuncLoaded") then
	{
		cBMDFuncLoaded = true;
		cBMDAddonName  = "rhsafrf\addons\rhs_c_bmd";
		cBMD3NumberPlaces = [0,1,2]; // Places for number
		cBMDArmySymPlaces = [3];
		cBMDPlnSymPlaces = [4];     // Places for platoon symbol

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
	};

	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/
	private ["_params"];
	_class = typeOf _bmd;


	// RHS_Decals main script path:
	_decal = "\rhsafrf\addons\RHS_Decals\Scripts\init.sqf";

	switch (_class) do
	{
		case "rhs_bmd1":
		{
			_params = [
				_bmd,
				[
					["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBMDPlnSymPlaces, "Platoon",11],
					["Label", cBMDArmySymPlaces, "Army", 2]
				]
			];
			_habartype = 2;
		};

		case "rhs_bmd1k":
		{
			_params = [
				_bmd,
				[
					["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBMDPlnSymPlaces, "Platoon",11],
					["Label", cBMDArmySymPlaces, "Army", 2]
				]
			];
			_habartype = 2;
		};

		case "rhs_bmd1p":
		{
			_params = [
				_bmd,
				[
					["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBMDPlnSymPlaces, "Platoon",11],
					["Label", cBMDArmySymPlaces, "Army", 2]
				]
			];
			_habartype = 2;
		};

		case "rhs_bmd1pk":
		{
			_params = [
				_bmd,
				[
					["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBMDPlnSymPlaces, "Platoon",11],
					["Label", cBMDArmySymPlaces, "Army", 2]
				]
			];
			_habartype = 2;
		};

		case "rhs_bmd1r":
		{
			_params = [
				_bmd,
				[
					["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBMDPlnSymPlaces, "Platoon",11],
					["Label", cBMDArmySymPlaces, "Army", 2]
				]
			];
			_habartype = 2;
		};

		case "rhs_bmd2":
		{
			_params = [
				_bmd,
				[
					["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBMDPlnSymPlaces, "Platoon",11],
					["Label", cBMDArmySymPlaces, "Army", 2]
				]
			];
			_habartype = 2;
		};

		case "rhs_bmd2k":
		{
			_params = [
				_bmd,
				[
					["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBMDPlnSymPlaces, "Platoon",11],
					["Label", cBMDArmySymPlaces, "Army", 2]
				]
			];
			_habartype = 2;
		};

		case "rhs_bmd2m":
		{
			_params = [
				_bmd,
				[
					["Number", cBMD3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBMDPlnSymPlaces, "Platoon",11],
					["Label", cBMDArmySymPlaces, "Army", 2]
				]
			];
			_habartype = 2;
		};

		default
		{
			_params = [
				_bmd,
				[

				]
			];
			_habartype = 0;
		};
	};

	private ["_h"];
	_h = _params spawn rhs_fnc_decalsInit; // Paint vehicle

	/*******************************************************************************
	* Habar				                                                         *
	*******************************************************************************/
	private ["_habarScr"];
	_habarScr = [_bmd,_habartype] execVM "\rhsafrf\addons\rhs_c_bmd\scripts\bgr_bmd_habar.sqf";

	/*******************************************************************************
	* Special FX secton                                                            *
	*******************************************************************************/
	if (isNil "RHS_bmd_Effects_Init") then
	{
		RHS_bmd_Effects_Init = true;
	};
