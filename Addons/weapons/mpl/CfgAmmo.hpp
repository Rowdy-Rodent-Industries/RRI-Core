class CfgAmmo
{
    class 3AS_MPL_25mm_HEAT;
    class GAMMO(40mm_AP): 3AS_MPL_25mm_HEAT {
        hit = 900;
        indirectHit = 25;
        indirectHitRange = 2;
        warheadName = "AP";
        timetolive = 2;
        airfriction = 0;
        coefgravity = 0;
        deflecting = 0;
        model = QPATHTOEF(weapons,core\data\effects\laser\yellow\rri_laser_yellow.p3d);
        effectfly = QGVAR(Rifle_Yellow_Tracer);
        triggerOnImpact = 1;
    };
};
