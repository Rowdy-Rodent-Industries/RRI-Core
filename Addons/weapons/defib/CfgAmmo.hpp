class CfgAmmo {
    class GAMMO(Base);
    class GAMMO(Orange): GAMMO(Base) {
        class HitEffects;
    };

    class GAMMO(defib): GAMMO(Orange) {
        hit = 0.001;
        caliber = 0.1;
        effectfly = QEGVAR(weapons_core,defib_effectFly);
        timeToLive = 0.1;

        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_DEFIB;
        GVAR_CORE(pangolin,bypassShield) = 1;

        class HitEffects: HitEffects {};

        ACE_damageType = "burn";
    };
};
