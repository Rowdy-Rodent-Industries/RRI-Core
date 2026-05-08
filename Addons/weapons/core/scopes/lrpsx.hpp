class GVAR(LRPSX): optic_LRPS {
    displayName = "[SOB] BlasTech LRPS-X Scope";
    model = "\3AS\3AS_Weapons\Republic\ACC\3AS_acco_DC15X_Scope_F.p3d";
    GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper","FieldSupport","Commando"};
    class CBA_ScriptedOptic {
        bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
        bodyTextureSize = 1;
        hideMagnification = 1;
        disableTilt = 0;
    };

    weaponInfoType = "ace_xm157_info";

    class ItemInfo: ItemInfo {
        modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
        class OpticsModes {
            class optic {
                opticsID=1;
                useModelOptics=1;
                opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = "12 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                distanceZoomMin=100;
                distanceZoomMax=100;
                memoryPointCamera="opticView";
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
};

