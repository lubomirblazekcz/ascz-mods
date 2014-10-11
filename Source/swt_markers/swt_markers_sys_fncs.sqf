swt_markers_sys_create = {
	private ["_mark","_params"];
	_mark = format ["SWT_MARKERS #%1/%2",_this select 0,_this select 1];
	_params = _this select 2;

	_Text  = _params select 0;
	_Pos   = _params select 1;
	_Type  = _params select 2;
	_Color = _params select 3;
	_Dir   = _params select 4;
	_Scale = _params select 5;
	/*
	_Alpha = _params select 6;
	_Brush = _params select 7;
	_Shape = _params select 8;
	*/
	_mark = createMarkerLocal [_mark,_Pos];
	_mark setMarkerTypeLocal (swt_cfgMarkers_names select _Type);
	_mark setMarkerColorLocal (swt_cfgMarkerColors_names select _Color);
	_mark setMarkerTextLocal _Text;
	_mark setMarkerDirLocal _Dir;
	_mark setMarkerSizeLocal [_Scale,_Scale];

	/*_mark setMarkerSizeLocal _Size;
	_mark setMarkerAlphaLocal _Alpha;
	_mark setMarkerBrushLocal _Brush;
	_mark setMarkerShapeLocal _Shape;
	*/
};
swt_markers_clear_map_fnc = {
	{
		_str_check = (toArray _x);
		_str_check resize 11;
		_str_check = toString _str_check;
		if (_str_check == "SWT_MARKERS") then {
			deleteMarkerLocal _x;
		};
	} forEach allMapMarkers;
	swt_markers_clear_map = player;
	//call compile format ["swt_markers_sys_unit_id_%1 = []",player getVariable "swt_id"];
	publicVariableServer "swt_markers_clear_map";
};

swt_sys_del = {
	disableSerialization;
  	_display = _this select 0;
    _dikCode = _this select 1;
    _shift = _this select 2;
    _ctrlKey = _this select 3;
    _alt = _this select 4;
    //if (isNil {player getVariable "swt_id"}) exitWith {diag_log "SWT MARKERS ERROR: ID NOT FOUND (DEL)"};
    if (_dikCode == 211) then {
    	if (swt_markers_DisableLoc) exitWith {diag_log "SWT MARKERS: DEL DISABLED";};
    	_exit = false;
		{
			if (_exit) exitWith {};
			_str_check = (toArray _x);
			_str_check resize 11;
			_str_check = toString _str_check;
			if (_str_check == "SWT_MARKERS") then {
				_pos = getMarkerPos _x;
				_pos = (_display displayCtrl 51) ctrlMapWorldToScreen _pos;
				if (([_pos,swt_markers_pos_m] call bis_fnc_distance2D) < 0.025) then {
					diag_log ("SWT MARKERS: I DEL MARKER " + _x);
					deleteMarker _x;
					swt_markers_sys_request_del = [player,_x];
					publicVariableServer "swt_markers_sys_request_del";
					if ((isServer)and (!isMultiplayer)) then {swt_markers_sys_request_del call swt_markers_sys_request_del_fnc};
					_exit = true;
				};
			};
		} forEach allMapMarkers;
	};
	false
};
swt_markers_fast_way = false;
swt_sys_pos_m = {
	swt_markers_pos_m = [_this select 1, _this select 2];
	if ((swt_markers_fast_way)and(((swt_markers_fast_enabled)and(((swt_markers_fast_enabled_for) and (((leader player == player) or (((effectiveCommander (vehicle player)) == player) and (vehicle player != player))))) or (!swt_markers_fast_enabled_for)))or !isMultiplayer)) then {displayNull call compile preprocessFileLineNumbers '\swt_markers_a3\swt_markers_sys_sendMark.sqf';};
};


swt_markers_sys_fnc_client = {
	_params = _this;
	if (swt_markers_DisableLoc) exitWith {};
	_params call swt_markers_sys_create;
	/*if (isNil "swt_id") exitWith {
		diag_log "SWT MARKERS ERROR: ID NOT FOUND. ";
		hintSilent "SWT MARKERS: Произошла ошибка, при возникновении проблем в работе системы перезайдите";
	};
	if (!isServer) then {call compile format ["swt_markers_sys_unit_id_%1 pushBack _params",swt_id];};
		*/
};

swt_markers_sys_client_send_fnc = {
	_player = _this select 0;
	_params = [(_player getVariable "swt_markers_sys_index") + 1,_player getVariable "swt_id", _this select 1];
	_player setVariable ["swt_markers_sys_index",(_player getVariable "swt_markers_sys_index") + 1];
	_cond = switch (_this select 2) do {
	    case "SIDE": {
	    	"(side _x == side _player)"
	    };
	    case "COMMAND": {
	    	"((((leader _x == _x) or (((effectiveCommander (vehicle _x)) == _x) and (vehicle _x != _x))) and (side _x == side _player)) or (_player == _x))"
	    };
	    case "DIRECT": {
	    	"(_x distance _player < 15)"
	    };
	    case "GLOBAL": {
	    	"true"
	    };
	    case "VEHICLE": {
	    	"(_x in vehicle _player)"
	    };
	    case "GROUP": {
	    	"(group _x == group _player)"
	    };
	};
	swt_markers_send = _params;
	//_params = [format ["SWT_MARKERS #%1/%2",_player getVariable "swt_markers_sys_index",_player getVariable "swt_id"], _this select 1];
	diag_log format ["SWT MARKERS SERVER: %1 PUT MARKER. PARAMS: ",name _player];
	diag_log [_this select 2,_params];
	{
		if ((_this select 2) == "SIDE") then {
			if ((side _player) in swt_markers_sys_sides) then {
				call compile format ["swt_markers_sys_side_%1 pushBack _params",side _player];
			};
		};
		_cond_x = call compile _cond;
		if _cond_x then {
			call compile format ["swt_markers_sys_unit_id_%1 pushBack _params",_x getVariable "swt_id"];
			//Тут важно понимать, что аддон делается для игр с over 150 игроками и чем меньше данных мы передаём, тем меньше нагрузка на трафик.
			(owner _x) publicVariableClient "swt_markers_send";
		};
		if (!(isDedicated)and(_x == player) and (!isMultiplayer)) then {swt_markers_send call swt_markers_sys_fnc_client};
	} forEach (playableUnits+switchableUnits);
};

swt_markers_sys_load_fnc = {
	//if (swt_markers_DisableLoc) exitWith {};
	_loaded_arr = _this select 0;
	_player = _this select 1;
	_swt_id = _player getVariable "swt_id";
	_index = _player getVariable "swt_markers_sys_index";
	_index1 = 0;
	_player setVariable ["swt_markers_sys_index",_index + (count _loaded_arr)];
	{
		if (side _player == side _x) then {
			_unit = _x;
			_arr = call compile format ["swt_markers_sys_unit_id_%1",_unit getVariable "swt_id"];
			_index1 = _index;
			_marks_to_send = [];
			{
				_chek_uniq = true;
				_marker_arr = + _x;
				{
					if ((_x select 2) isEqualTo (_marker_arr select 2)) exitWith {_chek_uniq = false;};
				} forEach _arr;
				if (_chek_uniq) then {
					_index1 = _index1 + 1;
					_marker_arr set [0,_index1];
					_marker_arr set [1,_swt_id];
					_marks_to_send pushBack _marker_arr;
					//call compile format ["swt_markers_sys_unit_id_%1 pushBack _marker_arr",_unit getVariable "swt_id"];
				};
			} forEach _loaded_arr;
			if (!(isDedicated)and(_unit == player)and!(isMultiplayer)) then {
				{
					_x call swt_markers_sys_create;
				} forEach _marks_to_send;
			};
			call compile format ["swt_markers_sys_unit_id_%1 = swt_markers_sys_unit_id_%1 + _marks_to_send",_unit getVariable "swt_id"];
			swt_markers_sys_load_client = [_marks_to_send,_player];
			(owner _x) publicVariableClient "swt_markers_sys_load_client";
		};
	} forEach (playableUnits+switchableUnits);
	//Сраный респаун
	_index1 = 0;
	_marks_to_send = [];
	if ((side _player) in swt_markers_sys_sides) then {
		_arr = call compile format ["swt_markers_sys_side_%1",side _player];
		_index1 = _index;
		{

			_chek_uniq = true;
			_marker_arr = + _x;
			{
				if ((_x select 2) isEqualTo (_marker_arr select 2)) exitWith {_chek_uniq = false;};
			} forEach _arr;
			if (_chek_uniq) then {
				_index1 = _index1 + 1;
				_marker_arr set [0,_index1];
				_marker_arr set [1,_swt_id];
				call compile format ["swt_markers_sys_side_%1 pushBack _marker_arr",side _player];
			};
		} forEach _loaded_arr;
		//call compile format ["swt_markers_sys_side_%1 pushBack _params",side _player];
	};

	_player sideChat format ["%1 загрузил %2 маркеров на карту. Уже существующие маркера на карте поставлены не будут.", name _player, count _loaded_arr];
	diag_log format ["SWT MARKERS SERVER: %1 LOAD %2 MARKERS ON MAP", name _player, count _loaded_arr];
};

swt_change_dir_PV_fnc = {
	//if (swt_markers_DisableLoc) exitWith {};
	_mark = _this select 0;
	_dir = _this select 1;
	_player = _this select 2;
	diag_log format ["SWT MARKERS SERVER: %1 CHANGE DIR MARKER %2 TO %3",name _player,_mark,_dir];
	//Для поциков не на серве дирекшен пока не меняется...
	_send = false;
	{
		_swt_id = _x getVariable "swt_id";
		_unit = _x;
		_arr = call compile format ["swt_markers_sys_unit_id_%1", _swt_id];
		{
			if ((format ["SWT_MARKERS #%1/%2",(_x select 0), (_x select 1)]) == _mark) exitWith {
				if ((!isDedicated)and(player == _unit)) then {_mark setMarkerDirLocal _dir;};
				_correct = (_x select 2);
				_correct set [4,_dir];
				call compile format ["swt_markers_sys_unit_id_%1 set [_forEachIndex,[(_x select 0),(_x select 1),_correct]]", _swt_id];
				_send = true;
			};
		} forEach _arr;
		if (_send) then {
			swt_change_dir_PV_client = [_mark,_dir];
			(owner _x) publicVariableClient "swt_change_dir_PV_client";
		};
	} forEach (playableUnits+switchableUnits);
	//{
		_side = side _player;
		_arr = call compile format ["swt_markers_sys_side_%1", _side];
		{
			if ((format ["SWT_MARKERS #%1/%2",(_x select 0), (_x select 1)]) == _mark) exitWith {
				_correct = (_x select 2);
				_correct set [4,_dir];
				call compile format ["swt_markers_sys_side_%1 set [_forEachIndex,[(_x select 0),(_x select 1),_correct]]", _side];
			};
		} forEach _arr;
	//} forEach swt_markers_sys_sides;
};

swt_markers_sys_request_del_fnc = {
	//if (swt_markers_DisableLoc) exitWith {};
	_player = _this select 0;
	_mark = _this select 1;
	diag_log format ["SWT MARKERS SERVER: %1 DEL MARKER %2",name _player,_mark];
	//{
	for "_i" from 1 to swt_markers_sys_count do {
		_swt_id = _i;
		_arr = call compile format ["swt_markers_sys_unit_id_%1", _swt_id];
		call compile format ["swt_markers_sys_unit_id_%1 = []", _swt_id];
		{
			if ((format ["SWT_MARKERS #%1/%2",(_x select 0), (_x select 1)]) != _mark) then {
				call compile format ["swt_markers_sys_unit_id_%1 pushBack _x", _swt_id];
			};
		} forEach _arr;
	};

	//	{
		_side = side _player;
		_arr = call compile format ["swt_markers_sys_side_%1", _side];
		call compile format ["swt_markers_sys_side_%1 = []", _side];
		{
			if ((format ["SWT_MARKERS #%1/%2",(_x select 0), (_x select 1)]) != _mark) then {
				call compile format ["swt_markers_sys_side_%1 pushBack _x", _side];
			};
		} forEach _arr;
	//} forEach swt_markers_sys_sides;
	//} forEach (playableUnits+switchableUnits);
};
swt_markers_DisableLoc = false;
swt_markers_DisableLoc_fnc = {
	disableSerialization;
	_ctrl = _this;
	swt_markers_DisableLoc = !swt_markers_DisableLoc;
	if (swt_markers_DisableLoc) then {
		_ctrl ctrlSetText localize "STR_SWT_M_ENABLE";
	} else {
		_ctrl ctrlSetText localize "STR_SWT_M_DISABLE";
	};
};
0 spawn {

"swt_change_dir_PV_client" addPublicVariableEventHandler {
	if (swt_markers_DisableLoc) exitWith {};
	_params = (_this select 1);
	_mark = _params select 0;
	_dir = _params select 1;
	_mark setMarkerDirLocal _dir;
};

"swt_markers_sys_request_del" addPublicVariableEventHandler {
	(_this select 1) call swt_markers_sys_request_del_fnc;
};

"swt_markers_send" addPublicVariableEventHandler {
	(_this select 1) call swt_markers_sys_fnc_client;
};

"swt_markers_sys_load_client" addPublicVariableEventHandler {
	if (swt_markers_DisableLoc) exitWith {};
	_params = _this select 1;
	(_player select 1) sideChat format ["%1 загрузил %2 маркеров на карту. Уже существующие маркера на карте поставлены не будут.", name (_params select 1), count (_params select 0)];
	{
		_x call swt_markers_sys_create;
	} forEach (_params select 0);
};
swt_markers_available_channels = [localize "str_channel_global",localize "str_channel_side",localize "str_channel_command",localize "str_channel_group",localize "str_channel_vehicle",localize "str_channel_direct"];
swt_markers_unavailable_channels = getArray (missionconfigfile >> "disableChannels");
_arr = swt_markers_available_channels;
swt_markers_available_channels = [];
{
	if !(_forEachIndex in swt_markers_unavailable_channels) then {
		swt_markers_available_channels pushBack _x;
	};
} forEach _arr;

if (isServer) then {
	swt_markers_sys_unit_list = true;
	swt_markers_sys_sides = [];
	{
		//swt_markers_sys_unit_list pushBack [];
		call compile format ["swt_markers_sys_unit_id_%1 = []",(_forEachIndex+1)];
		if !((side _x) in swt_markers_sys_sides) then {
			call compile format ["swt_markers_sys_side_%1 = []",side _x];
			swt_markers_sys_sides pushBack (side _x);
		};
		_x setVariable ["swt_id",(_forEachIndex+1)];
		_x setVariable ["swt_markers_sys_index",0];
	} forEach (playableUnits+switchableUnits);
	swt_markers_sys_count = count (playableUnits+switchableUnits);
	swt_id_new = (count (playableUnits+switchableUnits) + 1);
	publicVariable "swt_markers_sys_unit_list";

	"swt_markers_sys_req_markers" addPublicVariableEventHandler {
		//_this spawn {
		_player = (_this select 1);
		//uisleep 2;
		if (isNil {_player getVariable "swt_id"}) then { //Такой случай может возникнуть, пока не определено в каких случаях. Аддон должен функционировать в любых условиях.
			diag_log format ["SWT MARKERS ERROR: ID %1 NOT FOUND (RESPAWN - BASE?), SEARCHING SIMILAR, CREATING NEW", name _player];
			_player setVariable ["swt_id",swt_id_new];
			swt_markers_sys_count = swt_id_new;
			swt_id_new = swt_id_new + 1;
			_player setVariable ["swt_markers_sys_index",0];
			_swt_id = 0;
			{
				if ((_x != _player) and ((leader group _x) != _x)) then {
					_swt_id = _x getVariable "swt_id";
				};
			} forEach (units group _player); //Ищем похожий

			if (_swt_id == 0) then {
				if (isNil {missionNamespace getVariable format ["swt_markers_sys_side_%1",side _player]}) then {
					diag_log format ["SWT_MARKERS ERROR: SIDE %1 DO NOT EXIST", side _player];
					call compile format ["swt_markers_sys_unit_id_%1 = + []",_player getVariable "swt_id"];
					diag_log "SWT MARKERS ERROR: ID AND SIDE NOT FOUND";
				} else {
					call compile format ["swt_markers_sys_unit_id_%1 = + swt_markers_sys_side_%2",_player getVariable "swt_id",side _player];
					diag_log format ["SWT MARKERS ERROR: SIDE %1 FOUND", side _player];
				};
			} else {
				call compile format ["swt_markers_sys_unit_id_%1 = + swt_markers_sys_unit_id_%2",_player getVariable "swt_id",_swt_id];
				diag_log format ["SWT MARKERS: SIMILAR ID: %1",_swt_id];
			};
			diag_log "SWT MARKERS ERROR: FIXED";
		};
		diag_log format ["SWT MARKERS SERVER: %1 ID:%2 REQUEST HIS MARKERS ",name _player,_player getVariable "swt_id"];
		(owner _player) publicVariableClient format ["swt_markers_sys_unit_id_%1",_player getVariable "swt_id"];
		swt_markers_sys_req_done = _player getVariable "swt_id";
		(owner _player) publicVariableClient "swt_markers_sys_req_done";
		//};
	};

	"swt_markers_clear_map" addPublicVariableEventHandler {
	//	_this spawn {
		_player = (_this select 1);
		diag_log format ["SWT MARKERS SERVER: %1 ID:%2 CLEAR MAP ",name _player,_player getVariable "swt_id"];
		call compile format ["swt_markers_sys_unit_id_%1 = []",_player getVariable "swt_id"];
		//};
	};

	"swt_markers_sys_client_send" addPublicVariableEventHandler {
		(_this select 1) call swt_markers_sys_client_send_fnc;
	};

	"swt_markers_sys_load" addPublicVariableEventHandler {
		(_this select 1) call swt_markers_sys_load_fnc;
	};

	"swt_change_dir_PV" addPublicVariableEventHandler {
		(_this select 1) call swt_change_dir_PV_fnc;
	};

	"swt_markers_request_m" addPublicVariableEventHandler {
		_player = _this select 1;
		swt_markers_request_m_done = missionNamespace getVariable format ["swt_markers_sys_unit_id_%1", _player getVariable "swt_id"];
		(owner _player) publicVariableClient "swt_markers_request_m_done";
	};
};

if (!isDedicated) then {
	//uisleep 10;
	waitUntil {!isNil "swt_markers_sys_unit_list"};
	waitUntil {!isNull player};
	swt_markers_sys_req_markers = player;
	publicVariableServer "swt_markers_sys_req_markers";
	if !(isServer) then {
		waitUntil {!isNil "swt_markers_sys_req_done"};
		swt_id = swt_markers_sys_req_done;
	} else {swt_id = player getVariable "swt_id"};
	if (isNil "swt_id") exitWith {diag_log "SWT MARKERS ERROR: ID NOT FOUND"};
	diag_log format ["SWT MARKERS: CONNECT. ID: %1",swt_id];

	_arr = call compile format ["swt_markers_sys_unit_id_%1", swt_id]; //Массив не актуален
	diag_log format ["SWT MARKERS: MY MARKERS: %1",_arr];
	{
		_x call swt_markers_sys_create;
	} forEach _arr;

};
};