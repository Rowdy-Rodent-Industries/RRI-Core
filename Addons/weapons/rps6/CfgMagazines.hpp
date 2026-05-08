class CfgMagazines {
    class GMAG(AT_Rocket_Base);
    class GMAG(RPS6_HE): GMAG(AT_Rocket_Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] RPS-6 HE Rocket";
        displayNameShort = "HE";
        descriptionShort = "High Explosive rocket used by the RPS-6 launcher platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","JumpTrooper","ARC"};
        ammo = "R_TBG32V_F";
        count = 1;
        picture = QPATHTOEF(weapons,core\data\icons\misc\Rocket_AT_ca.paa);
        modelSpecial = "";
        model = QPATHTOEF(props,munitions\mti_heat_missile.p3d);
        initSpeed=140;
        mass = 60;
    };

    class GMAG(RPS6_AT): GMAG(AT_Rocket_Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] RPS-6 AT Rocket";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank rocket used by the disposable RPS-6 launcher platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","JumpTrooper","ARC"};
        ammo = QGAMMO(RPS6_Rocket);
        modelSpecial = "";
        model = QPATHTOEF(props,munitions\mti_heat_missile.p3d);
        initSpeed=140;
        count = 1;
        mass = 60;
    };

    class GMAG(RPS6_D): GMAG(RPS6_AT) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Disposable RPS-6 AT Rocket";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank rocket used by the disposable RPS-6 launcher platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","JumpTrooper","ARC"};
        ammo = QGAMMO(RPS6_Rocket);
        modelSpecial = "";
        model = QPATHTOEF(props,munitions\mti_heat_missile.p3d);
        initSpeed=140;
        mass = 60;
    };
};
