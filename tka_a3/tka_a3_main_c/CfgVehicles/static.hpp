class RDS_ZU23_AAF;
class RDS_Igla_AA_pod_Base
class RDS_KORD_Base;
class RDS_AGS_AAF;
class RDS_Metis_Base;
class RDS_2b14_82mm_AAF;
class RDS_D30_AAF;
class TKA_A3_ZU23: RDS_ZU23_AAF
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    faction="TKA_A3";
    side=0;
    crew = "B_TKA_A3_Soldier";
	typicalCargo[]={"B_TKA_A3_Soldier"};
};

class TKA_A3_KORD: RDS_KORD_Base
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    faction="TKA_A3";
    crew = "B_TKA_A3_Soldier";
	typicalCargo[]={"B_TKA_A3_Soldier"};
    side=0;
};
class TKA_A3_KORD_high: RDS_KORD_Base
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    faction="TKA_A3";
    crew = "B_TKA_A3_Soldier";
	typicalCargo[]={"B_TKA_A3_Soldier"};
    side=0;
    displayName="$STR_DN_KORD";
    model="\RDS_StaticW\KORD\KORD_6u16sp";
    icon="RDS_StaticW\data\map_ico\icomap_kord6u16sp_CA.paa";
    picture="\RDS_StaticW\data\ico\kord6u16sp_ca.paa";
    UiPicture="\RDS_StaticW\data\ico\kord6u16sp_ca.paa";
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            minElev=-7;
            maxelev = 45;
            gunnerAction="KORD_Gunner";
            minTurn=-180;
            maxTurn=180;
            initTurn=0;
        };
    };
};

class TKA_A3_AGS:RDS_AGS_AAF
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator=2;
    faction="TKA_A3";
    side=0;
    crew = "B_TKA_A3_Soldier";
	typicalCargo[]={"B_TKA_A3_Soldier"};
};
class RDS_Metis_AAF: RDS_Metis_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator=2;
    faction="TKA_A3";
    side=0;
    crew = "B_TKA_A3_Soldier";
	typicalCargo[]={"B_TKA_A3_Soldier"};
};
class RDS_Igla_AA_pod_AAF : RDS_Igla_AA_pod_Base
{
	author = "TKA_A3";
    scope = 2;
    scopeCurator=2;
    faction="TKA_A3";
    side=0;
    crew = "B_TKA_A3_Soldier";
	typicalCargo[]={"B_TKA_A3_Soldier"};
};
class TKA_A3_2b14_82mm: RDS_2b14_82mm_AAF
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    faction="TKA_A3";
    side=0;
    crew = "B_TKA_A3_Soldier";
	typicalCargo[]={"B_TKA_A3_Soldier"};
};
class TKA_A3_D30: RDS_D30_AAF
{
	author = "TKA_A3";
    scope=2;
    scopeCurator=2;
    faction="TKA_A3";
    side=0;
    crew = "B_TKA_A3_Soldier";
	typicalCargo[]={"B_TKA_A3_Soldier"};
};