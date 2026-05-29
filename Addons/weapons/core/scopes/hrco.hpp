class GVAR(HRCO_Blue) : optic_Hamr {
    author=AUTHOR;
    scope=2;
    displayName="[SOB] MokTech Holo-RCO (Blue)";
    picture=QPATHTOF(data\acc\sights\ui\H-RCO\rri_icon_rco_blu_ca.paa);
    model=QPATHTOF(data\acc\sights\H-RCO\rri_sight_rco_blu.p3d);
    descriptionShort="MokTech Industries SR 2-4x RCO Scope";
    weaponInfoType="RscOptics_sos";

    class ItemInfo : ItemInfo {
        mass=SCOPE_MASS;
        opticType=1;
        optics=1;
        modelOptics=QPATHTOF(data\acc\sights\H-RCO\rri_reticle_rco_blu.p3d);

        class OpticsModes {
            class Hamr2Collimator {
                opticsID=1;
                useModelOptics=0;
                opticsPPEffects[]= {
                    "Default"
                };
                opticsFlare=0;
                opticsDisablePeripherialVision=0;
                opticsZoomMin=0.25;
                opticsZoomMax=1.25;
                opticsZoomInit=0.75;
                memoryPointCamera="eye";
                visionMode[]={};
                distanceZoomMin=200;
                distanceZoomMax=200;
            };

            class Hamr2Scope {
                opticsID=2;
                useModelOptics=1;//0
                opticsPPEffects[]= {
                    "OpticsCHAbera5",
                    "OpticsBlur5"
                };
                opticsFlare=1;
                opticsDisablePeripherialVision=1;//1
                opticsZoomMin=ZOOM_FACTOR(2);
                opticsZoomMax=ZOOM_FACTOR(4);
                opticsZoomInit=ZOOM_FACTOR(2);
                discreteinitIndex = 0;
                discretefov[] = {ZOOM_FACTOR(2),ZOOM_FACTOR(4)};
                discreteDistanceInitIndex = 1;
                memoryPointCamera="opticView";
                visionMode[]={};
                distanceZoomMin=300;
                distanceZoomMax=300;
            };
        };
    };

    inertia=0.1;
};

class GVAR(HRCO_Green) : GVAR(HRCO_Blue) {
    displayName="[SOB] MokTech Holo-RCO (Green)";
    picture=QPATHTOF(data\acc\sights\ui\H-RCO\rri_icon_rco_grn_ca.paa);
    model=QPATHTOF(data\acc\sights\H-RCO\rri_sight_rco_grn.p3d);

    class ItemInfo: ItemInfo {
        modelOptics=QPATHTOF(data\acc\sights\H-RCO\rri_reticle_rco_grn.p3d);
    };
};

class GVAR(HRCO_Red) : GVAR(HRCO_Blue) {
    displayName="[SOB] MokTech Holo-RCO (Red)";
    picture=QPATHTOF(data\acc\sights\ui\H-RCO\rri_icon_rco_red_ca.paa);
    model=QPATHTOF(data\acc\sights\H-RCO\rri_sight_rco_red.p3d);

    class ItemInfo: ItemInfo {
        modelOptics=QPATHTOF(data\acc\sights\H-RCO\rri_reticle_rco_red.p3d);
    };
};
