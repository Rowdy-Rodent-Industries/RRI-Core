class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {


	class 3AS_MPL_Base_F;
	class 3AS_MPL_F: 3AS_MPL_Base_F {
		class WeaponSlotsInfo;
	};

    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(MPL): 3AS_MPL_F
	{
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] MPL Grenade Launcher";
		baseWeapon = QGWEAPON(MPL);
		magazines[] = {QGMAG(40mm_AP)};
		magazineWell[] = {QGMAGWELL(MPL), QGMAGWELL(UGL)};

		GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper"};

		picture = QPATHTOF(data\ui\MPL.paa);

		recoil = "3as_recoil_light";

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 60;
			class CowsSlot : CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					RCO_LIST,
					MRCO_LIST,
					HOLO_LIST
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};


	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(MPL);
};
