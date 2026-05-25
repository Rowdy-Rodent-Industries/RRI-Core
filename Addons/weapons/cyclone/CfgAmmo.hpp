class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(Orange);

    class GAMMO(Cyclone_Base): GAMMO(Base) {
        hit = 14;
        caliber = 3;
    };

    class GAMMO(cyclone_heavy): GAMMO(HP_Base) {
        hit = 75;
        caliber = 10;
    };

    class GAMMO(cyclone_antimat): GAMMO(Base) {
        hit = 650;
        indirectHit = 20;
        model = QPATHTOF(rri_cyclone_microrocket.p3d);
    };

    class GAMMO(cyclone_Thermal): GAMMO(Orange) {
        hit = 5;
        indirectHit = 2;
        indirectHitRange = 0;
        caliber = 4;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_FIRE;
        explosionEffects  = QEGVAR(weapons_core,Thermal_Impact);
        craterEffects = QEGVAR(weapons_core,Thermal_Impact);
        class HitEffects
        {
            default_mat = QEGVAR(weapons_core,Thermal_Impact);
            Hit_Foliage_Banana = QEGVAR(weapons_core,Thermal_Impact);
            Hit_Foliage_Dead = QEGVAR(weapons_core,Thermal_Impact);
            Hit_Foliage_green = QEGVAR(weapons_core,Thermal_Impact);
            Hit_Foliage_Green_big = QEGVAR(weapons_core,Thermal_Impact);
            Hit_Foliage_Palm = QEGVAR(weapons_core,Thermal_Impact);
            Hit_Foliage_Pine = QEGVAR(weapons_core,Thermal_Impact);
            hitBuilding = QEGVAR(weapons_core,Thermal_Impact);
            hitConcrete = QEGVAR(weapons_core,Thermal_Impact);
            hitFoliage = QEGVAR(weapons_core,Thermal_Impact);
            hitGlass = QEGVAR(weapons_core,Thermal_Impact);
            hitGlassArmored = QEGVAR(weapons_core,Thermal_Impact);
            hitGroundHard = QEGVAR(weapons_core,Thermal_Impact);
            hitGroundRed = QEGVAR(weapons_core,Thermal_Impact);
            hitGroundSoft = QEGVAR(weapons_core,Thermal_Impact);
            hitHay = QEGVAR(weapons_core,Thermal_Impact);
            hitMan = QEGVAR(weapons_core,Thermal_Impact);
            hitMetal = QEGVAR(weapons_core,Thermal_Impact);
            hitMetalPlate = QEGVAR(weapons_core,Thermal_Impact);
            hitPlastic = QEGVAR(weapons_core,Thermal_Impact);
            hitRubber = QEGVAR(weapons_core,Thermal_Impact);
            hitTyre = QEGVAR(weapons_core,Thermal_Impact);
            hitVirtual = QEGVAR(weapons_core,Thermal_Impact);
            hitWater = QEGVAR(weapons_core,Thermal_Impact);
            hitWood = QEGVAR(weapons_core,Thermal_Impact);
        };
    };
};
