class CfgPatches
{
	class cdf_a3_dubbingradio_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Dubbing_Radio_F"};
	};
};

class CfgVoice
{
	voices[] +=
	{
		"Male01CZ",
		"Male02CZ",
		"Male03CZ",
		"Male04CZ",
        "Male05CZ"
	};
	class Base;
    class BaseCZ: Base
    {
        variants[]={0.94999999,1,1.05};
        voiceType="";
        scope=0;
        directories[]=
        {
            "",
            ""
        };
        protocol="RadioProtocolBaseCZ";
    };
    class CZ: BaseCZ
    {
        protocol="RadioProtocolCZ";
		icon = "\a3\Ui_f\data\Map\Markers\Flags\czechrepublic_ca.paa";
		identityTypes[] = {"Language_CZ"};
    };
	class Male01CZ: CZ
	{
		directories[] = {
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male01\",
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male01\"
		};
		displayName = "Voice 01";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
	class Male02CZ: CZ
	{
		directories[] = {
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male02\",
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male02\"
		};
		displayName = "Voice 02";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
	class Male03CZ: CZ
	{
		directories[] = {
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male01\",
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male01\"
		};
		voiceType = "Voice 03";
		displayName = "$STR_A3_CfgVoiceTypes_Male03_F0";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
	class Male04CZ: CZ
	{
		directories[] = {
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male01\",
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male01\"
		};
		displayName = "Voice 04";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
	class Male05CZ: CZ
	{
		directories[] = {
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male02\",
		"\cdf_a3\cdf_a3_dubbingradio\radio\Male02\"
		};
		displayName = "Voice 05";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
	};
};
class cfgVoiceTypes
{
	class Male01_F
	{
		voices[]+=
		{
			"Male01CZ"
		};
	};
	class Male02_F
	{
		voices[]+=
		{
			"Male02CZ"
		};
		preview="Male02CZ";
	};
	class Male03_F
	{
		voices[]+=
		{
			"Male03CZ"
		};
	};
	class Male04_F
	{
		voices[]+=
		{
			"Male04CZ"
		};
	};
	class Male05_F
	{
		voices[]+=
		{
			"Male05CZ"
		};
	};
	class Male06_F
	{
		voices[]+=
		{
			"Male05CZ"
		};
	};
	class Male07_F
	{
		voices[]+=
		{
			"Male03CZ"
		};
	};
	class Male08_F
	{
		voices[]+=
		{
			"Male03CZ"
		};
	};
	class Male09_F
	{
		voices[]+=
		{
			"Male02CZ"
		};
	};
	class Male10_F
	{
		voices[]+=
		{
			"Male01CZ"
		};
	};
	class Male11_F
	{
		voices[]+=
		{
			"Male02CZ"
		};
	};
	class Male12_F
	{
		voices[]+=
		{
			"Male03CZ"
		};
	};
};
class RadioProtocolBase
{
	class Words;
};
class RadioProtocolBaseCZ: RadioProtocolBase
{
	class Default;
	class Report;
	class PriorityReport;
	class Confirmation;
	class Completition;
	class JoinCompleted;
	class Failure;
	class Notify;
	class Detected;
	class NormalCommand;
	class CriticalReport;
	class UrgentCommand;
	class UICommand;
	class Design;
	class CombatShout: Default
	{
		noRadio=1;
	};
	class SentUnitKilled;
	class SentSupportAskHeal;
	class SentSupportAskRepair;
	class SentSupportAskRefuel;
	class SentSupportAskRearm;
	class SentSupportConfirm;
	class SentSupportReady;
	class SentSupportDone;
	class SentSupportNotAvailable;
	class SentHealthCritical;
	class SentHealthNormal;
	class SentHealthUnconscious;
	class SentDammageCritical;
	class SentOutOfFirstAidKits;
	class SentFuelCritical;
	class SentFuelLow;
	class SentAmmoCritical;
	class SentAmmoLow;
	class SentReportPosition;
	class SentIsLeader;
	class SentCommandCompleted;
	class SentJoinCompleted;
	class SentFireReady;
	class SentDetectedMine;
	class SentDetectedBomb;
	class SentDetectedExplosive;
	class SentFireNegative;
	class SentCommandFailed;
	class SentDestinationUnreacheable;
	class SelectEnemyDetectedSentence;
	class SentEnemyDetectedGroupCoreRelative;
	class SentEnemyDetectedOnGridReference;
	class SentEnemyDetectedLocationRelative;
	class SentEnemyDetectedUnitRelative;
	class SentEnemyDetectedSenderRelative;
	class SentObjectDestroyed;
	class SentObjectDestroyedUnknown;
	class SentContact;
	class SentUnderFire;
	class SentCoverMe;
	class SentCovering;
	class SentSuppressing;
	class SentReloading;
	class SentThrowingGrenade;
	class SentThrowingSmoke;
	class SentIncomingGrenade;
	class SentEnemyContact;
	class SentEndangered;
	class SentRouted;
	class SentWitnessDeadBody;
	class SentWitnessKilled;
	class SentCombatGeneric;
	class SentCheering;
	class SentScreaming;
	class SentClear;
	class SentRepeatCommand;
	class SentWhereAreYou;
	class SentReturnToFormation;
	class SentFormColumn;
	class SentFormStaggeredColumn;
	class SentFormWedge;
	class SentFormEcholonLeft;
	class SentFormEcholonRight;
	class SentFormVee;
	class SentFormLine;
	class SentFormFile;
	class SentFormDiamond;
	class SentBehaviourCareless;
	class SentBehaviourSafe;
	class SentBehaviourAware;
	class SentBehaviourCombat;
	class SentBehaviourStealth;
	class SentOpenFire;
	class SentOpenFireInCombat;
	class SentHoldFire;
	class SentHoldFireInCombat;
	class SentCeaseFireInsideGroup;
	class SentCeaseFire;
	class SentLooseFormation;
	class SentKeepFormation;
	class SentUnitPosDown;
	class SentUnitPosMiddle;
	class SentUnitPosUp;
	class SentUnitPosAuto;
	class SentFormPosAdvance;
	class SentFormPosStayBack;
	class SentFormPosFlankLeft;
	class SentFormPosFlankRight;
	class SentReportStatus;
	class SentTeam;
	class SentTeamPlural;
	class SentWatchTgt;
	class SentWatchDir;
	class SentWatchPos;
	class SentWatchAround;
	class SentNoTarget;
	class SentTarget;
	class SentEngage;
	class SentFire;
	class SentEngageNoTarget;
	class SentFireNoTarget;
	class SelectCmdMoveSentence;
	class SentCmdMoveGroupRelative;
	class SentCmdMoveRecipientsRelative;
	class SentCmdMoveToGrid;
	class SentCmdMoveToTarget;
	class SentCmdMoveToObject;
	class SentCmdMoveLocationRelative;
	class SentCmdHealSomeone;
	class SentCmdHealSelf;
	class SentAssemble;
	class SentDisassemble;
	class SentCmdActionTakeBag;
	class SentCmdActionDropBag;
	class SentCmdActionOpenBag;
	class SentLightsOn;
	class SentLightsOff;
	class SentPointersOn;
	class SentPointersOff;
	class SentCmdHeal;
	class SentCmdHealFar;
	class SentCmdHealAt;
	class SentCmdRepair;
	class SentCmdRepairFar;
	class SentCmdRepairAt;
	class SentCmdRefuel;
	class SentCmdRefuelFar;
	class SentCmdRefuelAt;
	class SentCmdRearm;
	class SentCmdRearmFar;
	class SentCmdRearmAt;
	class SentCmdSupport;
	class SentCmdSupportFar;
	class SentCmdSupportAt;
	class SentCmdDropWeapon;
	class SentCmdDropMagazine;
	class SentCmdTakeWeapon;
	class SentCmdTakeWeaponFar;
	class SentCmdTakeWeaponAt;
	class SentCmdTakeMagazine;
	class SentCmdTakeMagazineFar;
	class SentCmdTakeMagazineAt;
	class SentCmdAction;
	class SentCmdActionNear;
	class SentCmdActionFar;
	class SentCmdActionAt;
	class SentCmdTakeFlag;
	class SentCmdTakeFlagFar;
	class SentCmdTakeFlagAt;
	class SentCmdReturnFlag;
	class SentCmdReturnFlagFar;
	class SentCmdReturnFlagAt;
	class SentCmdEject;
	class SentCmdPlaceCharge;
	class SentCmdDetonate;
	class SentCmdActivateTimer;
	class SentCmdDeactivateBomb;
	class SentCmdDeactivateMine;
	class SentCmdTakeMine;
	class SentCmdLightFire;
	class SentCmdLightFireFar;
	class SentCmdLightFireAt;
	class SentCmdPutOutFire;
	class SentCmdPutOutFireFar;
	class SentCmdPutOutFireAt;
	class SentCmdOpenDoor;
	class SentCmdOpenDoorFar;
	class SentCmdOpenDoorAt;
	class SentCmdCloseDoor;
	class SentCmdCloseDoorFar;
	class SentCmdCloseDoorAt;
	class SentCmdFollowMe;
	class SentCmdFollow;
	class SentCmdAttack;
	class SentAttackNoTarget;
	class SentCmdFire;
	class SentCmdGetIn;
	class SentCmdGetInCommander;
	class SentCmdGetInDriver;
	class SentCmdGetInPilot;
	class SentCmdGetInGunner;
	class SentCmdGetInCargo;
	class SentCmdSwitchToDriver;
	class SentCmdSwitchToGunner;
	class SentCmdSwitchToCommander;
	class SentCmdSwitchToCargo;
	class SentCmdGetOut;
	class SentCmdStop;
	class SentCmdExpect;
	class SentCmdHide;
	class SentCmdDismiss;
	class SentNotifyAttack;
	class SentNotifyAttackSubgroup;
	class SentNotifySupport;
	class SentConfirmMove;
	class SentConfirmAttack;
	class SentConfirmOther;
	class SentRepairThat;
	class SentARTYFireAt;
	class SentARTYFireAtWithAmmo;
	class SentARTYRoundsComplete;
	class SentARTYCannotExecuteAdjustCoordinates;
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope;
	class SelectVehicleMoveSentence;
	class VehicleMoveGroupRelative;
	class VehicleMoveRecipientsRelative;
	class VehicleMoveToGrid;
	class VehicleMoveToObject;
	class VehicleMoveLocationRelative;
	class VehicleWatchTgt;
	class VehicleWatchPos;
	class VehicleJoin;
	class VehicleFire;
	class VehicleTarget;
	class VehicleNoTarget;
	class VehicleCeaseFire;
	class VehicleForward;
	class VehicleStop;
	class VehicleBackward;
	class VehicleFaster;
	class VehicleSlower;
	class VehicleLeft;
	class VehicleRight;
	class VehicleManualFire;
	class VehicleCancelManualFire;
	class VehicleDirectFire;
	class VehicleLoad;
	class VehicleLoadMagazine;
	class VehicleAzimut;
	class VehicleFireFailed;
	class ClausePosition;
	class ClausePositionNear;
	class SentObjectUnconscious;
	class SentObjectUnconsciousUnknown;
	class SentCmdPatchSomeone;
	class SentCmdCarrySomeone;
	class Words;
	class Arguments
	{
		class Direction;
		class Distance1;
		class AggrTargets;
	};
};

class RadioProtocolCZ: RadioProtocolBaseCZ
{
 class Words
 {
    micOut[] = {"\cdf_a3\cdf_a3_dubbingradio\Data\Mic_Out1.ogg"};
    micOut1[] = {"\cdf_a3\cdf_a3_dubbingradio\Data\over01.ogg"};
    micOut2[] = {"\cdf_a3\cdf_a3_dubbingradio\Data\over02.ogg"};
    micOut3[] = {"\cdf_a3\cdf_a3_dubbingradio\Data\over03.ogg"};
    micOut4[] = {"\A3\Dubbing_Radio_F\Data\static\out2a.ogg"};
    micOut5[] = {"\A3\Dubbing_Radio_F\Data\static\out2b.ogg"};
    micOut6[] = {"\A3\Dubbing_Radio_F\Data\static\out2c.ogg"};
    loop[] = {"\cdf_a3\cdf_a3_dubbingradio\Data\radionoise1.ogg"};
    beepBeep[] = {"\cdf_a3\cdf_a3_dubbingradio\Data\beep.ogg"};
    pause[] = {"\cdf_a3\cdf_a3_dubbingradio\Data\empty01sec.ogg"};
    xmit[] = {"\cdf_a3\cdf_a3_dubbingradio\Data\beep.ogg"};
  all[] = {"numbers\all"};
  allGroup[] = {"numbers\all"};
  zero[] = {"numbers\zero"};
  one[] = {"numbers\one2"};
  two[] = {"numbers\two2"};
  three[] = {"numbers\three2"};
  four[] = {"numbers\four2"};
  five[] = {"numbers\five2"};
  six[] = {"numbers\six2"};
  seven[] = {"numbers\seven2"};
  eight[] = {"numbers\eight2"};
  nine[] = {"numbers\nine2"};
  ten[] = {"numbers\ten2"};
  eleven[] = {"numbers\eleven2"};
  twelve[] = {"numbers\twelve2"};
  thirteen[] = {"numbers\thirteen"};
  fourteen[] = {"numbers\fourteen"};
  fifteen[] = {"numbers\fifteen"};
  sixteen[] = {"numbers\sixteen"};
  seventeen[] = {"numbers\seventeen"};
  eighteen[] = {"numbers\eighteen"};
  nineteen[] = {"numbers\nineteen"};
  twenty[] = {"numbers\twenty"};
  thirty[] = {"numbers\thirty"};
  forty[] = {"numbers\forty"};
  fifty[] = {"numbers\fifty"};
  sixty[] = {"numbers\sixty"};
  seventy[] = {"numbers\seventy"};
  eighty[] = {"numbers\eighty"};
  ninety[] = {"numbers\ninety"};
  hundred[] = {"numbers\hundred"};
  zero2[] = {"numbers\zero"};
  one2[] = {"numbers\one"};
  two2[] = {"numbers\two"};
  three2[] = {"numbers\three"};
  four2[] = {"numbers\four"};
  five2[] = {"numbers\five"};
  six2[] = {"numbers\six"};
  seven2[] = {"numbers\seven"};
  eight2[] = {"numbers\eight"};
  nine2[] = {"numbers\nine"};
  ten2[] = {"numbers\ten"};
  eleven2[] = {"numbers\eleven"};
  twelve2[] = {"numbers\twelve"};
  alpha[] = {"alphabet\alpha"};
  bravo[] = {"alphabet\bravo"};
  charlie[] = {"alphabet\charlie"};
  delta[] = {"alphabet\delta"};
  echo[] = {"alphabet\echo"};
  foxtrot[] = {"alphabet\fotxtrot"};
  golf[] = {"alphabet\golf"};
  hotel[] = {"alphabet\hotel"};
  india[] = {"alphabet\india"};
  juliet[] = {"alphabet\juliet"};
  kilo[] = {"alphabet\kilo"};
  lima[] = {"alphabet\lima"};
  mike[] = {"alphabet\mike"};
  november[] = {"alphabet\november"};
  oscar[] = {"alphabet\oscar"};
  papa[] = {"alphabet\papa"};
  quebec[] = {"alphabet\quebec"};
  romeo[] = {"alphabet\romeo"};
  sierra[] = {"alphabet\sierra"};
  tango[] = {"alphabet\tango"};
  uniform[] = {"alphabet\uniform"};
  victor[] = {"alphabet\victor"};
  whiskey[] = {"alphabet\whiskey"};
  xray[] = {"alphabet\xray"};
  yankee[] = {"alphabet\yankee"};
  zulu[] = {"alphabet\zulu"};
  whiteTeam[] = {"team\teamwhite"};
  redTeam[] = {"team\teamred"};
  greenTeam[] = {"team\teamgreen"};
  blueTeam[] = {"team\teamblue"};
  yellowTeam[] = {"team\teamyellow"};
  at10[] = {"clockfacing\10oclock"};
  at11[] = {"clockfacing\11oclock"};
  at12[] = {"clockfacing\12oclock"};
  at1[] = {"clockfacing\1oclock"};
  at2[] = {"clockfacing\2oclock"};
  at3[] = {"clockfacing\3oclock"};
  at4[] = {"clockfacing\4oclock"};
  at5[] = {"clockfacing\5oclock"};
  at6[] = {"clockfacing\6oclock"};
  at7[] = {"clockfacing\7oclock"};
  at8[] = {"clockfacing\8oclock"};
  at9[] = {"clockfacing\9oclock"};
  dist50[] = {"distance\dist50"};
  dist100[] = {"distance\dist100"};
  dist200[] = {"distance\dist200"};
  dist500[] = {"distance\dist500"};
  dist1000[] = {"distance\dist1000"};
  dist2000[] = {"distance\dist2000"};
  far[] = {"distance\distfar"};
  klick[] = {"distance\klick"};
  klicks[] = {"distance\klicks"};
  meters[] = {"distance\meters"};
  north[] = {"direction\north"};
  northEast[] = {"direction\northeast"};
  east[] = {"direction\east"};
  southEast[] = {"direction\southeast"};
  south[] = {"direction\south"};
  southWest[] = {"direction\southwest"};
  west[] = {"direction\west"};
  northWest[] = {"direction\northwest"};
  north2[] = {"direction\north2"};
  northEast2[] = {"direction\northeast2"};
  east2[] = {"direction\east2"};
  southEast2[] = {"direction\southeast2"};
  south2[] = {"direction\south2"};
  southWest2[] = {"direction\southwest2"};
  west2[] = {"direction\west2"};
  northWest2[] = {"direction\northwest2"};
  That[] = {"ten01","ten02","ten03"};
  At[] = {"report\na"};
  veh_unknown[] = {"vehicles\unknown"};
  veh_unknowns[] = {"vehicles\unknown"};
  veh_unknown_CZ[] = {"vehicles\unknown"};
  veh_unknowns_CZ[] = {"vehicles\unknown"};
  veh_unknown_CZ4P[] = {"vehicles\unknown"};
  veh_unknowns_CZ4P[] = {"vehicles\unknown"};
  veh_unknown_RU[] = {"vehicles\unknown"};
  veh_unknowns_RU[] = {"vehicles\unknown"};
  veh_man[] = {"vehicles\man"};
  veh_men[] = {"vehicles\men"};
  veh_man_CZ[] = {"vehicles\man"};
  veh_men_CZ[] = {"vehicles\men"};
  veh_man_CZ4P[] = {"vehicles\man"};
  veh_men_CZ4P[] = {"vehicles\men"};
  veh_man_RU[] = {"vehicles\man"};
  veh_men_RU[] = {"vehicles\men"};
  veh_woman[] = {"vehicles\woman"};
  veh_women[] = {"vehicles\women"};
  veh_woman_CZ[] = {"vehicles\woman"};
  veh_women_CZ[] = {"vehicles\women"};
  veh_woman_CZ4P[] = {"vehicles\woman"};
  veh_women_CZ4P[] = {"vehicles\women"};
  veh_woman_RU[] = {"vehicles\woman"};
  veh_women_RU[] = {"vehicles\women"};
  veh_civilian[] = {"side\nas"};
  veh_civilians[] = {"side\nas"};
  veh_civilian_CZ[] = {"side\nas"};
  veh_civilians_CZ[] = {"side\nas"};
  veh_civilian_CZ4P[] = {"side\nas"};
  veh_civilians_CZ4P[] = {"side\nas"};
  veh_civilian_RU[] = {"side\nas"};
  veh_civilians_RU[] = {"side\nas"};
  veh_soldier[] = {"vehicles\soldier"};
  veh_soldiers[] = {"vehicles\soldiers"};
  veh_soldier_CZ[] = {"vehicles\soldier"};
  veh_soldiers_CZ[] = {"vehicles\soldiers"};
  veh_soldier_CZ4P[] = {"vehicles\soldier"};
  veh_soldiers_CZ4P[] = {"vehicles\soldiers"};
  veh_soldier_RU[] = {"vehicles\soldier"};
  veh_soldiers_RU[] = {"vehicles\soldiers"};
  veh_launcherSoldier[] = {"vehicles\launcherSoldier"};
  veh_launcherSoldiers[] = {"vehicles\launcherSoldiers"};
  veh_launcherSoldier_CZ[] = {"vehicles\launcherSoldier"};
  veh_launcherSoldiers_CZ[] = {"vehicles\launcherSoldiers"};
  veh_launcherSoldier_CZ4P[] = {"vehicles\launcherSoldier"};
  veh_launcherSoldiers_CZ4P[] = {"vehicles\launcherSoldiers"};
  veh_launcherSoldier_RU[] = {"vehicles\launcherSoldier"};
  veh_launcherSoldiers_RU[] = {"vehicles\launcherSoldiers"};
  veh_Sniper[] = {"vehicles\Sniper"};
  veh_Snipers[] = {"vehicles\Snipers"};
  veh_Sniper_CZ[] = {"vehicles\Sniper"};
  veh_Snipers_CZ[] = {"vehicles\Snipers"};
  veh_Sniper_CZ4P[] = {"vehicles\Sniper"};
  veh_Snipers_CZ4P[] = {"vehicles\Snipers"};
  veh_Sniper_RU[] = {"vehicles\Sniper"};
  veh_Snipers_RU[] = {"vehicles\Snipers"};
  veh_Medic[] = {"vehicles\Medic"};
  veh_Medics[] = {"vehicles\Medics"};
  veh_Medic_CZ[] = {"vehicles\Medic"};
  veh_Medics_CZ[] = {"vehicles\Medics"};
  veh_Medic_CZ4P[] = {"vehicles\Medic"};
  veh_Medics_CZ4P[] = {"vehicles\Medics"};
  veh_Medic_RU[] = {"vehicles\Medic"};
  veh_Medics_RU[] = {"vehicles\Medics"};
  veh_SpecialForce[] = {"vehicles\SpecialForce"};
  veh_SpecialForces[] = {"vehicles\SpecialForces"};
  veh_SpecialForce_CZ[] = {"vehicles\SpecialForce"};
  veh_SpecialForces_CZ[] = {"vehicles\SpecialForces"};
  veh_SpecialForce_CZ4P[] = {"vehicles\SpecialForce"};
  veh_SpecialForces_CZ4P[] = {"vehicles\SpecialForces"};
  veh_SpecialForce_RU[] = {"vehicles\SpecialForce"};
  veh_SpecialForces_RU[] = {"vehicles\SpecialForces"};
  veh_MGunner[] = {"vehicles\MGunner"};
  veh_MGunners[] = {"vehicles\MGunners"};
  veh_MGunner_CZ[] = {"vehicles\MGunner"};
  veh_MGunners_CZ[] = {"vehicles\MGunners"};
  veh_MGunner_CZ4P[] = {"vehicles\MGunner"};
  veh_MGunners_CZ4P[] = {"vehicles\MGunners"};
  veh_MGunner_RU[] = {"vehicles\MGunner"};
  veh_MGunners_RU[] = {"vehicles\MGunners"};
  veh_officer[] = {"vehicles\officer"};
  veh_officers[] = {"vehicles\officers"};
  veh_officer_CZ[] = {"vehicles\officer"};
  veh_officers_CZ[] = {"vehicles\officers"};
  veh_officer_CZ4P[] = {"vehicles\officer"};
  veh_officers_CZ4P[] = {"vehicles\officers"};
  veh_officer_RU[] = {"vehicles\officer"};
  veh_officers_RU[] = {"vehicles\officers"};
  veh_crew[] = {"vehicles\crew"};
  veh_crews[] = {"vehicles\crews"};
  veh_crew_CZ[] = {"vehicles\crew"};
  veh_crews_CZ[] = {"vehicles\crews"};
  veh_crew_CZ4P[] = {"vehicles\crew"};
  veh_crews_CZ4P[] = {"vehicles\crews"};
  veh_crew_RU[] = {"vehicles\crew"};
  veh_crews_RU[] = {"vehicles\crews"};
  veh_pilot[] = {"vehicles\pilot"};
  veh_pilots[] = {"vehicles\pilots"};
  veh_pilot_CZ[] = {"vehicles\pilot"};
  veh_pilots_CZ[] = {"vehicles\pilots"};
  veh_pilot_CZ4P[] = {"vehicles\pilot"};
  veh_pilots_CZ4P[] = {"vehicles\pilots"};
  veh_pilot_RU[] = {"vehicles\pilot"};
  veh_pilots_RU[] = {"vehicles\pilots"};
  veh_vehicle[] = {"vehicles\vehicle"};
  veh_vehicles[] = {"vehicles\vehicles"};
  veh_vehicle_CZ[] = {"vehicles\vehicle"};
  veh_vehicles_CZ[] = {"vehicles\vehicles"};
  veh_vehicle_CZ4P[] = {"vehicles\vehicle"};
  veh_vehicles_CZ4P[] = {"vehicles\vehicles"};
  veh_vehicle_RU[] = {"vehicles\vehicle"};
  veh_vehicles_RU[] = {"vehicles\vehicles"};
  veh_bike[] = {"vehicles\bike"};
  veh_bikes[] = {"vehicles\bikes"};
  veh_bike_CZ[] = {"vehicles\bike"};
  veh_bikes_CZ[] = {"vehicles\bikes"};
  veh_bike_CZ4P[] = {"vehicles\bike"};
  veh_bikes_CZ4P[] = {"vehicles\bikes"};
  veh_bike_RU[] = {"vehicles\bike"};
  veh_bikes_RU[] = {"vehicles\bikes"};
  veh_car[] = {"vehicles\car"};
  veh_cars[] = {"vehicles\cars"};
  veh_car_CZ[] = {"vehicles\car"};
  veh_cars_CZ[] = {"vehicles\cars"};
  veh_car_CZ4P[] = {"vehicles\car"};
  veh_cars_CZ4P[] = {"vehicles\cars"};
  veh_car_RU[] = {"vehicles\car"};
  veh_cars_RU[] = {"vehicles\cars"};
  veh_armedCar[] = {"vehicles\armedCar"};
  veh_armedCars[] = {"vehicles\armedCars"};
  veh_armedCar_CZ[] = {"vehicles\armedCar"};
  veh_armedCars_CZ[] = {"vehicles\armedCars"};
  veh_armedCar_CZ4P[] = {"vehicles\armedCar"};
  veh_armedCars_CZ4P[] = {"vehicles\armedCars"};
  veh_armedCar_RU[] = {"vehicles\armedCar"};
  veh_armedCars_RU[] = {"vehicles\armedCars"};
  veh_truck[] = {"vehicles\truck"};
  veh_trucks[] = {"vehicles\trucks"};
  veh_truck_CZ[] = {"vehicles\truck"};
  veh_trucks_CZ[] = {"vehicles\trucks"};
  veh_truck_CZ4P[] = {"vehicles\truck"};
  veh_trucks_CZ4P[] = {"vehicles\trucks"};
  veh_truck_RU[] = {"vehicles\truck"};
  veh_trucks_RU[] = {"vehicles\trucks"};
  veh_WheeledAPC[] = {"vehicles\WheeledAPC"};
  veh_WheeledAPCs[] = {"vehicles\WheeledAPCs"};
  veh_WheeledAPC_CZ[] = {"vehicles\WheeledAPC"};
  veh_WheeledAPCs_CZ[] = {"vehicles\WheeledAPCs"};
  veh_WheeledAPC_CZ4P[] = {"vehicles\WheeledAPC"};
  veh_WheeledAPCs_CZ4P[] = {"vehicles\WheeledAPCs"};
  veh_WheeledAPC_RU[] = {"vehicles\WheeledAPC"};
  veh_WheeledAPCs_RU[] = {"vehicles\WheeledAPCs"};
  veh_tractor[] = {"vehicles\tractor"};
  veh_tractors[] = {"vehicles\tractors"};
  veh_tractor_CZ[] = {"vehicles\tractor"};
  veh_tractors_CZ[] = {"vehicles\tractors"};
  veh_tractor_CZ4P[] = {"vehicles\tractor"};
  veh_tractors_CZ4P[] = {"vehicles\tractors"};
  veh_tractor_RU[] = {"vehicles\tractor"};
  veh_tractors_RU[] = {"vehicles\tractors"};
  veh_bus[] = {"vehicles\bus"};
  veh_buses[] = {"vehicles\buses"};
  veh_bus_CZ[] = {"vehicles\bus"};
  veh_buses_CZ[] = {"vehicles\buses"};
  veh_bus_CZ4P[] = {"vehicles\bus"};
  veh_buses_CZ4P[] = {"vehicles\buses"};
  veh_bus_RU[] = {"vehicles\bus"};
  veh_buses_RU[] = {"vehicles\buses"};
  veh_tank[] = {"vehicles\tank"};
  veh_tanks[] = {"vehicles\tanks"};
  veh_tank_CZ[] = {"vehicles\tank"};
  veh_tanks_CZ[] = {"vehicles\tanks"};
  veh_tank_CZ4P[] = {"vehicles\tank"};
  veh_tanks_CZ4P[] = {"vehicles\tanks"};
  veh_tank_RU[] = {"vehicles\tank"};
  veh_tanks_RU[] = {"vehicles\tanks"};
  veh_TrackedAPC[] = {"vehicles\TrackedAPC"};
  veh_TrackedAPCs[] = {"vehicles\TrackedAPCs"};
  veh_TrackedAPC_CZ[] = {"vehicles\TrackedAPC"};
  veh_TrackedAPCs_CZ[] = {"vehicles\TrackedAPCs"};
  veh_TrackedAPC_CZ4P[] = {"vehicles\TrackedAPC"};
  veh_TrackedAPCs_CZ4P[] = {"vehicles\TrackedAPCs"};
  veh_TrackedAPC_RU[] = {"vehicles\TrackedAPC"};
  veh_TrackedAPCs_RU[] = {"vehicles\TrackedAPCs"};
  veh_wreck[] = {"vehicles\wreck"};
  veh_wrecks[] = {"vehicles\wrecks"};
  veh_wreck_CZ[] = {"vehicles\wreck"};
  veh_wrecks_CZ[] = {"vehicles\wrecks"};
  veh_wreck_CZ4P[] = {"vehicles\wreck"};
  veh_wrecks_CZ4P[] = {"vehicles\wrecks"};
  veh_wreck_RU[] = {"vehicles\wreck"};
  veh_wrecks_RU[] = {"vehicles\wrecks"};
  veh_MobileHQ[] = {"vehicles\MobileHQ"};
  veh_MobileHQs[] = {"vehicles\MobileHQs"};
  veh_MobileHQ_CZ[] = {"vehicles\MobileHQ"};
  veh_MobileHQs_CZ[] = {"vehicles\MobileHQs"};
  veh_MobileHQ_CZ4P[] = {"vehicles\MobileHQ"};
  veh_MobileHQs_CZ4P[] = {"vehicles\MobileHQs"};
  veh_MobileHQ_RU[] = {"vehicles\MobileHQ"};
  veh_MobileHQs_RU[] = {"vehicles\MobileHQs"};
  veh_ship[] = {"vehicles\ship"};
  veh_ships[] = {"vehicles\ships"};
  veh_ship_CZ[] = {"vehicles\ship"};
  veh_ships_CZ[] = {"vehicles\ships"};
  veh_ship_CZ4P[] = {"vehicles\ship"};
  veh_ships_CZ4P[] = {"vehicles\ships"};
  veh_ship_RU[] = {"vehicles\ship"};
  veh_ships_RU[] = {"vehicles\ships"};
  veh_StaticWeapon[] = {"vehicles\StaticMGWeapon"};
  veh_StaticWeapons[] = {"vehicles\StaticMGWeapons"};
  veh_StaticWeapon_CZ[] = {"vehicles\StaticMGWeapon"};
  veh_StaticWeapons_CZ[] = {"vehicles\StaticMGWeapons"};
  veh_StaticWeapon_CZ4P[] = {"vehicles\StaticMGWeapon"};
  veh_StaticWeapons_CZ4P[] = {"vehicles\StaticMGWeapons"};
  veh_StaticWeapon_RU[] = {"vehicles\StaticMGWeapon"};
  veh_StaticWeapons_RU[] = {"vehicles\StaticMGWeapons"};
  veh_StaticMGWeapon[] = {"vehicles\StaticMGWeapon"};
  veh_StaticMGWeapons[] = {"vehicles\StaticMGWeapons"};
  veh_StaticMGWeapon_CZ[] = {"vehicles\StaticMGWeapon"};
  veh_StaticMGWeapons_CZ[] = {"vehicles\StaticMGWeapons"};
  veh_StaticMGWeapon_CZ4P[] = {"vehicles\StaticMGWeapon"};
  veh_StaticMGWeapons_CZ4P[] = {"vehicles\StaticMGWeapons"};
  veh_StaticMGWeapon_RU[] = {"vehicles\StaticMGWeapon"};
  veh_StaticMGWeapons_RU[] = {"vehicles\StaticMGWeapons"};
  veh_StaticMortar[] = {"vehicles\StaticMortar"};
  veh_StaticMortars[] = {"vehicles\StaticMortars"};
  veh_StaticMortar_CZ[] = {"vehicles\StaticMortar"};
  veh_StaticMortars_CZ[] = {"vehicles\StaticMortars"};
  veh_StaticMortar_CZ4P[] = {"vehicles\StaticMortar"};
  veh_StaticMortars_CZ4P[] = {"vehicles\StaticMortars"};
  veh_StaticMortar_RU[] = {"vehicles\StaticMortar"};
  veh_StaticMortars_RU[] = {"vehicles\StaticMortars"};
  veh_searchLight[] = {"vehicles\searchLight"};
  veh_searchLights[] = {"vehicles\searchLights"};
  veh_searchLight_CZ[] = {"vehicles\searchLight"};
  veh_searchLights_CZ[] = {"vehicles\searchLights"};
  veh_searchLight_CZ4P[] = {"vehicles\searchLight"};
  veh_searchLights_CZ4P[] = {"vehicles\searchLights"};
  veh_searchLight_RU[] = {"vehicles\searchLight"};
  veh_searchLights_RU[] = {"vehicles\searchLights"};
  veh_staticgrenadelauncher[] = {"vehicles\staticgrenadelauncher"};
  veh_staticgrenadelaunchers[] = {"vehicles\staticgrenadelaunchers"};
  veh_staticgrenadelauncher_CZ[] = {"vehicles\staticgrenadelauncher"};
  veh_staticgrenadelaunchers_CZ[] = {"vehicles\staticgrenadelaunchers"};
  veh_staticgrenadelauncher_CZ4P[] = {"vehicles\staticgrenadelauncher"};
  veh_staticgrenadelaunchers_CZ4P[] = {"vehicles\staticgrenadelaunchers"};
  veh_staticgrenadelauncher_RU[] = {"vehicles\staticgrenadelauncher"};
  veh_staticgrenadelaunchers_RU[] = {"vehicles\staticgrenadelaunchers"};
  veh_staticCannon[] = {"vehicles\staticCannon"};
  veh_staticCannons[] = {"vehicles\staticCannons"};
  veh_staticCannon_CZ[] = {"vehicles\staticCannon"};
  veh_staticCannons_CZ[] = {"vehicles\staticCannons"};
  veh_staticCannon_CZ4P[] = {"vehicles\staticCannon"};
  veh_staticCannons_CZ4P[] = {"vehicles\staticCannons"};
  veh_staticCannon_RU[] = {"vehicles\staticCannon"};
  veh_staticCannons_RU[] = {"vehicles\staticCannons"};
  veh_staticATWeapon[] = {"vehicles\staticATLauncher"};
  veh_staticATWeapons[] = {"vehicles\staticATLauncher"};
  veh_staticATWeapon_CZ[] = {"vehicles\staticATLauncher"};
  veh_staticATWeapons_CZ[] = {"vehicles\staticATLauncher"};
  veh_staticATWeapon_CZ4P[] = {"vehicles\staticATLauncher"};
  veh_staticATWeapons_CZ4P[] = {"vehicles\staticATLauncher"};
  veh_staticATWeapon_RU[] = {"vehicles\staticATLauncher"};
  veh_staticATWeapons_RU[] = {"vehicles\staticATLauncher"};
  veh_staticAAWeapon[] = {"vehicles\staticAALauncher"};
  veh_staticAAWeapons[] = {"vehicles\staticAALauncher"};
  veh_staticAAWeapon_CZ[] = {"vehicles\staticAALauncher"};
  veh_staticAAWeapons_CZ[] = {"vehicles\staticAALauncher"};
  veh_staticAAWeapon_CZ4P[] = {"vehicles\staticAALauncher"};
  veh_staticAAWeapons_CZ4P[] = {"vehicles\staticAALauncher"};
  veh_staticAAWeapon_RU[] = {"vehicles\staticAALauncher"};
  veh_staticAAWeapons_RU[] = {"vehicles\staticAALauncher"};
  veh_aircraft[] = {"vehicles\aircraft"};
  veh_aircrafts[] = {"vehicles\aircrafts"};
  veh_aircraft_CZ[] = {"vehicles\aircraft"};
  veh_aircrafts_CZ[] = {"vehicles\aircrafts"};
  veh_aircraft_CZ4P[] = {"vehicles\aircraft"};
  veh_aircrafts_CZ4P[] = {"vehicles\aircrafts"};
  veh_aircraft_RU[] = {"vehicles\aircraft"};
  veh_aircrafts_RU[] = {"vehicles\aircrafts"};
  veh_parachute[] = {"vehicles\parachute"};
  veh_parachutes[] = {"vehicles\parachutes"};
  veh_parachute_CZ[] = {"vehicles\parachute"};
  veh_parachutes_CZ[] = {"vehicles\parachutes"};
  veh_parachute_CZ4P[] = {"vehicles\parachute"};
  veh_parachutes_CZ4P[] = {"vehicles\parachutes"};
  veh_parachute_RU[] = {"vehicles\parachute"};
  veh_parachutes_RU[] = {"vehicles\parachutes"};
  veh_airplane[] = {"vehicles\airplane"};
  veh_airplanes[] = {"vehicles\airplanes"};
  veh_airplane_CZ[] = {"vehicles\airplane"};
  veh_airplanes_CZ[] = {"vehicles\airplanes"};
  veh_airplane_CZ4P[] = {"vehicles\airplane"};
  veh_airplanes_CZ4P[] = {"vehicles\airplanes"};
  veh_airplane_RU[] = {"vehicles\airplane"};
  veh_airplanes_RU[] = {"vehicles\airplanes"};
  veh_cargoAirplane[] = {"vehicles\cargoAirplane"};
  veh_cargoAirplanes[] = {"vehicles\cargoAirplanes"};
  veh_cargoAirplane_CZ[] = {"vehicles\cargoAirplane"};
  veh_cargoAirplanes_CZ[] = {"vehicles\cargoAirplanes"};
  veh_cargoAirplane_CZ4P[] = {"vehicles\cargoAirplane"};
  veh_cargoAirplanes_CZ4P[] = {"vehicles\cargoAirplanes"};
  veh_cargoAirplane_RU[] = {"vehicles\cargoAirplane"};
  veh_cargoAirplanes_RU[] = {"vehicles\cargoAirplanes"};
  veh_attackAirplane[] = {"vehicles\attackAirplane"};
  veh_attackAirplanes[] = {"vehicles\attackAirplanes"};
  veh_attackAirplane_CZ[] = {"vehicles\attackAirplane"};
  veh_attackAirplanes_CZ[] = {"vehicles\attackAirplanes"};
  veh_attackAirplane_CZ4P[] = {"vehicles\attackAirplane"};
  veh_attackAirplanes_CZ4P[] = {"vehicles\attackAirplanes"};
  veh_attackAirplane_RU[] = {"vehicles\attackAirplane"};
  veh_attackAirplanes_RU[] = {"vehicles\attackAirplanes"};
  veh_UAV[] = {"vehicles\UAV"};
  veh_UAVs[] = {"vehicles\UAVs"};
  veh_UAV_CZ[] = {"vehicles\UAV"};
  veh_UAVs_CZ[] = {"vehicles\UAVs"};
  veh_UAV_CZ4P[] = {"vehicles\UAV"};
  veh_UAVs_CZ4P[] = {"vehicles\UAVs"};
  veh_UAV_RU[] = {"vehicles\UAV"};
  veh_UAVs_RU[] = {"vehicles\UAVs"};
  veh_helicopter[] = {"vehicles\helicopter"};
  veh_helicopters[] = {"vehicles\helicopters"};
  veh_helicopter_CZ[] = {"vehicles\helicopter"};
  veh_helicopters_CZ[] = {"vehicles\helicopters"};
  veh_helicopter_CZ4P[] = {"vehicles\helicopter"};
  veh_helicopters_CZ4P[] = {"vehicles\helicopters"};
  veh_helicopter_RU[] = {"vehicles\helicopter"};
  veh_helicopters_RU[] = {"vehicles\helicopters"};
  veh_gunship[] = {"vehicles\gunship"};
  veh_gunships[] = {"vehicles\gunships"};
  veh_gunship_CZ[] = {"vehicles\gunship"};
  veh_gunships_CZ[] = {"vehicles\gunships"};
  veh_gunship_CZ4P[] = {"vehicles\gunship"};
  veh_gunships_CZ4P[] = {"vehicles\gunships"};
  veh_gunship_RU[] = {"vehicles\gunship"};
  veh_gunships_RU[] = {"vehicles\gunships"};
  veh_transportHelicopter[] = {"vehicles\helicopter"};
  veh_transportHelicopters[] = {"vehicles\helicopters"};
  veh_transportHelicopter_CZ[] = {"vehicles\helicopter"};
  veh_transportHelicopters_CZ[] = {"vehicles\helicopters"};
  veh_transportHelicopter_CZ4P[] = {"vehicles\helicopter"};
  veh_transportHelicopters_CZ4P[] = {"vehicles\helicopters"};
  veh_transportHelicopter_RU[] = {"vehicles\helicopter"};
  veh_transportHelicopters_RU[] = {"vehicles\helicopters"};
  veh_animal[] = {"vehicles\animal"};
  veh_animals[] = {"vehicles\animals"};
  veh_animal_CZ[] = {"vehicles\animal"};
  veh_animals_CZ[] = {"vehicles\animals"};
  veh_animal_CZ4P[] = {"vehicles\animal"};
  veh_animals_CZ4P[] = {"vehicles\animals"};
  veh_animal_RU[] = {"vehicles\animal"};
  veh_animals_RU[] = {"vehicles\animals"};
  obj_tent[] = {"objects\tent"};
  obj_tents[] = {"objects\tents"};
  obj_tent_CZ[] = {"objects\tent"};
  obj_tents_CZ[] = {"objects\tents"};
  obj_tent_CZ4P[] = {"objects\tent"};
  obj_tents_CZ4P[] = {"objects\tents"};
  obj_tent_RU[] = {"objects\tent"};
  obj_tents_RU[] = {"objects\tents"};
  obj_fortification[] = {"objects\fortification"};
  obj_fortifications[] = {"objects\fortifications"};
  obj_fortification_CZ[] = {"objects\fortification"};
  obj_fortifications_CZ[] = {"objects\fortifications"};
  obj_fortification_CZ4P[] = {"objects\fortification"};
  obj_fortifications_CZ4P[] = {"objects\fortifications"};
  obj_fortification_RU[] = {"objects\fortification"};
  obj_fortifications_RU[] = {"objects\fortifications"};
  obj_wall[] = {"objects\wall"};
  obj_walls[] = {"objects\walls"};
  obj_wall_CZ[] = {"objects\wall"};
  obj_walls_CZ[] = {"objects\walls"};
  obj_wall_CZ4P[] = {"objects\wall"};
  obj_walls_CZ4P[] = {"objects\walls"};
  obj_wall_RU[] = {"objects\wall"};
  obj_walls_RU[] = {"objects\walls"};
  obj_fence[] = {"objects\fence"};
  obj_fences[] = {"objects\fences"};
  obj_fence_CZ[] = {"objects\fence"};
  obj_fences_CZ[] = {"objects\fences"};
  obj_fence_CZ4P[] = {"objects\fence"};
  obj_fences_CZ4P[] = {"objects\fences"};
  obj_fence_RU[] = {"objects\fence"};
  obj_fences_RU[] = {"objects\fences"};
  obj_target[] = {"objects\target"};
  obj_targets[] = {"objects\targets"};
  obj_target_CZ[] = {"objects\target"};
  obj_targets_CZ[] = {"objects\targets"};
  obj_target_CZ4P[] = {"objects\target"};
  obj_targets_CZ4P[] = {"objects\targets"};
  obj_target_RU[] = {"objects\target"};
  obj_targets_RU[] = {"objects\targets"};
  obj_object[] = {"objects\object"};
  obj_objects[] = {"objects\objects"};
  obj_object_CZ[] = {"objects\object"};
  obj_objects_CZ[] = {"objects\objects"};
  obj_object_CZ4P[] = {"objects\object"};
  obj_objects_CZ4P[] = {"objects\objects"};
  obj_object_RU[] = {"objects\object"};
  obj_objects_RU[] = {"objects\objects"};
  obj_flag[] = {"objects\flag"};
  obj_flags[] = {"objects\flags"};
  obj_flag_CZ[] = {"objects\flag"};
  obj_flags_CZ[] = {"objects\flags"};
  obj_flag_CZ4P[] = {"objects\flag"};
  obj_flags_CZ4P[] = {"objects\flags"};
  obj_flag_RU[] = {"objects\flag"};
  obj_flags_RU[] = {"objects\flags"};
  obj_ammocrate[] = {"objects\ammocrate"};
  obj_ammocrates[] = {"objects\ammocrates"};
  obj_ammocrate_CZ[] = {"objects\ammocrate"};
  obj_ammocrates_CZ[] = {"objects\ammocrates"};
  obj_ammocrate_CZ4P[] = {"objects\ammocrate"};
  obj_ammocrates_CZ4P[] = {"objects\ammocrates"};
  obj_ammocrate_RU[] = {"objects\ammocrate"};
  obj_ammocrates_RU[] = {"objects\ammocrates"};
  obj_building[] = {"objects\building"};
  obj_buildings[] = {"objects\buildings"};
  obj_building_CZ[] = {"objects\building"};
  obj_buildings_CZ[] = {"objects\buildings"};
  obj_building_CZ4P[] = {"objects\building"};
  obj_buildings_CZ4P[] = {"objects\buildings"};
  obj_building_RU[] = {"objects\building"};
  obj_buildings_RU[] = {"objects\buildings"};
  obj_house[] = {"objects\house"};
  obj_houses[] = {"objects\houses"};
  obj_house_CZ[] = {"objects\house"};
  obj_houses_CZ[] = {"objects\houses"};
  obj_house_CZ4P[] = {"objects\house"};
  obj_houses_CZ4P[] = {"objects\houses"};
  obj_house_RU[] = {"objects\house"};
  obj_houses_RU[] = {"objects\houses"};
  obj_structure[] = {"objects\structure"};
  obj_structures[] = {"objects\structures"};
  obj_structure_CZ[] = {"objects\structure"};
  obj_structures_CZ[] = {"objects\structures"};
  obj_structure_CZ4P[] = {"objects\structure"};
  obj_structures_CZ4P[] = {"objects\structures"};
  obj_structure_RU[] = {"objects\structure"};
  obj_structures_RU[] = {"objects\structures"};
  obj_church[] = {"objects\church"};
  obj_churches[] = {"objects\churchs"};
  obj_church_CZ[] = {"objects\church"};
  obj_churches_CZ[] = {"objects\churchs"};
  obj_church_CZ4P[] = {"objects\church"};
  obj_churches_CZ4P[] = {"objects\churchs"};
  obj_church_RU[] = {"objects\church"};
  obj_churches_RU[] = {"objects\churchs"};
  obj_cross[] = {"objects\cross"};
  obj_crosses[] = {"objects\crosses"};
  obj_cross_CZ[] = {"objects\cross"};
  obj_crosses_CZ[] = {"objects\crosses"};
  obj_cross_CZ4P[] = {"objects\cross"};
  obj_crosses_CZ4P[] = {"objects\crosses"};
  obj_cross_RU[] = {"objects\cross"};
  obj_crosses_RU[] = {"objects\crosses"};
  obj_bush[] = {"objects\bush"};
  obj_bushes[] = {"objects\bushes"};
  obj_bush_CZ[] = {"objects\bush"};
  obj_bushes_CZ[] = {"objects\bushes"};
  obj_bush_CZ4P[] = {"objects\bush"};
  obj_bushes_CZ4P[] = {"objects\bushes"};
  obj_bush_RU[] = {"objects\bush"};
  obj_bushes_RU[] = {"objects\bushes"};
  obj_tree[] = {"objects\tree"};
  obj_trees[] = {"objects\trees"};
  obj_tree_CZ[] = {"objects\tree"};
  obj_trees_CZ[] = {"objects\trees"};
  obj_tree_CZ4P[] = {"objects\tree"};
  obj_trees_CZ4P[] = {"objects\trees"};
  obj_tree_RU[] = {"objects\tree"};
  obj_trees_RU[] = {"objects\trees"};
  obj_rock[] = {"objects\rock"};
  obj_rocks[] = {"objects\rocks"};
  obj_rock_CZ[] = {"objects\rock"};
  obj_rocks_CZ[] = {"objects\rocks"};
  obj_rock_CZ4P[] = {"objects\rock"};
  obj_rocks_CZ4P[] = {"objects\rocks"};
  obj_rock_RU[] = {"objects\rock"};
  obj_rocks_RU[] = {"objects\rocks"};
  obj_forest[] = {"objects\forest"};
  obj_forests[] = {"objects\forests"};
  obj_forest_CZ[] = {"objects\forest"};
  obj_forests_CZ[] = {"objects\forests"};
  obj_forest_CZ4P[] = {"objects\forest"};
  obj_forests_CZ4P[] = {"objects\forests"};
  obj_forest_RU[] = {"objects\forest"};
  obj_forests_RU[] = {"objects\forests"};
  obj_ruin[] = {"objects\ruin"};
  obj_ruins[] = {"objects\ruins"};
  obj_ruin_CZ[] = {"objects\ruin"};
  obj_ruins_CZ[] = {"objects\ruins"};
  obj_ruin_CZ4P[] = {"objects\ruin"};
  obj_ruins_CZ4P[] = {"objects\ruins"};
  obj_ruin_RU[] = {"objects\ruin"};
  obj_ruins_RU[] = {"objects\ruins"};
  obj_bunker[] = {"objects\bunker"};
  obj_bunkers[] = {"objects\bunkers"};
  obj_bunker_CZ[] = {"objects\bunker"};
  obj_bunkers_CZ[] = {"objects\bunkers"};
  obj_bunker_CZ4P[] = {"objects\bunker"};
  obj_bunkers_CZ4P[] = {"objects\bunkers"};
  obj_bunker_RU[] = {"objects\bunker"};
  obj_bunkers_RU[] = {"objects\bunkers"};
  enemy[] = {"side\enemy"};
  friendly[] = {"side\friendly"};
  civilian[] = {"side\civilian"};
  resistance[] = {"side\Guerilla"};
  unknown[] = {"\ca\dubbing\GLOBAL\RADIO\empty01sec"};
  mgun[] = {"weapons\machinegun"};
  heat[] = {"weapons\cannonLow"};
  sabot[] = {"weapons\cannonLow"};
  cannon[] = {"weapons\cannonHigh"};
  cannonLow[] = {"weapons\cannonLow"};
  cannonHigh[] = {"weapons\cannonLow"};
  RocketsPairs[] = {"weapons\rockets"};
  RocketsSalvo[] = {"weapons\rockets"};
  Bombs[] = {"weapons\cannonLow"};
  Flares[] = {"weapons\cannonLow"};
  missiles[] = {"weapons\missiles"};
  rockets[] = {"weapons\rockets"};
  rifle[] = {"weapons\rifle"};
  sidearm[] = {"weapons\sidearm"};
  atlauncher[] = {"weapons\atlauncher"};
  aalauncher[] = {"weapons\aalauncher"};
  grenadelauncher[] = {"weapons\grenadelauncher"};
  magazine[] = {"weapons\magazine"};
  handgrenade[] = {"weapons\handgrenade"};
  grenade[] = {"weapons\grenade"};
  smokeshell[] = {"weapons\smokeshell"};
  flare[] = {"weapons\flare"};
  mine[] = {"weapons\mine"};
  satchelcharge[] = {"weapons\satchelcharge"};
  binoculars[] = {"weapons\binoculars"};
  nvgoggles[] = {"weapons\nvgoggles"};
  laserdesignator[] = {"weapons\laserdesignator"};
  sniperRifle[] = {"weapons\sniperrifle"};
  position[] = {"position"};
  CannotFire[] = {"NemuzuStrilet"};
  CeaseFire[] = {"NestriletE"};
  Target[] = {"Cil"};
  Take[] = {"actions\Vezmi"};
  From[] = {"From"};
  Move[] = {"report\pohybE"};
  MoveTo[] = {"report\PresunNa"};
  MoveToPos[] = {"report\PresunNaPozici"};
  GoTo[] = {"report\PresunSmer"};
  GoDir[] = {"report\Smer"};
  GoFast[] = {"report\pohybE"};
  HealAt[] = {"actions\OsetriSe"};
  RepairAt[] = {"actions\OpravteSe"};
  RefuelAt[] = {"actions\DoplnPalivo"};
  RearmAt[] = {"actions\DoplnStrelivo"};
  SupportAt[] = {"actions\Podpora"};
  Attack[] = {"UtokE"};
  awaitingorders[] = {"hc\StandingByForOrders"};
  GetIn[] = {"Nastup"};
  Board[] = {"Nastoupit"};
  Halt[] = {"Zastav"};
  Forward[] = {"Dopredu"};
  Reverse[] = {"Dozadu"};
  Fast[] = {"Rychle"};
  Slow[] = {"Pomalu"};
  Left[] = {"Doleva"};
  Right[] = {"Doprava"};
  fromYou[] = {"report\odTebe"};
  fromUs[] = {"report\odNas"};
  inFrontOf[] = {"report\vpredu"};
  rightOf[] = {"report\vpravo"};
  behind[] = {"report\vzadu"};
  leftOf[] = {"report\vlevo"};
  dangerouslyCloseTo[] = {"report\blizko"};
  notFarFrom[] = {"report\blizko"};
  farFrom[] = {"report\daleko"};
  front[] = {"report\predNama"};
  rear[] = {"report\zaNama"};
  rightFlank[] = {"report\vpravoOdNas"};
  leftFlank[] = {"report\vlevoOdNas"};
  damnClose[] = {"report\blizko"};
  notFar[] = {"report\stredniVzdalenost"};
  closeTo[] = {"report\blizko"};
  and[] = {"core\targets\a"};
  us[] = {"us"};
  our[] = {"our"};
  you[] = {"you"};
  me[] = {"me"};
  in[] = {"in"};
  of[] = {"core\targets\u"};
  BeAdvised[] = {"report\Pozor"};
  Contact[] = {"report\Kontakt"};
  toOur[] = {"toOur"};
  atOur[] = {"atOur"};
  FireAt[] = {"palna"};
  Fire[] = {"pal"};
  Gunner[] = {"JakoStrelec"};
  Commander[] = {"JakoVelitel"};
  Driver[] = {"JakoRidic"};
  Pilot[] = {"JakoPilot"};
  Loader[] = {"JakoStrelec"};
  Crewchief[] = {"JakoVelitel"};
  IsDownE[] = {"ToSchytal"};
  ShitE[] = {"Kurva"};
  IsHitE[] = {"ToDostalE"};
  ManDownE[] = {"MameRanenyho"};
  FuckE[] = {"Bacha"};
  WeNeedMedicalAssistanceAt[] = {"PotrebujuZdravotnika"};
  Over1[] = {"static\prijem02"};
  Over2[] = {"static\prijem01"};
  RequestingRepairTeamAt[] = {"PotrebujuOpravu"};
  WereRunningOnFumesNeedRefuelAt[] = {"JsemNaDneSPalivem"};
  RequestingUrgentResupplyAt[] = {"NemamStrelivo"};
  ProvidingSupportAt[] = {"JedemeNa"};
  HoldOnGuysSupportsOnTheWayE[] = {"VydrztePodporaJeNaCeste"};
  WereOnIt[] = {"JdemNaToKonec"};
  ImAtGrid[] = {"JsemNa"};
  ProvidingSupportTo[] = {"PoskytujuPodporu"};
  Out1[] = {"static\konec01"};
  YoureGoodToGoE[] = {"JsmeHotovyJedte"};
  SupportComplete[] = {"PodporaKomplet"};
  Negative[] = {"Negativni"};
  NoSupportAvailableAtThisTime[] = {"PodporaNeniKDispozici"};
  ImHitE[] = {"KurvaJaToKoupil"};
  ImBleedingE[] = {"PanebozeKrvacim"};
  SomebodyHelpMeE[] = {"KurvaPomoc"};
  GetMeACorpsmanNowE[] = {"ZdravotnikE"};
  CorpsmanE[] = {"ZdravotnikE"};
  TheyGotMeE[] = {"DostaliMeE"};
  NeedHelpE[] = {"PomocE"};
  WoundedE[] = {"PomocE"};
  StatusRedE[] = {"DostalJsemTo"};
  VehicleIsFUBARE[] = {"SakraJSemNaHadry"};
  WereHeavilyDamagedE[] = {"SakraJSemNaHadry"};
  CriticalDamageE[] = {"SakraJSemNaHadry"};
  ImOutOfFuelE[] = {"JsemBezPaliva"};
  ImRunningOutOfFuel[] = {"DochaziPalivo"};
  GoddamnE[] = {"Sakra"};
  OutOfAmmoE[] = {"NemamMunici"};
  NoMoreAmmoE[] = {"DochaziMiStrelivo"};
  CantShootE[] = {"NemuzuStrilet"};
  RunningOutOfAmmoE[] = {"NemamMunici"};
  AwayGrid[] = {"OdTebeSouradnice"};
  IsNowInCommand[] = {"PrebiramVeleni"};
  ImTheNewActual[] = {"PrebiramVeleni"};
  Ready[] = {"Muzem"};
  ReadyForOrders[] = {"CekamNaRozkaz"};
  IsReady[] = {"JsemPripraven"};
  Waiting[] = {"Cekam"};
  StandingBy[] = {"Pripraven"};
  ReadyToFire[] = {"PripravenKPalbe"};
  HaveTheTargetInMySights[] = {"VidimCil"};
  TargetInSight[] = {"MamCilMuzuPalit"};
  UnableToFireE[] = {"NemuzuStrilet"};
  SorryICant[] = {"SoracTedNE"};
  DamnE[] = {"Sakra"};
  ICantGetThere[] = {"TamSeNedostanu"};
  CantMakeItThere[] = {"ToNepujde"};
  TargetDestroyedE[] = {"CilZnicenejE"};
  YeahGetSome[] = {"JoNazerSeE"};
  ScratchOneE[] = {"DostalToE"};
  TargetEliminated[] = {"CilZnicenejE"};
  HesDownE[] = {"JePoNem"};
  SuccessfullyEngaged[] = {"ToDostal"};
  IveGotHimE[] = {"DostalSemHoE"};
  ContactE[] = {"KontaktE"};
  EnemiesE[] = {"BachaKontakt"};
  HostilesE[] = {"NepritelE"};
  UnderFireE[] = {"JsemPodPalbou"};
  TheyreShootingAtUsE[] = {"StrilejPoNasE"};
  EnemyFireE[] = {"NepritelE"};
  BeingEngagedE[] = {"UtocejNaNasE"};
  FuckThatsCloseE[] = {"KurvaToSloBlizko"};
  IncomingE[] = {"BachaJdouNaNas"};
  Clear[] = {"Cisto"};
  NoEnemiesInSight[] = {"DobryNikohoNevidim"};
  AreaClear[] = {"SektorCistej"};
  SayAgain[] = {"OpakujtePrijemE"};
  ReportPositionE[] = {"HlasPoziciE"};
  WhatIsYourLocationQ[] = {"JakaJeTvaPoziceQ"};
  WhereAreYouQ[] = {"KdeSakraJsteQ"};
  NeedSITREPE[] = {"PotrebujuSouradniceE"};
  FallBackE[] = {"ZpatkyE"};
  ReturnToFormationE[] = {"VratSeDoFormaceE"};
  FormOnMeE[] = {"KeMne"};
  GetBackE[] = {"ZpatkyE"};
  StayInFormationE[] = {"DoFormaceE"};
  RegroupE[] = {"DrzFormaci"};
  DoYouReadQ[] = {"SlysisQ"};
  ReportStatus[] = {"HlasSe"};
  SendSITREP[] = {"PosliSouradnice"};
  WhatsYourStatusQ[] = {"JakJsiNaTomQ"};
  Formation[] = {"DoFormaceE"};
  FormationColumn[] = {"zastupE"};
  FormationStaggeredColumn[] = {"ZastupStridave"};
  FormationWedge[] = {"Klin"};
  FormationEchelonLeft[] = {"StupnoviteVlevo"};
  FormationEchelonRight[] = {"StupnoviteVpravo"};
  FormationVee[] = {"Vecko"};
  FormationLine[] = {"Rojnice"};
  FormationFile[] = {"ZastupBezRozestupu"};
  FormationDiamond[] = {"DoCtverce"};
  AtEase[] = {"Bezpecno"};
  StayFrosty[] = {"DavejBacha"};
  StayAlert[] = {"PozorNaOkoli"};
  GetReadyForContactE[] = {"PripravitNaKontakt"};
  GetReadyToFightE[] = {"PripravitKBoji"};
  DangerE[] = {"NebezpeciE"};
  Silence[] = {"TichoKurva"};
  DownAndQuiet[] = {"OdtedPotichu"};
  Stealth[] = {"KryjteSeE"};
  FireAtWill[] = {"PalitBezRozkazu"};
  OpenUpE[] = {"UtokE"};
  LightEmUpE[] = {"DoNichE"};
  GoGoGoE[] = {"DemNaToE"};
  HoldFire[] = {"ZastavitPalbuE"};
  HoldFireE[] = {"NestriletE"};
  CeaseFireGoddamnitE[] = {"KurvaNestriletE"};
  CheckYourFireE[] = {"NestrilejE"};
  YoureFiringOnFriendliesE[] = {"TrefilsVlastniE"};
  EngageAtWill[] = {"UtocitBezRozkazuE"};
  GoProne[] = {"KzemiE"};
  StayCrouched[] = {"KzemiE"};
  StandUp[] = {"VztykE"};
  OnYourFeet[] = {"Vstavat"};
  CopyMyStance[] = {"PodleMe"};
  Advance[] = {"Dopredu"};
  TakePoint[] = {"PredSkupinu"};
  StayBack[] = {"Dozadu"};
  CoverOurRear[] = {"ZaSkupinu"};
  FlankLeft[] = {"Doleva"};
  FlankRight[] = {"Doprava"};
  Is[] = {"Je"};
  Are[] = {"Jsou"};
  WatchThat[] = {"Pozoruj"};
  Watch[] = {"Hlidej"};
  ScanHorizon[] = {"HlidejOkoli"};
  NoMoreTarget[] = {"ZadnyCil"};
  NoTarget[] = {"ZrusitCil"};
  CancelTarget[] = {"ZrusitCil"};
  TargetThat[] = {"Cil"};
  EngageThat[] = {"UtokNa"};
  FireAtThat[] = {"PalbaNa"};
  EngageE[] = {"DoNichE"};
  FireE[] = {"StrilejE"};
  EjectE[] = {"actions\PadejE"};
  BailOutE[] = {"actions\Vyskoc"};
  SetACharge[] = {"actions\PripravitNaloze"};
  DetonateChargeNowE[] = {"actions\OdpalTo"};
  SetTheTimer[] = {"actions\NastavCasovani"};
  DeactivateThatCharge[] = {"actions\DeaktivujNaloz"};
  DisarmThatMine[] = {"actions\DeaktivujMinu"};
  PickUpThatMine[] = {"actions\BerTuMinu"};
  GoAndLightThatFire[] = {"actions\ZapalOhen"};
  PutOutThatFire[] = {"actions\UhasTo"};
  OpenThatDoor[] = {"actions\OtevriDvere"};
  CloseThatDoor[] = {"actions\ZavriTyDvere"};
  Support[] = {"actions\Podpora"};
  TakeTheFlag[] = {"actions\ZaberVlajku"};
  ReturnTheFlag[] = {"actions\VratVlajku"};
  Follow[] = {"Veli"};
  AttackE[] = {"UtokE"};
  Dismount[] = {"Sesedat"};
  Disembark[] = {"Vystoupit"};
  HaltE[] = {"Zastav"};
  StopE[] = {"Stop"};
  StayThere[] = {"ZustanTady"};
  WaitForMe[] = {"Cekat"};
  TakeCoverE[] = {"KryjteSe"};
  HideE[] = {"SchovejSe"};
  ConcealYourSelfE[] = {"UkrytSe"};
  ImOnHim[] = {"JdemNaToKonec"};
  EngagingE[] = {"UtocimE"};
  EngagingTargetE[] = {"UtocimNaCil"};
  Supporting[] = {"PoskytujuPodporuKonec"};
  Roger[] = {"Rozumim"};
  Copy[] = {"RozumimKonec"};
  OnTheWay[] = {"PotvrzujuJdemNaVec"};
  ImOnIt[] = {"JdemNaToKonec"};
  MaintainFormation[] = {"UdrzujFormaci"};
  SwitchingToManualFire[] = {"ManualniStrelba"};
  DisablingManualFire[] = {"ZrusitManualni"};
  C_SuppresiveFireE[] = {"combat\SuppresiveFireE"};
  C_HangOnILLSuppressE[] = {"combat\HangOnILLSuppressE"};
  C_SuppressingE[] = {"combat\SuppressingE"};
  C_TakeHimOutE[] = {"combat\TakeHimOutE"};
  C_CarefulJustBeCareful[] = {"combat\CarefulJustBeCareful"};
  C_CheckSectors[] = {"combat\CheckSectors"};
  C_ScanYourSector[] = {"combat\ScanYourSector"};
  C_OpenUpE[] = {"combat\OpenUpE"};
  C_GoImCoveringE[] = {"combat\GoImCoveringE"};
  C_GoILLCoverE[] = {"combat\GoILLCoverE"};
  C_CoveringFireE[] = {"combat\CoveringFireE"};
  C_CoveringGoE[] = {"combat\CoveringGoE"};
  C_MoveOutE[] = {"combat\MoveOutE"};
  C_GoE[] = {"combat\GoE"};
  C_MoveE[] = {"combat\MoveE"};
  C_EngagingE[] = {"combat\EngagingE"};
  C_CoverMeE[] = {"combat\CoverMeE"};
  C_OKLetsGo[] = {"combat\OKLetsGo"};
  C_MovingE[] = {"combat\MovingE"};
  C_GoingE[] = {"combat\GoingE"};
  C_ReloadingE[] = {"combat\ReloadingE"};
  C_IgottaReloadE[] = {"combat\IgottaReloadE"};
  C_CoverMeWhileIReloadE[] = {"combat\CoverMeWhileIReloadE"};
  C_ChangingMagsE[] = {"combat\ChangingMagsE"};
  C_FireInTheHoleE[] = {"combat\FireInTheHoleE"};
  C_GrenadeE[] = {"combat\GrenadeE"};
  C_WatchForGrenadeE[] = {"combat\WatchForGrenadeE"};
  C_ThrowingFragE[] = {"combat\ThrowingFragE"};
  C_ThrowingSmokeNowE[] = {"combat\ThrowingSmokeNowE"};
  C_SmokeOutE[] = {"combat\SmokeOutE"};
  C_FragOutE[] = {"combat\FragOutE"};
  C_ContactE[] = {"combat\ContactE"};
  C_DidYouSeeThatQ[] = {"combat\DidYouSeeThatQ"};
  C_FuckSawThatQ[] = {"combat\FuckSawThatQ"};
  C_TargetE[] = {"combat\TargetE"};
  C_GotATargetE[] = {"combat\GotATargetE"};
  C_HostilesE[] = {"combat\HostilesE"};
  C_BadGuysE[] = {"combat\BadGuysE"};
  C_RightThereE[] = {"combat\RightThereE"};
  C_TakeCoverE[] = {"combat\TakeCoverE"};
  C_ShitE[] = {"combat\ShitE"};
  C_GetDownE[] = {"combat\GetDownE"};
  C_HolyShitE[] = {"combat\HolyShitE"};
  C_OhJesusE[] = {"combat\OhJesusE"};
  C_WhatTheFuckQ[] = {"combat\WhatTheFuckQ"};
  C_WhatTheHellQ[] = {"combat\WhatTheHellQ"};
  C_FocusE[] = {"combat\FocusE"};
  C_WhatTheFuckWasThatQ[] = {"combat\WhatTheFuckWasThatQ"};
  C_HitTheDeckE[] = {"combat\HitTheDeckE"};
  C_CheckThatOut[] = {"combat\CheckThatOut"};
  C_WhatAView[] = {"combat\WhatAView"};
  C_WhatAMess[] = {"combat\WhatAMess"};
  C_WishIHadntSeeThat[] = {"combat\WishIHadntSeeThat"};
  C_ThatSucks[] = {"combat\ThatSucks"};
  C_MotherfuckerE[] = {"combat\MotherfuckerE"};
  C_SweetJesusE[] = {"combat\SweetJesusE"};
  C_SeeThatQE[] = {"combat\SeeThatQE"};
  C_ManDownE[] = {"combat\ManDownE"};
  C_FuckHesDownE[] = {"combat\FuckHesDownE"};
  C_HesDeadE[] = {"combat\HesDeadE"};
  C_HesGoneE[] = {"combat\HesGoneE"};
  C_WeLostHimE[] = {"combat\WeLostHimE"};
  C_TheyGotHimE[] = {"combat\TheyGotHimE"};
  C_NoE[] = {"combat\NoE"};
  C_FuckE[] = {"combat\FuckE"};
  C_ManHitE[] = {"combat\ManHitE"};
  C_scream1[] = {"combat\scream1"};
  C_scream2[] = {"combat\scream2"};
  C_scream3[] = {"combat\scream3"};
  C_scream4[] = {"combat\scream4"};
  C_woohoo1[] = {"combat\woohoo1"};
  C_woohoo2[] = {"combat\woohoo2"};
  C_woohoo3[] = {"combat\woohoo3"};
  C_woohoo4[] = {"combat\woohoo4"};
  HC_Advancing[] = {"hc\Advancing"};
  HC_Affirmative[] = {"hc\Affirmative"};
  HC_AssaultingEnemyPosition[] = {"hc\AssaultingEnemyPosition"};
  HC_AttackingE[] = {"hc\AttackingE"};
  HC_CombatReady[] = {"hc\CombatReady"};
  HC_EngagingE[] = {"hc\EngagingE"};
  HC_MovingToPosition[] = {"hc\MovingToPosition"};
  HC_OrderReceived[] = {"hc\OrderReceived"};
  HC_PinnedDownE[] = {"hc\PinnedDownE"};
  HC_ReportingIn[] = {"hc\ReportingIn"};
  HC_StandingByForOrders[] = {"hc\StandingByForOrders"};
  HC_TakingHeavyFireE[] = {"hc\TakingHeavyFireE"};
  HC_WaitingForOrders[] = {"hc\WaitingForOrders"};
  HC_WeHaveCasaultiesE[] = {"hc\WeHaveCasaultiesE"};
  HC_WeveGotMenKIAE[] = {"hc\WeveGotMenKIAE"};
  ALICE_Positive_01[] = {"ALICE\Positive\Positive_01"};
  ALICE_Positive_02[] = {"ALICE\Positive\Positive_02"};
  ALICE_Positive_03[] = {"ALICE\Positive\Positive_03"};
  ALICE_Positive_04[] = {"ALICE\Positive\Positive_04"};
  ALICE_Positive_05[] = {"ALICE\Positive\Positive_05"};
  ALICE_Positive_06[] = {"ALICE\Positive\Positive_06"};
  ALICE_Positive_07[] = {"ALICE\Positive\Positive_07"};
  ALICE_Positive_08[] = {"ALICE\Positive\Positive_08"};
  ALICE_Positive_09[] = {"ALICE\Positive\Positive_09"};
  ALICE_Positive_10[] = {"ALICE\Positive\Positive_10"};
  ALICE_Positive_11[] = {"ALICE\Positive\Positive_11"};
  ALICE_Positive_12[] = {"ALICE\Positive\Positive_12"};
  ALICE_Positive_13[] = {"ALICE\Positive\Positive_13"};
  ALICE_Positive_14[] = {"ALICE\Positive\Positive_14"};
  ALICE_Positive_15[] = {"ALICE\Positive\Positive_15"};
  ALICE_Positive_16[] = {"ALICE\Positive\Positive_16"};
  ALICE_Positive_17[] = {"ALICE\Positive\Positive_17"};
  ALICE_Positive_18[] = {"ALICE\Positive\Positive_18"};
  ALICE_Positive_19[] = {"ALICE\Positive\Positive_19"};
  ALICE_Positive_20[] = {"ALICE\Positive\Positive_20"};
  ALICE_Positive_21[] = {"ALICE\Positive\Positive_21"};
  ALICE_Positive_22[] = {"ALICE\Positive\Positive_22"};
  ALICE_Positive_23[] = {"ALICE\Positive\Positive_23"};
  ALICE_Positive_24[] = {"ALICE\Positive\Positive_24"};
  ALICE_Positive_25[] = {"ALICE\Positive\Positive_25"};
  ALICE_Positive_26[] = {"ALICE\Positive\Positive_26"};
  ALICE_Positive_27[] = {"ALICE\Positive\Positive_27"};
  ALICE_Positive_28[] = {"ALICE\Positive\Positive_28"};
  ALICE_Positive_29[] = {"ALICE\Positive\Positive_29"};
  ALICE_Positive_30[] = {"ALICE\Positive\Positive_30"};
  ALICE_Positive_31[] = {"ALICE\Positive\Positive_31"};
  ALICE_Positive_32[] = {"ALICE\Positive\Positive_32"};
  ALICE_Positive_33[] = {"ALICE\Positive\Positive_33"};
  ALICE_Positive_34[] = {"ALICE\Positive\Positive_34"};
  ALICE_Positive_35[] = {"ALICE\Positive\Positive_35"};
  ALICE_Positive_36[] = {"ALICE\Positive\Positive_36"};
  ALICE_Positive_37[] = {"ALICE\Positive\Positive_37"};
  ALICE_Positive_38[] = {"ALICE\Positive\Positive_38"};
  ALICE_Neutral_01[] = {"ALICE\Neutral\Neutral_01"};
  ALICE_Neutral_02[] = {"ALICE\Neutral\Neutral_02"};
  ALICE_Neutral_03[] = {"ALICE\Neutral\Neutral_03"};
  ALICE_Neutral_04[] = {"ALICE\Neutral\Neutral_04"};
  ALICE_Neutral_05[] = {"ALICE\Neutral\Neutral_05"};
  ALICE_Neutral_06[] = {"ALICE\Neutral\Neutral_06"};
  ALICE_Neutral_07[] = {"ALICE\Neutral\Neutral_07"};
  ALICE_Neutral_08[] = {"ALICE\Neutral\Neutral_08"};
  ALICE_Neutral_09[] = {"ALICE\Neutral\Neutral_09"};
  ALICE_Neutral_10[] = {"ALICE\Neutral\Neutral_10"};
  ALICE_Neutral_11[] = {"ALICE\Neutral\Neutral_11"};
  ALICE_Neutral_12[] = {"ALICE\Neutral\Neutral_12"};
  ALICE_Neutral_13[] = {"ALICE\Neutral\Neutral_13"};
  ALICE_Neutral_14[] = {"ALICE\Neutral\Neutral_14"};
  ALICE_Neutral_15[] = {"ALICE\Neutral\Neutral_15"};
  ALICE_Neutral_16[] = {"ALICE\Neutral\Neutral_16"};
  ALICE_Neutral_17[] = {"ALICE\Neutral\Neutral_17"};
  ALICE_Neutral_18[] = {"ALICE\Neutral\Neutral_18"};
  ALICE_Neutral_19[] = {"ALICE\Neutral\Neutral_19"};
  ALICE_Neutral_20[] = {"ALICE\Neutral\Neutral_20"};
  ALICE_Neutral_21[] = {"ALICE\Neutral\Neutral_21"};
  ALICE_Neutral_22[] = {"ALICE\Neutral\Neutral_22"};
  ALICE_Neutral_23[] = {"ALICE\Neutral\Neutral_23"};
  ALICE_Neutral_24[] = {"ALICE\Neutral\Neutral_24"};
  ALICE_Neutral_25[] = {"ALICE\Neutral\Neutral_25"};
  ALICE_Neutral_26[] = {"ALICE\Neutral\Neutral_26"};
  ALICE_Neutral_27[] = {"ALICE\Neutral\Neutral_27"};
  ALICE_Neutral_28[] = {"ALICE\Neutral\Neutral_28"};
  ALICE_Neutral_29[] = {"ALICE\Neutral\Neutral_29"};
  ALICE_Neutral_30[] = {"ALICE\Neutral\Neutral_30"};
  ALICE_Neutral_31[] = {"ALICE\Neutral\Neutral_31"};
  ALICE_Neutral_32[] = {"ALICE\Neutral\Neutral_32"};
  ALICE_Neutral_33[] = {"ALICE\Neutral\Neutral_33"};
  ALICE_Neutral_34[] = {"ALICE\Neutral\Neutral_34"};
  ALICE_Neutral_35[] = {"ALICE\Neutral\Neutral_35"};
  ALICE_Neutral_36[] = {"ALICE\Neutral\Neutral_36"};
  ALICE_Neutral_37[] = {"ALICE\Neutral\Neutral_37"};
  ALICE_Neutral_38[] = {"ALICE\Neutral\Neutral_38"};
  ALICE_Negative_01[] = {"ALICE\Negative\Negative_01"};
  ALICE_Negative_02[] = {"ALICE\Negative\Negative_02"};
  ALICE_Negative_03[] = {"ALICE\Negative\Negative_03"};
  ALICE_Negative_04[] = {"ALICE\Negative\Negative_04"};
  ALICE_Negative_05[] = {"ALICE\Negative\Negative_05"};
  ALICE_Negative_06[] = {"ALICE\Negative\Negative_06"};
  ALICE_Negative_07[] = {"ALICE\Negative\Negative_07"};
  ALICE_Negative_08[] = {"ALICE\Negative\Negative_08"};
  ALICE_Negative_09[] = {"ALICE\Negative\Negative_09"};
  ALICE_Negative_10[] = {"ALICE\Negative\Negative_10"};
  ALICE_Negative_11[] = {"ALICE\Negative\Negative_11"};
  ALICE_Negative_12[] = {"ALICE\Negative\Negative_12"};
  ALICE_Negative_13[] = {"ALICE\Negative\Negative_13"};
  ALICE_Negative_14[] = {"ALICE\Negative\Negative_14"};
  ALICE_Negative_15[] = {"ALICE\Negative\Negative_15"};
  ALICE_Negative_16[] = {"ALICE\Negative\Negative_16"};
  ALICE_Sad_01[] = {"ALICE\Sad\Sad_01"};
  ALICE_Sad_02[] = {"ALICE\Sad\Sad_02"};
  ALICE_Sad_03[] = {"ALICE\Sad\Sad_03"};
  ALICE_Sad_04[] = {"ALICE\Sad\Sad_04"};
  ALICE_Sad_05[] = {"ALICE\Sad\Sad_05"};
  ALICE_Sad_06[] = {"ALICE\Sad\Sad_06"};
  ALICE_Sad_07[] = {"ALICE\Sad\Sad_07"};
  ALICE_Sad_08[] = {"ALICE\Sad\Sad_08"};
  ALICE_Sad_09[] = {"ALICE\Sad\Sad_09"};
  ALICE_Sad_10[] = {"ALICE\Sad\Sad_10"};
  ALICE_Sad_11[] = {"ALICE\Sad\Sad_11"};
  ALICE_Sad_12[] = {"ALICE\Sad\Sad_12"};
  ALICE_Sad_13[] = {"ALICE\Sad\Sad_13"};
  ALICE_Sad_14[] = {"ALICE\Sad\Sad_14"};
  ALICE_Sad_15[] = {"ALICE\Sad\Sad_15"};
  ALICE_Sad_16[] = {"ALICE\Sad\Sad_16"};
  ALICE_Sad_17[] = {"ALICE\Sad\Sad_17"};
  ALICE_Sad_18[] = {"ALICE\Sad\Sad_18"};
  ALICE_Sad_19[] = {"ALICE\Sad\Sad_19"};
  ALICE_Sad_20[] = {"ALICE\Sad\Sad_20"};
  ALICE_Sad_21[] = {"ALICE\Sad\Sad_21"};
  ALICE_Sad_22[] = {"ALICE\Sad\Sad_22"};
  ALICE_Sad_23[] = {"ALICE\Sad\Sad_23"};
  ALICE_Sad_24[] = {"ALICE\Sad\Sad_24"};
  ALICE_Sad_25[] = {"ALICE\Sad\Sad_25"};
  ALICE_Sad_26[] = {"ALICE\Sad\Sad_26"};
  ALICE_Sad_27[] = {"ALICE\Sad\Sad_27"};
  ALICE_Sad_28[] = {"ALICE\Sad\Sad_28"};
  ALICE_Sad_29[] = {"ALICE\Sad\Sad_29"};
  ALICE_Sad_30[] = {"ALICE\Sad\Sad_30"};
  ALICE_Sad_31[] = {"ALICE\Sad\Sad_31"};
  ALICE_Sad_32[] = {"ALICE\Sad\Sad_32"};
  ALICE_Sad_33[] = {"ALICE\Sad\Sad_33"};
  ALICE_Sad_34[] = {"ALICE\Sad\Sad_34"};
  ALICE_Sad_35[] = {"ALICE\Sad\Sad_35"};
  ALICE_Sad_36[] = {"ALICE\Sad\Sad_36"};
  ALICE_Sad_37[] = {"ALICE\Sad\Sad_37"};
  ALICE_Sad_38[] = {"ALICE\Sad\Sad_38"};
  ALICE_Remark_01[] = {"ALICE\Remarks\Remark_01"};
  ALICE_Remark_02[] = {"ALICE\Remarks\Remark_02"};
  ALICE_Remark_03[] = {"ALICE\Remarks\Remark_03"};
  ALICE_Remark_04[] = {"ALICE\Remarks\Remark_04"};
  ALICE_Remark_05[] = {"ALICE\Remarks\Remark_05"};
  ALICE_Remark_06[] = {"ALICE\Remarks\Remark_06"};
  ALICE_Remark_07[] = {"ALICE\Remarks\Remark_07"};
  ALICE_Remark_08[] = {"ALICE\Remarks\Remark_08"};
  ALICE_Remark_09[] = {"ALICE\Remarks\Remark_09"};
  ALICE_Remark_10[] = {"ALICE\Remarks\Remark_10"};
  ALICE_Remark_11[] = {"ALICE\Remarks\Remark_11"};
  ALICE_Remark_12[] = {"ALICE\Remarks\Remark_12"};
  ALICE_Remark_13[] = {"ALICE\Remarks\Remark_13"};
  ALICE_Remark_14[] = {"ALICE\Remarks\Remark_14"};
  ALICE_Remark_15[] = {"ALICE\Remarks\Remark_15"};
  ALICE_Remark_16[] = {"ALICE\Remarks\Remark_16"};
  ALICE_Remark_17[] = {"ALICE\Remarks\Remark_17"};
  ALICE_Remark_18[] = {"ALICE\Remarks\Remark_18"};
  ALICE_Remark_19[] = {"ALICE\Remarks\Remark_19"};
  ALICE_Remark_20[] = {"ALICE\Remarks\Remark_20"};
  ALICE_Remark_21[] = {"ALICE\Remarks\Remark_21"};
  ALICE_Remark_22[] = {"ALICE\Remarks\Remark_22"};
  ALICE_Remark_23[] = {"ALICE\Remarks\Remark_23"};
  ALICE_Remark_24[] = {"ALICE\Remarks\Remark_24"};
  ALICE_Remark_25[] = {"ALICE\Remarks\Remark_25"};
  ALICE_Remark_26[] = {"ALICE\Remarks\Remark_26"};
  ALICE_Remark_27[] = {"ALICE\Remarks\Remark_27"};
  ALICE_Remark_28[] = {"ALICE\Remarks\Remark_28"};
  ALICE_Remark_29[] = {"ALICE\Remarks\Remark_29"};
  ALICE_Remark_30[] = {"ALICE\Remarks\Remark_30"};
  ALICE_Remark_31[] = {"ALICE\Remarks\Remark_31"};
  ALICE_Remark_32[] = {"ALICE\Remarks\Remark_32"};
  ALICE_Remark_33[] = {"ALICE\Remarks\Remark_33"};
  ALICE_Remark_34[] = {"ALICE\Remarks\Remark_34"};
  ALICE_Remark_35[] = {"ALICE\Remarks\Remark_35"};
  ALICE_Remark_36[] = {"ALICE\Remarks\Remark_36"};
  ALICE_Remark_37[] = {"ALICE\Remarks\Remark_37"};
  ALICE_Generic_01[] = {"ALICE\Generic\Generic_01"};
  ALICE_Generic_02[] = {"ALICE\Generic\Generic_02"};
  ALICE_Generic_03[] = {"ALICE\Generic\Generic_03"};
  ALICE_Generic_04[] = {"ALICE\Generic\Generic_04"};
  ALICE_Generic_05[] = {"ALICE\Generic\Generic_05"};
  ALICE_Generic_06[] = {"ALICE\Generic\Generic_06"};
  ALICE_Generic_07[] = {"ALICE\Generic\Generic_07"};
  ALICE_Generic_08[] = {"ALICE\Generic\Generic_08"};
  ALICE_Laugh01[] = {"ALICE\Generic\Laugh01"};
  ALICE_Laugh02[] = {"ALICE\Generic\Laugh02"};
  ALICE_Laugh03[] = {"ALICE\Generic\Laugh03"};
  ALICE_Laugh04[] = {"ALICE\Generic\Laugh04"};
  ALICE_Sigh01[] = {"ALICE\Generic\Sigh01"};
  ALICE_Sigh02[] = {"ALICE\Generic\Sigh02"};
  ALICE_Sigh03[] = {"ALICE\Generic\Sigh03"};
  ALICE_Sigh04[] = {"ALICE\Generic\Sigh04"};
  ALICE_Weep01[] = {"ALICE\Generic\Weep01"};
  ALICE_Weep02[] = {"ALICE\Generic\Weep02"};
  ALICE_Weep03[] = {"ALICE\Generic\Weep03"};
  ALICE_Weep04[] = {"ALICE\Generic\Weep04"};
  ALICE_Whistle01[] = {"ALICE\Generic\Whistle01"};
  ALICE_Whistle02[] = {"ALICE\Generic\Whistle02"};
  ALICE_Yawn01[] = {"ALICE\Generic\Yawn01"};
  ALICE_Yawn02[] = {"ALICE\Generic\Yawn02"};
  ALICE_Scream_01[] = {"ALICE\Screams\Scream_01"};
  ALICE_Scream_02[] = {"ALICE\Screams\Scream_02"};
  ALICE_Scream_03[] = {"ALICE\Screams\Scream_03"};
  ALICE_Scream_04[] = {"ALICE\Screams\Scream_04"};
  ALICE_Scream_05[] = {"ALICE\Screams\Scream_05"};
  ALICE_Scream_06[] = {"ALICE\Screams\Scream_06"};
  ALICE_Scream_07[] = {"ALICE\Screams\Scream_07"};
  ALICE_Scream_08[] = {"ALICE\Screams\Scream_08"};
  CzechQ[] = {"core\language\ChernarussianQ"};
  HQ[] = {"secops\callsigns\zakladna"};
  Frostbite[] = {"secops\callsigns\velitel"};
  Base[] = {"secops\callsigns\zakladna"};
  Command[] = {"secops\callsigns\command"};
  Battlemage[] = {"secops\callsigns\tata"};
  Manhattan[] = {"secops\callsigns\osada"};
  Firefly[] = {"secops\callsigns\jezero"};
  Team[] = {"secops\callsigns\team"};
  Squad[] = {"secops\callsigns\squad"};
  Razor[] = {"secops\callsigns\pytlak"};
  Swordsman[] = {"secops\callsigns\hejkal"};
  Sabre[] = {"secops\callsigns\ocel"};
  StarForce[] = {"secops\callsigns\havran"};
  Super[] = {"secops\callsigns\prizrak"};
  Hammer[] = {"secops\callsigns\kahan"};
  Reaper[] = {"secops\callsigns\liska"};
  Fatman[] = {"secops\callsigns\kalich"};
  Fortune[] = {"secops\callsigns\magie"};
  Anvil[] = {"secops\callsigns\dagmar"};
  SecOpNew1[] = {"secops\generic\new1"};
  SecOpNew2[] = {"secops\generic\new2"};
  SecOpNew3[] = {"secops\generic\new3"};
  Over[] = {};
  Out[] = {};
  Confirmed[] = {"secops\generic\confirmed"};
  Affirmative[] = {"secops\generic\affirmative"};
  Good[] = {"secops\generic\good"};
  To[] = {"secops\generic\to"};
  Message[] = {"secops\generic\message"};
  ComeIn[] = {"secops\generic\comein"};
  DoYou[] = {"secops\generic\doyou"};
  CopyQ[] = {"secops\generic\copyq"};
  GoAhead[] = {"secops\generic\goahead"};
  Yes[] = {"secops\generic\yes"};
  WeCopyYouLoudAndClear[] = {"secops\generic\wecopyyouloudandclear"};
  SendIt[] = {"secops\generic\sendit"};
  No[] = {"secops\generic\no"};
  CanDo[] = {"secops\generic\cando"};
  WeAre[] = {"secops\generic\weare"};
  Job[] = {"secops\generic\job"};
  WellDone[] = {"secops\generic\welldone"};
  SecOpComplete[] = {"secops\generic\secopcomplete"};
  TheSecOpWasAFailure[] = {"secops\generic\thesecopwasafailure"};
  MissionFailure[] = {"secops\generic\missionfailure"};
  TheOpWasAFailure[] = {"secops\generic\theopwasafailure"};
  ObjectiveFailed[] = {"secops\generic\objectivefailed"};
  WereUnableToTakeOnAnotherObjective[] = {"secops\generic\wereunabletotakeonanotherobjective"};
  AtThisTime[] = {"secops\generic\atthistime"};
  WeCannotDivert[] = {"secops\generic\wecannotdivert"};
  NoWayWeCanDivertNow[] = {"secops\generic\nowaywecandivertnow"};
  WeHaveTooManyOtherTasksToComplete[] = {"secops\generic\wehavetoomanyothertaskstocomplete"};
  TheresNoWayWeCanHelpWithThatRightNow[] = {"secops\generic\theresnowaywecanhelpwiththatrightnow"};
  Were[] = {"secops\generic\were"};
  On[] = {"secops\generic\on"};
  OurWay[] = {"secops\generic\ourway"};
  Route[] = {"secops\generic\route"};
  It[] = {"secops\generic\it"};
  UnableToCompleteTheObjective[] = {"secops\generic\unabletocompletetheobjective"};
  WeCannotFinishTheOp[] = {"secops\generic\wecannotfinishtheop"};
  WeHaveToAbort[] = {"secops\generic\wehavetoabort"};
  WeCannotCompleteThisMission[] = {"secops\generic\wecannotcompletethismission"};
  Aborting[] = {"secops\generic\aborting"};
  ContinueYourPreviousMission[] = {"secops\generic\continueyourpreviousmission"};
  AbortTheOp[] = {"secops\generic\aborttheop"};
  ReturnToYourPrimary[] = {"secops\generic\returntoyourprimary"};
  CarryOnWithYourPriorTasks[] = {"secops\generic\carryonwithyourpriortasks"};
  SecOp_Attack_Loc_Briefing1[] = {"secops\attack_location\secop_attack_loc_briefing1"};
  SecOp_Attack_Loc_Briefing2[] = {"secops\attack_location\secop_attack_loc_briefing2"};
  SecOp_Attack_Loc_Briefing_Timeout[] = {"secops\attack_location\secop_attack_loc_briefing_timeout"};
  SecOp_Attack_Loc_Debriefing_End1[] = {"secops\attack_location\secop_attack_loc_debriefing_end1"};
  SecOp_Attack_Loc_Briefing_Reinf_1[] = {"secops\attack_location\secop_attack_loc_briefing_reinf1"};
  SecOp_Attack_Loc_Briefing_Reinf_2[] = {"secops\attack_location\secop_attack_loc_briefing_reinf2"};
  SecOp_Ambush_Briefing_1[] = {"secops\ambush\secop_ambush_briefing_1"};
  SecOp_Ambush_Briefing_2[] = {"secops\ambush\secop_ambush_briefing_2"};
  SecOp_Ambush_Briefing_Timeout[] = {"secops\ambush\secop_ambush_briefing_timeout"};
  SecOp_Ambush_Debriefing_End_1[] = {"secops\ambush\secop_ambush_debriefing_end_1"};
  SecOp_Ambush_Debriefing_End_2[] = {"secops\ambush\secop_ambush_debriefing_end_2"};
  SecOp_Ambush_Debriefing_End_3[] = {"secops\ambush\secop_ambush_debriefing_end_3"};
  SecOp_Rescue_Briefing_1[] = {"secops\rescue\secop_rescue_briefing_1"};
  SecOp_Rescue_Briefing_2[] = {"secops\rescue\secop_rescue_briefing_2"};
  SecOp_Rescue_Briefing_Not_Accepted[] = {"secops\rescue\secop_rescue_briefing_not_accepted"};
  SecOp_Rescue_Briefing_Timeout[] = {"secops\rescue\secop_rescue_briefing_timeout"};
  SecOp_Rescue_Radio_1[] = {"secops\rescue\secop_rescue_radio_1"};
  SecOp_Rescue_Debriefing_End_1[] = {"secops\rescue\secop_rescue_debriefing_end_1"};
  SecOp_Rescue_Debriefing_End_2[] = {"secops\rescue\secop_rescue_debriefing_end_2"};
  SecOp_TRAP_Briefing_1[] = {"secops\trap\secop_trap_briefing_1"};
  SecOp_TRAP_Briefing_2[] = {"secops\trap\secop_trap_briefing_2"};
  SecOp_TRAP_Briefing_Timeout[] = {"secops\trap\secop_trap_briefing_timeout"};
  SecOP_TRAP_Debriefing_End_1[] = {"secops\trap\secop_trap_debriefing_end_1"};
  SecOp_TRAP_Debriefing_End_2[] = {"secops\trap\secop_trap_debriefing_end_2"};
  SecOp_TRAP_Debriefing_End_3[] = {"secops\trap\secop_trap_debriefing_end_3"};
  SecOp_TRAP_Radio_1[] = {"secops\trap\secop_trap_radio_1"};
  SecOp_TRAP_Radio_2[] = {"secops\trap\secop_trap_radio_2"};
  SecOp_Escort_Briefing_1[] = {"secops\escort\secop_escort_briefing_1"};
  SecOp_Escort_Briefing_2[] = {"secops\escort\secop_escort_briefing_2"};
  SecOp_Escort_Briefing_Timeout[] = {"secops\escort\secop_escort_briefing_timeout"};
  SecOp_Escort_Radio_1[] = {"secops\escort\secop_escort_radio_1"};
  SecOp_Escort_Radio_2[] = {"secops\escort\secop_escort_radio_2"};
  SecOp_Escort_Radio_3[] = {"secops\escort\secop_escort_radio_3"};
  SecOp_Escort_Radio_4[] = {"secops\escort\secop_escort_radio_4"};
  SecOp_Escort_Debriefing_End_1[] = {"secops\escort\secop_escort_debriefing_end_1"};
  SecOp_Escort_Debriefing_End_2[] = {"secops\escort\secop_escort_debriefing_end_2"};
  SecOp_Escort_Debriefing_End_3[] = {"secops\escort\secop_escort_debriefing_end_3"};
  SecOp_Patrol_Briefing_1[] = {"secops\patrol\secop_patrol_briefing_1"};
  SecOp_Patrol_Briefing_2[] = {"secops\patrol\secop_patrol_briefing_2"};
  SecOp_Patrol_Briefing_Timeout[] = {"secops\patrol\secop_patrol_briefing_timeout"};
  SecOp_Patrol_Radio_1[] = {"secops\patrol\secop_patrol_radio_1"};
  SecOp_Patrol_Radio_2[] = {"secops\patrol\secop_patrol_radio_2"};
  SecOp_Patrol_Debriefing_End_1[] = {"secops\patrol\secop_patrol_debriefing_end_1"};
  SecOp_Transportation_Briefing_1[] = {"secops\transportation\secop_transportation_briefing_1"};
  SecOp_Transportation_Briefing_2[] = {"secops\transportation\secop_transportation_briefing_2"};
  SecOp_Transportation_Briefing_Timeout[] = {"secops\transportation\secop_transportation_briefing_timeout"};
  SecOp_Transportation_Radio_1[] = {"secops\transportation\secop_transportation_radio_1"};
  SecOp_Transportation_Radio_2[] = {"secops\transportation\secop_transportation_radio_2"};
  SecOp_Transportation_Radio_3[] = {"secops\transportation\secop_transportation_radio_3"};
  SecOp_Transportation_Debriefing_End_1[] = {"secops\transportation\secop_transportation_debriefing_end_1"};
  SecOp_Transportation_Debriefing_End_2[] = {"secops\transportation\secop_transportation_debriefing_end_2"};
  SecOp_Transportation_Debriefing_End_3[] = {"secops\transportation\secop_transportation_debriefing_end_3"};
  SecOp_Transportation_Debriefing_End_4[] = {"secops\transportation\secop_transportation_debriefing_end_4"};
  SecOp_Defend_Loc_Briefing_1[] = {"secops\defend_location\secop_defend_loc_briefing_1"};
  SecOp_Defend_Loc_Briefing_2[] = {"secops\defend_location\secop_defend_loc_briefing_2"};
  SecOp_Defend_Loc_Briefing_Timeout[] = {"secops\defend_location\secop_defend_loc_briefing_timeout"};
  SecOp_Defend_Loc_Abort_1[] = {"secops\defend_location\secop_defend_loc_abort_1"};
  SecOp_Defend_Loc_Radio_1A[] = {"secops\defend_location\secop_defend_loc_radio_1a"};
  SecOp_Defend_Loc_Radio_1B[] = {"secops\defend_location\secop_defend_loc_radio_1b"};
  SecOp_Defend_Loc_Debriefing_End_1[] = {"secops\defend_location\secop_defend_loc_debriefing_end_1"};
  SecOp_Defend_Loc_Debriefing_End_2[] = {"secops\defend_location\secop_defend_loc_debriefing_end_2"};
  SecOp_Destroy_Briefing_1[] = {"secops\destroy\secop_destroy_briefing_1"};
  SecOp_Destroy_Briefing_2[] = {"secops\destroy\secop_destroy_briefing_2"};
  SecOp_Destroy_Briefing_Timeout[] = {"secops\destroy\secop_destroy_briefing_timeout"};
  SecOp_Destroy_Debriefing_End_1[] = {"secops\destroy\secop_destroy_debriefing_end_1"};
  SecOp_Search_Briefing_1[] = {"secops\search\secop_search_briefing_1"};
  SecOp_Search_Briefing_2[] = {"secops\search\secop_search_briefing_2"};
  SecOp_Search_Briefing_Timeout[] = {"secops\search\secop_search_briefing_timeout"};
  SecOp_Search_Radio_1[] = {"secops\search\secop_search_radio_1"};
  SecOp_Search_Debriefing_End_1[] = {"secops\search\secop_search_debriefing_end_1"};
  SecOp_Search_Debriefing_End_2[] = {"secops\search\secop_search_debriefing_end_2"};
  SecOp_Search_Debriefing_End_3[] = {"secops\search\secop_search_debriefing_end_3"};
  SecOp_Reinforce_Briefing_1[] = {"secops\reinforce\str_som_reinforce_briefing_1"};
  SecOp_Reinforce_Briefing_2[] = {"secops\reinforce\str_som_reinforce_briefing_2"};
  SecOp_Reinforce_Briefing_Timeout[] = {"secops\reinforce\som_reinforce_briefing_timeout"};
  SecOp_Reinforce_Debriefing_1[] = {"secops\reinforce\som_reinforce_debriefing_end1"};
  SecOp_Reinforce_Debriefing_2[] = {"secops\reinforce\som_reinforce_debriefing_end2"};
  SecOp_Reinforce_Debriefing_3[] = {"secops\reinforce\som_reinforce_debriefing_end3"};
  SecOp_Tactical_Strike_Briefing_1[] = {"secops\airstrike\secop_airstrike_01"};
  SecOp_Tactical_Strike_Briefing_2[] = {"secops\airstrike\secop_airstrike_02"};
  SecOp_Tactical_Strike_Briefing_Accepted[] = {"secops\airstrike\secop_airstrike_04"};
  SecOp_Tactical_Strike_Radio_1[] = {"secops\airstrike\secop_airstrike_03"};
  SecOp_Aerial_Recon_Briefing_1[] = {"secops\uav\secop_uav_01"};
  SecOp_Aerial_Recon_Briefing_2[] = {"secops\uav\secop_uav_02"};
  SecOp_Aerial_Recon_Briefing_Accepted[] = {"secops\uav\secop_uav_03"};
  SecOp_Aerial_Recon_Radio_1[] = {"secops\uav\secop_uav_04"};
  SecOp_Aerial_Recon_Radio_2[] = {"secops\uav\secop_uav_05"};
  SecOp_Aerial_Recon_Radio_3[] = {"secops\uav\secop_uav_06"};
  SecOp_Artillery_Barrage_Available_1[] = {"secops\artillery\secop_artillery_01"};
  SecOp_Artillery_Barrage_Available_2[] = {"secops\artillery\secop_artillery_02"};
  SecOp_Artillery_Barrage_Available_3[] = {"secops\artillery\secop_artillery_03"};
  SecOp_Artillery_Barrage_Request_1[] = {"secops\artillery\secop_artillery_04"};
  SecOp_Artillery_Barrage_Request_2[] = {"secops\artillery\secop_artillery_05"};
  SecOp_Artillery_Barrage_Request_3[] = {"secops\artillery\secop_artillery_06"};
  SecOp_Artillery_Barrage_Request_4[] = {"secops\artillery\secop_artillery_07"};
  SecOp_Artillery_Barrage_Request_5[] = {"secops\artillery\secop_artillery_08"};
  SecOp_Artillery_Barrage_Request_6[] = {"secops\artillery\secop_artillery_09"};
  SecOp_Artillery_Barrage_Request_7[] = {"secops\artillery\secop_artillery_10"};
  SecOp_Artillery_Barrage_Request_8[] = {"secops\artillery\secop_artillery_11"};
  SecOp_Artillery_Barrage_Request_9[] = {"secops\artillery\secop_artillery_12"};
  SecOp_Artillery_Barrage_Response_1[] = {"secops\artillery\secop_artillery_13"};
  SecOp_Artillery_Barrage_Response_2[] = {"secops\artillery\secop_artillery_14"};
  SecOp_Artillery_Barrage_Response_3[] = {"secops\artillery\secop_artillery_15"};
  SecOp_Artillery_Barrage_Response_4[] = {"secops\artillery\secop_artillery_16"};
  SecOp_Artillery_Barrage_Response_5[] = {"secops\artillery\secop_artillery_17"};
  SecOp_Artillery_Barrage_Response_6[] = {"secops\artillery\secop_artillery_18"};
  SecOp_Artillery_Barrage_Response_7[] = {"secops\artillery\secop_artillery_19"};
  SecOp_Artillery_Barrage_Response_8[] = {"secops\artillery\secop_artillery_20"};
  SecOp_Artillery_Barrage_Response_9[] = {"secops\artillery\secop_artillery_21"};
  SecOp_Artillery_Barrage_Unavailable_1[] = {"secops\artillery\secop_artillery_22"};
  SecOp_Artillery_Barrage_Unavailable_2[] = {"secops\artillery\secop_artillery_23"};
  SecOp_Artillery_Barrage_Unavailable_3[] = {"secops\artillery\secop_artillery_24"};
  SecOp_Artillery_Barrage_OutOfRange_1[] = {"secops\artillery\secop_artillery_25"};
  SecOp_Artillery_Barrage_OutOfRange_2[] = {"secops\artillery\secop_artillery_26"};
  SecOp_Artillery_Barrage_OutOfRange_3[] = {"secops\artillery\secop_artillery_27"};
  SecOp_Artillery_Barrage_OutOfRange_4[] = {"secops\artillery\secop_artillery_28"};
  SecOp_Artillery_Barrage_Splash[] = {"secops\artillery\secop_artillery_29"};
  SecOp_Artillery_Barrage_Shot[] = {"secops\artillery\secop_artillery_30"};
  SecOp_Artillery_Barrage_RoundsComplete[] = {"secops\artillery\secop_artillery_31"};
  SecOp_Artillery_Barrage_CheckFire1[] = {"secops\artillery\secop_artillery_32"};
  SecOp_Artillery_Barrage_CheckFire2[] = {"secops\artillery\secop_artillery_33"};
  SecOp_Artillery_Barrage_CheckFireResponse1[] = {"secops\artillery\secop_artillery_34"};
  SecOp_Artillery_Barrage_CheckFireResponse2[] = {"secops\artillery\secop_artillery_35"};
  SecOp_Artillery_Barrage_Interrupted1[] = {"secops\artillery\secop_artillery_36"};
  SecOp_Artillery_Barrage_InterruptedResponse1[] = {"secops\artillery\secop_artillery_37"};
  Elektrozavodsk[] = {"core\maploc\Elektrozavodsk"};
  Elektrozavodsk2[] = {"core\maploc\Elektrozavodsk2"};
  Gorka[] = {"core\maploc\Gorka"};
  Gorka2[] = {"core\maploc\Gorka2"};
  Chernogorsk[] = {"core\maploc\Chernogorsk"};
  Chernogorsk2[] = {"core\maploc\Chernogorsk2"};
  Krasnostav[] = {"core\maploc\Krasnostav"};
  Krasnostav2[] = {"core\maploc\Krasnostav2"};
  Solnichniy[] = {"core\maploc\Solnichniy"};
  Solnichniy2[] = {"core\maploc\Solnichniy2"};
  StarySobor[] = {"core\maploc\StarySobor"};
  StarySobor2[] = {"core\maploc\StarySobor2"};
  Vybor[] = {"core\maploc\Vybor"};
  Vybor2[] = {"core\maploc\Vybor2"};
  Zelenogorsk[] = {"core\maploc\Zelenogorsk"};
  Zelenogorsk2[] = {"core\maploc\Zelenogorsk2"};
  Pusta[] = {"core\maploc\Pusta"};
  Pusta2[] = {"core\maploc\Pusta2"};
  Vyshnoe[] = {"core\maploc\Vyshnoe"};
  Vyshnoe2[] = {"core\maploc\Vyshnoe2"};
  Balota[] = {"core\maploc\Balota"};
  Balota2[] = {"core\maploc\Balota2"};
  Bor[] = {"core\maploc\Bor"};
  Bor2[] = {"core\maploc\Bor2"};
  Dolina[] = {"core\maploc\Dolina"};
  Dolina2[] = {"core\maploc\Dolina2"};
  Drozhino[] = {"core\maploc\Drozhino"};
  Drozhino2[] = {"core\maploc\Drozhino2"};
  Dubrovka[] = {"core\maploc\Dubrovka"};
  Dubrovka2[] = {"core\maploc\Dubrovka2"};
  Grishino[] = {"core\maploc\Grishino"};
  Grishino2[] = {"core\maploc\Grishino2"};
  Guglovo[] = {"core\maploc\Guglovo"};
  Guglovo2[] = {"core\maploc\Guglovo2"};
  Gvozdno[] = {"core\maploc\Gvozdno"};
  Gvozdno2[] = {"core\maploc\Gvozdno2"};
  Kabanino[] = {"core\maploc\Kabanino"};
  Kabanino2[] = {"core\maploc\Kabanino2"};
  Kamenka[] = {"core\maploc\Kamenka"};
  Kamenka2[] = {"core\maploc\Kamenka2"};
  Kamyshovo[] = {"core\maploc\Kamyshovo"};
  Kamyshovo2[] = {"core\maploc\Kamyshovo2"};
  Khelm[] = {"core\maploc\Khelm"};
  Khelm2[] = {"core\maploc\Khelm2"};
  Komarovo[] = {"core\maploc\Komarovo"};
  Komarovo2[] = {"core\maploc\Komarovo2"};
  Kozlovka[] = {"core\maploc\Kozlovka"};
  Kozlovka2[] = {"core\maploc\Kozlovka2"};
  Lopatino[] = {"core\maploc\Lopatino"};
  Lopatino2[] = {"core\maploc\Lopatino2"};
  Mogilevka[] = {"core\maploc\Mogilevka"};
  Mogilevka2[] = {"core\maploc\Mogilevka2"};
  Msta[] = {"core\maploc\Msta"};
  Msta2[] = {"core\maploc\Msta2"};
  Myshkino[] = {"core\maploc\Myshkino"};
  Myshkino2[] = {"core\maploc\Myshkino2"};
  Nadezhdino[] = {"core\maploc\Nadezhdino"};
  Nadezhdino2[] = {"core\maploc\Nadezhdino2"};
  Nizhnoye[] = {"core\maploc\Nizhnoye"};
  Nizhnoye2[] = {"core\maploc\Nizhnoye2"};
  NovySobor[] = {"core\maploc\NovySobor"};
  NovySobor2[] = {"core\maploc\NovySobor2"};
  Olsha[] = {"core\maploc\Olsha"};
  Olsha2[] = {"core\maploc\Olsha2"};
  Orlovets[] = {"core\maploc\Orlovets"};
  Orlovets2[] = {"core\maploc\Orlovets2"};
  Pavlovo[] = {"core\maploc\Pavlovo"};
  Pavlovo2[] = {"core\maploc\Pavlovo2"};
  Petrovka[] = {"core\maploc\Petrovka"};
  Petrovka2[] = {"core\maploc\Petrovka2"};
  Pogorevka[] = {"core\maploc\Pogorevka"};
  Pogorevka2[] = {"core\maploc\Pogorevka2"};
  Polana[] = {"core\maploc\Polana"};
  Polana2[] = {"core\maploc\Polana2"};
  Prigorodki[] = {"core\maploc\Prigorodki"};
  Prigorodki2[] = {"core\maploc\Prigorodki2"};
  Pustoshka[] = {"core\maploc\Pustoshka"};
  Pustoshka2[] = {"core\maploc\Pustoshka2"};
  Rogovo[] = {"core\maploc\Rogovo"};
  Rogovo2[] = {"core\maploc\Rogovo2"};
  Shakhovka[] = {"core\maploc\Shakhovka"};
  Shakhovka2[] = {"core\maploc\Shakhovka2"};
  Sosnovka[] = {"core\maploc\Sosnovka"};
  Sosnovka2[] = {"core\maploc\Sosnovka2"};
  Staroye[] = {"core\maploc\Staroye"};
  Staroye2[] = {"core\maploc\Staroye2"};
  Tulga[] = {"core\maploc\Tulga"};
  Tulga2[] = {"core\maploc\Tulga2"};
  Pulkovo[] = {"core\maploc\Pulkovo"};
  Pulkovo2[] = {"core\maploc\Pulkovo2"};
  Berezino[] = {"core\maploc\Town"};
  Berezino2[] = {"core\maploc\Town"};
  Kamenyy[] = {"core\maploc\Kamenyy"};
  Kamenyy2[] = {"core\maploc\Kamenyy2"};
  Strelka[] = {"core\maploc\Strelka"};
  Strelka2[] = {"core\maploc\Strelka2"};
  airfield[] = {"core\maploc\airfield"};
  airfield2[] = {"core\maploc\airfield"};
  town[] = {"core\maploc\town"};
  town2[] = {"core\maploc\town2"};
  village[] = {"core\maploc\village"};
  village2[] = {"core\maploc\village"};
  10MinutesLeft[] = {"Warfare\10MinutesLeft"};
  20MinutesLeft[] = {"Warfare\20MinutesLeft"};
  5MinutesLeft[] = {"Warfare\5MinutesLeft"};
  Accomplished[] = {"Warfare\Accomplished"};
  AntiAirRadar[] = {"Warfare\AntiAirRadar"};
  ArtilleryBattery[] = {"Warfare\ArtilleryBattery"};
  ArtilleryRadar[] = {"Warfare\ArtilleryRadar"};
  Barracks[] = {"Warfare\Barracks"};
  BaseUnderAtack[] = {"Warfare\BaseUnderAtack"};
  Cancelled[] = {"Warfare\Cancelled"};
  CanDoWereOnIt[] = {"Warfare\CanDoWereOnIt"};
  Captured[] = {"Warfare\Captured"};
  CapturedNear[] = {"Warfare\CapturedNear"};
  CiviliansUnderEnemyFireIn[] = {"Warfare\CiviliansUnderEnemyFireIn"};
  Constructed[] = {"Warfare\Constructed"};
  Deployed[] = {"Warfare\Deployed"};
  Destroyed[] = {"Warfare\Destroyed"};
  EnemyBaseLocated[] = {"Warfare\EnemyBaseLocated"};
  EnemyForcesDetected[] = {"Warfare\EnemyForcesDetected"};
  Failed[] = {"Warfare\Failed"};
  Funds[] = {"Warfare\Funds"};
  Headquarters[] = {"Warfare\Headquarters"};
  HeavyVehicleSupply[] = {"Warfare\HeavyVehicleSupply"};
  Helipad[] = {"Warfare\Helipad"};
  HostilesDetectedNear[] = {"Warfare\HostilesDetectedNear"};
  Insufficient[] = {"Warfare\Insufficient"};
  IsUnderAttack[] = {"Warfare\IsUnderAttack"};
  LightVehicleSupply[] = {"Warfare\LightVehicleSupply"};
  Lost[] = {"Warfare\Lost"};
  LostAt[] = {"Warfare\LostAt"};
  Mission[] = {"Warfare\Mission"};
  Mobilized[] = {"Warfare\Mobilized"};
  NegativeWeCannotDivert[] = {"Warfare\NegativeWeCannotDivert"};
  NewIntelAvailable[] = {"Warfare\NewIntelAvailable"};
  NewMissionAvailable[] = {"Warfare\NewMissionAvailable"};
  NewSupportAvailable[] = {"Warfare\NewSupportAvailable"};
  PermissionGranted[] = {"Warfare\PermissionGranted"};
  RequestingAssistance[] = {"Warfare\RequestingAssistance"};
  RequestingPermissionToJoin[] = {"Warfare\RequestingPermissionToJoin"};
  RequestingPermissionToLeave[] = {"Warfare\RequestingPermissionToLeave"};
  RequestRejected[] = {"Warfare\RequestRejected"};
  Resources[] = {"Warfare\Resources"};
  ServicePoint[] = {"Warfare\ServicePoint"};
  Strongpoint[] = {"Warfare\Strongpoint"};
  Strongpoint_alt[] = {"Warfare\Strongpoint_alt"};
  Supplies[] = {"Warfare\Supplies"};
  UAVTerminal[] = {"Warfare\UAVTerminal"};
  UnderAttack[] = {"Warfare\UnderAttack"};
  VotingForNewCommander[] = {"Warfare\VotingForNewCommander"};
 };
 class SentSuppress
 {
  versions[] = {"Version1",0.5,"Version2",0.5};
  class Version1
  {
   text = "$STR_SENT_UNIT_SUPPRESS_1";
   speech[] = {"%1.1","C_SuppresiveFireE"};
  };
  class Version2
  {
   text = "$STR_SENT_UNIT_SUPPRESS_2";
   speech[] = {"%1.1","C_OpenUpE"};
  };
 };
 class SentUnitKilled: SentUnitKilled
 {
  versions[] = {"Version1",0.2,"Version2",0.1,"Version3",0.1,"Version4",0.2};
  class Version1
  {
   text = "$STR_SENT_UNIT_KILLED_1";
   speech[] = {"%1.1","IsDownE"};
  };
  class Version2
  {
   text = "$STR_SENT_UNIT_KILLED_2";
   speech[] = {"ShitE","%1.1","IsHitE"};
  };
  class Version3
  {
   text = "$STR_SENT_UNIT_KILLED_4";
   speech[] = {"ManDownE","%1.1","IsDownE"};
  };
  class Version4
  {
   text = "$STR_SENT_UNIT_KILLED_7";
   speech[] = {"FuckE","%1.1","IsDownE"};
  };
 };
 class SentSupportAskHeal: SentSupportAskHeal
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_SUPPORT_ASK_HEAL_1";
   speech[] = {"HQ","WeNeedMedicalAssistanceAt","%1","Over1"};
  };
 };
 class SentSupportAskRepair: SentSupportAskRepair
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_SUPPORT_ASK_REPAIR_1";
   speech[] = {"HQ","RequestingRepairTeamAt","%1","Over1"};
  };
 };
 class SentSupportAskRefuel: SentSupportAskRefuel
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_SUPPORT_ASK_REFUEL_1";
   speech[] = {"HQ","WereRunningOnFumesNeedRefuelAt","%1","Over1"};
  };
 };
 class SentSupportAskRearm: SentSupportAskRearm
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_SUPPORT_ASK_REARM_1";
   speech[] = {"HQ","RequestingUrgentResupplyAt","%1","Over1"};
  };
 };
 class SentSupportConfirm: SentSupportConfirm
 {
  versions[] = {"Version1",0.4,"Version2",0.2,"Version3",0.4};
  class Version1
  {
   text = "$STR_SENT_SUPPORT_CONFIRM_1";
   speech[] = {"SolidCopy","ProvidingSupportAt","%2"};
  };
  class Version2
  {
   text = "$STR_SENT_SUPPORT_CONFIRM_2";
   speech[] = {"HoldOnGuysSupportsOnTheWayE"};
  };
  class Version3
  {
   text = "$STR_SENT_SUPPORT_CONFIRM_3";
   speech[] = {"Roger","WereOnIt"};
  };
 };
 class SentSupportReady: SentSupportReady
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_SUPPORT_READY_1";
   speech[] = {"ImAtGrid","%2","ProvidingSupportTo","%1","Out1"};
  };
 };
 class SentSupportDone: SentSupportDone
 {
  versions[] = {"Version1",0.7,"Version2",0.3};
  class Version1
  {
   text = "$STR_SENT_SUPPORT_DONE_1";
   speech[] = {"YoureGoodToGoE"};
  };
  class Version2
  {
   text = "$STR_SENT_SUPPORT_DONE_2";
   speech[] = {"SupportComplete","GiveEmHellE"};
  };
 };
 class SentSupportNotAvailable: SentSupportNotAvailable
 {
  gesture = "gestureNo";
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_SUPPORT_NOT_AVAILABLE_1";
   speech[] = {"Negative","NoSupportAvailableAtThisTime","HQ","Out1"};
  };
 };
 class SentHealthCritical: SentHealthCritical
 {
  versions[] = {"Version1",0.2,"Version2",0.05,"Version3",0.1,"Version4",0.15,"Version5",0.1,"Version6",0.2,"Version7",0.05,"Version8",0.15};
  class Version1
  {
   text = "$STR_SENT_HEALTH_CRITICAL_1";
   speech[] = {"ImHitE"};
  };
  class Version2
  {
   text = "$STR_SENT_HEALTH_CRITICAL_2";
   speech[] = {"ImBleedingE"};
  };
  class Version3
  {
   text = "$STR_SENT_HEALTH_CRITICAL_3";
   speech[] = {"SomebodyHelpMeE"};
  };
  class Version4
  {
   text = "$STR_SENT_HEALTH_CRITICAL_4";
   speech[] = {"TheyGotMeE"};
  };
  class Version5
  {
   text = "$STR_SENT_HEALTH_CRITICAL_5";
   speech[] = {"NeedHelpE"};
  };
  class Version6
  {
   text = "$STR_SENT_HEALTH_CRITICAL_6";
   speech[] = {"WoundedE"};
  };
  class Version7
  {
   text = "$STR_SENT_HEALTH_CRITICAL_7";
   speech[] = {"GetMeACorpsmanNowE"};
  };
  class Version8
  {
   text = "$STR_SENT_HEALTH_CRITICAL_8";
   speech[] = {"CorpsmanE"};
  };
 };
 class SentDammageCritical: SentDammageCritical
 {
  versions[] = {"Version1",0.3,"Version2",0.1,"Version3",0.2,"Version4",0.4};
  class Version1
  {
   text = "$STR_SENT_DAMMAGE_CRITICAL_1";
   speech[] = {"StatusRedE"};
  };
  class Version2
  {
   text = "$STR_SENT_DAMMAGE_CRITICAL_2";
   speech[] = {"VehicleIsFUBARE"};
  };
  class Version3
  {
   text = "$STR_SENT_DAMMAGE_CRITICAL_3";
   speech[] = {"WereHeavilyDamagedE"};
  };
  class Version4
  {
   text = "$STR_SENT_DAMMAGE_CRITICAL_4";
   speech[] = {"CriticalDamageE"};
  };
 };
 class SentFuelCritical: SentFuelCritical
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FUEL_CRITICAL_1";
   speech[] = {"ImOutOfFuelE"};
  };
 };
 class SentFuelLow: SentFuelLow
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FUEL_LOW_1";
   speech[] = {"ImRunningOutOfFuel"};
  };
 };
 class SentAmmoCritical: SentAmmoCritical
 {
  versions[] = {"Version1",0.3,"Version2",0.4,"Version3",0.3};
  class Version1
  {
   text = "$STR_SENT_AMMO_CRITICAL_1";
   speech[] = {"GoddamnE","OutOfAmmoE"};
  };
  class Version2
  {
   text = "$STR_SENT_AMMO_CRITICAL_2";
   speech[] = {"NoMoreAmmoE"};
  };
  class Version3
  {
   text = "$STR_SENT_AMMO_CRITICAL_3";
   speech[] = {"CantShootE","OutOfAmmoE"};
  };
 };
 class SentAmmoLow: SentAmmoLow
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_AMMO_LOW_1";
   speech[] = {"RunningOutOfAmmoE"};
  };
 };
 class SentReportPosition: SentReportPosition
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_REPORT_POSITION_1";
   speech[] = {"ImAtGrid","%2"};
  };
  class Version2
  {
   text = "$STR_SENT_REPORT_POSITION_2";
   speech[] = {"%3","AwayGrid","%2"};
  };
 };
 class SentIsLeader: SentIsLeader
 {
  versions[] = {"Version1",0.2,"Version2",0.2};
  class Version1
  {
   text = "$STR_SENT_IS_LEADER_1";
   speech[] = {"%1","IsNowInCommand"};
  };
  class Version2
  {
   text = "$STR_SENT_IS_LEADER_2";
   speech[] = {"%1","ImTheNewActual"};
  };
 };
 class SentCommandCompleted: SentCommandCompleted
 {
  versions[] = {"Version1",0.3,"Version2",0.15,"Version3",0.05,"Version4",0.25,"Version5",0.15};
  class Version1
  {
   text = "$STR_SENT_COMMAND_COMPLETED_1";
   speech[] = {"Ready"};
  };
  class Version2
  {
   text = "$STR_SENT_COMMAND_COMPLETED_2";
   speech[] = {"ReadyForOrders"};
  };
  class Version3
  {
   text = "$STR_SENT_COMMAND_COMPLETED_3";
   speech[] = {"IsReady"};
  };
  class Version4
  {
   text = "$STR_SENT_COMMAND_COMPLETED_4";
   speech[] = {"Waiting"};
  };
  class Version5
  {
   text = "$STR_SENT_COMMAND_COMPLETED_5";
   speech[] = {"StandingBy"};
  };
 };
 class SentJoinCompleted: SentJoinCompleted
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_COMMAND_COMPLETED_4";
   speech[] = {"Waiting"};
  };
 };
 class SentFireReady: SentFireReady
 {
  versions[] = {"Version1",0.3,"Version2",0.05,"Version3",0.15};
  class Version1
  {
   text = "$STR_SENT_FIRE_READY_1";
   speech[] = {"ReadyToFire"};
  };
  class Version2
  {
   text = "$STR_SENT_FIRE_READY_2";
   speech[] = {"HaveTheTargetInMySights"};
  };
  class Version3
  {
   text = "$STR_SENT_FIRE_READY_3";
   speech[] = {"TargetInSight"};
  };
 };
 class SentFireNegative: SentFireNegative
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FIRE_NEGATIVE_2";
   speech[] = {"UnableToFireE"};
  };
 };
 class SentCommandFailed: SentCommandFailed
 {
  gesture = "gestureNo";
  versions[] = {"Version1",0.6,"Version2",0.4};
  class Version1
  {
   text = "$STR_SENT_COMMAND_FAILED_1";
   speech[] = {"Negative"};
  };
  class Version2
  {
   text = "$STR_SENT_COMMAND_FAILED_3";
   speech[] = {"SorryICant"};
  };
 };
 class SentDestinationUnreacheable: SentDestinationUnreacheable
 {
  versions[] = {"Version1",0.5,"Version2",0.5};
  class Version1
  {
   text = "$STR_SENT_DESTINATION_UNREACHEABLE_1";
   speech[] = {"DamnE","ICantGetThere"};
  };
  class Version2
  {
   text = "$STR_SENT_DESTINATION_UNREACHEABLE_2";
   speech[] = {"Negative","CantMakeItThere"};
  };
 };
 class SelectEnemyDetectedSentence: SelectEnemyDetectedSentence
 {
  sentences[] = {"SentEnemyDetectedUnitRelative","(DistanceToSender/DistanceToUnit factor [1.2,1.0]) * ((UnitDistanceFactor factor [0.5,0.3]) + (GroupCompactness * (DistanceToSender/((DistanceToGroup-GroupCoreRadius) max 1) factor [0.5,0.3])) )","SentEnemyDetectedUnitRelative","(DistanceToSender/DistanceToUnit factor [1.0,1.1]) * ( (UnitDistanceFactor factor [0.5,0.3]) + (GroupCompactness * (DistanceToUnit/((DistanceToGroup-GroupCoreRadius) max 1) factor [0.5,0.3])) )","SentEnemyDetectedLocationRelative","2 * (( GroupCompactness * ((DistanceToLocation/DistanceToGroup) factor [0.4,0.2])) + ( DistanceToLocation/DistanceToUnit factor [0.5,0.3] ) )","SentEnemyDetectedGroupCoreRelative","GroupCompactness","SentEnemyDetectedOnGridReference","(DistanceToUnit factor [750,1000]) + (1 - GroupCompactness)/2"};
 };
 class SentEnemyDetectedGroupCoreRelative: SentEnemyDetectedGroupCoreRelative
 {
  versions[] = {"Version1",2,"Version2",2,"Version3",3,"Version4",4};
  class Version1
  {
   text = "$STR_SENT_DETECTED_GROUP_6";
   speech[] = {"%6.2","%5.2","%4","%2"};
  };
  class Version2
  {
   text = "$STR_SENT_DETECTED_GROUP_7";
   speech[] = {"%4","%2","%6.2","%5.2"};
  };
  class Version3
  {
   text = "$STR_SENT_DETECTED_GROUP_8";
   speech[] = {"%4","%2","%5.2","%6.2"};
  };
 };
 class SentEnemyDetectedOnGridReference: SentEnemyDetectedOnGridReference
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_DETECTED_GRID_1";
   speech[] = {"Contact","%3","%4","%2"};
  };
 };
 class SentEnemyDetectedLocationRelative: SentEnemyDetectedLocationRelative
 {
  versions[] = {"Version1",1};
  class Version2
  {
   text = "$STR_SENT_DETECTED_LOCATION_2";
   speech[] = {"%4","%2","%11.100","%12.101","of","%14"};
  };
 };
 class SentEnemyDetectedUnitRelative: SentEnemyDetectedUnitRelative
 {
  versions[] = {"Version1",1,"Version2",1};
  class Version1
  {
   text = "$STR_SENT_DETECTED_UNIT_1";
   speech[] = {"%13","BeAdvised","%4","%2","%10.102","fromyou","%9.1"};
  };
  class Version2
  {
   text = "$STR_SENT_DETECTED_UNIT_3";
   speech[] = {"%13","%4","%2","%10.102","fromyou","%9.3"};
  };
 };
 class SentEnemyDetectedSenderRelative: SentEnemyDetectedSenderRelative
 {
  versions[] = {"Version1",1,"Version2",1};
  class Version1
  {
   text = "$STR_SENT_DETECTED_SENDER_3";
   speech[] = {"Contact","%4","%2","%8.102","fromus","%7.2"};
  };
  class Version2
  {
   text = "$STR_SENT_DETECTED_SENDER_4";
   speech[] = {"Contact","%4","%2","%7.1","at","%8.101","fromus"};
  };
 };
 class SentObjectDestroyed: SentObjectDestroyed
 {
  versions[] = {"Version1",0.1,"Version2",0.1,"Version3",0.1,"Version4",0.1,"Version5",0.1,"Version6",0.1};
  class Version1
  {
   text = "$STR_SENT_OBJECT_DESTROYED_1";
   speech[] = {"TargetDestroyedE"};
  };
  class Version2
  {
   text = "$STR_SENT_OBJECT_DESTROYED_4";
   speech[] = {"ScratchOneE"};
  };
  class Version3
  {
   text = "$STR_SENT_OBJECT_DESTROYED_5";
   speech[] = {"TargetEliminated"};
  };
  class Version4
  {
   text = "$STR_SENT_OBJECT_DESTROYED_6";
   speech[] = {"HesDownE"};
  };
  class Version5
  {
   text = "$STR_SENT_OBJECT_DESTROYED_7";
   speech[] = {"%2","SuccessfullyEngaged"};
  };
  class Version6
  {
   text = "$STR_SENT_OBJECT_DESTROYED_9";
   speech[] = {"IveGotHimE"};
  };
 };
 class SentObjectDestroyedUnknown: SentObjectDestroyedUnknown
 {
  versions[] = {"Version1",0.1,"Version2",0.1,"Version3",0.1,"Version4",0.1,"Version5",0.1};
  class Version1
  {
   text = "$STR_SENT_OBJECT_DESTROYED_1";
   speech[] = {"TargetDestroyedE"};
  };
  class Version2
  {
   text = "$STR_SENT_OBJECT_DESTROYED_4";
   speech[] = {"ScratchOneE"};
  };
  class Version3
  {
   text = "$STR_SENT_OBJECT_DESTROYED_5";
   speech[] = {"TargetEliminated"};
  };
  class Version4
  {
   text = "$STR_SENT_OBJECT_DESTROYED_6";
   speech[] = {"HesDownE"};
  };
  class Version5
  {
   text = "$STR_SENT_OBJECT_DESTROYED_9";
   speech[] = {"IveGotHimE"};
  };
 };
 class SentContact: SentContact
 {
  versions[] = {"Version1",0.6,"Version2",0.1,"Version3",0.3};
  class Version1
  {
   text = "$STR_SENT_CONTACT_1";
   speech[] = {"ContactE"};
  };
  class Version2
  {
   text = "$STR_SENT_CONTACT_2";
   speech[] = {"EnemiesE"};
  };
  class Version3
  {
   text = "$STR_SENT_CONTACT_3";
   speech[] = {"HostilesE"};
  };
 };
 class SentUnderFire: SentUnderFire
 {
  versions[] = {"Version1",0.2,"Version2",0.05,"Version3",0.1,"Version4",0.1,"Version5",0.05,"Version6",0.1};
  class Version1
  {
   text = "$STR_SENT_UNDER_FIRE_2";
   speech[] = {"UnderFireE"};
  };
  class Version2
  {
   text = "$STR_SENT_UNDER_FIRE_3";
   speech[] = {"TheyreShootingAtUsE"};
  };
  class Version3
  {
   text = "$STR_SENT_UNDER_FIRE_4";
   speech[] = {"EnemyFireE"};
  };
  class Version4
  {
   text = "$STR_SENT_UNDER_FIRE_5";
   speech[] = {"BeingEngagedE"};
  };
  class Version5
  {
   text = "$STR_SENT_UNDER_FIRE_6";
   speech[] = {"FuckThatsCloseE"};
  };
  class Version6
  {
   text = "$STR_SENT_UNDER_FIRE_8";
   speech[] = {"IncomingE"};
  };
 };
 class SentClear: SentClear
 {
  gesture = "gestureUp";
  versions[] = {"Version1",0.5,"Version2",0.1,"Version3",0.3};
  class Version1
  {
   text = "$STR_SENT_CLEAR_1";
   speech[] = {"Clear"};
  };
  class Version2
  {
   text = "$STR_SENT_CLEAR_2";
   speech[] = {"NoEnemiesInSight"};
  };
  class Version3
  {
   text = "$STR_SENT_CLEAR_3";
   speech[] = {"AreaClear"};
  };
 };
 class SentRepeatCommand: SentRepeatCommand
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_REPEAT_COMMAND_1";
   speech[] = {"SayAgain","Over1"};
  };
 };
 class SentWhereAreYou: SentWhereAreYou
 {
  versions[] = {"Version1",0.2,"Version2",0.3,"Version3",0.3,"Version4",0.2};
  class Version1
  {
   text = "$STR_SENT_WHERE_ARE_YOU_1";
   speech[] = {"ReportPositionE"};
  };
  class Version2
  {
   text = "$STR_SENT_WHERE_ARE_YOU_2";
   speech[] = {"WhatIsYourLocationQ"};
  };
  class Version3
  {
   text = "$STR_SENT_WHERE_ARE_YOU_3";
   speech[] = {"WhereAreYouQ"};
  };
  class Version4
  {
   text = "$STR_SENT_WHERE_ARE_YOU_4";
   speech[] = {"NeedSITREPE"};
  };
 };
 class SentReturnToFormation: SentReturnToFormation
 {
  gesture = "GestureFollow";
  versions[] = {"Version1",0.1,"Version2",0.3,"Version3",0.1,"Version4",0.1,"Version5",0.2,"Version6",0.2};
  class Version1
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_1";
   speech[] = {"%1","FallBackE"};
  };
  class Version2
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_2";
   speech[] = {"%1","ReturnToFormationE"};
  };
  class Version3
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_3";
   speech[] = {"%1","FormOnMeE"};
  };
  class Version4
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_4";
   speech[] = {"%1","GetBackE"};
  };
  class Version5
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_5";
   speech[] = {"%1","StayInFormationE"};
  };
  class Version6
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_6";
   speech[] = {"%1","RegroupE"};
  };
 };
 class SentFormColumn: SentFormColumn
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_COLUMN_1";
   speech[] = {"FormationColumn"};
  };
 };
 class SentFormStaggeredColumn: SentFormStaggeredColumn
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_STAGGERED_COLUMN_1";
   speech[] = {"FormationStaggeredColumn"};
  };
 };
 class SentFormWedge: SentFormWedge
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_WEDGE_1";
   speech[] = {"FormationWedge"};
  };
 };
 class SentFormEcholonLeft: SentFormEcholonLeft
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_ECHELON_LEFT_1";
   speech[] = {"FormationEchelonLeft"};
  };
 };
 class SentFormEcholonRight: SentFormEcholonRight
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_ECHELON_RIGHT_1";
   speech[] = {"FormationEchelonRight"};
  };
 };
 class SentFormVee: SentFormVee
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_VEE_1";
   speech[] = {"FormationVee"};
  };
 };
 class SentFormLine: SentFormLine
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_LINE_1";
   speech[] = {"FormationLine"};
  };
 };
 class SentFormFile: SentFormFile
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_FILE_1";
   speech[] = {"FormationFile"};
  };
 };
 class SentFormDiamond: SentFormDiamond
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_DIAMOND_1";
   speech[] = {"FormationDiamond"};
  };
 };
 class SentBehaviourCareless: SentBehaviourCareless
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "";
   speech[] = {};
  };
 };
 class SentBehaviourSafe: SentBehaviourSafe
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_BEHAVIOUR_SAFE_1";
   speech[] = {"%1","AtEase"};
  };
 };
 class SentBehaviourAware: SentBehaviourAware
 {
  versions[] = {"Version1",0.25,"Version2",0.65};
  class Version1
  {
   text = "$STR_SENT_BEHAVIOUR_AWARE_1";
   speech[] = {"%1","StayFrosty"};
  };
  class Version2
  {
   text = "$STR_SENT_BEHAVIOUR_AWARE_2";
   speech[] = {"%1","StayAlert"};
  };
 };
 class SentBehaviourCombat: SentBehaviourCombat
 {
  versions[] = {"Version1",0.2,"Version2",0.1,"Version3",0.2};
  class Version1
  {
   text = "$STR_SENT_BEHAVIOUR_COMBAT_1";
   speech[] = {"%1","GetReadyForContactE"};
  };
  class Version2
  {
   text = "$STR_SENT_BEHAVIOUR_COMBAT_2";
   speech[] = {"%1","GetReadyToFightE"};
  };
  class Version3
  {
   text = "$STR_SENT_BEHAVIOUR_COMBAT_4";
   speech[] = {"%1","DangerE"};
  };
 };
 class SentBehaviourStealth: SentBehaviourStealth
 {
  versions[] = {"Version1",0.2,"Version2",0.1,"Version2",0.1};
  class Version1
  {
   text = "$STR_SENT_BEHAVIOUR_STEALTH_1";
   speech[] = {"%1","Silence"};
  };
  class Version2
  {
   text = "$STR_SENT_BEHAVIOUR_STEALTH_2";
   speech[] = {"%1","DownAndQuiet"};
  };
  class Version3
  {
   text = "$STR_SENT_BEHAVIOUR_STEALTH_3";
   speech[] = {"%1","Stealth"};
  };
 };
 class SentOpenFire: SentOpenFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_OPEN_FIRE_1";
   speech[] = {"%1.1","FireAtWill"};
  };
 };
 class SentOpenFireInCombat: SentOpenFireInCombat
 {
  gesture = "gestureAdvance";
  versions[] = {"Version1",0.2,"Version2",0.2,"Version3",0.1};
  class Version1
  {
   text = "$STR_SENT_OPEN_FIRE_IN_COMBAT_1";
   speech[] = {"%1.1","OpenUpE"};
  };
  class Version2
  {
   text = "$STR_SENT_OPEN_FIRE_IN_COMBAT_3";
   speech[] = {"%1.1","LightEmUpE"};
  };
  class Version3
  {
   text = "$STR_SENT_OPEN_FIRE_IN_COMBAT_6";
   speech[] = {"%1.1","GoGoGoE"};
  };
 };
 class SentHoldFire: SentHoldFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_HOLD_FIRE_1";
   speech[] = {"%1.1","HoldFire"};
  };
 };
 class SentHoldFireInCombat: SentHoldFireInCombat
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_HOLD_FIRE_IN_COMBAT_1";
   speech[] = {"%1.1","HoldFireE"};
  };
 };
 class SentCeaseFireInsideGroup: SentCeaseFireInsideGroup
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CEASE_FIRE_INSIDE_GROUP_1";
   speech[] = {"%1.1","CeaseFireGoddamnitE"};
  };
 };
 class SentCeaseFire: SentCeaseFire
 {
  versions[] = {"Version1",0.4,"Version2",0.3,"Version3",0.2};
  class Version1
  {
   text = "$STR_SENT_CEASE_FIRE_1";
   speech[] = {"%2.1","CheckYourFireE"};
  };
  class Version2
  {
   text = "$STR_SENT_CEASE_FIRE_2";
   speech[] = {"%2.1","CeaseFireE"};
  };
  class Version3
  {
   text = "$STR_SENT_CEASE_FIRE_3";
   speech[] = {"%2.1","YoureFiringOnFriendliesE"};
  };
 };
 class SentLooseFormation: SentLooseFormation
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_LOOSE_FORMATION_1";
   speech[] = {"%1.1","EngageAtWill"};
  };
 };
 class SentKeepFormation: SentKeepFormation
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_KEEP_FORMATION_1";
   speech[] = {"%1.1","Disengage"};
  };
 };
 class SentUnitPosDown: SentUnitPosDown
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_UNIT_POS_DOWN_1";
   speech[] = {"%1.1","GoProne"};
   gesture = "gestureCover";
  };
 };
 class SentUnitPosMiddle: SentUnitPosMiddle
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_UNIT_POS_CROUCHED_1";
   speech[] = {"%1.1","StayCrouched"};
  };
 };
 class SentUnitPosUp: SentUnitPosUp
 {
  versions[] = {"Version1",0.4,"Version2",0.3};
  class Version1
  {
   text = "$STR_SENT_UNIT_POS_UP_1";
   speech[] = {"%1.1","StandUp"};
   gesture = "gestureUp";
  };
  class Version2
  {
   text = "$STR_SENT_UNIT_POS_UP_2";
   speech[] = {"%1.1","OnYourFeet"};
   gesture = "gestureUp";
  };
 };
 class SentUnitPosAuto: SentUnitPosAuto
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_UNIT_POS_AUTO_1";
   speech[] = {"%1.1","CopyMyStance"};
  };
 };
 class SentFormPosAdvance: SentFormPosAdvance
 {
  versions[] = {"Version1",0.8,"Version2",0.2};
  class Version1
  {
   text = "$STR_SENT_FORM_POS_ADVANCE_1";
   speech[] = {"%1.1","Advance"};
  };
  class Version2
  {
   text = "$STR_SENT_FORM_POS_ADVANCE_2";
   speech[] = {"%1.1","TakePoint"};
  };
 };
 class SentFormPosStayBack: SentFormPosStayBack
 {
  versions[] = {"Version1",0.8,"Version2",0.2};
  class Version1
  {
   text = "$STR_SENT_FORM_POS_STAY_BACK_1";
   speech[] = {"%1.1","StayBack"};
  };
  class Version2
  {
   text = "$STR_SENT_FORM_POS_STAY_BACK_2";
   speech[] = {"%1.1","CoverOurRear"};
  };
 };
 class SentFormPosFlankLeft: SentFormPosFlankLeft
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_POS_FLANK_LEFT_1";
   speech[] = {"%1.1","FlankLeft"};
  };
 };
 class SentFormPosFlankRight: SentFormPosFlankRight
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FORM_POS_FLANK_RIGHT_1";
   speech[] = {"%1.1","FlankRight"};
  };
 };
 class SentReportStatus: SentReportStatus
 {
  versions[] = {"Version1",0.2,"Version2",0.2,"Version3",0.3,"Version4",0.3};
  class Version1
  {
   text = "$STR_SENT_REPORT_STATUS_1";
   speech[] = {"%1.1","DoYouReadQ","Over2"};
  };
  class Version2
  {
   text = "$STR_SENT_REPORT_STATUS_2";
   speech[] = {"%1.1","ReportStatus","Over1"};
  };
  class Version3
  {
   text = "$STR_SENT_REPORT_STATUS_3";
   speech[] = {"%1.1","SendSITREP"};
  };
  class Version4
  {
   text = "$STR_SENT_REPORT_STATUS_4";
   speech[] = {"%1.1","WhatsYourStatusQ"};
  };
 };
 class SentTeam: SentTeam
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_TEAM_1";
   speech[] = {"%1.1","Is","%2"};
  };
 };
 class SentTeamPlural: SentTeamPlural
 {
  versions[] = {"Version2",1};
  class Version2
  {
   text = "$STR_SENT_TEAM_2";
   speech[] = {"%1.1","Are","%2"};
  };
 };
 class SentWatchTgt: SentWatchTgt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_WATCH_TGT_1";
   speech[] = {"%1.1","WatchThat","%2"};
  };
 };
 class SentWatchDir: SentWatchDir
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_WATCH_DIR_1";
   speech[] = {"%1.1","Watch","%2"};
  };
 };
 class SentWatchPos: SentWatchPos
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_WATCH_POS_1";
   speech[] = {"%1.1","Watch"};
  };
 };
 class SentWatchAround: SentWatchAround
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_WATCH_AROUND_1";
   speech[] = {"%1.1","ScanHorizon"};
  };
 };
 class SentNoTarget: SentNoTarget
 {
  versions[] = {"Version1",0.1,"Version2",0.2};
  class Version1
  {
   text = "$STR_SENT_NO_TARGET_1";
   speech[] = {"%1.1","NoMoreTarget"};
  };
  class Version2
  {
   text = "$STR_SENT_NO_TARGET_3";
   speech[] = {"%1.1","CancelTarget"};
  };
 };
 class SentTarget: SentTarget
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_TARGET_1";
   speech[] = {"%1","TargetThat","%2"};
   gesture = "gesturePoint";
  };
 };
 class SentEngage: SentEngage
 {
  gesture = "gestureAttack";
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_ENGAGE_1";
   speech[] = {"%1","EngageThat","%2"};
  };
 };
 class SentFire: SentFire
 {
  gesture = "GestureAttack";
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FIRE_1";
   speech[] = {"%1","FireAtThat","%2"};
  };
 };
 class SentEngageNoTarget: SentEngageNoTarget
 {
  gesture = "gestureAdvance";
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_ENGAGE_NO_TARGET_1";
   speech[] = {"%1","EngageE"};
  };
 };
 class SentFireNoTarget: SentFireNoTarget
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_FIRE_NO_TARGET_1";
   speech[] = {"%1","FireE"};
  };
 };
 class SelectCmdMoveSentence: SelectCmdMoveSentence
 {
  sentences[] = {"SentCmdMoveGroupRelative","GroupCompactness","SentCmdMoveToGrid","((DistanceToGroup factor [750,1000]) + (1 - GroupCompactness)/2) / 2","SentCmdMoveRecipientsRelative","(DistanceToRecipients / RecipientsRadius) factor [1.5, 3]","SentCmdMoveToObject","3*MoveToObject","SentCmdMoveLocationRelative","5 * ( ( GroupCompactness * ((DistanceToLocation/DistanceToGroup) factor [0.4,0.2]) ) + ( DistanceToLocation/DistanceToUnit factor [0.5,0.3] ) )"};
 };
 class SentCmdMoveGroupRelative: SentCmdMoveGroupRelative
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_MOVE_GROUP_2";
   speech[] = {"%1.1","MoveTo","%4.101","%3.101","fromus"};
   gesture = "gestureGo";
  };
 };
 class SentCmdMoveRecipientsRelative: SentCmdMoveRecipientsRelative
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_MOVE_RECIPIENT_1";
   speech[] = {"%1.1","MoveTo","%11.101","%10.101"};
   gesture = "gestureGo";
  };
 };
 class SentCmdMoveToGrid: SentCmdMoveToGrid
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_MOVE_FAR_1";
   speech[] = {"%1.1","MoveToPos","%2"};
   gesture = "gestureGoB";
  };
 };
 class SentCmdMoveToObject: SentCmdMoveToObject
 {
  versions[] = {"Version1",0.8,"Version2",0.2};
  class Version1
  {
   text = "$STR_SENT_CMD_MOVE_OBJECT_1";
   speech[] = {"XMIT","GoTo","%7"};
   gesture = "gestureGo";
  };
  class Version2
  {
   text = "$STR_SENT_CMD_MOVE_OBJECT_2";
   speech[] = {"XMIT","GoDir","%7","%8.2"};
   gesture = "gestureGoB";
  };
 };
 class SentCmdMoveLocationRelative: SentCmdMoveLocationRelative
 {
  versions[] = {"Version2","InsideLocation","Version1","1 - InsideLocation"};
  class Version1
  {
   text = "$STR_SENT_CMD_MOVE_LOCATION_1";
   speech[] = {"%1.1","GoTo","%7"};
  };
  class Version2
  {
   text = "$STR_SENT_CMD_MOVE_LOCATION_2";
   speech[] = {"%1.1","Move","%5.101","%6.102","of","%7"};
  };
 };
 class SentCmdMoveToTarget: SentCmdMoveToTarget
 {
  versions[] = {"Version1",0.2,"Version2",0.6,"Version2",0.2};
  class Version1
  {
   text = "$STR_SENT_CMD_MOVE_TARGET_1";
   speech[] = {"%1.1","%2","gofast"};
   gesture = "gestureGo";
  };
  class Version2
  {
   text = "$STR_SENT_CMD_MOVE_TARGET_2";
   speech[] = {"%1.1","GoTo","%2","%4.2"};
   gesture = "gestureGo";
  };
  class Version3
  {
   text = "$STR_SENT_CMD_MOVE_TARGET_2";
   speech[] = {"%1.1","GoTo","%2","%4.1"};
   gesture = "gestureGoB";
  };
 };
 class SentCmdHeal: SentCmdHeal
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_HEAL_1";
   speech[] = {"%1.1","HealAt","%2"};
  };
 };
 class SentCmdHealFar: SentCmdHealFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_HEAL_1";
   speech[] = {"%1.1","HealAt","%2"};
  };
 };
 class SentCmdHealAt: SentCmdHealAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_HEAL_1";
   speech[] = {"%1.1","HealAt","%2"};
  };
 };
 class SentCmdRepair: SentCmdRepair
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REPAIR_1";
   speech[] = {"%1.1","RepairAt","%2"};
  };
 };
 class SentCmdRepairFar: SentCmdRepairFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REPAIR_1";
   speech[] = {"%1.1","RepairAt","%2"};
  };
 };
 class SentCmdRepairAt: SentCmdRepairAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REPAIR_1";
   speech[] = {"%1.1","RepairAt","%2"};
  };
 };
 class SentCmdRefuel: SentCmdRefuel
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REFUEL_1";
   speech[] = {"%1.1","RefuelAt","%2"};
  };
 };
 class SentCmdRefuelFar: SentCmdRefuelFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REFUEL_1";
   speech[] = {"%1.1","RefuelAt","%2"};
  };
 };
 class SentCmdRefuelAt: SentCmdRefuelAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REFUEL_1";
   speech[] = {"%1.1","RefuelAt","%2"};
  };
 };
 class SentCmdRearm: SentCmdRearm
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REARM_1";
   speech[] = {"%1.1","RearmAt","%2"};
  };
 };
 class SentCmdRearmFar: SentCmdRearmFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REARM_1";
   speech[] = {"%1.1","RearmAt","%2"};
  };
 };
 class SentCmdRearmAt: SentCmdRearmAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_REARM_1";
   speech[] = {"%1.1","RearmAt","%2"};
  };
 };
 class SentCmdSupport: SentCmdSupport
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_SUPPORT_1";
   speech[] = {"%1.1","SupportAt","%2"};
  };
 };
 class SentCmdSupportFar: SentCmdSupportFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_SUPPORT_1";
   speech[] = {"%1.1","SupportAt","%2"};
  };
 };
 class SentCmdSupportAt: SentCmdSupportAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_SUPPORT_1";
   speech[] = {"%1.1","SupportAt","%2"};
  };
 };
 class SentCmdDropWeapon: SentCmdDropWeapon
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_DROP_WEAPON_1";
   speech[] = {"%1.1","Drop","%2"};
  };
 };
 class SentCmdDropMagazine: SentCmdDropMagazine
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_DROP_MAGAZINE_1";
   speech[] = {"%1.1","Drop","Magazine"};
  };
 };
 class SentCmdTakeWeapon: SentCmdTakeWeapon
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_WEAPON_1";
   speech[] = {"%1.1","Take","%2"};
  };
 };
 class SentCmdTakeWeaponFar: SentCmdTakeWeaponFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_WEAPON_1";
   speech[] = {"%1.1","Take","%2"};
  };
 };
 class SentCmdTakeWeaponAt: SentCmdTakeWeaponAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_WEAPON_1";
   speech[] = {"%1.1","Take","%2"};
  };
 };
 class SentCmdTakeMagazine: SentCmdTakeMagazine
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_MAGAZINE_1";
   speech[] = {"%1.1","Take","Magazine"};
  };
 };
 class SentCmdTakeMagazineFar: SentCmdTakeMagazineFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_MAGAZINE_1";
   speech[] = {"%1.1","Take","Magazine"};
  };
 };
 class SentCmdTakeMagazineAt: SentCmdTakeMagazineAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_MAGAZINE_1";
   speech[] = {"%1.1","Take","Magazine"};
  };
 };
 class SentCmdAction: SentCmdAction
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_ACTION_1";
   speech[] = {};
  };
 };
 class SentCmdActionNear: SentCmdActionNear
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_ACTION_NEAR_1";
   speech[] = {};
  };
 };
 class SentCmdActionFar: SentCmdActionFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_ACTION_FAR_1";
   speech[] = {};
  };
 };
 class SentCmdActionAt: SentCmdActionAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_ACTION_AT_1";
   speech[] = {};
  };
 };
 class SentCmdTakeFlag: SentCmdTakeFlag
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_FLAG_1";
   speech[] = {"%1.1","TakeTheFlag","At","%2"};
  };
 };
 class SentCmdTakeFlagFar: SentCmdTakeFlagFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_FLAG_1";
   speech[] = {"%1.1","TakeTheFlag","At","%2"};
  };
 };
 class SentCmdTakeFlagAt: SentCmdTakeFlagAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_FLAG_1";
   speech[] = {"%1.1","TakeTheFlag","At","%2"};
  };
 };
 class SentCmdReturnFlag: SentCmdReturnFlag
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_RETURN_FLAG_1";
   speech[] = {"%1.1","ReturnTheFlag","At","%2"};
  };
 };
 class SentCmdReturnFlagFar: SentCmdReturnFlagFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_RETURN_FLAG_1";
   speech[] = {"%1.1","ReturnTheFlag","At","%2"};
  };
 };
 class SentCmdReturnFlagAt: SentCmdReturnFlagAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_RETURN_FLAG_1";
   speech[] = {"%1.1","ReturnTheFlag","At","%2"};
  };
 };
 class SentCmdEject: SentCmdEject
 {
  versions[] = {"Version1",0.7,"Version2",0.3};
  class Version1
  {
   text = "$STR_SENT_CMD_EJECT_1";
   speech[] = {"%1.1","EjectE"};
  };
  class Version2
  {
   text = "$STR_SENT_CMD_EJECT_2";
   speech[] = {"%1.1","BailOutE"};
  };
 };
 class SentCmdPlaceCharge: SentCmdPlaceCharge
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_PLACE_CHARGE_1";
   speech[] = {"%1.1","SetACharge"};
  };
 };
 class SentCmdDetonate: SentCmdDetonate
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_DETONATE_1";
   speech[] = {"%1.1","DetonateChargeNowE"};
  };
 };
 class SentCmdActivateTimer: SentCmdActivateTimer
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_ACTIVATE_TIMER_1";
   speech[] = {"%1.1","SetTheTimer"};
  };
 };
 class SentCmdDeactivateBomb: SentCmdDeactivateBomb
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_DEACTIVATE_BOMB_1";
   speech[] = {"%1.1","DeactivateThatCharge"};
  };
 };
 class SentCmdDeactivateMine: SentCmdDeactivateMine
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_DEACTIVATE_MINE_1";
   speech[] = {"%1.1","DisarmThatMine"};
  };
 };
 class SentCmdTakeMine: SentCmdTakeMine
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_TAKE_MINE_1";
   speech[] = {"%1.1","PickUpThatMine"};
  };
 };
 class SentCmdLightFire: SentCmdLightFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_LIGHT_FIRE_2";
   speech[] = {"GoAndLightThatFire"};
  };
 };
 class SentCmdLightFireFar: SentCmdLightFireFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_LIGHT_FIRE_1";
   speech[] = {"%1.1","GoAndLightThatFire"};
  };
 };
 class SentCmdLightFireAt: SentCmdLightFireAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_LIGHT_FIRE_1";
   speech[] = {"%1.1","GoAndLightThatFire"};
  };
 };
 class SentCmdPutOutFire: SentCmdPutOutFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_PUT_OUT_FIRE_1";
   speech[] = {"%1.1","PutOutThatFire"};
  };
 };
 class SentCmdPutOutFireFar: SentCmdPutOutFireFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_PUT_OUT_FIRE_1";
   speech[] = {"%1.1","PutOutThatFire"};
  };
 };
 class SentCmdPutOutFireAt: SentCmdPutOutFireAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_PUT_OUT_FIRE_1";
   speech[] = {"%1.1","PutOutThatFire"};
  };
 };
 class SentCmdOpenDoor: SentCmdOpenDoor
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_OPEN_DOOR_1";
   speech[] = {"%1.1","OpenThatDoor"};
  };
 };
 class SentCmdOpenDoorFar: SentCmdOpenDoorFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_OPEN_DOOR_1";
   speech[] = {"%1.1","OpenThatDoor"};
  };
 };
 class SentCmdOpenDoorAt: SentCmdOpenDoorAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_OPEN_DOOR_1";
   speech[] = {"%1.1","OpenThatDoor"};
  };
 };
 class SentCmdCloseDoor: SentCmdCloseDoor
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_CLOSE_DOOR_1";
   speech[] = {"%1.1","CloseThatDoor"};
  };
 };
 class SentCmdCloseDoorFar: SentCmdCloseDoorFar
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_CLOSE_DOOR_1";
   speech[] = {"%1.1","CloseThatDoor"};
  };
 };
 class SentCmdCloseDoorAt: SentCmdCloseDoorAt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_CLOSE_DOOR_1";
   speech[] = {"%1.1","CloseThatDoor"};
  };
 };
 class SentCmdFollowMe: SentCmdFollowMe
 {
  gesture = "GestureFollow";
  versions[] = {"Version1",0.1,"Version2",0.3,"Version3",0.1,"Version4",0.1,"Version5",0.2,"Version6",0.2};
  class Version1
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_1";
   speech[] = {"%1","FallBackE"};
  };
  class Version2
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_2";
   speech[] = {"%1","ReturnToFormationE"};
  };
  class Version3
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_3";
   speech[] = {"%1","FormOnMeE"};
  };
  class Version4
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_4";
   speech[] = {"%1","GetBackE"};
  };
  class Version5
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_5";
   speech[] = {"%1","StayInFormationE"};
  };
  class Version6
  {
   text = "$STR_SENT_RETURN_TO_FORMATION_6";
   speech[] = {"%1","RegroupE"};
  };
 };
 class SentCmdFollow: SentCmdFollow
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_FOLLOW_1";
   speech[] = {"%1.1","Follow","%2.1"};
  };
 };
 class SentCmdAttack: SentCmdAttack
 {
  gesture = "GestureAttack";
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_ATTACK_1";
   speech[] = {"%1.1","Attack","%2"};
  };
 };
 class SentAttackNoTarget: SentAttackNoTarget
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_ATTACK_NO_TARGET_1";
   speech[] = {"%1.1","AttackE"};
  };
 };
 class SentCmdFire: SentCmdFire
 {
  gesture = "GestureAttack";
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_FIRE_1";
   speech[] = {"%1.1","FireAt","%2"};
  };
 };
 class SentCmdGetIn: SentCmdGetIn
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_GETIN_1";
   speech[] = {"%1.1","GetIn","%2"};
  };
 };
 class SentCmdGetInCommander: SentCmdGetInCommander
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_GETIN_COMMANDER_1";
   speech[] = {"%1.1","Commander","GetIn","%2"};
  };
 };
 class SentCmdGetInDriver: SentCmdGetInDriver
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_GETIN_DRIVER_1";
   speech[] = {"%1.1","Driver","GetIn","%2"};
  };
 };
 class SentCmdGetInPilot: SentCmdGetInPilot
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_GETIN_PILOT_1";
   speech[] = {"%1.1","Pilot","GetIn","%2"};
  };
 };
 class SentCmdGetInGunner: SentCmdGetInGunner
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_GETIN_GUNNER_1";
   speech[] = {"%1.1","Gunner","GetIn","%2"};
  };
 };
 class SentCmdGetInCargo: SentCmdGetInCargo
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CMD_GETIN_CARGO_1";
   speech[] = {"%1.1","Board","%2"};
  };
 };
 class SentCmdSwitchToDriver: SentCmdSwitchToDriver
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "";
   speech[] = {};
  };
 };
 class SentCmdSwitchToGunner: SentCmdSwitchToGunner
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "";
   speech[] = {};
  };
 };
 class SentCmdSwitchToCommander: SentCmdSwitchToCommander
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "";
   speech[] = {};
  };
 };
 class SentCmdSwitchToCargo: SentCmdSwitchToCargo
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "";
   speech[] = {};
  };
 };
 class SentCmdGetOut: SentCmdGetOut
 {
  versions[] = {"Version1",0.5,"Version2",0.5};
  class Version1
  {
   text = "$STR_SENT_CMD_GETOUT_2";
   speech[] = {"%1.1","Dismount"};
  };
  class Version2
  {
   text = "$STR_SENT_CMD_GETOUT_3";
   speech[] = {"%1.1","Disembark"};
  };
 };
 class SentCmdStop: SentCmdStop
 {
  versions[] = {"Version1",0.5,"Version2",0.5};
  class Version1
  {
   text = "$STR_SENT_CMD_STOP_1";
   speech[] = {"%1.1","HaltE"};
   gesture = "gestureFreeze";
  };
  class Version2
  {
   text = "$STR_SENT_CMD_STOP_3";
   speech[] = {"%1.1","StopE"};
   gesture = "gestureFreeze";
  };
 };
 class SentCmdExpect: SentCmdExpect
 {
  versions[] = {"Version1",0.5,"Version2",0.5};
  class Version1
  {
   text = "$STR_SENT_CMD_EXPECT_1";
   speech[] = {"%1.1","StayThere"};
  };
  class Version2
  {
   text = "$STR_SENT_CMD_EXPECT_2";
   speech[] = {"%1.1","WaitForMe"};
  };
 };
 class SentCmdHide: SentCmdHide
 {
  versions[] = {"Version1",0.5,"Version2",0.3,"Version3",0.2};
  class Version1
  {
   text = "$STR_SENT_CMD_HIDE_1";
   speech[] = {"%1.1","TakeCoverE"};
   gesture = "gestureCover";
  };
  class Version2
  {
   text = "$STR_SENT_CMD_HIDE_2";
   speech[] = {"%1.1","HideE"};
   gesture = "gestureCover";
  };
  class Version3
  {
   text = "$STR_SENT_CMD_HIDE_3";
   speech[] = {"%1.1","ConcealYourSelfE"};
   gesture = "gestureCover";
  };
 };
 class SentCmdDismiss: SentCmdDismiss
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "";
   speech[] = {};
  };
 };
 class SentNotifyAttack: SentNotifyAttack
 {
  versions[] = {"Version1",0.2,"Version2",0.6,"Version3",0.2};
  class Version1
  {
   text = "$STR_SENT_NOTIFY_ATTACK_1";
   speech[] = {"Copy","ImOnHim"};
  };
  class Version2
  {
   text = "$STR_SENT_NOTIFY_ATTACK_2";
   speech[] = {"EngagingE"};
  };
  class Version3
  {
   text = "$STR_SENT_NOTIFY_ATTACK_4";
   speech[] = {"EngagingTargetE"};
  };
 };
 class SentNotifyAttackSubgroup: SentNotifyAttack
 {
  versions[] = {"Version1",0.7,"Version2",0.3};
  class Version1
  {
   text = "$STR_SENT_NOTIFY_ATTACK_SUBGROUP_1";
   speech[] = {"%3.1","EngagingE"};
  };
  class Version2
  {
   text = "$STR_SENT_NOTIFY_ATTACK_SUBGROUP_2";
   speech[] = {"%3.1","EngagingTargetE"};
  };
 };
 class SentNotifySupport: SentNotifySupport
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_NOTIFY_SUPPORT_1";
   speech[] = {"%1.1","Supporting"};
  };
 };
 class SentConfirmMove: SentConfirmMove
 {
  versions[] = {"Version1",0.3,"Version2",0.4,"Version3",0.3};
  class Version1
  {
   text = "$STR_SENT_CONFIRM_MOVE_1";
   speech[] = {"Roger"};
   gesture = "gestureYes";
  };
  class Version2
  {
   text = "$STR_SENT_CONFIRM_MOVE_2";
   speech[] = {"Copy"};
  };
  class Version3
  {
   text = "$STR_SENT_CONFIRM_MOVE_6";
   speech[] = {"OnTheWay"};
   gesture = "gestureYes";
  };
 };
 class SentConfirmAttack: SentConfirmAttack
 {
  versions[] = {"Version1",0.4,"Version2",0.3,"Version3",0.3};
  class Version1
  {
   text = "$STR_SENT_CONFIRM_MOVE_1";
   speech[] = {"Roger"};
   gesture = "gestureYes";
  };
  class Version2
  {
   text = "$STR_SENT_CONFIRM_ATTACK_2";
   speech[] = {"ImOnIt"};
   gesture = "gestureYes";
  };
  class Version3
  {
   text = "$STR_SENT_CONFIRM_MOVE_2";
   speech[] = {"Copy"};
   gesture = "gestureYes";
  };
 };
 class SentConfirmOther: SentConfirmOther
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_CONFIRM_MOVE_1";
   speech[] = {"Roger"};
   gesture = "gestureYes";
  };
 };
 class SelectVehicleMoveSentence: SelectVehicleMoveSentence
 {
  sentences[] = {"VehicleMoveGroupRelative","GroupCompactness","VehicleMoveToGrid","((DistanceToGroup factor [750,1000]) + (1 - GroupCompactness)/2) / 2","VehicleMoveRecipientsRelative","(DistanceToRecipients / RecipientsRadius) factor [1.5, 3]","VehicleMoveToObject","3*MoveToObject","VehicleMoveLocationRelative","5 * ( ( GroupCompactness * ((DistanceToLocation/DistanceToGroup) factor [0.4,0.2]) ) + ( DistanceToLocation/DistanceToUnit factor [0.5,0.3] ) )"};
 };
 class VehicleMoveGroupRelative: VehicleMoveGroupRelative
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_MOVE_GROUP_1";
   speech[] = {"XMIT","MoveTo","%2.101","%3.102","fromus"};
   gesture = "gestureGo";
  };
 };
 class VehicleMoveRecipientsRelative: VehicleMoveRecipientsRelative
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_MOVE_RECIPIENT_1";
   speech[] = {"XMIT","Move","%9.101","%10.102"};
   gesture = "gestureGo";
  };
 };
 class VehicleMoveToGrid: VehicleMoveToGrid
 {
  versions[] = {"Version1",0.5,"Version2",0.5};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_MOVE_GRID_1";
   speech[] = {"XMIT","MoveTo","%1"};
   gesture = "gestureGoB";
  };
  class Version2
  {
   text = "$STR_SENT_VEHICLE_MOVE_GRID_2";
   speech[] = {"XMIT","GoTo","%1"};
   gesture = "gestureGo";
  };
 };
 class VehicleMoveToObject: VehicleMoveToObject
 {
  versions[] = {"Version1",0.8,"Version2",0.2};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_MOVE_OBJECT_1";
   speech[] = {"XMIT","GoTo","%7"};
   gesture = "gestureGo";
  };
  class Version2
  {
   text = "$STR_SENT_VEHICLE_MOVE_OBJECT_2";
   speech[] = {"XMIT","GoDir","%8","%9.3"};
   gesture = "gestureGoB";
  };
 };
 class VehicleMoveLocationRelative: VehicleMoveLocationRelative
 {
  versions[] = {"Version1","1 - InsideLocation","Version2","InsideLocation"};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_MOVE_LOCATION_1";
   speech[] = {"XMIT","Move","%4.101","%5","of","%6"};
  };
  class Version2
  {
   text = "$STR_SENT_VEHICLE_MOVE_LOCATION_2";
   speech[] = {"XMIT","MoveTo","%6"};
  };
 };
 class VehicleWatchTgt: VehicleWatchTgt
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_WATCH_TGT_1";
   speech[] = {"XMIT","Watch","%1","At","%2"};
  };
 };
 class VehicleWatchPos: VehicleWatchPos
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_WATCH_POS_1";
   speech[] = {"XMIT","Watch","%1","%2"};
  };
 };
 class VehicleJoin: VehicleJoin
 {
  versions[] = {"Version1",0.6,"Version2",0.4};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_JOIN_1";
   speech[] = {"XMIT","MaintainFormation"};
  };
  class Version2
  {
   text = "$STR_SENT_VEHICLE_JOIN_2";
   speech[] = {"XMIT","StayInFormationE"};
  };
 };
 class VehicleFire: VehicleFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_FIRE_1";
   speech[] = {"XMIT","FireAt","%1"};
  };
 };
 class VehicleTarget: VehicleTarget
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_TARGET_1";
   speech[] = {"XMIT","Target","%1","At","%2"};
  };
 };
 class VehicleNoTarget: VehicleNoTarget
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_NO_TARGET_1";
   speech[] = {"XMIT","NoTarget"};
  };
 };
 class VehicleCeaseFire: VehicleCeaseFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_CEASE_FIRE_1";
   speech[] = {"XMIT","CeaseFire"};
  };
 };
 class VehicleForward: VehicleForward
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_FORWARD_1";
   speech[] = {"XMIT","Forward"};
  };
 };
 class VehicleStop: VehicleStop
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_STOP_1";
   speech[] = {"XMIT","Halt"};
  };
 };
 class VehicleBackward: VehicleBackward
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_BACKWARD_1";
   speech[] = {"XMIT","Reverse"};
  };
 };
 class VehicleFaster: VehicleFaster
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_FASTER_1";
   speech[] = {"XMIT","Fast"};
  };
 };
 class VehicleSlower: VehicleSlower
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_SLOWER_1";
   speech[] = {"XMIT","Slow"};
  };
 };
 class VehicleLeft: VehicleLeft
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_LEFT_1";
   speech[] = {"XMIT","Left"};
  };
 };
 class VehicleRight: VehicleRight
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_RIGHT_1";
   speech[] = {"XMIT","Right"};
  };
 };
 class VehicleManualFire: VehicleManualFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_MANUAL_FIRE_1";
   speech[] = {"XMIT","SwitchingToManualFire"};
  };
 };
 class VehicleCancelManualFire: VehicleCancelManualFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_CANCEL_MANUAL_FIRE_1";
   speech[] = {"XMIT","DisablingManualFire"};
  };
 };
 class VehicleDirectFire: VehicleDirectFire
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_DIRECT_FIRE_1";
   speech[] = {"XMIT","Fire"};
  };
 };
 class VehicleLoad: VehicleLoad
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_LOAD_1";
   speech[] = {"%1"};
  };
 };
 class VehicleLoadMagazine: VehicleLoadMagazine
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_LOAD_MAGAZINE_1";
   speech[] = {"%1"};
  };
 };
 class VehicleAzimut: VehicleAzimut
 {
  versions[] = {"Version1",1};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_AZIMUT_1";
   speech[] = {"%1"};
  };
 };
 class VehicleFireFailed: VehicleFireFailed
 {
  versions[] = {"Version1",0.5,"Version2",0.5};
  class Version1
  {
   text = "$STR_SENT_VEHICLE_FIRE_FAILED_1";
   speech[] = {"Negative"};
  };
  class Version2
  {
   text = "$STR_SENT_VEHICLE_FIRE_FAILED_2";
   speech[] = {"CannotFire"};
  };
 };
 class ClausePosition: ClausePosition
 {
  text = "$STR_SENT_CLAUSE_POSITION";
  speech[] = {"%1","%2"};
 };
 class ClausePositionNear: ClausePositionNear
 {
  text = "$STR_SENT_CLAUSE_POSITION_NEAR";
  speech[] = {"%1","at","%2"};
 };
 class Report;
 class SentCovering: Report
 {
  versions[] = {"Version1",0.25,"Version2",0.25,"Version3",0.05,"Version4",0.1,"Version5",0.1,"Version6",0.1,"Version7",0.15,"",9};
  class Version1
  {
   text = "$STR_GoImCoveringE";
   speech[] = {"C_GoImCoveringE"};
  };
  class Version2
  {
   text = "$STR_GoILLCoverE";
   speech[] = {"C_GoILLCoverE"};
  };
  class Version3
  {
   text = "$STR_CoveringFireE";
   speech[] = {"C_CoveringFireE"};
  };
  class Version4
  {
   text = "$STR_CoveringGoE";
   speech[] = {"C_CoveringGoE"};
  };
  class Version5
  {
   text = "$STR_MoveOutE";
   speech[] = {"C_MoveOutE"};
  };
  class Version6
  {
   text = "$STR_GoE";
   speech[] = {"C_GoE"};
  };
  class Version7
  {
   text = "$STR_MoveE";
   speech[] = {"C_MoveE"};
  };
 };
 class SentCoverMe: Report
 {
  versions[] = {"Version1",0.1,"Version2",0.3,"Version3",0.2,"Version4",0.3,"Version5",0.1,"",9};
  class Version1
  {
   text = "$STR_EngagingE";
   speech[] = {"C_EngagingE"};
  };
  class Version2
  {
   text = "$STR_CoverMeE";
   speech[] = {"C_CoverMeE"};
  };
  class Version3
  {
   text = "$STR_OKLetsGo";
   speech[] = {"C_OKLetsGo"};
  };
  class Version4
  {
   text = "$STR_MovingE";
   speech[] = {"C_MovingE"};
  };
  class Version5
  {
   text = "$STR_GoingE";
   speech[] = {"C_GoingE"};
  };
 };
 class SentSuppressing: Report
 {
  versions[] = {"Version1",0.4,"Version2",0.15,"Version3",0.35,"Version4",0.1};
  class Version1
  {
   text = "$STR_SuppresiveFireE";
   speech[] = {"C_SuppresiveFireE"};
  };
  class Version2
  {
   text = "$STR_HangOnILLSuppressE";
   speech[] = {"C_HangOnILLSuppressE"};
  };
  class Version3
  {
   text = "$STR_SuppressingE";
   speech[] = {"C_SuppressingE"};
  };
  class Version4
  {
   text = "$STR_OpenUpE";
   speech[] = {"C_OpenUpE"};
  };
 };
 class SentReloading: Report
 {
  versions[] = {"Version1",0.4,"Version2",0.3,"Version3",0.05,"Version4",0.25};
  class Version1
  {
   text = "$STR_ReloadingE";
   speech[] = {"C_ReloadingE"};
  };
  class Version2
  {
   text = "$STR_IgottaReloadE";
   speech[] = {"C_IgottaReloadE"};
  };
  class Version3
  {
   text = "$STR_CoverMeWhileIReloadE";
   speech[] = {"C_CoverMeWhileIReloadE"};
  };
  class Version4
  {
   text = "$STR_ChangingMagsE";
   speech[] = {"C_ChangingMagsE"};
  };
 };
 class SentThrowingGrenade: Report
 {
  versions[] = {"Version1",0.5,"Version2",0.3,"Version3",0.2};
  class Version1
  {
   text = "$STR_FireInTheHoleE";
   speech[] = {"C_FireInTheHoleE"};
  };
  class Version2
  {
   text = "$STR_ThrowingFragE";
   speech[] = {"C_ThrowingFragE"};
  };
  class Version3
  {
   text = "$STR_FragOutE";
   speech[] = {"C_FragOutE"};
  };
 };
 class SentThrowingSmoke: Report
 {
  versions[] = {"Version1",0.5,"Version2",0.5};
  class Version1
  {
   text = "$STR_ThrowingSmokeNowE";
   speech[] = {"C_ThrowingSmokeNowE"};
  };
  class Version2
  {
   text = "$STR_SmokeOutE";
   speech[] = {"C_SmokeOutE"};
  };
 };
 class SentIncomingGrenade: Report
 {
  versions[] = {"Version1",0.7,"Version2",0.3};
  class Version1
  {
   text = "$STR_GrenadeE";
   speech[] = {"C_GrenadeE"};
  };
  class Version2
  {
   text = "$STR_WatchForGrenadeE";
   speech[] = {"C_WatchForGrenadeE"};
  };
 };
 class SentEnemyContact: Report
 {
  versions[] = {"Version1",0.25,"Version2",0.1,"Version3",0.05,"Version4",0.15,"Version5",0.1,"Version6",0.2,"Version7",0.1,"Version8",0.05};
  class Version1
  {
   text = "$STR_ContactE";
   speech[] = {"C_ContactE"};
  };
  class Version2
  {
   text = "$STR_DidYouSeeThatQ";
   speech[] = {"C_DidYouSeeThatQ"};
  };
  class Version3
  {
   text = "$STR_FuckSawThatQ";
   speech[] = {"C_FuckSawThatQ"};
  };
  class Version4
  {
   text = "$STR_TargetE";
   speech[] = {"C_TargetE"};
  };
  class Version5
  {
   text = "$STR_GotATargetE";
   speech[] = {"C_GotATargetE"};
  };
  class Version6
  {
   text = "$STR_HostilesE";
   speech[] = {"C_HostilesE"};
  };
  class Version7
  {
   text = "$STR_RightThereE";
   speech[] = {"C_RightThereE"};
  };
  class Version8
  {
   text = "$STR_TakeHimOutE";
   speech[] = {"C_TakeHimOutE"};
  };
 };
 class SentEndangered: Report
 {
  versions[] = {"Version1",0.2,"Version2",0.15,"Version3",0.2,"Version4",0.15,"Version5",0.1,"Version6",0.05,"Version7",0.05,"Version8",0.1};
  class Version1
  {
   text = "$STR_TakeCoverE";
   speech[] = {"C_TakeCoverE"};
  };
  class Version2
  {
   text = "$STR_ShitE";
   speech[] = {"C_ShitE"};
  };
  class Version3
  {
   text = "$STR_GetDownE";
   speech[] = {"C_GetDownE"};
  };
  class Version4
  {
   text = "$STR_HitTheDeckE";
   speech[] = {"C_HitTheDeckE"};
  };
  class Version5
  {
   text = "$STR_WhatTheFuckQ";
   speech[] = {"C_WhatTheFuckQ"};
  };
  class Version6
  {
   text = "$STR_WhatTheHellQ";
   speech[] = {"C_WhatTheHellQ"};
  };
  class Version7
  {
   text = "$STR_WhatTheFuckWasThatQ";
   speech[] = {"C_WhatTheFuckWasThatQ"};
  };
  class Version8
  {
   text = "$STR_CheckThatOut";
   speech[] = {"C_CheckThatOut"};
  };
 };
 class SentRouted: Report
 {
  versions[] = {"Version1",0.5,"Version2",0.5,"",9};
  class Version1
  {
   text = "$STR_HolyShitE";
   speech[] = {"C_HolyShitE"};
  };
  class Version2
  {
   text = "$STR_OhJesusE";
   speech[] = {"C_OhJesusE"};
  };
 };
 class SentWitnessDeadBody: Report
 {
  versions[] = {"Version1",0.05,"Version2",0.3,"Version3",0.05,"Version4",0.2,"Version5",0.15,"Version6",0.15,"Version7",0.1,"",3};
  class Version1
  {
   text = "$STR_WhatAView";
   speech[] = {"C_WhatAView"};
  };
  class Version2
  {
   text = "$STR_WhatAMess";
   speech[] = {"C_WhatAMess"};
  };
  class Version3
  {
   text = "$STR_WishIHadntSeeThat";
   speech[] = {"C_WishIHadntSeeThat"};
  };
  class Version4
  {
   text = "$STR_ThatSucks";
   speech[] = {"C_ThatSucks"};
  };
  class Version5
  {
   text = "$STR_MotherfuckerE";
   speech[] = {"C_MotherfuckerE"};
  };
  class Version6
  {
   text = "$STR_SweetJesusE";
   speech[] = {"C_SweetJesusE"};
  };
  class Version7
  {
   text = "$STR_SeeThatQE";
   speech[] = {"C_SeeThatQE"};
  };
 };
 class SentWitnessKilled: Report
 {
  versions[] = {"Version1",0.2,"Version2",0.1,"Version3",0.1,"Version4",0.1,"Version5",0.05,"Version6",0.1,"Version7",0.1,"Version8",0.1,"Version9",0.15};
  class Version1
  {
   text = "$STR_ManDownE";
   speech[] = {"C_ManDownE"};
  };
  class Version2
  {
   text = "$STR_FuckHesDownE";
   speech[] = {"C_FuckHesDownE"};
  };
  class Version3
  {
   text = "$STR_HesDeadE";
   speech[] = {"C_HesDeadE"};
  };
  class Version4
  {
   text = "$STR_HesGoneE";
   speech[] = {"C_HesGoneE"};
  };
  class Version5
  {
   text = "$STR_WeLostHimE";
   speech[] = {"C_WeLostHimE"};
  };
  class Version6
  {
   text = "$STR_TheyGotHimE";
   speech[] = {"C_TheyGotHimE"};
  };
  class Version7
  {
   text = "$STR_NoE";
   speech[] = {"C_NoE"};
  };
  class Version8
  {
   text = "$STR_FuckE";
   speech[] = {"C_FuckE"};
  };
  class Version9
  {
   text = "$STR_ManHitE";
   speech[] = {"C_ManHitE"};
  };
 };
 class SentCombatGeneric: Report
 {
  versions[] = {"Version1",0.2,"Version2",0.15,"Version3",0.2,"Version4",0.15};
  class Version1
  {
   text = "$STR_ScanYourSector";
   speech[] = {"C_ScanYourSector"};
  };
  class Version2
  {
   text = "$STR_CarefulJustBeCareful";
   speech[] = {"C_CarefulJustBeCareful"};
  };
  class Version3
  {
   text = "$STR_CheckSectors";
   speech[] = {"C_CheckSectors"};
  };
  class Version4
  {
   text = "$STR_FocusE";
   speech[] = {"C_FocusE"};
  };
 };
 class SentCheering: Report
 {
  versions[] = {"Version1",0.25,"Version2",0.25,"Version3",0.25,"Version4",0.25,"",1};
  class Version1
  {
   text = "$STR_woohoo1";
   speech[] = {"C_woohoo1"};
  };
  class Version2
  {
   text = "$STR_woohoo2";
   speech[] = {"C_woohoo2"};
  };
  class Version3
  {
   text = "$STR_woohoo3";
   speech[] = {"C_woohoo3"};
  };
  class Version4
  {
   text = "$STR_woohoo4";
   speech[] = {"C_woohoo4"};
  };
 };
 class SentScreaming: Report
 {
  versions[] = {"Version1",0.2,"Version2",0.15,"Version3",0.2,"Version4",0.15,"",1};
  class Version1
  {
   text = "$STR_scream1";
   speech[] = {"C_scream1"};
  };
  class Version2
  {
   text = "$STR_scream2";
   speech[] = {"C_scream2"};
  };
  class Version3
  {
   text = "$STR_scream3";
   speech[] = {"C_scream3"};
  };
  class Version4
  {
   text = "$STR_scream4";
   speech[] = {"C_scream4"};
  };
 };
 class HC_Select
 {
  versions[] = {"Version1",1,"Version2",1,"Version3",1,"Version4",1};
  class Version1
  {
   text = "";
   speech[] = {"HC_ReportingIn"};
  };
  class Version2
  {
   text = "";
   speech[] = {"HC_StandingByForOrders"};
  };
  class Version3
  {
   text = "";
   speech[] = {"HC_CombatReady"};
  };
  class Version4
  {
   text = "";
   speech[] = {"HC_WaitingForOrders"};
  };
 };
 class HC_Move
 {
  versions[] = {"Version1",1,"Version2",1,"Version3",1,"Version4",1};
  class Version1
  {
   text = "";
   speech[] = {"HC_Advancing"};
  };
  class Version2
  {
   text = "";
   speech[] = {"HC_Affirmative"};
  };
  class Version3
  {
   text = "";
   speech[] = {"HC_MovingToPosition"};
  };
  class Version4
  {
   text = "";
   speech[] = {"HC_OrderReceived"};
  };
 };
 class HC_Attack
 {
  versions[] = {"Version1",1,"Version2",1,"Version3",1,"Version4",1,"Version5",1,"Version6",1};
  class Version1
  {
   text = "";
   speech[] = {"HC_Advancing"};
  };
  class Version2
  {
   text = "";
   speech[] = {"HC_Affirmative"};
  };
  class Version3
  {
   text = "";
   speech[] = {"HC_OrderReceived"};
  };
  class Version4
  {
   text = "";
   speech[] = {"HC_EngagingE"};
  };
  class Version5
  {
   text = "";
   speech[] = {"HC_AssaultingEnemyPosition"};
  };
  class Version6
  {
   text = "";
   speech[] = {"HC_AttackingE"};
  };
 };
 class Arguments: Arguments
 {
  class Direction: Direction
  {
   class Relative1
   {
    class 0
    {
     text = "$STR_relative_dir_in_front_of";
     speech[] = {"InFrontOf"};
    };
    class 90
    {
     text = "$STR_relative_dir_rightof";
     speech[] = {"RightOf"};
    };
    class 180
    {
     text = "$STR_relative_dir_behind";
     speech[] = {"Behind"};
    };
    class 270
    {
     text = "$STR_relative_dir_leftof";
     speech[] = {"LeftOf"};
    };
   };
   class Relative2
   {
    class 0
    {
     text = "$STR_relative_dir_front";
     speech[] = {"Front"};
    };
    class 90
    {
     text = "$STR_relative_dir_right";
     speech[] = {"Right"};
    };
    class 180
    {
     text = "$STR_relative_dir_rear";
     speech[] = {"Rear"};
    };
    class 270
    {
     text = "$STR_relative_dir_left";
     speech[] = {"Left"};
    };
   };
   class Relative3
   {
    class 0
    {
     text = "$STR_relative_dir_front";
     speech[] = {"Front"};
    };
    class 90
    {
     text = "$STR_relative_dir_right_flank";
     speech[] = {"RightFlank"};
    };
    class 180
    {
     text = "$STR_relative_dir_rear";
     speech[] = {"Rear"};
    };
    class 270
    {
     text = "$STR_relative_dir_left_flank";
     speech[] = {"LeftFlank"};
    };
   };
  };
  class Distance1
  {
   class Level0
   {
    text = "$STR_DISTANCE_DANGEROUSLY_CLOSE_TO";
    speech[] = {"DangerouslyCloseTo"};
   };
   class Level1
   {
    text = "$STR_DISTANCE_NOT_FAR_FROM";
    speech[] = {"NotFarFrom"};
   };
   class Level2
   {
    text = "$STR_DISTANCE_FAR_FROM";
    speech[] = {"FarFrom"};
   };
  };
  class Distance2
  {
   class Level0
   {
    text = "$STR_distance_just";
    speech[] = {"DamnClose"};
   };
   class Level1
   {
    text = "$STR_distance_way";
    speech[] = {"NotFar"};
   };
   class Level2
   {
    text = "$STR_distance_far";
    speech[] = {"Far"};
   };
  };
  class Distance3
  {
   class Level0
   {
    text = "$STR_distance_damn_close";
    speech[] = {"DangerouslyCloseTo"};
   };
   class Level1
   {
    text = "$STR_distance_close";
    speech[] = {"CloseTo"};
   };
   class Level2
   {
    text = "$STR_DISTANCE_FAR";
    speech[] = {"FarFrom"};
   };
  };
 };
	class CuratorWaypointPlaced
	{
		versions[]=
		{
			"Normal_OnTheWay",
			"(1 - Stealth) * 1",
			"Stealth_OnTheWay",
			"(Stealth) * 1",
			"Normal_Confirmation1",
			"(1 - Stealth) * 1",
			"Stealth_Confirmation1",
			"(Stealth) * 1",
			"Normal_Confirmation2",
			"(1 - Stealth) * 1",
			"Stealth_Confirmation2",
			"(Stealth) * 1"
		};
		class Normal_OnTheWay
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"OnTheWay"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_OnTheWay
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"OnTheWay"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Confirmation1
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_MovingToPosition"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Confirmation1
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_MovingToPosition"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Confirmation2
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_Affirmative"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Confirmation2
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_Affirmative"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class CuratorWaypointPlacedAttack
	{
		versions[]=
		{
			"Normal_CopyIAmOnHim",
			"(1 - Stealth) * 1",
			"Stealth_CopyIAmOnHim",
			"(Stealth) * 1",
			"Normal_LockAndLoad",
			"(1 - Stealth) * 1",
			"Stealth_LockAndLoad",
			"(Stealth) * 1",
			"Normal_TargetAcquired",
			"(1 - Stealth) * 1",
			"Stealth_TargetAcquired",
			"(Stealth) * 1",
			"Normal_TargetInSight",
			"(1 - Stealth) * 1",
			"Stealth_TargetInSight",
			"(Stealth) * 1"
		};
		class Normal_CopyIAmOnHim
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ImOnIt"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_CopyIAmOnHim
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ImOnIt"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_LockAndLoad
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_EngagingE"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_LockAndLoad
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_EngagingE"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_TargetAcquired
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetAcquired"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_TargetAcquired
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetAcquired"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_TargetInSight
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetInSight"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_TargetInSight
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetInSight"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class CuratorObjectPlaced
	{
		versions[]=
		{
			"Normal_AwaitingOrders",
			"(1 - Stealth) * 1",
			"Stealth_AwaitingOrders",
			"(Stealth) * 1",
			"Normal_IAmReady",
			"(1 - Stealth) * 1",
			"Stealth_IAmReady",
			"(Stealth) * 1",
			"Normal_ReadyForOrders",
			"(1 - Stealth) * 1",
			"Stealth_ReadyForOrders",
			"(Stealth) * 1",
			"Normal_StandingBy",
			"(1 - Stealth) * 1",
			"Stealth_StandingBy",
			"(Stealth) * 1",
			"Normal_Waiting",
			"(1 - Stealth) * 1",
			"Stealth_Waiting",
			"(Stealth) * 1"
		};
		class Normal_AwaitingOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"AwaitingOrders"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_AwaitingOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"AwaitingOrders"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_IAmReady
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ReadyForOrders"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_IAmReady
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ReadyForOrders"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_ReadyForOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Ready"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_ReadyForOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Ready"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_StandingBy
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"StandingBy"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_StandingBy
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"StandingBy"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Waiting
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Waiting"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Waiting
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Waiting"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class curatorObjectDestroyed
	{
		versions[]=
		{
			"Normal_ScreamingE",
			"(1 - Stealth) * 1",
			"Stealth_ScreamingE",
			"(Stealth) * 1"
		};
		class Normal_ScreamingE
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ScreamingE"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_ScreamingE
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ScreamingE"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class curatorModuleCAS
	{
		versions[]=
		{
			"Normal_RequestAcknowledgedSGCASBombing",
			"(1 - Stealth) * 1",
			"Stealth_RequestAcknowledgedSGCASBombing",
			"(Stealth) * 1",
			"Normal_RequestAcknowledgedSGCASHelicopter",
			"(1 - Stealth) * 1",
			"Stealth_RequestAcknowledgedSGCASHelicopter",
			"(Stealth) * 1"
		};
		class Normal_RequestAcknowledgedSGCASBombing
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASBombing"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_RequestAcknowledgedSGCASBombing
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASBombing"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_RequestAcknowledgedSGCASHelicopter
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASHelicopter"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_RequestAcknowledgedSGCASHelicopter
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASHelicopter"
			};
			text="";
			wordsClass="Stealth";
		};
	};
};
