class GWEAPON(DC17MC3C): GWEAPON(DC17S)
{
	displayName = "[SOB] DC-17MC3C (Celt)";
	model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
	baseWeapon = QGWEAPON(DC17MC3C);
    hiddenSelectionsTextures[] = {QPATHTOF(data\DC17mc3c_co.paa)};
	magazines[] = {QGMAG(DC17_mc3c)};
	magazineWell[] = {QGMAGWELL(DC17_mc3c), QGMAGWELL(DC17S_ARC)};

	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;

	initSpeed = -1.25;

	modes[] = {"Single", "Burst"};

	class Burst: Mode_Burst {
		sounds[] = {"StandardSound"};

		class BaseSoundModeType {
			weaponSoundEffect = "";
			closure1[] = {};
			closure2[] = {};
			soundClosure[] = {};
		};

		class StandardSound: BaseSoundModeType {
			weaponSoundEffect = "";
			begin1[] = {QPATHTOF_JLTSW(DC17SA\sounds\dc17sa_fire_2),3,0.9,1800};
			soundBegin[] = {"begin1",1};
		};

		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		reloadTime = 0.07;
		dispersion = 0.0015;
		minRange = 5;
		minRangeProbab = 0.3;
		midRange = 25;
		midRangeProbab = 0.6;
		maxRange = 50;
		maxRangeProbab = 0.1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 25;
	};

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
				SCOPE_LIST
			};
		};
		class PointerSlot: PointerSlot {
			compatibleItems[] = {"JLTS_DC17SA_flashlight"};
		};
	};
};
