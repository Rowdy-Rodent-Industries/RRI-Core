class CfgAmmo
{
    class GAMMO(Base);
    class GAMMO(HP_Base);
    class GAMMO(DC15X): GAMMO(Base)
    {
        hit = 28;
        caliber = 2.8;
    };
	class GAMMO(DC15X_Deraformine): GAMMO(DC15X) {
        hit = 1;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_MEDICAL;
        GVAR_CORE(medical,projectileMeds)[] = {"Deraformine",1};
    };
	class GAMMO(DC15X_Latheniol): GAMMO(DC15X) {
        hit = 1;
        GVAR_CORE(weapons_core,ammoType) = AMMOTYPE_MEDICAL;
        GVAR_CORE(medical,projectileMeds)[] = {"Latheniol",1};
    };
};
