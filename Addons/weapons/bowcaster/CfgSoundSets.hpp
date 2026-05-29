class CfgSoundSets {
    class Pistol_Shot_Base_SoundSet;
    class GVAR(Bowcaster_Shot_SoundSet): Pistol_Shot_Base_SoundSet {
        soundShaders[] = {
            //"rri_Bowcaster_Closure_SoundShader",
            QGVAR(Bowcaster_closeShot_SoundShader),
            QGVAR(Bowcaster_midShot_SoundShader),
            QGVAR(Bowcaster_distShot_SoundShader)
        };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponLightShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };

    class GVAR(Bowcaster_Heavy_Shot_SoundSet): Pistol_Shot_Base_SoundSet {
        soundShaders[] = {
            //"rri_Bowcaster_Heavy_Closure_SoundShader",
            QGVAR(Bowcaster_Heavy_closeShot_SoundShader),
            QGVAR(Bowcaster_Heavy_midShot_SoundShader),
            QGVAR(Bowcaster_Heavy_distShot_SoundShader)
        };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponLightShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };

    class Pistol_Tail_Base_SoundSet;
    class GVAR(Bowcaster_Tail_SoundSet): Pistol_Tail_Base_SoundSet {
        soundShaders[] = {
            QGVAR(Bowcaster_tailDistant_SoundShader),
            QGVAR(Bowcaster_tailForest_SoundShader),
            QGVAR(Bowcaster_tailHouses_SoundShader),
            QGVAR(Bowcaster_tailMeadows_SoundShader),
            QGVAR(Bowcaster_tailTrees_SoundShader)
        };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 1;
        sound3DProcessingType = "WeaponLightShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };

    class GVAR(Bowcaster_Heavy_Tail_SoundSet): Pistol_Tail_Base_SoundSet {
        soundShaders[] = {
            QGVAR(Bowcaster_Heavy_tailDistant_SoundShader),
            QGVAR(Bowcaster_Heavy_tailForest_SoundShader),
            QGVAR(Bowcaster_Heavy_tailHouses_SoundShader),
            QGVAR(Bowcaster_Heavy_tailMeadows_SoundShader),
            QGVAR(Bowcaster_Heavy_tailTrees_SoundShader)
        };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 1;
        sound3DProcessingType = "WeaponLightShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };

    class Pistol_InteriorTail_Base_SoundSet;
    class GVAR(Bowcaster_InteriorTail_SoundSet): Pistol_InteriorTail_Base_SoundSet {
        soundShaders[] = {
            QGVAR(Bowcaster_tailInterior_SoundShader)
        };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 1;
        sound3DProcessingType = "WeaponInteriorShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };

    class GVAR(Bowcaster_Heavy_InteriorTail_SoundSet): Pistol_InteriorTail_Base_SoundSet {
        soundShaders[] = {
            QGVAR(Bowcaster_Heavy_tailInterior_SoundShader)
        };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 1;
        sound3DProcessingType = "WeaponInteriorShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
};
