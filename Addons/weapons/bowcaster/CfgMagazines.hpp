class CfgMagazines
{
    class GMAG(Marksmen);
    class GMAG(Marksmen_HP);
    class GMAG(Bowcaster_base): GMAG(Marksmen) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Bowcaster 20rnd Ammo Clip";
        displayNameShort = "Normal Shot";
        descriptionShort = "Ammo clip used by the Bowcaster. Configuration: Normal";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando","Jumptrooper"};
        count = 20;
        initSpeed = 900;
        ammo = QGAMMO(Bowcaster_Base);
        mass = 15;
        tracersEvery = 1;
    };

    class GMAG(Bowcaster_Heavy): GMAG(Marksmen_HP) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Bowcaster 5rnd Heavy Clip";
        displayNameShort = "Heavy Shot";
        descriptionShort = "Ammo clip used by the Bowcaster. Configuration: Heavy";
        count = 5;
        initSpeed = 800;
        ammo = QGAMMO(Bowcaster_Heavy);
        mass = 15;
        tracersEvery = 1;
    };

    class GMAG(Bowcaster_Heavy_2): GMAG(Bowcaster_Heavy) {
        scope = 2;
        displayName = "[SOB] Bowcaster 2rnd Heavy Clip";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando","Jumptrooper"};
        count = 2;
    };
};
