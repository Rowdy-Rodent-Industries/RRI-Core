class CfgMagazines {
    class GMAG(Base);
    class GMAG(HP);
    class GMAG(pcb):GMAG(Base){
        scope = 2;
        
        author = AUTHOR;
        displayName = "[SOB] 1rnd Anti-Material energy Cell";
        displayNameShort = "Anti-Material";
        descriptionShort = "Anti-Material Round capable of dealing large amounts of damage to vehicles";

        GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

        ammo = QGAMMO(pcb);
        count = 1;
        mass = 30;
        initSpeed = 1500; 
    };
};
