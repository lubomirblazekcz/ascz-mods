private ["_truck","_path","_boardNum","_class","_habartype"];
_truck = _this select 0;

if(local _truck)then{

	if (isNil "cDecalsFuncLoaded") then
	{
		cDecalsFuncLoaded = true;
		cDecals4NumberPlaces = [2,3,4,5]; // Places for number
		cDecalsRightArmyPlaces = [6,7];
		//cDecalsLeftArmyPlaces = [7];

		cDecalsRightPlatoonPlaces = [8,9];
		//cDecalsLeftPlatoonPlaces = [9];

	};

	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/

	private ["_params"];
	_class = typeOf _truck;


	// RHS_Decals main script path:
	_decal = "\rhsafrf\addons\RHS_Decals\Scripts\init.sqf";

	switch (_class) do
	{
		case "CDF_A3_UAZ_469":
		{
			_params = [
				_truck,
				[
					["Number", cDecals4NumberPlaces, "LicensePlate"]
				]
			];
		};

		//Uaz Open

		case "CDF_A3_UAZ_469_Open":
		{
			_params = [
				_truck,
				[
					["Number", cDecals4NumberPlaces, "LicensePlate"]
				]
			];
		};
        case "CDF_A3_Ural":
        {
            _params = [
                _truck,[]
            ];
        };
        case "CDF_A3_Ural_Open":
        {
            _params = [
                _truck,[]
            ];
        };
        case "CDF_A3_Ural_Fuel":
        {
            _params = [
                _truck,[]
            ];
        };
        case "CDF_A3_BM21":
        {
            _params = [
                _truck,[]
            ];
        };

		default
		{
			_params = [
				_truck,
				[
					["Number", cDecals4NumberPlaces, "Default"],  // Set number (random)
					["Label", cDecalsRightArmyPlaces, "Army", 3],
					["Label", cDecalsRightPlatoonPlaces, "Platoon",9]
				]
			];
		};
	};

	private ["_h"];
	_h = _params spawn rhs_fnc_decalsInit; // Paint vehicle
};