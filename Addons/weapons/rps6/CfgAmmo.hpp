class CfgAmmo
{
    class GAMMO(Rocket_Base);
    class GAMMO(RPS6_Rocket): GAMMO(Rocket_Base) {
        hit = 900;
        indirectHit = 20;
        indirectHitRange = 3;
        caliber = 50;
        warheadName = "TandemHEAT";
        effectsMissile = QEGVAR(weapons_core,Missile_Trail_Blue_nolight);
    };
};
