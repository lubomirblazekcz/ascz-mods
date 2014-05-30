//////////////////////////////////////////////////////////////////
// Script File for [Arma 3]
// Created by: Das Attorney
//////////////////////////////////////////////////////////////////

private ["_handled","_key","_dikcode_getover_arr","_l","_f","_v","_p"];

_key = _this select 1;
_dikcode_getover_arr = actionKeys "GetOver";
_p = player;

_handled = false;

if (currentWeapon _p == primaryWeapon _p) then
{
	if (_p getVariable "horde_pvar_jumpmf_spamming" == 0) then
	{
		if (_key in _dikcode_getover_arr and (vehicle _p) == _p and (speed _p) > 11 and stance _p == "STAND" and getFatigue _p < 0.5 and isTouchingGround _p) then
		{
			_l = loadAbs _p;
			_f = getFatigue _p;
			[_p, _l, _f] spawn horde_jumpmf_fnc_stop_vault_spam;
			_v = velocity _p;
			[_p, _v] spawn horde_jumpmf_fnc_set_constant_velocity; // may need to comment out if you are editing the vertical velocity
			["hde_plr_jumped", [_p]] call CBA_fnc_globalEvent;
			// if you want to change the vertical velocity of player, uncomment the next line and place a number where it says YOUR_NUMBER_HERE
			// _p setVelocity [_v select 0, _v select 1, (_v select 2) + YOUR_NUMBER_HERE];
			_handled = true;
		};
	} else
	{
		if (_key in _dikcode_getover_arr and (vehicle _p) == _p and (speed _p) > 11 and stance _p == "STAND" and getFatigue _p < 0.5 and isTouchingGround _p) then
		{
			_handled = true;
		};
	};	
};
_handled;