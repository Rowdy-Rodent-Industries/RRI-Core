class GFACEWEAR(arc_bracer): None {
    scope = 2;
    displayname = "[SOB] ARC Trooper Bracer";
    model = QPATHTOF(data\facewear\arc_bracer.p3d);
    picture = "-"; // todo: picture
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\facewear\bracer\camo_co.paa)};
    identityTypes[] = {"NoGlasses", 1000};

	GVAR_CORE(katarnOS,hasTaser) = 1;
	GVAR_CORE(mm9,hasMM9) = 1;
	GVAR_CORE(arsenal,whitelists)[] = {"arc"};

    class ItemInfo {
        type = 616;
        uniformModel = QPATHTOF(data\facewear\arc_bracer.p3d);
        modelOff = QPATHTOF(data\facewear\arc_bracer.p3d);
        mass = 20;
        hiddenSelections[] = {"camo1"};
    };
};

class GFACEWEAR(screen_bracer): None {
    scope = 2;
    displayname = "[SOB] Screen Bracer";
    model = QPATHTOF(data\facewear\rri_bracer_screen.p3d);
    picture = "-"; // todo: picture
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\facewear\screen\camo1_co.paa)};
    identityTypes[] = {"NoGlasses", 1000};
    GVAR_CORE(arsenal,whitelists)[] = {"ARC","Trooper","Commando","Jumptrooper","Fieldsupport","Command"};

    class ItemInfo {
        type = 616;
        uniformModel = QPATHTOF(data\facewear\rri_bracer_screen.p3d);
        modelOff = QPATHTOF(data\facewear\rri_bracer_screen.p3d);
        mass = 20;
        hiddenSelections[] = {"camo1"};
    };
};

class GFACEWEAR(Crown): None {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] Crown";
    ACE_Resistance = 2;
    identityTypes[] = {};
    mass = 4;

    model = QPATHTOF(data\facewear\rri_crown.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { QPATHTOF(data\facewear\crown\camo1_co.paa)};

    GVAR_CORE(equipment,hideFacewear) = 1;
};
