class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;

class CfgWeapons {
    class ls_weapon_rd4_base;
    class ls_weapon_rd4: ls_weapon_rd4_base {
        class WeaponSlotsInfo;
    };

	class GWEAPON(rd4): ls_weapon_rd4 {
		author = AUTHOR;
		displayName = "[SOB] RD-4";
		descriptionShort = "Merr-Sonn Munitions 'RD-4' Radiation Launcher";
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando","JumpTrooper","Fieldsupport"};
		baseWeapon = QGWEAPON(rd4);

		picture = QPATHTOF(data\ui\RD4.paa);

		magazines[] = {QGMAG(rd4), QGMAG(rd4_3rnd)};
		magazineWell[] = {QGMAGWELL(rd4), QGMAGWELL(ugl)};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 160;
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(rd4);
};
