class CfgMagazines {
    class GMAG(Base_Pistol);
    class GMAG(dc15sa): GMAG(Base_Pistol) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-15s TB7 Power Cell";
        displayNameShort = "Tibanna";
        descriptionShort = "Charge cell used by the DC-15s side-arm platform; recharges over time";

        GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

        count = 7;
        mass = 2;
        initSpeed = 528;
        ammo = QGAMMO(dc15sa);

        GVAR_CORE(weapons_core,is15sRecharge) = 1;
    };

    class GMAG(dc19sa): GMAG(dc15sa) {
        scope = 2;
        displayName = "[SOB] DC-19s TB99 Stealth Cell";
        displayNameShort = "Stealth";
        descriptionShort = "Charge cell used by the DC-19s covert ops side-arm; recharges over time";

        ammo = QGAMMO(Stealth);
    };
};

