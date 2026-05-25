class CfgWeapons {
    class EGVAR(weapons_core,Stun_Muzzle);
	class 3AS_DC17S_F;
	class GWEAPON(DC17S): 3AS_DC17S_F {
		class Single;
		class WeaponSlotsInfo;
	};
	class GWEAPON(DC17Sgf_base): GWEAPON(DC17S) {
		scope = 1;
		displayName = "[SOB] DC-17s/gf";
		baseWeapon = QGWEAPON(DC17Sgf);
		magazines[] = {QGMAG(DC17S_GF)};
		magazineWell[] = {QGMAGWELL(DC17SGF)};
		muzzles[] = {"this", "Stun"};
		reloadMagazineSound[] = {QPATHTOF(data\reload_dc17sgf.wss), 5, 1, 150};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class Single: Single {
			dispersion = 0.0015;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {};
	};
	class GWEAPON(DC17Sgf): GWEAPON(DC17Sgf_base) {
		scope = 2;
		hiddenSelectionsMaterials[] = {"", "", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","Fieldsupport"};
	};
};
