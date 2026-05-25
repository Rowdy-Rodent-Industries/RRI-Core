class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class Launcher_Base_F;
	class launch_NLAW_F: Launcher_Base_F{
		class WeaponSlotsInfo;
	};
	class GWEAPON(RPS6_HP): launch_NLAW_F {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] RPS-6 Heavy Projectile";

		baseWeapon = QGWEAPON(RPS6_HP);

		model = "\3AS\3AS_Weapons\RPS6HP\3AS_RPS6_HP.p3d";
		picture = QPATHTOF(data\ui\RPS_Hp_ca.paa);
		UiPicture = QPATHTOF(data\ui\RPS_Hp_ca.paa);
		modelOptics="\A3\Weapons_F\acc\reticle_NLAW";

		handAnim[] = {"OFP2_ManSkeleton", "3as\3as_weapons\data\anim\RPS6_HP_Temp.rtm"};
		reloadAction = "ReloadRPG";

		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

		ace_reloadlaunchers_enabled = 1;

		recoil="Empty";
		maxZeroing = 3000;

		magazines[] = {QGMAG(RPS6_HP), QGMAG(RPS6_HP_AA)};
		magazineWell[] = {QGMAGWELL(RPS6_HP)};

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

		class WeaponSlotsInfo: WeaponSlotsInfo {
		iconScale = 1;
		mass = 60;
		class CowsSlot: CowsSlot
		{
			iconScale = 0.2;
		};
		class MuzzleSlot: MuzzleSlot
		{
			iconScale = 0.2;
		};
		class PointerSlot: PointerSlot
		{
			iconScale = 0.2;
		};
		class UnderBarrelSlot: UnderBarrelSlot
		{
			iconScale = 0.2;
		};
	};

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
