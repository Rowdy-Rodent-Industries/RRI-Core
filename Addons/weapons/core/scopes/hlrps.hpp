class GVAR(HLRPS_Blue) : optic_DMS {
    author=AUTHOR;
    scope=2;
    displayName="[SOB] MokTech Holo-LRPS (Blue)";
    picture=QPATHTOF(data\acc\sights\ui\H-LRPS\rri_icon_lrps_blu_ca.paa);
    model=QPATHTOF(data\acc\sights\H-LRPS\rri_sight_lrps_blu.p3d);
    descriptionShort="MokTech Industries LR 6-25x Sniper Scope";
    weaponInfoType="RscOptics_sos";

    class ItemInfo : ItemInfo {
        mass=SCOPE_MASS;
        opticType=2;
        weaponInfoType="RscWeaponRangeZeroingFOV";
        optics=1;
        modelOptics=QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_blu.p3d);
        class OpticsModes {
            class Snip {
                opticsID=1;
                opticsDisplayName="WFOV";
                useModelOptics=1;
                opticsPPEffects[]= {
                    "OpticsCHAbera1",
                    "OpticsBlur1"
                };
                opticsZoomMin=ZOOM_FACTOR(25);
                opticsZoomMax=ZOOM_FACTOR(6);
                opticsZoomInit=ZOOM_FACTOR(6);
                discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
                discreteDistanceInitIndex=2;
                distanceZoomMin=300;
                distanceZoomMax=2400;
                discretefov[]={ZOOM_FACTOR(6),ZOOM_FACTOR(25)};
                discreteInitIndex=0;
                memoryPointCamera="opticView";
                modelOptics[]= {
                    QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_blu.p3d),
                    QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_z_blu.p3d)
                };
                visionMode[]= {
                    "Normal",
                    "NVG",
                    "Ti"
                };
                thermalMode[]={4};
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
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
};

class GVAR(HLRPS_Green) : GVAR(HLRPS_Blue) {
    displayName="[SOB] MokTech Holo-LRPS (Green)";
    picture=QPATHTOF(data\acc\sights\ui\H-LRPS\rri_icon_lrps_grn_ca.paa);
    model=QPATHTOF(data\acc\sights\H-LRPS\rri_sight_lrps_grn.p3d);

    class ItemInfo: ItemInfo {
        modelOptics=QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_grn.p3d);
        class OpticsModes {
            class Snip {
                opticsID=1;
                opticsDisplayName="WFOV";
                useModelOptics=1;
                opticsPPEffects[]= {
                    "OpticsCHAbera1",
                    "OpticsBlur1"
                };
                opticsZoomMin=ZOOM_FACTOR(25);
                opticsZoomMax=ZOOM_FACTOR(6);
                opticsZoomInit=ZOOM_FACTOR(6);
                discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
                discreteDistanceInitIndex=2;
                distanceZoomMin=300;
                distanceZoomMax=2400;
                discretefov[]={ZOOM_FACTOR(6),ZOOM_FACTOR(25)};
                discreteInitIndex=0;
                memoryPointCamera="opticView";
                modelOptics[]= {
                    QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_grn.p3d),
                    QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_z_grn.p3d)
                };
                visionMode[]= {
                    "Normal",
                    "NVG",
                    "Ti"
                };
                thermalMode[]={4};
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
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
};

class GVAR(HLRPS_Red) : GVAR(HLRPS_Blue) {
    displayName="[SOB] MokTech Holo-LRPS (Red)";
    picture=QPATHTOF(data\acc\sights\ui\H-LRPS\rri_icon_lrps_red_ca.paa);
    model=QPATHTOF(data\acc\sights\H-LRPS\rri_sight_lrps_red.p3d);

    class ItemInfo: ItemInfo {
        modelOptics=QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_red.p3d);
        class OpticsModes {
            class Snip {
                opticsID=1;
                opticsDisplayName="WFOV";
                useModelOptics=1;
                opticsPPEffects[]= {
                    "OpticsCHAbera1",
                    "OpticsBlur1"
                };
                opticsZoomMin=ZOOM_FACTOR(25);
                opticsZoomMax=ZOOM_FACTOR(6);
                opticsZoomInit=ZOOM_FACTOR(6);
                discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
                discreteDistanceInitIndex=2;
                distanceZoomMin=300;
                distanceZoomMax=2400;
                discretefov[]={ZOOM_FACTOR(6),ZOOM_FACTOR(25)};
                discreteInitIndex=0;
                memoryPointCamera="opticView";
                modelOptics[]= {
                    QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_red.p3d),
                    QPATHTOF(data\acc\sights\H-LRPS\rri_reticle_lrps_z_red.p3d)
                };
                visionMode[]= {
                    "Normal",
                    "NVG",
                    "Ti"
                };
                thermalMode[]={4};
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
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
};
