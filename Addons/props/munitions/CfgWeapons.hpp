class CfgWeapons
{
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class GWEAPON(mm9_HE): ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] MM9 HE Rocket";
        descriptionShort = "Merr-Sonn HE-AP guided missile.";
        GVAR_CORE(mm9,isReloadItem) = 1;
        GVAR_CORE(mm9,ammo) = QGAMMO(mm9_AT);

        model = QPATHTOF(rri_mm9_missile.p3d);
		picture = QPATHTOF(data\ui\MM9.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
        };
    };

    class GWEAPON(mm9_stun): GWEAPON(mm9_HE) {
        displayName = "[SOB] MM9 Stun Rocket";
        descriptionShort = "Modified Merr-Sonn warhead which releases highly concentrated neurotoxin, temporarily incapacitating humanoids in the vicinity.";

        GVAR_CORE(mm9,isReloadItem) = 1;
        GVAR_CORE(mm9,ammo) = QGAMMO(mm9_stun);
    };

    class GWEAPON(mm9_ion): GWEAPON(mm9_HE) {
        displayName = "[SOB] MM9 Ion Rocket";
        descriptionShort = "Modified Merr-Sonn warhead which releases an electric charge, disabling targeted droid.";

        GVAR_CORE(mm9,isReloadItem) = 1;
        GVAR_CORE(mm9,ammo) = QGAMMO(mm9_ion);
    };

    class GWEAPON(mm9_smoke): GWEAPON(mm9_HE) {
        displayName = "[SOB] MM9 Smoke Rocket";
        descriptionShort = "Modified Merr-Sonn warhead which releases a smoke screen, obscuring vision within the area.";

        GVAR_CORE(mm9,isReloadItem) = 1;
        GVAR_CORE(mm9,ammo) = QGAMMO(mm9_smoke);
    };

    class GWEAPON(mm9_dumb): GWEAPON(mm9_HE) {
        displayName = "[SOB] MM9 Training Rocket";
        descriptionShort = "Modified Merr-Sonn warhead which will explode with minimal damage, used for training purposes.";

        GVAR_CORE(mm9,isReloadItem) = 1;
        GVAR_CORE(mm9,ammo) = QGAMMO(mm9_dumb);
    };
};
