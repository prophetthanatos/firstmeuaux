class CfgWeapons
{

    class Rifle_Base_F;
    
    class OPTRE_M45: Rifle_Base_F
    {
        magazines[] =
        {
            "OPTRE_12Rnd_8Gauge_Beanbags",
            "OPTRE_6Rnd_8Gauge_Beanbags",
             "OPTRE_12Rnd_8Gauge_Pellets",
             "OPTRE_6Rnd_8Gauge_Pellets",
             "OPTRE_12Rnd_8Gauge_Slugs",
             "OPTRE_6Rnd_8Gauge_Slugs"
            
        };
    };
    
    class OPTRE_M45E: OPTRE_M45
    {
        magazines[] =
        {
            "OPTRE_12Rnd_8Gauge_Beanbags",
            "OPTRE_6Rnd_8Gauge_Beanbags",
            "OPTRE_12Rnd_8Gauge_Pellets" ,
            "OPTRE_6Rnd_8Gauge_Pellets" ,
            "OPTRE_12Rnd_8Gauge_Slugs" ,
            "OPTRE_6Rnd_8Gauge_Slugs"
            
        };
    };

    class OPTRE_M45X: OPTRE_M45E 
    {
        magazines[] =
        {
            "OPTRE_12Rnd_8Gauge_Beanbags",
            "OPTRE_6Rnd_8Gauge_Beanbags",
            "OPTRE_12Rnd_8Gauge_Pellets" ,
            "OPTRE_6Rnd_8Gauge_Pellets" ,
            "OPTRE_12Rnd_8Gauge_Slugs" ,
            "OPTRE_6Rnd_8Gauge_Slugs"
            
        };
    };
};