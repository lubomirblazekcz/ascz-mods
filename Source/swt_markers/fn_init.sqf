#define	colorGlobalChannel [1,0,0,1]
#define	colorSideChannel [0.196*1.4, 0.592*1.4, 0.706*1.4, 1]
#define	colorCommandChannel [0.8275*1.4, 0.8196*1.4, 0.1961*1.4, 1]
#define	colorGroupChannel [208/255, 240/255, 192/255, 1]
#define	colorVehicleChannel [0.863*1.4, 0.584*1.4, 0.0*1.4, 1]
#define	colorDirectChannel [1, 1, 1, 1]
#define	colorPlayerChannel [0.8, 0.7, 1, 1]

swt_markers_disable = false;
swt_markers_load_enabled = true;
swt_markers_load_enabled_for = true;
swt_markers_load_enabled_when = true;
swt_markers_fast_enabled = false;
swt_markers_fast_enabled_for = true;
//SUFFER
if (isNil "swt_text_insertMarker") then {swt_text_insertMarker = ""};
if (isNil "swt_markers_pos_m") then {swt_markers_pos_m = [0,0]};
swt_markers_time=diag_tickTime;
swt_markers_d_cl_pic = {
	disableSerialization;
	private ['_display','_pos_click'];
	_display = _this select 0;
	ctrlSetFocus (_display displayCtrl 101);
	if ((diag_tickTime-swt_markers_time) < 0.3) then {
		swt_markers_time = diag_tickTime;
		_display = _this select 0;
    	//_dikCode = _this select 1;
   		_pos_click = [_this select 2, _this select 3];
    	_pos_to_chek = ctrlPosition (_display displayCtrl 102);
    	_pos_to_chek = [(_pos_to_chek select 0) + (_pos_to_chek select 2)/2,(_pos_to_chek select 1) + (_pos_to_chek select 3)/2];
    	if (([_pos_to_chek,_pos_click] call bis_fnc_distance2D) < ((ctrlPosition (_display displayCtrl 102)) select 3)/2) then {
			if (isNil "swt_markers_d_cl_but") then {
				((_this select 0) displayCtrl 15000) ctrlShow true;
				((_this select 0) displayCtrl 15001) ctrlShow true;
				swt_markers_d_cl_but = true;
			} else {
				((_this select 0) displayCtrl 15000) ctrlShow false;
				((_this select 0) displayCtrl 15001) ctrlShow false;
				swt_markers_d_cl_but = nil;
			};
		};
	} else {swt_markers_time = diag_tickTime};
};

swt_markers_fast_text_N = false;
swt_markers_fast_text_G = false;
swt_markers_fast_text_T = false;

swt_markers_fast_text = {
	disableSerialization;
	_ctrl = _this select 0;
	_action = _this select 1;
	ctrlSetFocus ((ctrlParent _ctrl) displayCtrl 101);
	switch (_action) do {
	    case "N": {
	    	if (isNil {_this select 2}) then {swt_markers_fast_text_N = !swt_markers_fast_text_N};
	    	if (swt_markers_fast_text_N) then {
	    		_ctrl ctrlSetTextColor [1,1,1,1];
	  		} else {
	  			_ctrl ctrlSetTextColor [1,1,1,0.25];
	  		};
		};

	    case "G": {
	     	if (isNil {_this select 2}) then {swt_markers_fast_text_G = !swt_markers_fast_text_G};
	    	if (swt_markers_fast_text_G) then {
	    		_ctrl ctrlSetTextColor [1,1,1,1];
	  		} else {
	  			_ctrl ctrlSetTextColor [1,1,1,0.25];
	  		};
	    };

	    case "T": {
	     	if (isNil {_this select 2}) then {swt_markers_fast_text_T = !swt_markers_fast_text_T};
	    	if (swt_markers_fast_text_T) then {
	    		_ctrl ctrlSetTextColor [1,1,1,1];
	  		} else {
	  			_ctrl ctrlSetTextColor [1,1,1,0.25];
	  		};
	    };
	};

};

swt_markers_fnc_Group_str = {
    private ["_str", "_x", "_str2"];
    _str = _this;
    _str = toArray _str;
    _str2 = [];
    for [{_x=2},{_x<=(count _str)-1},{_x=_x+1}] do {
        _str2 set [count _str2, _str select _x];
    };
    _str2 = toString _str2;
    _str2;
};

swt_markers_setChannel = {
	private ["_display","_text","_control"];
	disableSerialization;
	_display = (_this select 0) select 0;

	_text = _this select 1;
	_control = _display displayCtrl 1100;
	_control ctrlsetstructuredtext parsetext format ["<t size='0.8'>%1</t>","Description:"];
	if (_text != "") then {
	_control = _display displayCtrl 1100;
	//waitUntil {ctrltext _control == "Description:"};
	_control ctrlsetstructuredtext parsetext format ["<t size='0.8'>%1</t>",_text];

	switch (_text) do {
		case (localize "str_channel_side"): {_control ctrlSetTextColor colorSideChannel;};
		case (localize "str_channel_command"): {_control ctrlSetTextColor colorCommandChannel;};
		case (localize "str_channel_direct"): {_control ctrlSetTextColor [1,1,1,1]};
		case (localize "str_channel_global"): {_control ctrlSetTextColor colorGlobalChannel;};
		case (localize "str_channel_vehicle"): {_control ctrlSetTextColor colorVehicleChannel;};
		case (localize "str_channel_group"): {_control ctrlSetTextColor colorGroupChannel;};
	};
	};
};

swt_markers_set_butt = {
	private ["_display"];
	disableSerialization;
	_display = ctrlparent (_this select 0);
	_combo_color = [2100,2101,2102,2103,2104,2105];
	_combo_icon = [2106,2107,2108,2109,2110,2111];
	ctrlSetFocus (_display displayCtrl 101);
	if (isnil "RscDisplayInsertMarker_set_butt") then {
		{
		(_display displayCtrl _x) ctrlShow true;
		(_display displayCtrl _x) ctrlSetFade 0;
		(_display displayCtrl _x) ctrlCommit 0.2;
		} forEach (_combo_color+_combo_icon+[228]);
		RscDisplayInsertMarker_set_butt = true;
	} else {
		{
		(_display displayCtrl _x) ctrlSetFade 1;
		(_display displayCtrl _x) ctrlCommit 0.2;
		} forEach (_combo_color+_combo_icon+[228,1104]);
		waitUntil {ctrlCommitted (_display displayCtrl 2111)};
		{(_display displayCtrl _x) ctrlShow false} forEach (_combo_color+_combo_icon+[228,1104]);
		RscDisplayInsertMarker_set_butt = nil;
		swt_markers_adv_set = nil;
	//	(_display displayCtrl 1104) ctrlSetFade 0;
	//	(_display displayCtrl 1104) ctrlCommit 0;
	};
};

swt_markers_adv_set_butt = {
	private ["_display"];
	disableSerialization;
	_display = ctrlparent (_this select 0);
	ctrlSetFocus (_display displayCtrl 101);
	if (isnil "swt_markers_adv_set") then {
		swt_markers_adv_set = true;
		(_display displayCtrl 229) cbSetChecked swt_markers_show_butt;
		(_display displayCtrl 231) cbSetChecked swt_markers_show_icon;
		(_display displayCtrl 233) cbSetChecked swt_markers_show_color;
		(_display displayCtrl 235) cbSetChecked swt_markers_show_lb;
		(_display displayCtrl 237) cbSetChecked swt_markers_save_text;
		(_display displayCtrl 239) cbSetChecked swt_markers_fast_load;
		(_display displayCtrl 241) cbSetChecked swt_markers_show_info;
		(_display displayCtrl 243) cbSetChecked swt_markers_show_back;
		(_display displayCtrl 245) cbSetChecked swt_markers_save_mark;
		if (swt_markers_DisableLoc) then {
			(_display displayCtrl 350) ctrlSetText (localize "STR_SWT_M_ENABLE");
		} else {
			(_display displayCtrl 350) ctrlSetText (localize "STR_SWT_M_DISABLE");
		};
		(_display displayCtrl 451) ctrlSetText swt_markers_fast_text_T_saved;
		(_display displayCtrl 1104) ctrlShow true;
		(_display displayCtrl 1104) ctrlSetFade 0;
		(_display displayCtrl 1104) ctrlCommit 0.2;
	} else {
		swt_markers_adv_set = nil;
		(_display displayCtrl 1104) ctrlSetFade 1;
		(_display displayCtrl 1104) ctrlCommit 0.2;
		waitUntil {ctrlCommitted (_display displayCtrl 1104)};
		(_display displayCtrl 1104) ctrlShow false;
	};
};

swt_markers_lb_sel = {
	_num = ctrlIDC (_this select 0) - 2100;
	ctrlSetFocus (_display displayCtrl 101);
	switch (_num < 6) do {
	    case true: {
	    	_class = (_this select 0) lbData (_this select 1);
	    	swt_marker_color_slot_params set [_num,_class];
	    	profileNamespace setVariable ["swt_marker_color_slot_params", swt_marker_color_slot_params];
	    	saveProfileNamespace;
	    	_slot_color = getArray (configFile >> "CfgMarkerColors" >> _class >> "color");

			{
				if (typeName _x != "SCALAR") then {
					_slot_color set [_forEachIndex, call compile _x];
	    		};
	  		} forEach _slot_color;
	  		((ctrlParent (_this select 0)) displayCtrl (1200+_num)) ctrlSetTextColor [_slot_color select 0, _slot_color select 1, _slot_color select 2, 0.6];
			((ctrlParent (_this select 0)) displayCtrl (1200+_num)) ctrlSetActiveColor _slot_color;
	    };

	    case false: { //icon
	     	_class = (_this select 0) lbData (_this select 1);
	     	swt_marker_icon_slot_params set [_num-6,_class];
	    	profileNamespace setVariable ["swt_marker_icon_slot_params", swt_marker_icon_slot_params];
	    	saveProfileNamespace;
	    	_slot_icon = getText (configFile >> "CfgMarkers" >> _class >> "icon");
	    	((ctrlParent (_this select 0)) displayCtrl (1300+_num-6)) ctrlSetText _slot_icon;
	    	((ctrlParent (_this select 0)) displayCtrl (1400+_num-6)) ctrlSetText _slot_icon;
	    };
	};
};

swt_markers_lb_sel_adv = {
	ctrlSetFocus ((ctrlParent (_this select 0)) displayCtrl 101);
	switch (ctrlIDC (_this select 0)) do {
	    case 15000: {
			_class = (_this select 0) lbData (_this select 1);
			swt_markers_mark_color = _class;
			swt_marker_color_arr = getArray (configFile >> "CfgMarkerColors" >> swt_markers_mark_color >> "color");
			{
				if (typeName _x != "SCALAR") then {
		        	swt_marker_color_arr set [_forEachIndex, call compile _x];
		    	};
		    } forEach swt_marker_color_arr;
		    ((ctrlParent (_this select 0)) displayCtrl 102) ctrlSetTextColor swt_marker_color_arr;
		    {
		    	((ctrlParent (_this select 0)) displayCtrl _x) ctrlSetTextColor swt_marker_color_arr;
			} forEach controls_icon_pic;
	    };

	    case 15001: {
			_class = (_this select 0) lbData (_this select 1);
			swt_markers_mark_type = _class;
			swt_pic = getText (configFile >> "cfgMarkers" >> swt_markers_mark_type >> "icon");
			((ctrlParent (_this select 0)) displayCtrl 102) ctrlSetText swt_pic;
	    };
	};
};

swt_markers_unLoad = {
	swt_markers_load_done = nil;
	swt_markers_d_cl_but = nil;
	swt_markers_adv_set = nil;
	swt_markers_text = ctrlText ((_this select 0) displayCtrl 101);
	if !(swt_markers_save_mark) then {
		swt_markers_mark_type = swt_marker_icon_slot_params select 0;
		swt_markers_mark_color = swt_marker_color_slot_params select 0;
		swt_pic = getText (configFile >> "cfgMarkers" >> swt_markers_mark_type >> "icon");
		swt_marker_color_arr = getArray (configFile >> "CfgMarkerColors" >> swt_markers_mark_color >> "color");
		{
			if (typeName _x != "SCALAR") then {
				swt_marker_color_arr set [_forEachIndex, call compile _x];
			};
	    } forEach swt_marker_color_arr;
	    sweetk_i = 0;
	    sweetk_c = 0;
	};
};
//swt_markers_nil_done = false;
swt_markers_profileNil = {

	//if !(swt_markers_nil_done) then {
		if (isNil {profileNamespace getVariable "swt_markers_params_version"}) then {
			profileNamespace setVariable ["swt_markers_params_version", 10];
			saveProfileNamespace;
		};
		if ((profileNamespace getVariable "swt_markers_params_version") != 10) exitWith {
			systemChat (localize "STR_SWT_M_MESS_OLD");
			profileNamespace setVariable ["swt_markers_params_version", 10];
			saveProfileNamespace;
			call swt_def;
		};
		if (isNil {profileNamespace getVariable "swt_marker_color_slot_params"}) then {
			profileNamespace setVariable ["swt_marker_color_slot_params", ["ColorBlue","ColorRed","ColorGreen","ColorBlack","ColorWhite","ColorYellow"]];
			saveProfileNamespace;
		};
		swt_marker_color_slot_params = + (profileNamespace getVariable "swt_marker_color_slot_params");

		if (isNil {profileNamespace getVariable "swt_marker_icon_slot_params"}) then {
			profileNamespace setVariable ["swt_marker_icon_slot_params", ["mil_dot","o_inf","o_armor","hd_pickup","hd_warning","hd_unknown"]];
			saveProfileNamespace;
		};
		swt_marker_icon_slot_params = + (profileNamespace getVariable "swt_marker_icon_slot_params");

		if (isNil {profileNamespace getVariable "swt_marker_settings_params"}) then {
			profileNamespace setVariable ["swt_marker_settings_params", [false,true,true,false,false,false,true,true,true,""]];
			saveProfileNamespace;
		};
		swt_marker_settings_params = + (profileNamespace getVariable "swt_marker_settings_params");
		swt_markers_show_butt = swt_marker_settings_params select 0;
		swt_markers_show_icon = swt_marker_settings_params select 1;
		swt_markers_show_color = swt_marker_settings_params select 2;
		swt_markers_show_lb = swt_marker_settings_params select 3;
		swt_markers_fast_load = swt_marker_settings_params select 4;
		swt_markers_save_text = swt_marker_settings_params select 5;
		swt_markers_show_info = swt_marker_settings_params select 6;
		swt_markers_show_back = swt_marker_settings_params select 7;
		swt_markers_save_mark = swt_marker_settings_params select 8;
		swt_markers_fast_text_T_saved = swt_marker_settings_params select 9;

		swt_cfgMarkerColors = "true" configClasses (configfile >> "CfgMarkerColors");
		swt_cfgMarkers = "getNumber (_x >> 'scope') > 0" configClasses (configfile >> "CfgMarkers");
		swt_cfgMarkerColors_names = [];
		swt_cfgMarkers_names = [];
		{swt_cfgMarkerColors_names pushBack (configName _x)} forEach swt_cfgMarkerColors;
		{swt_cfgMarkers_names pushBack (configName _x)} forEach swt_cfgMarkers;
		swt_markers_text = "";
		swt_markers_loaded = false;

		if (isNil "swt_markers_mark_type") then {
			swt_markers_mark_type = swt_marker_icon_slot_params select 0;
			swt_pic = getText (configFile >> "cfgMarkers" >> swt_markers_mark_type >> "icon");
		};

		if (isNil "swt_markers_mark_color") then {
			swt_markers_mark_color = swt_marker_color_slot_params select 0;
			swt_marker_color_arr = getArray (configFile >> "CfgMarkerColors" >> swt_markers_mark_color >> "color");
			{
				if (typeName _x != "SCALAR") then {
					swt_marker_color_arr set [_forEachIndex, call compile _x];
				};
		    } forEach swt_marker_color_arr;
		};

	//	swt_markers_nil_done = true;

	//};
};

swt_def = {
	systemChat (localize "STR_SWT_M_MESS_DEF");
	profileNamespace setVariable ["swt_marker_color_slot_params", ["ColorBlue","ColorRed","ColorGreen","ColorBlack","ColorWhite","ColorYellow"]];
	profileNamespace setVariable ["swt_marker_icon_slot_params", ["mil_dot","o_inf","o_armor","hd_pickup","hd_warning","hd_unknown"]];
	profileNamespace setVariable ["swt_marker_settings_params", [false,true,true,false,false,false,true,true,true,""]];
	saveProfileNamespace;
	//swt_markers_nil_done = false;
	call swt_markers_profileNil;
	RscDisplayInsertMarker_info = nil;
	RscDisplayInsertMarker_set_butt = nil;
};

swt_load_comboboxes = {
	disableSerialization;
	_display = (_this select 0) select 0;
	_combo_color = [2100,2101,2102,2103,2104,2105];
	_combo_icon = [2106,2107,2108,2109,2110,2111];

	{
		_marker	= _x;
		_scope = getNumber (_marker >> "scope");
		_pic = getText (_marker >> "icon");
		_name = getText (_marker >> "name");

		{
			_index = (_display displayCtrl _x) lbAdd _name;
			//(_display displayCtrl _x) lbSetValue [_index, _forEachIndex];
			(_display displayCtrl _x) lbSetPicture [_index, _pic];
			(_display displayCtrl _x) lbSetData [_index, configName _marker];
			if ((configName _marker) == (swt_marker_icon_slot_params select _forEachIndex)) then {
				(_display displayCtrl _x) lbSetCurSel _index;
			};
		} forEach _combo_icon;
	} forEach swt_cfgMarkers;

	{
		_color_type	= _x;
		_swt_markers_mark_color = getArray (_color_type >> "color");
		_name = getText (_color_type >> "name");

				{ if (typeName _x != "SCALAR") then {
				_swt_markers_mark_color set [_forEachIndex, call compile _x];
			};
			} forEach _swt_markers_mark_color;

			{
				_index = (_display displayCtrl _x) lbAdd _name;
				(_display displayCtrl _x) lbSetPicture [_index, format["#(argb,8,8,3)color(%1,%2,%3,%4)", _swt_markers_mark_color select 0, _swt_markers_mark_color select 1, _swt_markers_mark_color select 2, _swt_markers_mark_color select 3]];
				(_display displayCtrl _x) lbSetData [_index, configName _color_type];
				if ((configName _color_type) == (swt_marker_color_slot_params select _forEachIndex)) then {
					(_display displayCtrl _x) lbSetCurSel _index;
				};

			} forEach _combo_color;
	} forEach swt_cfgMarkerColors;
};

sweetk_i = 0;
sweetk_c = 0;
sweetk_s = 1;

swt_bis_change = {

	private ["_display","_dikCode","_shiftState","_ctrlState","_altState","_control","_pic","_swt_markers_mark_color"];
	disableSerialization;
	_display =                  _this select 0;
	_dikCode =                  _this select 1;
	swt_markers_shiftState =               _this select 2;
	swt_markers_ctrlState =                _this select 3;
	swt_markers_altState =                 _this select 4;
	_control = (_display displayCtrl 102);
	_handled = false;
	if ((_dikCode == 0xC8) or (_dikCode == 0xD0)) then {
		_handled = true;
		if !(swt_markers_shiftState) then {

			switch (_dikCode) do {
			    case 0xD0: {
			    	sweetk_i = sweetk_i+1;
			    	if (sweetk_i>5) then {sweetk_i = 0};
			    };

			    case 0xC8: {
			     	sweetk_i = sweetk_i-1;
			    	if (sweetk_i<0) then {sweetk_i = 5};
			    };
			};


			swt_markers_mark_type = swt_marker_icon_slot_params select sweetk_i;
			swt_pic = getText (configFile >> "cfgMarkers" >> swt_markers_mark_type >> "icon");
			_control ctrlSetText swt_pic;

		};

		if (swt_markers_shiftState) then {

			switch (_dikCode) do {
			    case 0xD0: {
			    	sweetk_c = sweetk_c+1;
			    	if (sweetk_c>5) then {sweetk_c = 0};
			    };

			    case 0xC8: {
			     	sweetk_c = sweetk_c-1;
			     	if (sweetk_c<0) then {sweetk_c = 5};
			    };
			};
			swt_markers_mark_color = swt_marker_color_slot_params select sweetk_c;
			swt_marker_color_arr = getArray (configFile >> "CfgMarkerColors" >> swt_markers_mark_color >> "color");
			{
				if (typeName _x != "SCALAR") then {
		        	swt_marker_color_arr set [_forEachIndex, call compile _x];
		    	};
		    } forEach swt_marker_color_arr;
		    _control ctrlSetTextColor swt_marker_color_arr;
		    {(_display displayCtrl _x) ctrlSetTextColor swt_marker_color_arr} forEach controls_icon_pic;
		};
	};
	if ((_dikCode == 0xCB) or (_dikCode == 0xCD)) then {
		if (swt_markers_shiftState) then {
			_curr_num = swt_markers_available_channels find swt_text_insertMarker;
			switch (_dikCode) do {
			    case 0xCB: {
			    	_curr_num = _curr_num-1;
			     	if (_curr_num<0) then {_curr_num = (count swt_markers_available_channels) - 1};
			    };

			    case 0xCD: {
			     	_curr_num = _curr_num+1;
			    	if (_curr_num>((count swt_markers_available_channels) - 1)) then {_curr_num = 0};
			    };
			};
			swt_text_insertMarker = swt_markers_available_channels select _curr_num;
			[[_display],swt_text_insertMarker] call swt_markers_setChannel;
		};
	};
	if (swt_markers_ctrlState) then {
		switch (_dikCode) do {
		    case 0x14: {
		    	[_display displayCtrl 901,"T"] call swt_markers_fast_text;
		    };

		    case 0x22: {
		     	[_display displayCtrl 903,"G"] call swt_markers_fast_text;
		    };

		    case 0x31: {
		     	[_display displayCtrl 902,"N"] call swt_markers_fast_text;
		    };
		};
	};
	_handled;
};

swt_markers_click_chann = {
	disableSerialization;
	_display = _this;
	_curr_num = swt_markers_available_channels find swt_text_insertMarker;
	_curr_num = _curr_num+1;
	if (_curr_num>((count swt_markers_available_channels) - 1)) then {_curr_num = 0};
	swt_text_insertMarker = swt_markers_available_channels select _curr_num;
	[[_display],swt_text_insertMarker] call swt_markers_setChannel;
};

swt_get_mark_param = {
	_mark = _this;
	_markerType  = markerType _mark;
	_markerColor = markerColor _mark;
	_markerPos   = markerPos _mark;
	_markerText  = markerText _mark;
	_markerDir   = markerDir _mark;
	_markerSize  = markerSize _mark;
	_markerAlpha = markerAlpha _mark;

	[_mark,[_markerType,_markerColor,_markerPos,_markerText,_markerDir,_markerSize,_markerAlpha]];
};

swt_markers_cb_butt = {
	disableSerialization;
	_ctrl = ((_this select 0) select 0);
	_display = ctrlParent _ctrl;
	ctrlSetFocus (_display displayCtrl 101);
	_action = (_this select 1);
	_controls_color = [1200,1201,1202,1203,1204,1205];
	_controls_icon = [1300,1301,1302,1303,1304,1305];
	_combo_color = [2100,2101,2102,2103,2104,2105];
	_combo_icon = [2106,2107,2108,2109,2110,2111];
	switch (_this select 1) do {
		case 'SHOW OK': {
		//Столько кода ради одной особо незаметной свистелки-перделки, но приятной
			_show_coef = 2;
			if (swt_markers_show_info) then {_show_coef = 2} else {_show_coef = 1};
			_text = _display displayctrl 101;
			_buttonOK = _display displayctrl 1;
			_buttonCancel = _display displayctrl 2;
			_pos = ctrlposition _text;
			_posX = (_pos select 0);
			_posY = _pos select 1;
			_posW = _pos select 2;
			_posH = _pos select 3;
			_pos set [0,_posX];
			if (isnil "RscDisplayInsertMarker_info") then {_pos set [1,_posY + _show_coef * _posH + 2 * 0.005]} else {_pos set [1,_posY + 10 * _posH + 3 * 0.005]};
			_pos set [2,_posW / 2 - 0.005];
			_pos set [3,_posH];

			_combo_color = [2100,2101,2102,2103,2104,2105];
			_combo_icon = [2106,2107,2108,2109,2110,2111];

			swt_markers_show_butt = !(swt_markers_show_butt);
			swt_marker_settings_params set [0,swt_markers_show_butt];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];

			_control_button = (_display displayCtrl 2400);
			_pos_control_button = (ctrlPosition _control_button);
			_butt_cor_pos = -1.1*(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));

			if (swt_markers_show_butt) then {_butt_cor_pos = 1.1*(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))};
			{
				_control = (_display displayCtrl _x);
				_pos_control = (ctrlPosition _control);
				_control ctrlSetPosition [_pos_control select 0, (_pos_control select 1)+_butt_cor_pos, _pos_control select 2, _pos_control select 3];
				_control ctrlCommit 0.2;
			} forEach (_combo_color+_combo_icon+[1104,228]);

			if !(swt_markers_show_butt) then {
				{
					(_display displayCtrl _x) ctrlSetPosition [(ctrlPosition (_display displayCtrl _x)) select 0,(ctrlPosition (_display displayCtrl _x)) select 1,(ctrlPosition (_display displayCtrl _x)) select 2,0];
					(_display displayCtrl _x) ctrlCommit 0.2;
				} forEach [1,2];
			} else {
				_buttonOk ctrlsetposition _pos;
				_buttonOk ctrlcommit 0.2;
				_pos set [0,_posX + _posW / 2];
				_pos set [2,_posW / 2];
				_pos set [3,_posH];
				_buttonCancel ctrlsetposition _pos;
				_buttonCancel ctrlcommit 0.2;
			};
	    };

	    case 'SHOW ICON': {
			swt_markers_show_icon = !(swt_markers_show_icon);
			swt_marker_settings_params set [1,swt_markers_show_icon];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];
			saveProfileNamespace;
			if (swt_markers_show_icon) then {
				{
					_control = _display displayCtrl _x;
					_control ctrlSetFade 1;
					_control ctrlCommit 0;
					_control ctrlShow true;
					_control ctrlSetFade 0;
					_control ctrlCommit 0.2;
				} forEach (_controls_icon+controls_icon_pic);
			} else {
				{
					_control = _display displayCtrl _x;
					_control ctrlSetFade 1;
					_control ctrlCommit 0.2;
				} forEach (_controls_icon+controls_icon_pic);

				{
					_control = _display displayCtrl _x;
					waitUntil {ctrlCommitted _control};
					_control ctrlShow false;
				} forEach (_controls_icon+controls_icon_pic);
			};
	    };

	     case 'SHOW COLOR': {
			swt_markers_show_color = !(swt_markers_show_color);
			swt_marker_settings_params set [2,swt_markers_show_color];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];
			saveProfileNamespace;
				if (swt_markers_show_color) then {
				{
					_control = _display displayCtrl _x;
					_control ctrlSetFade 1;
					_control ctrlCommit 0;
					_control ctrlShow true;
					_control ctrlSetFade 0;
					_control ctrlCommit 0.2;
				} forEach (_controls_color);
			} else {
				{
					_control = _display displayCtrl _x;
					_control ctrlSetFade 1;
					_control ctrlCommit 0.2;
				} forEach (_controls_color);

				{
					_control = _display displayCtrl _x;
					waitUntil {ctrlCommitted _control};
					_control ctrlShow false;
				} forEach (_controls_color);
			};
	    };

	    case 'SHOW LB': {
	    	swt_markers_show_lb = !(swt_markers_show_lb);
			swt_marker_settings_params set [3,swt_markers_show_lb];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];
			saveProfileNamespace;
			if (swt_markers_show_lb) then {
				{
					_control = _display displayCtrl _x;
					if (ctrlShown _control) exitWith {};
					_control ctrlSetFade 1; _control ctrlCommit 0;
					_control ctrlShow true;
					_control ctrlSetFade 0;
					_control ctrlCommit 0.2;
				} forEach [15000,15001];
			} else {
				{
					_control = _display displayCtrl _x;
					if !(ctrlShown _control) exitWith {};
					_control ctrlSetFade 1;
					_control ctrlCommit 0.2;
				} forEach [15000,15001];

				{
					_control = _display displayCtrl _x;
					waitUntil {ctrlCommitted _control};
					_control ctrlShow false;
					_control ctrlSetFade 0;
					_control ctrlCommit 0;
				} forEach [15000,15001];
			};
	    };

	    case 'FAST LOAD': {
	    	swt_markers_fast_load = !swt_markers_fast_load;
	    	swt_marker_settings_params set [4,swt_markers_fast_load];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];
			saveProfileNamespace;
		};

		case 'SAVE TEXT': {
			swt_markers_save_text = !(swt_markers_save_text);
	    	swt_marker_settings_params set [5,swt_markers_save_text];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];
			saveProfileNamespace;
		};

		case 'SHOW INFO': {
			swt_markers_show_info = !(swt_markers_show_info);
	    	swt_marker_settings_params set [6,swt_markers_show_info];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];
			saveProfileNamespace;
			if (!isnil "RscDisplayInsertMarker_info") then {
				['buttonclick',[((findDisplay 54) displayctrl 2400)]] spawn compile preprocessfilelinenumbers '\swt_markers_a3\RscDisplayInsertMarker.sqf';
				uiSleep 0.25;
			};

			waitUntil {ctrlCommitted (_display displayCtrl 1)};
			_butt_cor_pos = -1.1*(1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25));


			if (swt_markers_show_info) then {_butt_cor_pos = 1.1*(1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))};
			{
				_control = (_display displayCtrl _x);
				_pos_control = (ctrlPosition _control);
				_control ctrlSetPosition [_pos_control select 0, (_pos_control select 1)+_butt_cor_pos, _pos_control select 2, _pos_control select 3];
				_control ctrlCommit 0.2;
			} forEach (_combo_color+_combo_icon+[1104,228,1,2]);

			_pos = ctrlPosition (_display displayCtrl 2400);
			(_display displayCtrl 2400) ctrlSetPosition [_pos select 0,_pos select 1,_pos select 2, if (swt_markers_show_info) then {1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)} else {0}];
			(_display displayCtrl 2400) ctrlCommit 0.2;
		};

		case 'SHOW BACK': {
			swt_markers_show_back = !(swt_markers_show_back);
	    	swt_marker_settings_params set [7,swt_markers_show_back];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];
			saveProfileNamespace;
			if (swt_markers_show_back) then {
				for "_i" from 0 to 70 do {
					uiSleep (0.2/70);
					(_display displayCtrl 1100) ctrlSetBackgroundColor [0,0,0,(_i/100)];
				};
			} else {
				for "_i" from 70 to 0 step -1 do {
					uiSleep (0.2/70);
					(_display displayCtrl 1100) ctrlSetBackgroundColor [0,0,0,(_i/100)];
				};
			};
		};
		case 'SAVE MARK': {
			swt_markers_save_mark = !(swt_markers_save_mark);
	    	swt_marker_settings_params set [8,swt_markers_save_mark];
			profileNamespace setVariable ["swt_marker_settings_params", swt_marker_settings_params];
			saveProfileNamespace;
		};
	};
};



swt_str_Replace = {
	private ["_str","_old","_new","_out","_tmp","_jm","_la","_lo","_ln","_j"];
	_str = _this select 0;
	_arr = toArray _str;
	_la = count _arr;
	_old = _this select 1;
	_new = _this select 2;
	_lo = count (toArray _old);
	_ln = count (toArray _new);
	_out = "";
	{
		_tmp = "";
		if (_forEachIndex <= _la -_lo) then {
			for "_j" from _forEachIndex to ( _forEachIndex + _lo - 1) do {
				_tmp = _tmp + toString ([_arr select _j]);
			};
		};
		if (_tmp == _old) then {
			_out = _out + _new;
			_forEachIndex = _forEachIndex + _lo - 1;
		} else {
			_out = _out + toString ([_arr select _forEachIndex]);
		};
	} forEach _arr;
	_out
};
swt_markers_fnc_save_markers_clip = {
	if (isServer) then {
		copyToClipboard str (missionNamespace getVariable format ['swt_markers_sys_unit_id_%1', swt_id]);
	} else {
		0 spawn {
			swt_markers_request_m = player;
			publicVariableServer "swt_markers_request_m";
			waitUntil {!isNil "swt_markers_request_m_done"};
			_copy = + swt_markers_request_m_done;
			copyToClipboard (str _copy);
			systemChat "Markers was saved";
		};
	};
};

swt_markers_fnc_save_markers = {
	private ["_arr"];
	if (isServer) then {
		_arr = missionNamespace getVariable format ["swt_markers_sys_unit_id_%1", player getVariable "swt_id"];
		_arr_copy = [];
		{_arr_copy pushBack _x} forEach _arr;
		profileNamespace setVariable ["swt_markers_save_arr", _arr_copy];
		saveProfileNamespace;
		systemChat format [localize "STR_SWT_M_MESS_SAVEDMARKS", count _arr_copy];
	} else {
		0 spawn {
			swt_markers_request_m = player;
			publicVariableServer "swt_markers_request_m";
			waitUntil {!isNil "swt_markers_request_m_done"};
			_copy = + swt_markers_request_m_done;
			profileNamespace setVariable ["swt_markers_save_arr", _copy];
			saveProfileNamespace;
			systemChat format [localize "STR_SWT_M_MESS_SAVEDMARKS", count swt_markers_request_m_done];
			swt_markers_request_m_done = nil;
			systemChat "Markers was saved";
		};
	};
};

swt_markers_fnc_load_markers = {
	if ((swt_markers_load_enabled)and(((swt_markers_load_enabled_for) and (((leader player == player) or (((effectiveCommander (vehicle player)) == player) and (vehicle player != player))))) or (!swt_markers_load_enabled_for))and((swt_markers_load_enabled_when)or((!swt_markers_load_enabled_when)and!(time>0)))) then {
		private ["_arr"];
		_arr =  (if (isNil {_this select 1}) then {profileNamespace getVariable "swt_markers_save_arr"} else {call compile ("[] + " + ([(_this select 1),";",""] call swt_str_Replace) + " + []")}); //Тому, кто сможет обойти, подарю коньяк :)
		if !(_arr isEqualTo []) then {
			if (((count _arr) > 750) and isMultiplayer) exitWith {systemChat (format [localize "STR_SWT_M_MESS_CANTLOAD", count _arr, 750]);};
			swt_markers_sys_load = [_arr,player];
			publicVariableServer "swt_markers_sys_load";
			if (isServer) then {swt_markers_sys_load call swt_markers_sys_load_fnc;};
			((_this select 0) select 0) ctrlEnable false;
			swt_markers_loaded = true;
		} else {
			systemChat (localize "STR_SWT_M_MESS_NOMARKS");
		};
	} else {systemChat (localize "STR_SWT_M_MESS_CANTDO")};
};




swt_markers_scale = {
	if (swt_markers_shiftState) then {
		disableSerialization;
		_coef = _this select 1;
		_display = _this select 0;
	  	if (_coef > 0) then {
	        if (sweetk_s < 1.3) then { //увеличиваем
	            sweetk_s = sweetk_s + 0.3;
	        };
	    } else {
	        if (sweetk_s > 0.7) then { //убавлееееениееее!
	            sweetk_s = sweetk_s - 0.3;
	        };
	    };
	    call swt_markers_scale_kurbat_nyash;
	};
};

swt_markers_scale_kurbat_nyash = {
	_pos = ctrlPosition (_display displayCtrl 102);//[x,y,w,h]

	_c_x = (_pos select 0) + ((_pos select 2)/2);
	_c_y = (_pos select 1) + ((_pos select 3)/2);
	_new_h = (0.0666667*sweetk_s) ;
	_new_w = (0.05*sweetk_s) ;
	_new_x = _c_x -(_new_w/2) ;
	_new_y = _c_y -(_new_h/2) ;

	(_display displayCtrl 102) ctrlSetPosition [
	_new_x,
	_new_y,
	_new_w,
	_new_h
	];
	(_display displayCtrl 102) ctrlCommit 0;
};


swt_start_dir = {
	disableSerialization;
    _ctrl = _this select 0;
    _display = ctrlParent _ctrl;
    _dikCode = _this select 1;
    _pos_click1 = _this select 2;
    _pos_click2 = _this select 3;
    _shift = _this select 4;
    _ctrlKey = _this select 5;
    _alt = _this select 6;
	if (!_shift and !_ctrlKey and _alt) then {
		_pos_click = [_pos_click1,_pos_click2];
		{
			_str_check = (toArray _x);
			_str_check resize 11;
			_str_check = toString _str_check;
			if (_str_check == "SWT_MARKERS") then {
				_pos = getMarkerPos _x;
				_pos = _ctrl ctrlMapWorldToScreen _pos;
				if (([_pos,_pos_click] call bis_fnc_distance2D) < 0.025) exitWith {
					swt_mark_to_change_dir = _x;
					hintSilent (localize "STR_SWT_M_MESS_DIR");
					systemChat (localize "STR_SWT_M_MESS_DIR");
				};
			};
		} forEach allMapMarkers;
	};
	/*
	if (_shift and !_ctrlKey and !_alt) then {
		if (isNil "swt_markers_way_first") then {
			swt_markers_way_first_pos = (_display displayCtrl 51) ctrlMapScreenToWorld swt_markers_pos_m;
			if (isNil {(swt_markers_way_first_pos nearRoads 16) select 0}) exitWith {hint "SWT MARKERS: Рядом нет дорог"};
			swt_markers_way_first = true;
			hint "SWT MARKERS: маршрутная точка 1 установлена";
		} else {
			swt_markers_way_second_pos = (_display displayCtrl 51) ctrlMapScreenToWorld swt_markers_pos_m;
			if (isNil {(swt_markers_way_second_pos nearRoads 16) select 0}) exitWith {hint "SWT MARKERS: Рядом нет дорог"};
			hint "SWT MARKERS: маршрутная точка 2 установлена";
			swt_markers_way_first = nil;
			[swt_markers_way_first_pos,swt_markers_way_second_pos] spawn swt_markers_legendagy;
		};
	};
	*/
};

swt_change_dir = {
    if ((_this select 5)and((_this select 1) == 0)) then {
    	displayNull call compile preprocessFileLineNumbers '\swt_markers_a3\swt_markers_sys_sendMark.sqf';
    };
	if !(isNil "swt_mark_to_change_dir") then {
		disableSerialization;
		_ctrl = _this select 0;
		_pos_click = [_this select 2,_this select 3];
		_pos = getMarkerPos swt_mark_to_change_dir;
		_pos = (_ctrl) ctrlMapWorldToScreen _pos;
		_direction = ((_pos select 0) - (_pos_click select 0)) atan2 ((_pos select 1) - (_pos_click select 1));
		if (_direction < 0) then {_direction = _direction + 360};
		_direction = - _direction; //Я хз почему, подбирал
		//hint str _direction;
		swt_mark_to_change_dir setMarkerDirLocal _direction;
		swt_change_dir_PV = [swt_mark_to_change_dir,_direction,player];
		publicVariable "swt_change_dir_PV";
		if isServer then {swt_change_dir_PV call swt_change_dir_PV_fnc};
		swt_mark_to_change_dir = nil;
	};
};
swt_markers_shiftState =               false;
swt_markers_ctrlState =                false;
swt_markers_altState =                 false;

swt_markers_UP = {
	_shiftState =               _this select 2;
	_ctrlState =                _this select 3;
	_altState =                 _this select 4;
	_dikCode = _this select 1;
	if (_dikCode in [42,54]) then {
		swt_markers_shiftState = false;
	};
	if (_dikCode in [29,157]) then {
		swt_markers_ctrlState = false;
	};
	if (_dikCode in [56,184]) then {
		swt_markers_altState = false;
	};
	false
};

swt_markers_legendagy = {
//Напишем GPS. За основу возьмём Алгоритм Дейкстры.
//Короче, я запутался, всё.
	scopeName "swt_loop";
	_rdischeck = 40;
	_first_pos = _this select 0;
	_second_pos = _this select 1;
	_first_road = (_first_pos nearRoads 16) select 0;
	_second_road = (_second_pos nearRoads 16) select 0;
	_loop = true;
	_g = 0;
	swt_black_roads = [_first_road];
	swt_way_roads = [_first_road];
	while {_loop} do {
		if (_first_road isEqualTo _second_road) exitWith {hint "done"; _loop = false};
	    _roads = ((position _first_road) nearRoads _rdischeck) - swt_black_roads;
    	if ((_roads isEqualTo []) or (count _roads < 3)) then {
    		_exit = false;
    		for "_k" from 1 to 2 do {
    			_roads = ((position _first_road) nearRoads (_rdischeck + 5*_k)) - swt_black_roads;
    			if !(_roads isEqualTo []) exitWith {_exit = true};
    		};
    		if !(_exit) then {
		    	for "_i" from ((count swt_black_roads)-1) to 0 step -1 do {
		    		if (isNil {(swt_black_roads select _i)}) then {
			    		_roads1 = ((swt_black_roads select _i) nearRoads 40);
			    		_roads = ((swt_black_roads select _i) nearRoads 40) - swt_black_roads;
			    		if (_roads isEqualTo []) then {swt_way_roads = swt_way_roads - _roads1} else {/*if (true) exitWith {hint "found"};*/};
		    		};
		    	};
		    	if (_roads isEqualTo []) exitWith {hint (localize "STR_SWT_M_MESS_WAYERROR");breakOut "swt_loop"};
		    };
    	};
    	//if (count _roads > 1) then {
		    _fs = [];
			{
				_fs pushBack (_x distance _second_road);
			} forEach _roads;
			_f = _fs select 0;
			{
				if (_x < _f) then {
					_f = _x;
				};
			} forEach _fs;
			//_g = _g + (_first_road distance (_roads select (_fs find _f)));
			_first_road = _roads select (_fs find _f);
		//} else {_first_road = _roads select 0;};
		swt_black_roads pushBack _first_road;
		swt_way_roads pushBack _first_road;
	};
	/*
	{
		[str random 2213132328,["",getPosATL _x,swt_markers_mark_type,swt_markers_mark_color,0,sweetk_s]] call swt_markers_sys_create;
	} forEach swt_way_roads;
	*/
};

swt_markers_info_buttons = {
	disableSerialization;
	private ["_pos","_act","_control","_display"];
	_control = _this select 0;
	_display = ctrlParent (_this select 0);
	_act = _this select 1;
	switch (_act) do {
	    case 'info': {
	    	_pos = ctrlPosition (_display displayCtrl 1101);
	    	(_display displayCtrl 1101) ctrlSetPosition [_pos select 0, _pos select 1, _pos select 2,29 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)];
	    	(_display displayCtrl 1101) ctrlCommit 0;
	    	(_display displayCtrl 1101) ctrlsetstructuredtext parsetext format [localize "STR_SWT_M_INFOTXT",
					"#F88379"
				];
	    };

	     case 'sett': {
	     	_pos = ctrlPosition (_display displayCtrl 1101);
	    	(_display displayCtrl 1101) ctrlSetPosition [_pos select 0, _pos select 1, _pos select 2,20 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)];
	    	(_display displayCtrl 1101) ctrlCommit 0;
	    	(_display displayCtrl 1101) ctrlsetstructuredtext parsetext format [
					localize "STR_SWT_M_SETTXT",
					"#F88379"
				];
	    };

	     case 'author': {
	     	_pos = ctrlPosition (_display displayCtrl 1101);
	    	(_display displayCtrl 1101) ctrlSetPosition [_pos select 0, _pos select 1, _pos select 2,10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)];
	    	(_display displayCtrl 1101) ctrlCommit 0;
	    	(_display displayCtrl 1101) ctrlsetstructuredtext parsetext format [
					localize "STR_SWT_M_ATXT",
					"#F88379","http://goo.gl/AcloSD","http://goo.gl/rc5eKA"
				];
	    };
	};
};

call compile preprocessFileLineNumbers '\swt_markers_a3\swt_markers_sys_fncs.sqf';
call swt_markers_profileNil;
[] spawn {


disableSerialization;
waitUntil {(!isNull (findDisplay 12)) or (!isNull (findDisplay 37)) or (!isNull (findDisplay 52)) or (!isNull (findDisplay 53))};
_mapDisplay = ({if !(isNull (findDisplay _x)) exitWith {findDisplay _x}} forEach [37,52,53,12]);
//if (isNull '_mapDisplay') exitWith {diag_log "SWT MARKERS: DISPLAY ERROR";};

diag_log format ["SWT MARKERS: MY MAP DISPLAY %1",_mapDisplay];


_id1 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseButtonDown", "_this call swt_start_dir"];
_id2 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseButtonDown", "_this call swt_change_dir"];
_id3 = (_mapDisplay) displayAddEventHandler ["KeyDown", "_this call swt_sys_del"];
_id4 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseMoving", "_this call swt_sys_pos_m"];
_id5 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseButtonDown", "if ((_this select 4) and (_this select 6) and !(_this select 5)) then {swt_markers_fast_way = true};"];
_id6 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseButtonUp", "swt_markers_fast_way = false"];

sleep 1;
(_mapDisplay displayCtrl 51) ctrlRemoveEventHandler ["MouseButtonDown",_id1];
(_mapDisplay displayCtrl 51) ctrlRemoveEventHandler ["MouseButtonDown",_id2];
(_mapDisplay) displayRemoveEventHandler ["KeyDown",_id3];
(_mapDisplay displayCtrl 51) ctrlRemoveEventHandler ["MouseMoving",_id4];
(_mapDisplay displayCtrl 51) ctrlRemoveEventHandler ["MouseButtonDown",_id5];
(_mapDisplay displayCtrl 51) ctrlRemoveEventHandler ["MouseButtonUp",_id6];
waitUntil {(!isNull (findDisplay 12)) or (!isNull (findDisplay 37)) or (!isNull (findDisplay 52)) or (!isNull (findDisplay 53))};
diag_log format ["SWT MARKERS: MY MAP DISPLAY %1",_mapDisplay];
_mapDisplay = ({if !(isNull(findDisplay _x)) exitWith {findDisplay _x}} forEach [12,37,52,53]);
_id1 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseButtonDown", "_this call swt_start_dir"];
_id2 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseButtonDown", "_this call swt_change_dir"];
_id3 = (_mapDisplay) displayAddEventHandler ["KeyDown", "_this call swt_sys_del"];
_id4 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseMoving", "_this call swt_sys_pos_m"];
_id5 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseButtonDown", "if ((_this select 4) and (_this select 6) and !(_this select 5)) then {swt_markers_fast_way = true};"];
_id6 = (_mapDisplay displayCtrl 51) ctrlAddEventHandler ["MouseButtonUp", "swt_markers_fast_way = false"];
};