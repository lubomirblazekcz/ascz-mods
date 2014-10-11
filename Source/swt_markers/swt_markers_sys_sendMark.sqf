disableSerialization;
if (swt_markers_disable) exitWith {systemChat (localize "STR_SWT_M_MESS_DISABLED"); (_this closeDisplay 0); true};
//_index = (player getVariable "swt_markers_sys_index") + 1;
//player setVariable ["swt_markers_sys_index",_index,true]; //publicVarServer?

_display = ({if !(isNull(findDisplay _x)) exitWith {findDisplay _x}} forEach [37,52,53,12]);
_text = "" + (if (swt_markers_fast_text_G) then {((str (group player)) call swt_markers_fnc_Group_str) + " "} else {""}) + (if (swt_markers_fast_text_N) then {name player + " "} else {""}) + (if (swt_markers_fast_text_T) then {swt_markers_fast_text_T_saved + " "} else {""});
_WorldCoord = [];
if (_this isEqualTo displayNull) then {
	_WorldCoord = (_display displayCtrl 51) ctrlMapScreenToWorld swt_markers_pos_m;
	if (swt_markers_save_text) then {_text = _text + swt_markers_text};
} else {
	_WorldCoord = (_display displayCtrl 51) ctrlMapScreenToWorld [((ctrlPosition (_this displayCtrl 102)) select 0)+((ctrlPosition (_this displayCtrl 102)) select 2)/2,((ctrlPosition (_this displayCtrl 102)) select 1)+((ctrlPosition (_this displayCtrl 102)) select 3)/2];
	_display = _this;
	_text =  _text + ctrlText (_display displayctrl 101);
};
//_index_pl = player getVariable "swt_id";
//_mname = format ["SWT_MARKERS #%1/%2",_index,_index_pl];
swt_markers_mark_dir = 0;
_send = [player,[_text,_WorldCoord,swt_cfgMarkers_names find swt_markers_mark_type,swt_cfgMarkerColors_names find swt_markers_mark_color,swt_markers_mark_dir,sweetk_s]];
switch (swt_text_insertMarker) do {

	case (localize "str_channel_side"): {
		_send pushBack "SIDE";
	};

	case (localize "str_channel_command"): {
		_send pushBack "COMMAND";
	};

	case (localize "str_channel_direct"): {
		_send pushBack "DIRECT";
	};

	case (localize "str_channel_global"): {
		_send pushBack "GLOBAL";
	};

	case (localize "str_channel_vehicle"): {
		_send pushBack "VEHICLE";
	};

	case (localize "str_channel_group"): {
		_send pushBack "GROUP";
	};

    default {
     	_send pushBack "GROUP";
    };
};

swt_markers_sys_client_send = _send;
diag_log "SWT MARKERS: I PUT MARKER. PARAMS: ";
diag_log _send;
publicVariableServer "swt_markers_sys_client_send";
//(_send select 2) call swt_markers_sys_fnc_client;
if ((isServer) and !(isMultiplayer)) then {_send call swt_markers_sys_client_send_fnc;};
if !(swt_markers_ctrlState) then {(_this closeDisplay 0)};
true