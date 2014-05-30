//////////////////////////////////////////////////////////////////
// Script File for [Arma 3]
// Created by: Das Attorney
//////////////////////////////////////////////////////////////////

if (isDedicated) exitWith {};

waitUntil {!isNull findDisplay 46};

(findDisplay 46) displayAddEventHandler ["keyDown", "_this call horde_jumpmf_fnc_key_pressed"];