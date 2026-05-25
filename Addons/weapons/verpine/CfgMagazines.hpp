class CfgMagazines
{
    class CA_Magazine;
    class GMAG(Verpine_Base): CA_Magazine {
        scope = 1;
        author = AUTHOR;
        deleteIfEmpty = 0;
        displayname = "[SOB] Verpine 0rnd Base Magazine";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        initspeed = 950;
        nameSound = "magazine";
        maxLeadSpeed = 25;
        mass = 8;
        reloadaction = "";
        useactiontitle = "";
        modelspecial = "";
        //tracersevery = 1;
        type = 256;
    };

    class GMAG(Verpine_Improv): GMAG(Verpine_Base) {
        scope = 1;
        scopeArsenal = 0;
        displayName = "[SOB] Verpine Improvised Ammo";
        displayNameShort = "Improvised";
        ammo = QGAMMO(Verpine_Improv);
        count = 20;
        picture = QPATHTOF(data\ui\verpine_mag_ui_ca.paa);
        GVAR_CORE(weapons_core,isImprovMag) = 1;
    };

    class GMAG(Verpine): GMAG(Verpine_Base) {
        scope = 2;
        displayName = "[SOB] Verpine 20rnd Standard Flechette";
        displayNameShort = "Normal";
        ammo = QGAMMO(Verpine);
        count = 20;
        picture = QPATHTOF(data\ui\verpine_mag_ui_ca.paa);
    };

    class GMAG(Verpine_APDS_1rnd): GMAG(Verpine_Base) {
        scope = 2;
        displayName = "[SOB] Verpine 1rnd APDS";
        displayNameShort = "APDS";
        ammo = QGAMMO(Verpine_APDS);
        count = 1;
        picture = QPATHTOF(data\ui\verpine_mag_apds_ui_ca.paa);
    };

    class GMAG(Verpine_APDS): GMAG(Verpine_Base) {
        scope = 2;
        displayName = "[SOB] Verpine 5rnd APDS";
        displayNameShort = "APDS";
        ammo = QGAMMO(Verpine_APDS);
        count = 5;
        picture = QPATHTOF(data\ui\verpine_mag_apds_ui_ca.paa);
        GVAR_CORE(arsenal,whitelists)[] = {""};
    };

    class GMAG(Verpine_Deraformine): GMAG(Verpine_Base) {
        scope = 2;
        displayName = "[SOB] Verpine 1rnd Deraformine A-I";
        displayNameShort = "A-I (Deraformine)";
        ammo = QGAMMO(Verpine_Deraformine);
        count = 1;
        picture = QPATHTOF(data\ui\verpine_mag_ai_deraformine_ui_ca.paa);
    };

    class GMAG(Verpine_Latheniol): GMAG(Verpine_Base) {
        scope = 2;
        displayName = "[SOB] Verpine 1rnd Latheniol A-I";
        displayNameShort = "A-I (Latheniol)";
        ammo = QGAMMO(Verpine_Latheniol);
        count = 1;
        picture = QPATHTOF(data\ui\verpine_mag_ai_latheniol_ui_ca.paa);
    };

    class GMAG(Verpine_Tracking): GMAG(Verpine_Base) {
        scope = 2;
        displayName = "[SOB] Verpine 1rnd Tracking FOB";
        displayNameShort = "Tracking";
        ammo = QGAMMO(Verpine_Tracking);
        count = 1;
        picture = QPATHTOF(data\ui\verpine_mag_tracking_ui_ca.paa);
    };

    class GMAG(Verpine_Ion): GMAG(Verpine_Base) {
        scope = 2;
        displayName = "[SOB] Verpine 20rnd Ion Flechette";
        displayNameShort = "Ion";
        ammo = QGAMMO(Verpine_Ion);
        count = 20;
        picture = QPATHTOF(data\ui\verpine_mag_ion_ui_ca.paa);
    };

    class GMAG(Verpine_Acid): GMAG(Verpine_Base) {
        scope = 2;
        displayName = "[SOB] Verpine 1rnd Acid Flechette";
        displayNameShort = "Acid";
        ammo = QGAMMO(Verpine_Acid);
        count = 1;
        picture = QPATHTOF(data\ui\verpine_mag_acid_ui_ca.paa);
    };
};
