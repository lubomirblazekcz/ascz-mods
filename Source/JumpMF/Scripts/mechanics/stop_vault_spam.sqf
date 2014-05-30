//////////////////////////////////////////////////////////////////
// Script File for [Arma 3]
// Created by: Das Attorney
//////////////////////////////////////////////////////////////////

private ["_p","_l","_f"];

_p = _this select 0;
_l = _this select 1;
_f = _this select 2;

_p setVariable ["horde_pvar_jumpmf_spamming", 1, false];
_p enableFatigue false;

while {animationState player == "AovrPercMrunSrasWrflDf"} do
{
	sleep 0.1;
};
_p enableFatigue true;
_p setFatigue (_f + (_l / 2500));

sleep 1;

_p setVariable ["horde_pvar_jumpmf_spamming", 0, false];
