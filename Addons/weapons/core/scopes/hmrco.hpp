class GVAR(HMRCO_Blue) : optic_MRCO {
    author=AUTHOR;
    scope=2;
    displayName="[SOB] MokTech Holo-MRCO (Blue)";
    picture=QPATHTOF(data\acc\sights\ui\H-MRCO\rri_icon_mrco_blu_ca.paa);
    model=QPATHTOF(data\acc\sights\H-MRCO\rri_sight_mrco_blu.p3d);
    descriptionShort="MokTech Industries MR 2-6x RCO Scope";
    weaponInfoType="RscOptics_sos";

    class ItemInfo : ItemInfo {
        mass=SCOPE_MASS;
        opticType=1;
        optics=1;
        modelOptics=QPATHTOF(data\acc\sights\H-MRCO\rri_reticle_mrco_blu.p3d);

        class OpticsModes {
            class MRCOcq {
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
                distanceZoomMin=300;
                distanceZoomMax=300;
            };

            class MRCOscope {
                opticsID=2;
                useModelOptics=1;
                opticsPPEffects[]= {
                    "OpticsCHAbera5",
                    "OpticsBlur5"
                };
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
                opticsZoomMin = ZOOM_FACTOR(6);
                opticsZoomMax = ZOOM_FACTOR(2);
                opticsZoomInit = ZOOM_FACTOR(2);
                discreteinitIndex = 0;
                discretefov[] = {ZOOM_FACTOR(2),ZOOM_FACTOR(6)};
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

class GVAR(HMRCO_Green) : GVAR(HMRCO_Blue) {
    displayName="[SOB] MokTech Holo-MRCO (Green)";
    picture=QPATHTOF(data\acc\sights\ui\H-MRCO\rri_icon_mrco_grn_ca.paa);
    model=QPATHTOF(data\acc\sights\H-MRCO\rri_sight_mrco_grn.p3d);

    class ItemInfo: ItemInfo {
        modelOptics=QPATHTOF(data\acc\sights\H-MRCO\rri_reticle_mrco_grn.p3d);
    };
};

class GVAR(HMRCO_Red) : GVAR(HMRCO_Blue) {
    displayName="[SOB] MokTech Holo-MRCO (Red)";
    picture=QPATHTOF(data\acc\sights\ui\H-MRCO\rri_icon_mrco_red_ca.paa);
    model=QPATHTOF(data\acc\sights\H-MRCO\rri_sight_mrco_red.p3d);

    class ItemInfo: ItemInfo {
        modelOptics=QPATHTOF(data\acc\sights\H-MRCO\rri_reticle_mrco_red.p3d);
    };
};
