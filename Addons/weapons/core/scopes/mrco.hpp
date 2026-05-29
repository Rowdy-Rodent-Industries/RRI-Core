class GVAR(MRCO) : optic_MRCO {
    author=AUTHOR;
    scope=2;
    displayName="[SOB] BlasTech MRCO";
    model = "3AS\3AS_Weapons\Imperial\3as_Imp_Optic_SE14R.p3d";
    descriptionShort="BlasTech Industries MR 2-6x RCO Scope";
    weaponInfoType = "CBA_ScriptedOptic";
    GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper","FieldSupport","Commando"};

    class CBA_ScriptedOptic{
        bodyTexture = "\z\ace\addons\optics\reticles\mrco-body_ca.paa";
        bodyTextureNight = "\z\ace\addons\optics\reticles\mrco-bodyNight_ca.paa";
        bodyTextureSize = 2.2;
        hideMagnification = 1;
        opticsPPEffects[] = {"CBA_OpticsRadBlur3"};
        reticleTexture = QPATHTOF(data\acc\sights\misc\rri_mrco_noholo_ca.paa);
        reticleTextureNight = QPATHTOF(data\acc\sights\misc\rri_mrco_noholo_ca.paa);
        reticleTextureSize = 1.024;
    };

    class ItemInfo : ItemInfo {
        mass=SCOPE_MASS;
        opticType=1;
        optics=1;
        modelOptics = "\x\cba\addons\optics\cba_optic_big_90.p3d";

        class OpticsModes {
            class MRCOscope {
                opticsID=1;
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
