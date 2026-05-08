class CfgSoundSets {
    class Pistol_Shot_Base_SoundSet;
    class GVAR(Shot_SoundSet): Pistol_Shot_Base_SoundSet {
        soundShaders[] = {
            QGVAR(Closure_SoundShader),
            QGVAR(closeShot_SoundShader),
            QGVAR(midShot_SoundShader),
            QGVAR(distShot_SoundShader)
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
    class GVAR(Tail_SoundSet): Pistol_Tail_Base_SoundSet {
        soundShaders[] = {
            QGVAR(tailDistant_SoundShader),
            QGVAR(tailForest_SoundShader),
            QGVAR(tailHouses_SoundShader),
            QGVAR(tailMeadows_SoundShader),
            QGVAR(tailTrees_SoundShader)
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
    class GVAR(InteriorTail_SoundSet): Pistol_InteriorTail_Base_SoundSet {
        soundShaders[] = {
            QGVAR(tailInterior_SoundShader)
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
