class GVAR(HDMS_Blue) : optic_DMS {
    author=AUTHOR;
    scope=2;
    displayName="[SOB] MokTech Holo-DMS (Blue)";
    picture=QPATHTOF(data\acc\sights\ui\H-DMS\MTI_icon_dms_blu_ca.paa);
    model=QPATHTOF(data\acc\sights\H-DMS\MTI_sight_dms_blu.p3d);
    descriptionShort="MokTech Industries LR 6-12x Marksman Scope";
    weaponInfoType="RscOptics_sos";

    class ItemInfo : ItemInfo {
        mass=SCOPE_MASS;
        opticType=2;
        optics=1;
        modelOptics=QPATHTOF(data\acc\sights\H-DMS\MTI_reticle_dms_blu.p3d);

        class OpticsModes {
            class Snip {
                opticsID=1;
                useModelOptics=1;
                opticsPPEffects[]= {
                    "OpticsCHAbera2",
                    "OpticsBlur3"
                };
                opticsZoomMin = ZOOM_FACTOR(12);
                opticsZoomMax = ZOOM_FACTOR(6);
                opticsZoomInit = ZOOM_FACTOR(6);
                discreteinitIndex = 0;
                discretefov[] = {ZOOM_FACTOR(6),ZOOM_FACTOR(12)};
                discreteDistanceInitIndex = 1;
                distanceZoomMin=300;
                distanceZoomMax=1200;
                memoryPointCamera="opticView";
                visionMode[]= {
                    "Normal",
                    "NVG",
                    "TI"
                };
                thermalMode[]={4,5};
                opticsFlare=1;
                opticsDisablePeripherialVision=0;
                cameraDir="";
            };

            class Iron: Snip {
                opticsID=2;
                useModelOptics=0;
                opticsPPEffects[]= {
                    "",
                    ""
                };
                opticsFlare=0;
                opticsDisablePeripherialVision=0;
                opticsZoomMin=0.25;
                opticsZoomMax=1.25;
                opticsZoomInit=0.75;
                memoryPointCamera="eye";
                visionMode[]={};
                discretefov[]={};
                distanceZoomMin=200;
                distanceZoomMax=200;
                discreteDistance[]={200};
                discreteDistanceInitIndex=0;
            };
        };
    };
    inertia=0.2;
};

class GVAR(HDMS_Green) : GVAR(HDMS_Blue) {
    displayName="[SOB] MokTech Holo-DMS (Green)";
    picture=QPATHTOF(data\acc\sights\ui\H-DMS\MTI_icon_dms_grn_ca.paa);
    model=QPATHTOF(data\acc\sights\H-DMS\MTI_sight_dms_grn.p3d);

    class ItemInfo: ItemInfo {
        modelOptics=QPATHTOF(data\acc\sights\H-DMS\MTI_reticle_dms_grn.p3d);
    };
};

class GVAR(HDMS_Red) : GVAR(HDMS_Blue) {
    displayName="[SOB] MokTech Holo-DMS (Red)";
    picture=QPATHTOF(data\acc\sights\ui\H-DMS\MTI_icon_dms_red_ca.paa);
    model=QPATHTOF(data\acc\sights\H-DMS\MTI_sight_dms_red.p3d);

    class ItemInfo: ItemInfo {
        modelOptics=QPATHTOF(data\acc\sights\H-DMS\MTI_reticle_dms_red.p3d);
    };
};
