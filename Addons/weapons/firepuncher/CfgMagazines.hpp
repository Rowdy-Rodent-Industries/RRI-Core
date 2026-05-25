class CfgMagazines {
    class GMAG(Marksmen);
    class GMAG(Firepuncher): GMAG(Marksmen) {
        displayName = "[SOB] 773-Firepuncher 20rnd Energy Cell";
        scope = 2;
        author = AUTHOR;
        count = 20;
        ammo = QGAMMO(Firepuncher);
        initSpeed = 1100;
        descriptionShort = "Standard-issue energy cell used by the 773-Firepuncher weapon platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
        mass = 15;
    };

    class GMAG(Firepuncher_tracking): GMAG(Firepuncher) {
        displayName = "[SOB] 773-Firepuncher 1rnd Tracking Dart";
        count = 1;
        ammo = QGAMMO(Firepuncher_Tracking);
        descriptionShort = "Tracking FOB that can be shot out of the Firepuncher to track targets across large distances";
        mass = 5;
    };

    class GMAG(Firepuncher_ion): GMAG(Firepuncher) {
        displayName = "[SOB] 773-Firepuncher 1rnd Ion Dart";
        count = 1;
        ammo = QGAMMO(Firepuncher_Ion);
        descriptionShort = "Ion dart to stun droids from long distances";
        mass = 5;
    };
};
