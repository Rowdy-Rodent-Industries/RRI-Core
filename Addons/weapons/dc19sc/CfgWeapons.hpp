/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

/// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons {

    class EGVAR(weapons_core,Stun_Muzzle);
    class EGVAR(weapons_core,Stealth_Muzzle);

    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
    };

    class GWEAPON(DC19SC_Base): arifle_MX_Base_F {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] DC-19SC";
        descriptionShort = "Customized DC-19SC weapon platform used by the Covert-Ops detachment.";

        baseWeapon = QGWEAPON(DC19SC);

		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

        magazines[] = {QGMAG(DC19SC), QGMAG(DC19SC_Hack)};
        magazineWell[] = {QGMAGWELL(DC19SC)};

        reloadAction = "GestureReload_JLTS_DC15S";
        handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(anims\DC19SC_handAnim.rtm)};
		MACRO_GUNSMOKE_EFFECT;
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10}; //todo

		recoil = QEGVAR(weapons_Core,Rifle_Recoil);
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.4;
		dexterity = 1.6;

        muzzles[] = {"this", "Stealth"};

        class Stealth: EGVAR(weapons_core,Stealth_Muzzle) {};

		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"3AS_DC15C_Shot_SoundSet"};
			};

			reloadTime = 0.096;
			dispersion = 0.00055;

			recoil = "recoil_smg_03";
            minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};

		class FullAuto: Mode_FullAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"3AS_DC15C_Shot_SoundSet"};
			};

            reloadTime = 0.096;
			dispersion = 0.00055;

            recoil = "recoil_smg_03";
			recoilProne = "recoil_smg_03";

            minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};

		class fullauto_medium: FullAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

            class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};

			showToPlayer = 0;
			burst = 3;
			aiBurstTerminable = 1;

            minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};

		class single_medium_optics1: Single {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

            class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};

            requiredOpticType = 1;
			showToPlayer = 0;

            minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};

        class single_far_optics2: single_medium_optics1 {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};

            class StandardSound: BaseSoundModeType {
				weaponSoundEffect = "";
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				soundBegin[] = {"begin1",1};
			};

            requiredOpticType = 2;
			showToPlayer = 0;

            minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};

        class WeaponSlotsInfo: WeaponSlotsInfo {
		    mass = 75;

            class CowsSlot: CowsSlot {
		    	compatibleItems[] = {
                    MRCO_LIST,
                    HOLO_LIST
		    	};
		    };

            class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {};
			};

            class PointerSlot: PointerSlot {
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

            class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
    };

    class GWEAPON(DC19SC): GWEAPON(DC19SC_Base) {
        scope = 2;

        model = QPATHTOF(DC19SC.p3d);

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\DC19SC_co.paa)};

        picture = QPATHTOF(data\ui\DC19S_Base_ca.paa);
    };
};
