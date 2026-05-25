class CfgMagazines
{
    class GMAG(Base_Pistol);
    class GMAG(RSKF44): GMAG(Base_Pistol) {
        scope = 2;
        displayName = "[SOB] RSKF-44 8rnd Power Cell";
        displayNameShort = "High Power";
        GVAR_CORE(arsenal,whitelists)[] = {"ARC","Trooper","Commando","JumpTrooper","Fieldsupport"};


        count = 8;
        initSpeed = 800;
        mass = 5;
        ammo = QGAMMO(RSFK);
    };
};
