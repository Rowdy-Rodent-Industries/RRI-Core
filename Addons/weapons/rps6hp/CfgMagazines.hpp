class CfgMagazines {
    class GMAG(AT_Rocket_Base);
    class GMAG(RPS6_HP): GMAG(AT_Rocket_Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] RPS-6 HP AT Missile";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank missile used by the Heavy-Purpose configuration of the RPS-6 launcher platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

        modelSpecial = "";
        model = QPATHTOEF(props,munitions\mti_heat_missile.p3d);
        picture = QPATHTOEF(weapons,core\data\icons\misc\Rocket_AT_ca.paa);
        initSpeed = 200;
        maxLeadSpeed = 27.7778;
        mass = 80;
        count = 1;

        type = 256;
        //ace_arsenal_hide = -1;

        ammo = QGAMMO(RPSHP_AT);
    };


    class GMAG(RPS6_HP_AA): GMAG(RPS6_HP) {
        scope = 2;
        displayName = "[SOB] RPS-6 HP AA Missile";
        displayNameShort = "AA";
        descriptionShort = "Anti-Air missile used by the Heavy-Purpose configuration of the RPS-6 launcher platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

        initspeed = 120;
        maxLeadSpeed = 277.778;
        mass = 60;
        count = 1;

        ammo = QGAMMO(RPSHP_AA);
    };
};
