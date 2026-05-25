class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class launch_RPG32_F;
	class JLTS_RPS6: launch_RPG32_F {
		class WeaponSlotsInfo;
	};
	class Launcher;
	class Launcher_Base_F: Launcher {
		class WeaponSlotsInfo;
	};
	class 3AS_RPS6_Base: Launcher_Base_F {
		class WeaponSlotsInfo;
	};
	class GWEAPON(RPS6) : JLTS_RPS6 {
		author = AUTHOR;
		displayName = "[SOB] RPS-6";
		baseWeapon = QGWEAPON(RPS6);
		magazines[] = {QGMAG(RPS6_AT),QGMAG(RPS6_HE)};
		magazineWell[] = {QGMAGWELL(RPS6)};

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper"};

		initSpeed = -1.2;

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;

		ace_reloadlaunchers_enabled = 1;

		picture = QPATHTOF(data\ui\RPS_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\RPS_Base_ca.paa);

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 100;
		};
	};

	class GWEAPON(RPS6_D): 3AS_RPS6_Base {
	author = AUTHOR;
	scope = 2;
    displayName = "[SOB] RPS-6 (Disposable)";
	baseWeapon = QGWEAPON(RPS6_D);
	magazines[] = {QGMAG(RPS6_D)};
	picture = QPATHTOF(data\ui\RPS_D_ca.paa);
	UiPicture = QPATHTOF(data\ui\RPS_D_ca.paa);

	GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper","Fieldsupport"};

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
};

	class GWEAPON(RPS6_D_Loaded) : GWEAPON(RPS6_D) {
		scope = 1;

		author = AUTHOR;
		displayName = "[SOB] RPS-6 (Disposable)";
		baseWeapon = QGWEAPON(RPS6_D_Loaded);
		magazines[] = {"CBA_FakeLauncherMagazine"};
		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper","Fieldsupport"};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 100;
			iconScale = 1;
		};
	};

	class GWEAPON(RPS6_D_Used): GWEAPON(RPS6_D) {
		author = AUTHOR;
		displayName = "[SOB] RPS-6 (Disposable, Used)";
		baseWeapon = QGWEAPON(RPS6_D_USED);
		magazines[] = {"CBA_FakeLauncherMagazine"};
	};
};
