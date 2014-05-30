//////////////////////////////////////////////////////////////////
// Script File for [Arma 3]
// Created by: Das Attorney
//////////////////////////////////////////////////////////////////

// -mod=@CBA_A3;@JumpMF;

if (!isDedicated) then
{
	if (isNil ("horde_jumpmf_gvar_running_already")) exitWith
	{
	
		horde_jumpmf_gvar_running_already = true;
		
		// precompile scripts
	
		horde_jumpmf_fnc_key_pressed = compile preProcessFileLineNumbers "JumpMF\scripts\mechanics\detect_key_input.sqf";
		horde_jumpmf_fnc_stop_vault_spam = compile preProcessFileLineNumbers "JumpMF\scripts\mechanics\stop_vault_spam.sqf";
		
		// function
		
		horde_jumpmf_fnc_set_constant_velocity =
		{

			private ["_p","_v"];
			
			_p = _this select 0;
			_v = _this select 1;
			
			while {animationState player == "AovrPercMrunSrasWrflDf"} do
			{
				_p setVelocity [_v select 0, _v select 1, _v select 2];
			};
		};
		
		// define CBA global event
		
		["hde_plr_jumped", {
			(_this select 0) switchMove "AovrPercMrunSrasWrflDf";
		}] call CBA_fnc_addEventHandler;
		
		// init display handler and player scripts
	
		[] execVM "JumpMF\scripts\init\function_init.sqf";
		
		[] execVM "JumpMF\scripts\init\player_init.sqf";
	};
};