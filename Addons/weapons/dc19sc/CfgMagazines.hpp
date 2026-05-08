class Cfgmagazines
{
    class GMAG(Base);
    class GMAG(DC19SC): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-19SC 40rnd Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Standard-issue energy cell used by the DC-19SC weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        ammo = QGAMMO(DC19);
        mass = 12;
    };
    class GMAG(DC19SC_Hack): GMAG(Base) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-19SC 1rnd Remote Injection";
        displayNameShort = "Remote Injection";
        descriptionShort = "Remote Control Injection round used by the DC-19SC weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
        ammo = QGAMMO(Hackshot);
        count = 1;
        mass = 4;
    };
};
