class CfgWeapons
{
    class ItemCore;
    class InventoryFlashLightItem_Base_F;
    class Rifle_Base_F;
    class optic_DMS : ItemCore {
        class ItemInfo;
    };

    class optic_Hamr : ItemCore {
        class ItemInfo;
    };

    class optic_MRCO: ItemCore {
        class ItemInfo;
    };

    class optic_Holosight:ItemCore {
        class ItemInfo;
    };

    class optic_MRD:ItemCore {
        class ItemInfo;
    };

    class optic_KHS_old:ItemCore {
        class ItemInfo;
    };

    class acc_flashlight: ItemCore {
        class ItemInfo;
    };

    class acc_pointer_IR: ItemCore {
        class ItemInfo;
    };

	class muzzle_snds_H: ItemCore {
		class ItemInfo;
	};

	class optic_LRPS: ItemCore {
		class ItemInfo;
	};


    class 3AS_Imp_Optic_1;
    class 3AS_Imp_Optic_2;
    class 3AS_Imp_Optic_3;
    class 3AS_Imp_Optic_4;
    class 3AS_Imp_Optic_DLT19x;
    class 3AS_optic_DC15C_F;
    class 3AS_optic_DC15L_F;

    #include "scopes\ee2.hpp"
    #include "scopes\hlrps.hpp"
    #include "scopes\hmds.hpp"
    #include "scopes\hmrco.hpp"
    #include "scopes\hmrd.hpp"
    #include "scopes\holo.hpp"
    #include "scopes\hrco.hpp"
    #include "scopes\mrco.hpp"
    #include "scopes\sos.hpp"
    #include "scopes\lrpsx.hpp"
    #include "scopes\misc.hpp"

    class GVAR(Flashlight_nomodel): acc_flashlight {
        scope = 2;
        author = AUTHOR;
        displayName = "Flashlight (No Model)";

        picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
        model = QPATHTOF(data\acc\side\side_noModel.p3d);

        class ItemInfo: ItemInfo {
            mass = 4;

            class FlashLight {
                position = "laser dir";
                direction = "laser pos";

                color[] = {180, 160, 130};
                ambient[] = {0.9, 0.81, 0.7};
                intensity = 100;
                size = 1;
                innerAngle = 5;
                outerAngle = 100;
                coneFadeCoef = 8;
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = 100;
                dayLight = 0;
                volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
                scale[] = {1, 1, 1};

                ACE_Flashlight_Colour = "white";
                ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
                ACE_Flashlight_Size = 2.75;
                ACE_Flashlight_Sound = 1;

                class Attenuation {
                    start = 0;
                    constant = 0.5;
                    linear = 0.1;
                    quadratic = 0.2;
                    hardLimitStart = 27;
                    hardLimitEnd = 34;
                };
            };
        };
    };

    class GVAR(Pointer_IR_nomdel): acc_pointer_IR {
        scope = 2;
        author = AUTHOR;
        displayName = "Laser Pointer (No Model)";

        picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
        model = QPATHTOF(data\acc\side\side_noModel.p3d);

        MRT_SwitchItemNextClass = "MTI_pointer_noModel";
        MRT_SwitchItemPrevClass = "MTI_pointer_noModel";
        MRT_switchItemHintText = "IR Laser";

        class ItemInfo: ItemInfo {
            mass = 6;

            class Pointer {
                irLaserPos = "laser dir";
                irLaserEnd = "laser pos";
                irDistance = 5;
            };
        };
    };

    class GVAR(Pointer_IR): GVAR(Pointer_IR_nomdel) {
        scope = 2;
        author = AUTHOR;
        displayName = "Laser Pointer";
        model = "3as\3AS_Weapons\Imperial\3as_Imp_Acc_E11_Laser.p3d";
    };

    class GVAR(Pointer_nomodel): ItemCore {
        scope = 1;
        author = AUTHOR;
        displayName = "Laser Pointer (No Model)";
        descriptionUse = "<t color='#9cf953'>Use: </t>Turn Laser ON/OFF";
        descriptionShort = "Emits visible light.";

        picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
        model = QPATHTOF(data\acc\side\side_noModel.p3d);

        inertia = 0.1;
        MRT_SwitchItemNextClass = "acc_pointer_IR";
        MRT_SwitchItemPrevClass = "acc_pointer_IR";
        MRT_switchItemHintText = "Laser";
        ACE_laserpointer = 1;

        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 6;
            class Pointer {
                irLaserPos = "laser dir";
                irLaserEnd = "laser pos";
                irDistance = 5;
            };

            class FlashLight {
                color[] = {0, 0, 0};
                ambient[] = {0, 0, 0};
                intensity = 0;
                size = 0;
                innerAngle = 0;
                outerAngle = 0;
                coneFadeCoef = 5;
                position = "laser dir";
                direction = "laser pos";
                useFlare = 0;
                flareSize = 0;
                flareMaxDistance = "100.0f";
                dayLight = 0;
                scale[] = {0};

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0;
                    hardLimitStart = 0;
                    hardLimitEnd = 0;
                };
            };
        };
    };

    class GVAR(Silencer): muzzle_snds_H
    {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] 19-Series Stealth Muzzle";
        model = "\3AS\3AS_Weapons\Republic\ACC\3AS_acca_DC17S_Muzzle_F.p3d";
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
    };


    class GVAR(Stun_Muzzle): Rifle_Base_F {
        aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		autoFire = 0;
		ballisticsComputer = 0;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		displayName = "Stun Rounds";
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10}; //todo
		fireSpreadAngle = 0.95;
		magazines[] = {QGMAG(Stun),QGMAG(Ion)};
		magazineWell[] = {QGMAGWELL(Stun)};
		maxZeroing = 50;
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx.wss",1,1,10};
		modes[] = {"Single"};
        class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {QPATHTOF(data\sounds\stun.wss),5,1.5,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.5;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
    };

    class GVAR(Stealth_Muzzle): GVAR(Stun_Muzzle) {
        displayName = "Stealth Mode";
        magazines[] = {QGMAG(Stealth)};
        magazineWell[] = {QGMAGWELL(Stealth)};

        fireSpreadAngle = 0.95;
        maxZeroing = 100;
        discreteDistance[] = {100};
        discreteDistanceInitIndex = 0;

        modes[] = {"Single"};

        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            discreteDistance[] = {100};
            discreteDistanceInitIndex = 0;

            class BaseSoundModeType {
                weaponSoundEffect = "";
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };

            class StandardSound: BaseSoundModeType {
                weaponSoundEffect = "";
                begin1[] = {QPATHTOEF(weapons,core\data\sounds\DC19_Stealth),0.8,1.2,50};
                soundBegin[] = {"begin1",1};
            };

            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            reloadTime = 1;
            dispersion = 0.00059;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 50;
            midRangeProbab = 0.6;
            maxRange = 100;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
    };

    class GrenadeLauncher;
	class GVAR(Fake_GL): GrenadeLauncher {
		magazines[] = {};
		magazineWell[] = {};
		displayName = "Fake GL";
		modes[] = {"Fake"};
		enableAttack = 0;
		showToPlayer = 0;
		class Fake: Mode_MTI_Fake{};
	};
};
