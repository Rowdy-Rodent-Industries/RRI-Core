class CfgMagazines
{
    class GMAG(Base);
    class GMAG(Cyclone_Base): GMAG(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Base Cyclone Magazine";
        displayNameShort = "Base Cyclone";
        descriptionShort = "Base Cyclone magazine for MTI weapons";
        GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
        ammo = QGAMMO(Cyclone_Base);
        count = 500;
        initSpeed = 1000;
        mass = 17;
        // picture = QPATHTOF(data\Icons\NT_Base_ca.paa);
        modelSpecial = QPATHTOF(mti_cyclone_magazine1.p3d);
        modelSpecialIsProxy = 1;
    };

    class GMAG(cyclone_mag): GMAG(Cyclone_Base) {
        displayName = "[SOB] Cyclone 500rnd Magazine";
        displayNameShort= "Low Power";
        descriptionShort = "Base Cyclone Magazine";
        scope = 2;
    };
    class GMAG(cyclone_heavy): GMAG(Cyclone_Base) {
        displayName = "[SOB] Cyclone 250rnd Heavy Magazine";
        displayNameShort = "High Power";
        descriptionShort = "Heavy Cyclone magazine with a heavier punch than most ammo";
        scope = 2;
        ammo = QGAMMO(cyclone_heavy);
        count = 250;
    };
    class GMAG(cyclone_antimat): GMAG(Cyclone_Base) {
        displayName = "[SOB] Cyclone 1rnd Anti-Mat Magazine";
        displayNameShort = "Anti-Mat";
        descriptionShort = "Anti-Mat Cyclone magazine capable of destroying light vehicles";
        scope = 2;
        ammo = QGAMMO(cyclone_antimat);
        count = 1;
        model = QPATHTOF(mti_cyclone_microrocket.p3d);
        modelSpecial = QPATHTOF(mti_cyclone_microrocket.p3d);
    };
    class GMAG(cyclone_thermal): GMAG(Cyclone_Base) {
        displayName = "[SOB] Cyclone 250rnd Thermal Magazine";
        displayNameShort = "Thermal";
        descriptionShort = "Thermal Cyclone magazine capable of setting targets on fire";
        scope = 2;
        ammo = QGAMMO(cyclone_thermal);
        modelSpecial = QPATHTOF(mti_cyclone_magazine2.p3d);
        count = 250;
    };
};
