class CfgMagazines
{
    class GMAG(Base_Pistol);
    class GMAG(DC17S_GF): GMAG(Base_Pistol) {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] DC-17s/gf 32rnd Power Cell";
        displayNameShort = "High Power";
        descriptionShort = "High-power energy cell used by the DC-17s/gf side-arm platform";
        GVAR_CORE(arsenal,whitelists)[] = {"Trooper","Fieldsupport"};
        ammo = QGAMMO(DC17SGF);
        count = 32;
    };
};
