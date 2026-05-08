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
	class ls_weapon_firepuncher;
	class GWEAPON(Firepuncher): ls_weapon_firepuncher {
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] Firepuncher";
		baseWeapon = QGWEAPON(Firepuncher);
		magazines[] = {QGMAG(Firepuncher)};
		magazineWell[] = {QGMAGWELL(Firepuncher)};

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

		picture = QPATHTOF(data\ui\Firepuncher.paa);
		recoil = "recoil_gm6";
		recoilProne = "assaultRifleBase";
		reloadAction = "GestureReloadDMR06";
		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		MACRO_GUNSMOKE_EFFECT;
		modes[] = {"Single", "single_medium_optics1", "single_far_optics2"};
		muzzles[] = {"this","Stun"};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(Firepuncher);
};
