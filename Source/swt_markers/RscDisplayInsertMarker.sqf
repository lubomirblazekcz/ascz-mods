_mode = _this select 0;
_params = _this select 1;

#define BORDER	0.005

switch _mode do {

	case "onLoad": {
		//with uinamespace do {
			_params spawn {
				disableserialization;
				_display = _this select 0;
				_text = _display displayctrl 101;
				_picture = _display displayctrl 102;
				_buttonOK = _display displayctrl 1;
				_buttonCancel = _display displayctrl 2;
				_buttonInfo = _display displayctrl 2400;
				_description = _display displayctrl 1100;
				//_title = _display displayctrl 1001;
				_info = _display displayctrl 1101;
				_swt_info_group = _display displayctrl 1103;

				//--- Background
				_pos = ctrlposition _text;
				_posX = (_pos select 0) + 0.01;
				_posY = _pos select 1;
				_posW = _pos select 2;
				_posH = _pos select 3;
				_pos set [0,_posX];
				_text ctrlsetposition _pos;
				_text ctrlcommit 0;
				swt_markers_load_done = true;

				_pos set [1,_posY - 1*_posH];
				_pos set [3,2*_posH];
				_description ctrlsetposition _pos;
				_description ctrlcommit 0;
				_description ctrlShow true;
				[_info,'info'] call swt_markers_info_buttons;
				_pos set [1,_posY + 2 * _posH + 2 * BORDER];
				_pos set [3,0];
				_swt_info_group ctrlsetposition [_pos select 0, _pos select 1, ((ctrlPosition _swt_info_group) select 2)+0.69 * 			(			((safezoneW / safezoneH) min 1.2) / 40), _pos select 3];
				_swt_info_group ctrlcommit 0;
				_swt_info_group ctrlShow true;

				//--- ButtonInfo
				_pos set [1,_posY + 1 * _posH + BORDER];
				_pos set [3,0];
				if (swt_markers_show_info) then {_pos set [3,_posH]};
				_buttonInfo ctrlsetposition _pos;
				_buttonInfo ctrlcommit 0;
				_buttonInfo ctrlShow true;

				//--- ButtonOK

				_show_coef = 2;
				if (swt_markers_show_info) then {_show_coef = 2} else {_show_coef = 1};
				_pos set [1,_posY + _show_coef * _posH + 2 * BORDER];
				_pos set [2,_posW / 2 - BORDER];
				_pos set [3,0];
				if (swt_markers_show_butt) then {_pos set [3,_posH]};
				_buttonOk ctrlsetposition _pos;
				_buttonOk ctrlcommit 0;

				//--- ButtonCancel
				_pos set [0,_posX + _posW / 2];
				_pos set [1,_posY + _show_coef * _posH + 2 * BORDER];
				_pos set [2,_posW / 2];
				_buttonCancel ctrlsetposition _pos;
				_buttonCancel ctrlcommit 0;
			};
	//	};
	};

	case "buttonclick": {
		disableSerialization;
		_display = ctrlparent (_params select 0);
		ctrlSetFocus (_display displayCtrl 101);
		_text = _display displayctrl 101;
		_picture = _display displayctrl 102;
		_buttonOK = _display displayctrl 1;
		_buttonCancel = _display displayctrl 2;
		_buttonInfo = _display displayctrl 2400;
		_description = _display displayctrl 1100;
		_title = _display displayctrl 1001;
		_info = _display displayctrl 1101;
		_combo_color = [2100,2101,2102,2103,2104,2105];
		_combo_icon = [2106,2107,2108,2109,2110,2111];
		_swt_info_group = _display displayctrl 1103;

		_posText = ctrlposition _text;
		_posTextX = (_posText select 0) + 0.01;
		_posTextY = _posText select 1;
		_posTextW = _posText select 2;
		_posTextH = _posText select 3;

		_animate = {
			private ["_control","_dY","_dH","_borderCoef","_pos"];
			_control = _this select 0;
			_dY = _this select 1;
			_dH = _this select 2;
			_borderCoef = _this select 3;
			_pos = ctrlposition _control;
			_pos set [1,_posTextY + _dY * _posTextH + _borderCoef * BORDER];
			if (_this select 4) then {_pos set [3,_dH * _posTextH]};
			_control ctrlsetposition _pos;
			_control ctrlcommit _delay;
		};


		_delay = 0.2;

		if (isnil "RscDisplayInsertMarker_info") then {
			{
				_pos = ctrlPosition (_display displayCtrl _x);
				(_display displayCtrl _x) ctrlSetPosition [(_pos select 0)+1.1*((ctrlPosition (_display displayCtrl 101)) select 2),_pos select 1,_pos select 2,_pos select 3];
				(_display displayCtrl _x) ctrlCommit 0.2;
			} forEach (_combo_color+_combo_icon+[228,1104]);

			_buttonInfo ctrlsettext (localize 'STR_SWT_M_HIDEINFO');
			RscDisplayInsertMarker_info = true;

			//		Y H B
			_swt_info_group ctrlShow true;
			[_swt_info_group,		2,8,2,true] call _animate;
		//	[_info,		2,8,2] call _animate_info;
			//[_info,		2,7,2] call _animate;
			[_buttonOK,	10,1,3,false] call _animate;
			[_buttonCancel,	10,1,3,false] call _animate;
		} else {
			{
				_pos = ctrlPosition (_display displayCtrl _x);
				(_display displayCtrl _x) ctrlSetPosition [(_pos select 0)-1.1*((ctrlPosition (_display displayCtrl 101)) select 2),_pos select 1,_pos select 2,_pos select 3];
				(_display displayCtrl _x) ctrlCommit 0.2;
			} forEach (_combo_color+_combo_icon+[228,1104]);

			_buttonInfo ctrlsettext (localize 'STR_A3_RscDisplayInsertMarker_ButtonMenuInfo');
			RscDisplayInsertMarker_info = nil;

			[_swt_info_group,		2,0,2,true] call _animate;
			[_buttonOK,	2,1,2,false] call _animate;
			[_buttonCancel,	2,1,2,false] call _animate;
			waitUntil {ctrlCommitted _swt_info_group};
			_swt_info_group ctrlShow false;

		};

	};
};