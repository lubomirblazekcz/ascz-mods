#define SWT_W 0.025
#define SWT_H 0.02
disableSerialization;
/*
 * Author: swatSTEAM
 * Date: 2014
 * Contact: @swat_steam
 */

//Тут всё криво, на основе бисовский дисплей, лучше перепилить на свой. чтоб всё было в call... Когда-нибудь.

_display = (_this select 0) select 0;
_combo_color = [2100,2101,2102,2103,2104,2105];
_combo_icon = [2106,2107,2108,2109,2110,2111];
_controls_color = [1200,1201,1202,1203,1204,1205];
_controls_icon = [1300,1301,1302,1303,1304,1305];
controls_icon_pic = [1400,1401,1402,1403,1404,1405];
swt_markers_shiftState =               false;
swt_markers_ctrlState =                false;
swt_markers_altState =                 false;
//Скрываем всё
{
	(_display displayCtrl _x) ctrlShow false;
} forEach (_combo_color+_combo_icon+controls_icon_pic+_controls_color+_controls_icon+[15000,15001,900,1103,1104,2400,228,1100]);

call swt_markers_scale_kurbat_nyash;

if (swt_markers_save_text) then {(_display displayCtrl 101) ctrlSetText swt_markers_text};
if !(swt_markers_show_butt) then {
	{
		(_display displayCtrl _x) ctrlSetPosition [(ctrlPosition (_display displayCtrl _x)) select 0,(ctrlPosition (_display displayCtrl _x)) select 1,(ctrlPosition (_display displayCtrl _x)) select 2,0];
		(_display displayCtrl _x) ctrlCommit 0;
	} forEach [1,2];
};
if !(swt_markers_show_back) then {
	(_display displayCtrl 1100) ctrlSetBackgroundColor [0,0,0,0];
};
//fast
/*
_this spawn {
	disableSerialization;
	_display = (_this select 0) select 0;
	if (!isNil "swt_markers_fast") exitWith {
		_display call compile preprocessFileLineNumbers '\swt_markers_a3\swt_markers_sys_sendMark.sqf';
		//ctrlActivate (_display displayCtrl 1);
		swt_markers_fast = nil;
	};
};
*/

//В какой канал ставим
_this call swt_markers_setChannel;

_this spawn {
//Перемещаем контролы основные
disableSerialization;
	_display = (_this select 0) select 0;
	(_display displayCtrl 102) ctrlSetText swt_pic;
	(_display displayCtrl 102) ctrlSetTextColor swt_marker_color_arr;
	_controls_color = [1200,1201,1202,1203,1204,1205];
	_controls_icon = [1300,1301,1302,1303,1304,1305];
	controls_icon_pic = [1400,1401,1402,1403,1404,1405];
	_control_base = _display displayCtrl 1100;
	_pos = ctrlposition (_display displayctrl 101);
	_pos_control_base = (if (isNil 'swt_markers_load_done') then {[(_pos select 0) + 0.01,(_pos select 1) - 1*(_pos select 3),_pos select 2,2*(_pos select 3)]} else {[(_pos select 0),(_pos select 1) - 1*(_pos select 3),_pos select 2,2*(_pos select 3)]});
	//КРИВО, ПЕРЕДЕЛАТЬ В ГРУППЫ И СЕЙВЗОНЫ!
	_h_color = (ctrlPosition (_display displayCtrl 1200)) select 3;
	_w_color = (ctrlPosition (_display displayCtrl 1200)) select 2;
	_h_icon = (ctrlPosition (_display displayCtrl 1300)) select 3;
	_w_icon = (ctrlPosition (_display displayCtrl 1300)) select 2;
	if ((_w_color) == 0) exitWith {};
	_coef_h_color = (_h_color/_w_color);
	_coef_h_icon = (_h_icon/_w_icon);

	{
		_control = _display displayCtrl _x;
		_pos = ctrlPosition _control;
		_control ctrlSetPosition [((_pos_control_base select 0) + (((_pos_control_base select 2)/6) * _forEachIndex)), (_pos_control_base select 1) - (_pos select 3), _pos select 2, _pos select 3];
		_control ctrlCommit 0;
		_swt_markers_mark_color = getArray (configFile >> "CfgMarkerColors" >> (swt_marker_color_slot_params select _forEachIndex) >> "color");

		{
			if (typeName _x != "SCALAR") then {
	        	_swt_markers_mark_color set [_forEachIndex, call compile _x];
	    	};
	    } forEach _swt_markers_mark_color;
		_control ctrlSetTextColor [_swt_markers_mark_color select 0, _swt_markers_mark_color select 1, _swt_markers_mark_color select 2, 0.6];
		_control ctrlSetActiveColor _swt_markers_mark_color;
		if (swt_markers_show_color) then {_control ctrlShow true};
	} forEach _controls_color;

	{
		_control = _display displayCtrl _x;
		_control ctrlSetPosition [((_pos_control_base select 0) + (((_pos_control_base select 2)/6) * _forEachIndex)), (_pos_control_base select 1) - (_pos select 3) - 0.2*(_pos_control_base select 3) - (_coef_h_icon * ((_pos_control_base select 2)/6)), ((_pos_control_base select 2)/6), (_coef_h_icon * ((_pos_control_base select 2)/6))];
		if (!isNil "swt_marker_color_arr") then {_control ctrlSetTextColor swt_marker_color_arr};
		_control ctrlCommit 0;
		_pic = getText (configFile >> "cfgMarkers" >> (swt_marker_icon_slot_params select _forEachIndex) >> "icon");
		_control ctrlSetText _pic;
		if (swt_markers_show_icon) then {_control ctrlShow true};
	} forEach controls_icon_pic;

	{
		_control = _display displayCtrl _x;
		_control ctrlSetPosition [((_pos_control_base select 0) + (((_pos_control_base select 2)/6) * _forEachIndex)), (_pos_control_base select 1) - (_pos select 3) - 0.2*(_pos_control_base select 3) - (_coef_h_icon * ((_pos_control_base select 2)/6)), ((_pos_control_base select 2)/6), (_coef_h_icon * ((_pos_control_base select 2)/6))];
		_control ctrlCommit 0;
		_pic = getText (configFile >> "cfgMarkers" >> (swt_marker_icon_slot_params select _forEachIndex) >> "icon");
		_control ctrlSetText _pic;
		if (swt_markers_show_icon) then {_control ctrlShow true};
	} forEach _controls_icon;

	{
		_control = _display displayCtrl _x;
		_control_pos = ctrlPosition _control;
		_control ctrlSetPosition [(_pos_control_base select 0) + (_pos_control_base select 2) - (_control_pos select 2)*(_forEachIndex+1),(_pos_control_base select 1),_control_pos select 2,_control_pos select 3];
		_control ctrlCommit 0;
	} forEach [901,902,903];

	[_display displayCtrl 901,"T",true] call swt_markers_fast_text;
	[_display displayCtrl 903,"G",true] call swt_markers_fast_text;
	[_display displayCtrl 902,"N",true] call swt_markers_fast_text;

	_control_pic_pos = ctrlPosition (_display displayCtrl 102);
	{
		_control = (_display displayCtrl _x);
		_control_pos = ctrlPosition _control;
		_control ctrlSetPosition [(_control_pic_pos select 0) - ((3*(((safezoneW / safezoneH) min 1.2) / 40))*(_forEachIndex+1)), (_control_pic_pos select 1) + (_control_pic_pos select 3)/2 - (_control_pos select 3)/2,(_control_pos select 2),(_control_pos select 3)];
		_control ctrlCommit 0;
		if (swt_markers_show_lb) then {_control ctrlShow true};
	} forEach [15001,15000];

};

//
_this spawn {
waitUntil {!isNil 'swt_markers_load_done'};
disableSerialization;

//Перемещаем контролы настроек
	_display = (_this select 0) select 0;
	_combo_color = [2100,2101,2102,2103,2104,2105];
	_combo_icon = [2106,2107,2108,2109,2110,2111];

	_control_button = (_display displayCtrl 2400);
	_pos_control_button = (ctrlPosition _control_button);
	_butt_cor_pos = 0;
	if (swt_markers_show_butt) then {_butt_cor_pos = 1.1*(1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))};
	{
		_control = (_display displayCtrl _x);
		_pos_control = (ctrlPosition _control);
		_control ctrlSetPosition [(_pos_control_button select 0) + (_pos_control_button select 2)/2 + (_pos_control_button select 2)*0.02, (_pos_control_button select 1) + (_pos_control_button select 3)*1 + (0.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (_pos_control select 3)*_forEachIndex + _butt_cor_pos,_pos_control select 2, _pos_control select 3];
		_control ctrlCommit 0;
	} forEach _combo_icon;

	{
		_control = (_display displayCtrl _x);
		_pos_control = (ctrlPosition _control);
		_control ctrlSetPosition [(_pos_control_button select 0) + (_pos_control_button select 2)/2 - (_pos_control_button select 2)*0.02 - (_pos_control select 2), (_pos_control_button select 1) + (_pos_control_button select 3)*1+(0.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (_pos_control select 3)*_forEachIndex + _butt_cor_pos,_pos_control select 2, _pos_control select 3];
		_control ctrlCommit 0;
	} forEach _combo_color;

	_control = _display displayCtrl 228;
	_pos = ctrlPosition _control;
	_control ctrlSetPosition [(_pos_control_button select 0), (_pos_control_button select 1) + (_pos_control_button select 3)*1 + (0.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + ((ctrlPosition (_display displayCtrl 2111)) select 3)*6 + _butt_cor_pos,_pos select 2,_pos select 3];
	_control ctrlCommit 0;

	_control = _display displayCtrl 1104;
	_pos = ctrlPosition (_display displayCtrl 228);
	_control ctrlSetPosition [_pos select 0, (_pos select 1) + (_pos select 3)*1.3, (ctrlPosition _control) select 2,(ctrlPosition _control) select 3];
	_control ctrlCommit 0;
	//_control ctrlShow true;

	_control = _display displayCtrl 900;
	_pos = ctrlPosition _control;
	_control ctrlSetPosition [(ctrlPosition (_display displayctrl 101) select 0) + (ctrlPosition (_display displayctrl 101) select 2),(ctrlPosition (_display displayctrl 101) select 1),_pos select 2,_pos select 3];
	_control ctrlCommit 0;
	_control ctrlShow true;

	if (isnil "RscDisplayInsertMarker_set_butt") then {
		{(_display displayCtrl _x) ctrlShow false; (_display displayCtrl _x) ctrlSetFade 1;(_display displayCtrl _x) ctrlCommit 0;} forEach (_combo_color+_combo_icon+[228]);
	} else {
		{(_display displayCtrl _x) ctrlShow true; (_display displayCtrl _x) ctrlSetFade 0;(_display displayCtrl _x) ctrlCommit 0.2;} forEach (_combo_color+_combo_icon+[228]);
	};
};




//Заполняем комбобоксы настроек
//_this spawn {
if !(swt_markers_fast_load) then {_this call swt_load_comboboxes} else {_this spawn swt_load_comboboxes};
//};



//Доп. листбоксы
_display = (_this select 0) select 0;

{
	_color_type	= _x;
	_swt_markers_mark_color = getArray (_color_type >> "color");

  	{
  		if (typeName _x != "SCALAR") then {
				_swt_markers_mark_color set [_forEachIndex, call compile _x];
		};
	} forEach _swt_markers_mark_color;
	_index = (_display displayCtrl 15000) lbAdd "";
	(_display displayCtrl 15000) lbSetValue [_index, _forEachIndex];
	(_display displayCtrl 15000) lbSetPicture [_index, format["#(argb,8,8,3)color(%1,%2,%3,%4)", _swt_markers_mark_color select 0, _swt_markers_mark_color select 1, _swt_markers_mark_color select 2, _swt_markers_mark_color select 3]];
	(_display displayCtrl 15000) lbSetData [_index, configName _color_type];
} forEach swt_cfgMarkerColors;

{
	_marker	= _x;
	//_scope = getNumber (_marker >> "scope");
	_pic = getText (_marker >> "icon");
	//_name = getText (_marker >> "name");

	_index = (_display displayCtrl 15001) lbAdd "";
	(_display displayCtrl 15001) lbSetValue [_index, _forEachIndex];
	(_display displayCtrl 15001) lbSetPicture [_index, _pic];
	(_display displayCtrl 15001) lbSetData [_index, configName _marker];
} forEach swt_cfgMarkers;

_this spawn {
//with (uinamespace) do {
uiSleep 0.001;
if (!isnil "RscDisplayInsertMarker_info") then {
	RscDisplayInsertMarker_info = nil;
	['buttonclick',[((findDisplay 54) displayctrl 2400)]] spawn compile preprocessfilelinenumbers '\swt_markers_a3\RscDisplayInsertMarker.sqf';
} else {((findDisplay 54) displayctrl 1103) ctrlShow false};
};

//};
