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

	class DMR_04_base_F;
	class srifle_DMR_04_F: DMR_04_base_F {
		class WeaponSlotsInfo;
		class Single;
	};

	class GWEAPON(EE2) : srifle_DMR_04_F {
		author=AUTHOR;
		displayName = "[SOB] EE-2 Blaster Rifle";
		baseWeapon = QGWEAPON(EE2);
		magazines[] = {QGMAG(EE2),QGMAG(EE2_HP)};
		magazineWell[] = {QGMAGWELL(EE2)};
		initSpeed = -1;
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","Trooper","Commando"};

		picture = QPATHTOF(data\ui\EE2.paa);

        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(weapons,ee2\data\textures\EE2_01_CO.paa),
            QPATHTOEF(weapons,ee2\data\textures\EE2_02_CO.paa)
        };

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		MACRO_GUNSMOKE_EFFECT;
		modes[] = {"Burst", "Single"};

		class Single: Single
		{
			dispersion=0.00004;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DH17_Shot_Soundet"};
			};
		};

		class Burst: Single
		{
			burst = 3;

			displayName = "Burst";
			textureType = "burst";
			dispersion = 0.00015;
		};
	//			reloadTime = 0.19;

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
					QEGVAR(weapons_core,EE2_Scope),
					QEGVAR(weapons_core,KHS),
					QEGVAR(weapons_core,ACOG)
				};
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};
		};
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(EE2);
};
