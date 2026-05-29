class GVAR(SOS) : optic_MRCO {
    author=AUTHOR;
    scope=2;
    displayName="[SOB] BlasTech MOS";
    model = "\3AS\3AS_Weapons\WestarM5\3AS_Westar_Scope_F.p3d";
    descriptionShort="BlasTech Industries MR 2-12x MOS Scope";
    weaponInfoType = "CBA_ScriptedOptic";
    GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper","FieldSupport","Commando"};

    class CBA_ScriptedOptic{
        bodyTexture = "\z\ace\addons\optics\reticles\sos-body_ca.paa";
        bodyTextureNight = "\z\ace\addons\optics\reticles\sos-bodyNight_ca.paa";
        bodyTextureSize = 1.55;
        hideMagnification = 1;
        opticsPPEffects[] = {"CBA_OpticsRadBlur3"};
        reticleTexture = QPATHTOF(data\acc\sights\misc\rri_mos_noholo_ca.paa);
        reticleTextureNight = QPATHTOF(data\acc\sights\misc\rri_mos_noholo_ca.paa);
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
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = ZOOM_FACTOR(10);
					opticsZoomMax = ZOOM_FACTOR(1);
					opticsZoomInit = ZOOM_FACTOR(1);
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=100;
                    distanceZoomMax=100;
                    memoryPointCamera="reticle";
                    opticsFlare=1;
                    opticsDisablePeripherialVision=1;
                    cameraDir="";
					visionMode[]= {
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={4};
            };
        };
    };
    inertia=0.1;
};
