class GVAR(HMRD_Blue) : optic_MRD {
    author=AUTHOR;
    scope=2;
    displayName="[SOB] MokTech Holo-MRD (Blue)";
    picture=QPATHTOF(data\acc\sights\ui\H-MRD\rri_icon_mrd_blu_ca.paa);
    model=QPATHTOF(data\acc\sights\H-MRD\rri_sight_mrd_blu.p3d);
    descriptionShort="MokTech Industries Pistol Holo Scope";

    class ItemInfo: ItemInfo {
        mass=SCOPE_MASS;
        modelOptics="\A3\Weapons_F\empty";
        optics=1;

        class OpticsModes {
            class ACO {
                opticsID=1;
                useModelOptics=0;
                opticsZoomMin=0.25;
                opticsZoomMax=1.25;
                opticsZoomInit=0.75;
                memoryPointCamera="eye";
                opticsFlare=0;
                opticsDisablePeripherialVision=0;
                distanceZoomMin=50;
                distanceZoomMax=50;
                cameraDir="";
                visionMode[]={};
                opticsPPEffects[]= {
                    "Default"
                };
            };
        };
    };
    inertia=0;
};

class GVAR(HMRD_Green) : GVAR(HMRD_Blue) {
    displayName="[SOB] MokTech Holo-MRD (Green)";
    picture=QPATHTOF(data\acc\sights\ui\H-MRD\rri_icon_mrd_grn_ca.paa);
    model=QPATHTOF(data\acc\sights\H-MRD\rri_sight_mrd_grn.p3d);
};

class GVAR(HMRD_Red) : GVAR(HMRD_Blue) {
    displayName="[SOB] MokTech Holo-MRD (Red)";
    picture=QPATHTOF(data\acc\sights\ui\H-MRD\rri_icon_mrd_red_ca.paa);
    model=QPATHTOF(data\acc\sights\H-MRD\rri_sight_mrd_red.p3d);
};
