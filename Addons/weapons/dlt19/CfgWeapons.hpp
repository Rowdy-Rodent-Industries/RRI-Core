class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class UGL_F;

class CfgWeapons {
	class WM_DLT19X;
	class GWEAPON(DLT19): WM_DLT19X
	{
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] DLT-19X";
		baseWeapon = QGWEAPON(DLT19);
		magazines[] = {QGMAG(DLT19),QGMAG(DLT19_Rail)};
		magazineWell[] = {QGMAGWELL(DLT19)};

		GVAR_CORE(arsenal,whitelists)[] = {"ARC","Fieldsupport"};

		picture = QPATHTOF(data\ui\DLT-19X.paa);

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
		MACRO_GUNSMOKE_EFFECT;
		modes[] = {"Single"};

		class Single: Mode_SemiAuto {
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DLT19X_Shot_SoundSet"
				};
			};
		};
	};
	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(DLT19);
};
