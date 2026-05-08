class CfgSoundSets {
    class Pistol_Shot_Base_SoundSet;
    class GVAR(RSKF44_Shot_SoundSet): Pistol_Shot_Base_SoundSet {
        soundShaders[] = {
            QGVAR(RSKF44_closeShot_SoundShader),
            QGVAR(RSKF44_midShot_SoundShader),
            QGVAR(RSKF44_distShot_SoundShader)
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
    class GVAR(RSKF44_Tail_SoundSet): Pistol_Tail_Base_SoundSet {
        soundShaders[] = {
            QGVAR(RSKF44_tailDistant_SoundShader),
            QGVAR(RSKF44_tailForest_SoundShader),
            QGVAR(RSKF44_tailHouses_SoundShader),
            QGVAR(RSKF44_tailMeadows_SoundShader),
            QGVAR(RSKF44_tailTrees_SoundShader)
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
    class GVAR(RSKF44_InteriorTail_SoundSet): Pistol_InteriorTail_Base_SoundSet {
        soundShaders[] = {
            QGVAR(RSKF44_tailInterior_SoundShader)
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
