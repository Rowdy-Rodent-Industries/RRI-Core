class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {
    class EGVAR(weapons_core,Stun_Muzzle);
	class Launcher;
	class Launcher_Base_F: Launcher {
		class WeaponSlotsInfo;
	};
	class launch_NLAW_F: Launcher_Base_F {
		class Single: Mode_SemiAuto{};
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};

class GWEAPON(HH12): launch_NLAW_F {
	author = AUTHOR;
	displayName = "[SOB] HH-12 Rocket Launcher";
	baseWeapon = QGWEAPON(HH12);
	magazines[] = {QGMAG(HH12_Cluster),QGMAG(HH12_Rocket)};
	magazinewell[] = {QGMAGWELL(HH12)};

	picture = QPATHTOF(data\ui\HH12.paa);

	GVAR_CORE(arsenal,whitelists)[] = {"Fieldsupport"};

	model="3as\3AS_Weapons\Imperial\3AS_HH12.p3d";
	modelOptics="\A3\Weapons_F\acc\reticle_NLAW";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"3as\3AS_Weapons\Imperial\anims\HH12hand.rtm"
	};
	shotPos = "usti hlavne";
	shotEnd = "konec hlavne";

    cameraDir = "look";

    class GunParticles {
        class effect1 {
            positionName = "konec hlavne";
            directionName = "usti hlavne";
            effectName = "RocketBackEffectsNLAWNT";
        };
    };

	recoil="Empty";
    maxZeroing = 3000;

	canLock = 2;
    weaponLockDelay = 1.5;
    weaponLockSystem = 4;
    maxrange = 4000;

    ace_overpressure_angle = 0;
    ace_overpressure_damage = 0.7;
    ace_overpressure_priority = 1;
    ace_overpressure_range = 15;
};
};
