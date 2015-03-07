class CfgWeapons
{
    class rhs_weap_ak74m_Base_F;
    class rhs_weap_ak74m : rhs_weap_ak74m_Base_F
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
    };
    class rhs_weap_svd : rhs_weap_ak74m
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_SVD";
    };
    class rhs_pkp_base;
    class rhs_weap_pkp: rhs_pkp_base
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_PK";
    };
    class Launcher_Base_F;
    class rhs_weap_rpg26: Launcher_Base_F
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_RPG";
    };
    class rhs_weap_rpg7 : Launcher_Base_F
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_RPG";
    };
    class rhs_weap_strela;
    class rhs_weap_igla: rhs_weap_strela
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_Launcher";
    };

    class rhs_weap_XM2010_Base_F;
    class rhs_weap_XM2010: rhs_weap_XM2010_Base_F
    {
        dfyre_soundeffect = "DFyre_A_Core_Effects_DF_WR_SNIPER";
    };
    class rhs_weap_m4_Base;
    class rhs_weap_m4 : rhs_weap_m4_Base
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
    };
    class rhs_weap_m16a4 : rhs_weap_m4_Base
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
    };
    class rhs_M249_base;
    class rhs_weap_m249_pip: rhs_M249_base
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_M249";
    };
    class weap_m240_base;
    class rhs_weap_m240B: weap_m240_base
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_M240";
    };
    class rhs_weap_M136: Launcher_Base_F
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_Launcher";
    };
    class launch_O_Titan_F;
    class rhs_weap_fgm148: launch_O_Titan_F
    {
        jsrs_soundeffect = "JSRS2_Distance_Effects_Javelin";
    };
};