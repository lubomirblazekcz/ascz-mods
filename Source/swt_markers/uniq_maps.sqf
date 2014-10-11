//UniqMaps

/*
*
*
*
*
*
*
*/

swt_markers_uniq_orig_del = false;
swt_uniq_map_shown = false;

swt_get_uniq_maps = {
	sweet_uniq_arr = [];
	for "_i" from 1 to swt_uniq_count do {
		if (((format ["swt_map_id_%1", _i]) in items player) or ((format ["swt_map_id_%1", _i]) in assignedItems player)) then {
			sweet_uniq_arr pushBack (format ["swt_map_id_%1", _i]);
		};
	};
};

swt_uniq_orig_map = {
	//hintSilent str ((player getVariable "swt_markers_uniq_current") + " Оригинал");
	swt_markers_uniq_current = player getVariable "swt_markers_uniq_current";
	if (swt_markers_uniq_orig_del) then {
		{
			_str_check = (toArray _x);
			_str_check resize 11;
			_str_check = toString _str_check;
			if (_str_check == "SWT_MARKERS") then {
				deleteMarkerLocal _x;
			};
		} forEach allMapMarkers;
		//(swt_uniq_map_logic getVariable (player getVariable "swt_markers_uniq_orig")) call swt_load_markers_uniq;
		swt_markers_uniq_req = [swt_id,player];
		publicVariableServer "swt_markers_uniq_req";
		if (isServer) then {
			_arr = call compile format ["swt_markers_sys_unit_id_%1", player getVariable "swt_id"];
			_arr call swt_markers_uniq_req_done_fnc;
		};
		swt_markers_uniq_orig_del = false;
		diag_log "SWT MARKERS: MY MARKERS UNIQ LOADED";
	};
	swt_markers_uniq_save = swt_id;
	publicVariableServer "swt_markers_uniq_save";
	if (isServer) then {
		call compile format ["swt_markers_sys_unit_id_%1_uniq = + swt_markers_sys_unit_id_%1",swt_id];
	};
	//call compile format ["swt_markers_sys_unit_id_%1_uniq = + swt_markers_sys_unit_id_%1",swt_id];
	//hint "Параметры сохранены";
	//diag_log ("Сохранённые параметры: " + str time + "   " + str (swt_uniq_map_logic getVariable (player getVariable "swt_markers_uniq_orig")));
};


swt_markers_uniq_current = "";
swt_uniq_another_map = {
	hintSilent ((getText (configfile >> "cfgWeapons" >> (player getVariable "swt_markers_uniq_current") >> "displayName")) + localize "STR_SWT_M_UNIQ_OWNED" + (swt_uniq_map_logic getVariable [(_curr + "_name"),localize "STR_SWT_M_UNIQ_UNKNOWN"]));
	if (swt_markers_uniq_current != (player getVariable "swt_markers_uniq_current")) then {swt_markers_uniq_current = player getVariable "swt_markers_uniq_current";
		{
			_str_check = (toArray _x);
			_str_check resize 11;
			_str_check = toString _str_check;
			if (_str_check == "SWT_MARKERS") then { //ну криво же...
				deleteMarkerLocal _x;
			};
		} forEach allMapMarkers;
		swt_markers_uniq_orig_del = true;
		swt_markers_uniq_req = [swt_uniq_map_logic getVariable swt_markers_uniq_current,player];
		publicVariableServer "swt_markers_uniq_req";
		if (isServer) then {
			_arr = call compile format ["swt_markers_sys_unit_id_%1_uniq", swt_uniq_map_logic getVariable swt_markers_uniq_current];
			_arr call swt_markers_uniq_req_done_fnc;
		};
		//diag_log "SWT MARKERS: OTHER MARKERS UNIQ LOADED";
	};
	//(swt_uniq_map_logic getVariable (player getVariable "swt_markers_uniq_current")) call swt_load_markers_uniq;
	//diag_log ("Загруженные параметры: " + str time + "   " + str (swt_uniq_map_logic getVariable (player getVariable "swt_markers_uniq_current")));
};
swt_markers_uniq_req_done_fnc = {
	_arr = _this;
	{
		_x call swt_markers_sys_create;
	} forEach _arr;
	diag_log "SWT MARKERS: MARKERS UNIQ LOADED";
};
"swt_markers_uniq_req_done" addPublicVariableEventHandler {
	_arr = _this select 1;
	_arr call swt_markers_uniq_req_done_fnc;
};

if (isServer) then {
	swt_uniq_map_logic = "Land_HelipadEmpty_F" createVehicle [0,0,228];
	publicVariable "swt_uniq_map_logic";
	"swt_markers_uniq_save" addPublicVariableEventHandler {
		_swt_id = _this select 1;
		call compile format ["swt_markers_sys_unit_id_%1_uniq = + swt_markers_sys_unit_id_%1",_swt_id];
	};
	"swt_markers_uniq_req" addPublicVariableEventHandler {
		_params = _this select 1;
		_swt_id = _params select 0;
		_player = _params select 1;
		_check = _params select 2;
		if !_check then {
			swt_markers_uniq_req_done = call compile format ["swt_markers_sys_unit_id_%1_uniq", _swt_id];
		} else {
			swt_markers_uniq_req_done = call compile format ["swt_markers_sys_unit_id_%1", _swt_id];
		};
		(owner _player) publicVariableClient "swt_markers_uniq_req_done";
	};
	sleep 6;
	_k = 0;
	{
		if ("ItemMap" in assignedItems _x) then {
			_k = _k + 1;
			if !(isPlayer _x) then {
				_x removeItem "ItemMap";
				_x linkItem format ["swt_map_id_%1",_k];
				_x setVariable ["swt_markers_map_added",true,true];
			};
			//_x assignItem format ["swt_map_id_%1",_k];
			swt_uniq_map_logic setVariable [format ["swt_map_id_%1",_k], _x getVariable "swt_id", true];
			_x setVariable ["swt_markers_uniq_orig",format ["swt_map_id_%1",_k],true];
			_x setVariable ["swt_markers_uniq_current",format ["swt_map_id_%1",_k],true];
			call compile format ["swt_markers_sys_unit_id_%1_uniq = + swt_markers_sys_unit_id_%1",_x getVariable "swt_id"];

		};
	} forEach (playableUnits+switchableUnits);
	swt_uniq_count = _k;
	publicVariable "swt_uniq_count";
};

sleep 0.5;

if (isNil {player getVariable "swt_markers_map_added"}) then {
	waitUntil {!isNil "swt_uniq_count"};
	player removeItem "ItemMap";
	player linkItem (player getVariable "swt_markers_uniq_orig");
	swt_uniq_map_logic setVariable [((player getVariable "swt_markers_uniq_orig") + "_name"), name player, true];
	//diag_log (swt_uniq_map_logic getVariable [((player getVariable "swt_markers_uniq_orig") + "_name"),"Неизвестному поцику"]);
	sweet_uniq_arr = [player getVariable "swt_markers_uniq_orig"];
	player setVariable ["swt_markers_map_added",true,true];
} else {
	/*
	swt_uniq_markers_save_arr = [];
	{
		swt_uniq_markers_save_arr pushBack (_x call swt_get_mark_param_uniq);
	} forEach allMapMarkers;
	swt_uniq_map_logic setVariable [player getVariable "swt_markers_uniq_orig", swt_uniq_markers_save_arr, true];
	*/
};


(findDisplay 46) displayAddEventHandler ["keyUp",{
	disableSerialization;
	_display =                  _this select 0;
	_dikCode =                  _this select 1;
	_shiftState =               _this select 2;
	_ctrlState =                _this select 3;
	_altState =                 _this select 4;
	//Дик,шифт проверка на L
	if ((_dikCode == 38) and (_shiftState)) then {
		if !(visibleMap) then {
			call swt_get_uniq_maps;
			if (count sweet_uniq_arr < 1) then {
					hintSilent (localize "STR_SWT_M_UNIQ_HAVENT");
			} else {
				_curr = player getVariable "swt_markers_uniq_current";
				if ((_curr in sweet_uniq_arr) and (((sweet_uniq_arr find _curr) + 1) <= (count sweet_uniq_arr - 1))) then {
					{player unassignItem _x} forEach sweet_uniq_arr;
					player setVariable ["swt_markers_uniq_current", sweet_uniq_arr select ((sweet_uniq_arr find (player getVariable "swt_markers_uniq_current")) + 1)];
					hint ("Switch to " + (getText (configfile >> "cfgWeapons" >> (player getVariable "swt_markers_uniq_current") >> "displayName")));
					player assignItem (player getVariable "swt_markers_uniq_current");
				} else {
					{player unassignItem _x} forEach sweet_uniq_arr;
					player setVariable ["swt_markers_uniq_current", sweet_uniq_arr select 0];
					hint ("Switch to "+ (getText (configfile >> "cfgWeapons" >> (player getVariable "swt_markers_uniq_current") >> "displayName")));
					player assignItem (player getVariable "swt_markers_uniq_current");
				};
			};
		} else {hint (localize "STR_SWT_M_UNIQ_CLOSEMAP")};
	};
}];


//((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw",{
(findDisplay 46) displayAddEventHandler ["KeyDown",{ //Draw кладёт сервак.

	if (((_this select 1) in actionKeys "ShowMap") or ((_this select 1) in actionKeys "HideMap")) then {
		//Проверка на наличие выбранной карты
		call swt_get_uniq_maps;
		if (count sweet_uniq_arr < 1) exitWith {
			hintSilent (localize "STR_SWT_M_UNIQ_HAVENT");
		};
		{
			if ((_x in assignedItems player) and !(_x isEqualTo (player getVariable "swt_markers_uniq_current"))) exitWith {player setVariable ["swt_markers_uniq_current", _x];};
		} forEach sweet_uniq_arr;
		_curr = player getVariable "swt_markers_uniq_current";

		if (!(_curr in assignedItems player) and (_curr in items player)) then {
			{player unassignItem _x} forEach sweet_uniq_arr;
			player assignItem (player getVariable "swt_markers_uniq_current");
		};
		if !((_curr in assignedItems player) or (_curr in items player)) then {
			player setVariable ["swt_markers_uniq_current", sweet_uniq_arr select 0];
			hint (localize "STR_SWT_M_UNIQ_LOST" + (getText (configfile >> "cfgWeapons" >> (player getVariable "swt_markers_uniq_current") >> "displayName")));
			{player unassignItem _x} forEach sweet_uniq_arr;
			player assignItem (player getVariable "swt_markers_uniq_current");
		};

		//Основа
		if !((player getVariable "swt_markers_uniq_current") == (player getVariable "swt_markers_uniq_orig")) then {
			call swt_uniq_another_map;
		};
		if ((player getVariable "swt_markers_uniq_current") == (player getVariable "swt_markers_uniq_orig")) then {
			call swt_uniq_orig_map;
		};
	};
	false
}];

(findDisplay 12) displayAddEventHandler ["KeyDown",{
	if (((_this select 1) == 1)) then {
	//	hint "Карта закрыта";
		if ((player getVariable "swt_markers_uniq_current") == (player getVariable "swt_markers_uniq_orig")) then {
			call swt_uniq_orig_map;
		};
		swt_uniq_map_shown = false;
	};
	false
}];
/*
(findDisplay 46) displayAddEventHandler ["KeyUp",{
	if (((_this select 1) in actionKeys "ShowMap") or ((_this select 1) in actionKeys "HideMap")) then {
		if ((player getVariable "swt_markers_uniq_current") == (player getVariable "swt_markers_uniq_orig")) then {
			call swt_uniq_orig_map;
		};
	};
	false
}];
*/