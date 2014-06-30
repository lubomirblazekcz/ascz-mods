_input = [_this,0,"",[objnull,""]] call bis_fnc_param;
if (typename _input == typename objnull) then {
	private ["_logic","_year","_delay","_overcast","_fog","_rain"];

	_logic = _input;
	_activated = [_this,2,true,[true]] call bis_fnc_param;

	if (_activated) then {
		if !(_logic call bis_fnc_isCuratorEditable) then {
			_commitTime = _logic getvariable ["commitTime",0];
			_template = _logic getvariable ["template",""];
			_cfgTemplate = configfile >> "CfgPostProcessTemplates" >> _template;
			[_cfgTemplate,_commitTime,true] call bis_fnc_setPPeffectTemplate;
		};
	};
	true
} else {
	switch (tolower _input) do {
		case "enabledelay": {
			private ["_enable"];
			_enable = [_this,1,true,[true]] call bis_fnc_param;
			missionnamespace setvariable ["BIS_fnc_modulePostprocess_delay",_enable];
			if (isserver) then {publicvariable "BIS_fnc_modulePostprocess_delay";};
		};
		case "isdelayenabled": {
			missionnamespace getvariable ["BIS_fnc_modulePostprocess_delay",false];
		};
		case "seteffect": {
			private ["_value"];
			_value = [_this,1,"",["",configfile]] call bis_fnc_param;
			missionnamespace setvariable ["BIS_fnc_modulePostprocess_value",_value];
			publicvariableserver "BIS_fnc_modulePostprocess_value";
		};
		case "commit": {
			_value = missionnamespace getvariable ["BIS_fnc_modulePostprocess_value",""];
			_value spawn bis_fnc_setppeffecttemplate;
		};
	};
};
	