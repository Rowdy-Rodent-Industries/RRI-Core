class CfgMagazines {
    class GMAG(Base);
    class GMAG(arkanian): GMAG(Base) {
        scope = 2;
        displayName = "[SOB] Arkanian High Power 40rnd Magazines";
        displayNameShort = "High Power";
        GVAR_CORE(arsenal,whitelists)[] = {"FieldSupport"};
        count = 40;
        ammo = QGAMMO(arkanian);
        mass = 5;
    };

};
