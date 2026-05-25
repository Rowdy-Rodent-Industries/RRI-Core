class CfgMagazines {
    class CA_Magazine;
    class GMAG(defib): CA_Magazine {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] FDU 5rnd Charge Cell";
        displayNameShort = "Charge Cell";
        descriptionShort = "Charge Cell for the Republic Field Defibrillation Unit";
        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper","Commando","Fieldsupport","ARC"};

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = QPATHTOF(data\ui\charge_cell_icon_ca.paa);

        ammo = QGAMMO(defib);
        count = 5;

        tracersEvery = 1;
        initSpeed = 50;
        mass = 20;
    };
};
