class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons{
	class 3AS_DC17S_Base_F;
	class 3AS_DC17S_F: 3AS_DC17S_Base_F {
		class WeaponSlotsInfo;
		class Single;
	};
	class EGVAR(weapons_core,Stun_Muzzle);
	class GWEAPON(DC17S): 3AS_DC17S_F {
		author = AUTHOR;
		displayName = "[SOB] DC-17s";
		baseWeapon = QGWEAPON(DC17S);
		magazines[] = {QGMAG(DC17S)};
		magazineWell[] = {QGMAGWELL(DC17S)};
		picture = QPATHTOF(data\ui\DC17S_Base_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Trooper","ARC","JumpTrooper","FieldSupport"};
		MACRO_GUNSMOKE_EFFECT;
		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;

		class Single: Single {
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound {
				soundSetShot[] = {"ls_dc17s_Shot_SoundSet","ls_mediumBlaster_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"3AS_DC15S_Shot_SoundSet"};
			};
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 20;
			class CowsSlot: CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRD_LIST
				};
			};
			class PointerSlot: PointerSlot {
				compatibleItems[] = {"JLTS_DC17SA_flashlight"};
			};
		};
	};

	class ls_weapon_dc17s_dual;

	#include "cfg\arc.hpp"

	#include "cfg\mokka.hpp"

	#include "cfg\celt.hpp"
};
