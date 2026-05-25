class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class 3AS_SE14R;

	class GWEAPON(se14r): 3AS_SE14R
	{
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] SE-14R";
		baseWeapon = QGWEAPON(se14r);
		magazines[] = {QGMAG(se14r)};
		magazineWell[] = {QGMAGWELL(se14r)};
		GVAR_CORE(arsenal,whitelists)[] = {"Pilot"};

		picture = QPATHTOF(data\ui\SE14R.paa);
		MACRO_GUNSMOKE_EFFECT;
		modes[] = {"Single","FullAuto"};

		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_SE14R_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_SE14R_Shot_SoundSet"
				};
			};
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.1;
			dispersion=0.0039900001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};

		class FullAuto: Mode_FullAuto
			{
				reloadTime=0.079999998;
				dispersion=0.00106;
				minRange=0;
				minRangeProbab=0.89999998;
				midRange=15;
				midRangeProbab=0.69999999;
				maxRange=30;
				maxRangeProbab=0.1;
				soundContinuous=0;
				soundBurst=0;
				sounds[]=
				{
					"StandardSound",
					"SilencedSound"
				};
				class BaseSoundModeType{};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_SE14R_Shot_SoundSet"
					};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_SE14R_Shot_SoundSet"
					};
				};
			};

		JLTS_friedItem = "";
		JLTS_hasElectronics = 0;
		JLTS_hasEMPProtection = 1;
	};
};
