class GVAR(EE2_Scope): optic_KHS_old {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] EE-2 Rifle Scope";
    weaponInfoType = "RscWeaponZeroing";

    class ItemInfo: ItemInfo {
        mass = 14;
        opticType = 2;
        weaponInfoType = "RscWeaponRangeZeroingFOV";
        optics = 1;
        modelOptics=QPATHTOF(data\acc\sights\EE-2_Scope\mti_reticle_ee2_z.p3d);

        class OpticsModes {
            class KHS {
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur2"};
                discreteDistance[] = {100};
                distanceZoomMin = 300;
                distanceZoomMax = 2000;
                discretefov[] = {0.06, 0.026};
                discreteInitIndex = 0;
                memoryPointCamera = "opticView";
                modelOptics[] = {QPATHTOF(data\acc\sights\EE-2_Scope\mti_reticle_ee2_z.p3d),QPATHTOF(data\acc\sights\EE-2_Scope\mti_reticle_ee2_z.p3d)};
                visionMode[] = {"Normal"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
                opticsZoomMin = 0.026;
                opticsZoomMax = 0.06;
                opticsZoomInit = 0.06;
                discreteDistanceInitIndex = 0;
            };
        };
    };
};
