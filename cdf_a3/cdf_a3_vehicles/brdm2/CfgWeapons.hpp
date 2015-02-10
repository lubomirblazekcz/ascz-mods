class CfgAmmo
{
	class MissileBase;
    class M_Titan_AT: MissileBase {};
    class CDF_A3_M_AT5_AT: M_Titan_AT //AT-5 Spandrel /Konkurs 9M113
	{
		hit=520;indirectHit=12;indirectHitRange=1.2; // 600mm vs RHA
		irLock=true;

		manualControl=true;
		maxControlRange=4000;
		trackOversteer = 0.95;
		trackLead = 0.9;
		maneuvrability = 8;
		explosive=1;

		timeToLive = 25;
		simulationStep = 0.005000;
		sideAirFriction = 0.050000;
		maxSpeed = 200;
		initTime = 0.25;
		thrustTime = 1.500000;
		thrust = 210;
		deflecting = 0;
		fuseDistance = 5;
		whistleDist = 2;
	};
};
class CfgMagazines
{
    class VehicleMagazine;
	class CDF_A3_5Rnd_AT5: VehicleMagazine
	{
		scope = 2;
		displayName = "9M113";
		displayNameShort = "9M113";
		ammo=CDF_A3_M_AT5_AT;
		initSpeed = 55.1688;
		count=5;
		maxLeadSpeed=10;
		nameSound="missiles";
	};
};
class CfgWeapons
{
	class missiles_titan;
	class CDF_A3_AT5_Launcher: missiles_titan
	{
        autoReload = 0;
        scope=1;
        canLock=1;
        cursor="rocket";
		minRange=75;minRangeProbab=0.6;
		midRange=1400;midRangeProbab=0.7;
		maxRange=4000;maxRangeProbab=0.001;
        sounds[] = {StandardSound};
        class StandardSound
        {
            weaponSoundEffect = "DefaultRifle";
            begin1[] ={"\acr_a3\acr_a3_vehicles\bmp2\Javelin1",1.6228,1,1000};
            soundBegin[] = {"begin1",1};
        };
        reloadTime=1;
        magazineReloadTime=30;
        aiRateOfFire=5;
        aiRateOfFireDistance=1400;
		displayName="Konkurs 9M113";
		magazines[]=
		{
			"CDF_A3_5Rnd_AT5"
		};

	};
};