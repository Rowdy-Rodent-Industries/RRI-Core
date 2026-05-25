
class CfgGesturesMale {
    class States {
        class GestureNo;
        class GVAR(map_arm_stand_unarmed): GestureNo {
            file = QPATHTOF(data\anims\map_hand_anim.rtm);
            looped = 1;
            speed = 1;
            interpolationSpeed = 5;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
            mask = "mti_map_arm";
            disableWeapons = 1;
            disableWeaponsLong = 1;
            canPullTrigger = 0;
            enableBinocular = 0;
            enableMissile = 0;
            enableOptics = 0;
            leftHandIK = 0;
            weaponIK = 0;
            leftHandIKBeg = 0;
			leftHandIKEnd = 0;
        };
        class GVAR(map_arm_stand_rifle): GVAR(map_arm_stand_unarmed) {leftHandIKCurve[] = {0}; mask = "mti_map_arm_rifle";};
        class GVAR(map_arm_stand_pistol): GVAR(map_arm_stand_rifle) {mask = "mti_map_arm_pistol";};
        class GVAR(map_arm_stand_launcher): GVAR(map_arm_stand_rifle) {mask = "mti_map_arm_launcher";};
    };

    class BlendAnims {
        mti_map_arm[] = {
            "neck", 0.5,
            "RightShoulder", 1,
            "RightArm", 1,
            "RightArmRoll", 1,
            "RightForeArm", 1,
            "RightForeArmRoll", 1,
            "RightHand", 1,
            "RightHandRing", 1,
            "RightHandPinky1", 1,
            "RightHandPinky2", 1,
            "RightHandPinky3", 1,
            "RightHandRing1", 1,
            "RightHandRing2", 1,
            "RightHandRing3", 1,
            "RightHandMiddle1", 1,
            "RightHandMiddle2", 1,
            "RightHandMiddle3", 1,
            "RightHandIndex1", 1,
            "RightHandIndex2", 1,
            "RightHandIndex3", 1,
            "RightHandThumb1", 1,
            "RightHandThumb2", 1,
            "RightHandThumb3", 1
        };
        mti_map_arm_rifle[] =  {
            "neck", 0.5,
            "weapon", 1,
            "RightShoulder", 1,
            "RightArm", 1,
            "RightArmRoll", 1,
            "RightForeArm", 1,
            "RightForeArmRoll", 1,
            "RightHand", 1,
            "RightHandRing", 1,
            "RightHandPinky1", 1,
            "RightHandPinky2", 1,
            "RightHandPinky3", 1,
            "RightHandRing1", 1,
            "RightHandRing2", 1,
            "RightHandRing3", 1,
            "RightHandMiddle1", 1,
            "RightHandMiddle2", 1,
            "RightHandMiddle3", 1,
            "RightHandIndex1", 1,
            "RightHandIndex2", 1,
            "RightHandIndex3", 1,
            "RightHandThumb1", 1,
            "RightHandThumb2", 1,
            "RightHandThumb3", 1,
            "leftShoulder", 1,
            "leftArm", 1,
            "leftArmRoll", 1,
            "leftForeArm", 1,
            "leftForeArmRoll", 1,
            "leftHand", 1,
            "leftHandRing", 1,
            "leftHandPinky1", 1,
            "leftHandPinky2", 1,
            "leftHandPinky3", 1,
            "leftHandRing1", 1,
            "leftHandRing2", 1,
            "leftHandRing3", 1,
            "leftHandMiddle1", 1,
            "leftHandMiddle2", 1,
            "leftHandMiddle3", 1,
            "leftHandIndex1", 1,
            "leftHandIndex2", 1,
            "leftHandIndex3", 1,
            "leftHandThumb1", 1,
            "leftHandThumb2", 1,
            "leftHandThumb3", 1
        };
        mti_map_arm_pistol[] = {
            "neck", 0.5,
            "RightShoulder", 1,
            "RightArm", 1,
            "RightArmRoll", 1,
            "RightForeArm", 1,
            "RightForeArmRoll", 1,
            "RightHand", 1,
            "RightHandRing", 1,
            "RightHandPinky1", 1,
            "RightHandPinky2", 1,
            "RightHandPinky3", 1,
            "RightHandRing1", 1,
            "RightHandRing2", 1,
            "RightHandRing3", 1,
            "RightHandMiddle1", 1,
            "RightHandMiddle2", 1,
            "RightHandMiddle3", 1,
            "RightHandIndex1", 1,
            "RightHandIndex2", 1,
            "RightHandIndex3", 1,
            "RightHandThumb1", 1,
            "RightHandThumb2", 1,
            "RightHandThumb3", 1,
            "leftShoulder", 1,
            "leftArm", 1,
            "leftArmRoll", 1,
            "leftForeArm", 1,
            "leftForeArmRoll", 1,
            "leftHand", 1,
            "leftHandRing", 1,
            "leftHandPinky1", 1,
            "leftHandPinky2", 1,
            "leftHandPinky3", 1,
            "leftHandRing1", 1,
            "leftHandRing2", 1,
            "leftHandRing3", 1,
            "leftHandMiddle1", 1,
            "leftHandMiddle2", 1,
            "leftHandMiddle3", 1,
            "leftHandIndex1", 1,
            "leftHandIndex2", 1,
            "leftHandIndex3", 1,
            "leftHandThumb1", 1,
            "leftHandThumb2", 1,
            "leftHandThumb3", 1
        };
        mti_map_arm_launcher[] =  {
            "neck", 0.5,
            "launcher", 1,
            "RightShoulder", 1,
            "RightArm", 1,
            "RightArmRoll", 1,
            "RightForeArm", 1,
            "RightForeArmRoll", 1,
            "RightHand", 1,
            "RightHandRing", 1,
            "RightHandPinky1", 1,
            "RightHandPinky2", 1,
            "RightHandPinky3", 1,
            "RightHandRing1", 1,
            "RightHandRing2", 1,
            "RightHandRing3", 1,
            "RightHandMiddle1", 1,
            "RightHandMiddle2", 1,
            "RightHandMiddle3", 1,
            "RightHandIndex1", 1,
            "RightHandIndex2", 1,
            "RightHandIndex3", 1,
            "RightHandThumb1", 1,
            "RightHandThumb2", 1,
            "RightHandThumb3", 1,
            "leftShoulder", 1,
            "leftArm", 1,
            "leftArmRoll", 1,
            "leftForeArm", 1,
            "leftForeArmRoll", 1,
            "leftHand", 1,
            "leftHandRing", 1,
            "leftHandPinky1", 1,
            "leftHandPinky2", 1,
            "leftHandPinky3", 1,
            "leftHandRing1", 1,
            "leftHandRing2", 1,
            "leftHandRing3", 1,
            "leftHandMiddle1", 1,
            "leftHandMiddle2", 1,
            "leftHandMiddle3", 1,
            "leftHandIndex1", 1,
            "leftHandIndex2", 1,
            "leftHandIndex3", 1,
            "leftHandThumb1", 1,
            "leftHandThumb2", 1,
            "leftHandThumb3", 1
        };
    };
};
