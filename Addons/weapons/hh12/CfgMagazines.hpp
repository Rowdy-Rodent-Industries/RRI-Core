class CfgMagazines {
    class GMAG(AT_Rocket_Base);
class GMAG(HH12_Cluster): GMAG(AT_Rocket_Base) {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] HH-12 Cluster Rocket";
    displayNameShort = "Cluster";
    descriptionShort = "Cluster Rocket used by the HH-12 launcher platform";

    GVAR_CORE(arsenal,whitelists)[] = {"Fieldsupport"};

    modelSpecial = "";
    model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
    initSpeed = 200;
    maxLeadSpeed = 27.7778;
    count = 1;

    ammo = QGAMMO(HH12_Cluster_Rocket);

    type = 256;
    //ace_arsenal_hide = -1;
    mass = 100;
};

    class GMAG(HH12_Rocket): GMAG(HH12_Cluster) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] HH-12 Rocket";
        displayNameShort = "AT";
        descriptionShort = "Rocket used by the HH-12 launcher platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Fieldsupport"};
        ammo = QGAMMO(HH12_Rocket);
        mass = 60;
    };
};
