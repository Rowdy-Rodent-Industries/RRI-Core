class GVAR(Holo_Blue) : optic_Holosight {
    author=AUTHOR;
    scope=2;
    displayName="[SOB] MokTech Holosight (Blue)";
    picture=QPATHTOF(data\acc\sights\ui\Holo\rri_icon_holo_blu_ca.paa);
    model=QPATHTOF(data\acc\sights\Holo\rri_sight_holo_blu.p3d);
    descriptionShort="MokTech Industries 1x Holosight Scope";
    weaponInfoType="RscWeaponZeroing";

    class ItemInfo : ItemInfo {
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
                distanceZoomMin=200;
                distanceZoomMax=200;
                cameraDir="";
                visionMode[]={};
                opticsPPEffects[]= {
                    "OpticsBlur1"
                };
            };
        };
    };
    inertia=0;
};

class GVAR(Holo_Green) : GVAR(Holo_Blue) {
    displayName="[SOB] MokTech Holosight (Green)";
    picture=QPATHTOF(data\acc\sights\ui\Holo\rri_icon_holo_grn_ca.paa);
    model=QPATHTOF(data\acc\sights\Holo\rri_sight_holo_grn.p3d);
};

class GVAR(Holo_Red) : GVAR(Holo_Blue) {
    displayName="[SOB] MokTech Holosight (Red)";
    picture=QPATHTOF(data\acc\sights\ui\Holo\rri_icon_holo_red_ca.paa);
    model=QPATHTOF(data\acc\sights\Holo\rri_sight_holo_red.p3d);
};
