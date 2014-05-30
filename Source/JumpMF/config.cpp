// JumpMF v0.3 by Das Attorney

class CfgPatches
{
	class JumpMF
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.5;
		requiredAddons[] = {"Extended_EventHandlers","CBA_main"};
		version = "0.3";
		versionStr = "0.3";
		versionAr[] = {0,3};
		author[] = {"Das Attorney"};
		authorUrl = "http://forums.bistudio.com/showthread.php?152312-Jump-MF-basic-mod-to-unlock-vaulting-animation";
	};
};

class Extended_EventHandlers;
class Extended_PostInit_EventHandlers
{
	class JumpMF
	{
		clientInit = "call compile preprocessFileLineNumbers '\JumpMF\scripts\init\init.sqf';";
	};
};

class Extended_Init_Eventhandlers
{
    class Man
    {
        class SLX_XEH_RespawnInitMan
        {
            onRespawn = true;
            Init = "[player] execVM 'JumpMF\scripts\init\player_init.sqf';";
        };
    };
};