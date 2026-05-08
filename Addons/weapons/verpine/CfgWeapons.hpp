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
    class 3AS_DC15X_Base_F;
    class 3AS_DC15X_F: 3AS_DC15X_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
		class Single;
    };

    class GWEAPON(Verpine): 3AS_DC15X_F {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Verpine Shatter Rifle";
        descriptionShort = "Verpine Shatter Rifle weapon platform used by the Special Operations Brigade.";

        baseWeapon = QGWEAPON(Verpine);

        magazines[] = {QGMAG(Verpine_Improv),QGMAG(Verpine),QGMAG(Verpine_APDS_1rnd),QGMAG(Verpine_APDS),QGMAG(Verpine_Deraformine),QGMAG(Verpine_Latheniol),QGMAG(Verpine_Tracking),QGMAG(Verpine_Ion),QGMAG(Verpine_Acid)};
        magazineWell[] = {QGMAGWELL(Verpine)};
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

        picture = QPATHTOF(data\ui\Verpine_Base_ca.paa);
        reloadAction = "GestureReload_JLTS_DC15S";

		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10}; //todo

		recoil = QEGVAR(weapons_core,Rifle_Recoil);
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.4;
		dexterity = 1.6;

        muzzles[] = {"this"};
		modes[] = {"Single", "single_medium_optics1", "single_far_optics2"};

		class Single: Single {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {QGVAR(Verpine_Shot_SoundSet),QGVAR(Verpine_Tail_SoundSet),QGVAR(Verpine_InteriorTail_SoundSet)};
			};

			reloadTime = 1.75;
			dispersion = 0.00014;

			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			soundBurst = 0;
			soundContinuous = 0;

			maxRange = 400;
			maxRangeProbab = 0.3;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.5;
		};

		class single_medium_optics1: Single {
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
					QGVAR(Verpine_Scope),
					QEGVAR(weapons_core,ACOG_2),
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,MRCO)
		    	};
		    };

            class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {};
			};

            class PointerSlot: PointerSlot {
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

            class UnderBarrelSlot: UnderBarrelSlot {
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"3AS_Bipod_VK38X_f"};
			};
		};

		MACRO_GUNSMOKE_EFFECT;
    };

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_MUZZLEFLASH_MACRO(Verpine);

    class ItemCore;
    class InventoryOpticsItem_Base_F;

    class GVAR(Verpine_Scope): ItemCore {
		scope = 2;
		author = AUTHOR;
		displayName="[SOB] Verpine Scope";
		descriptionShort="Augmented Verpine Optics.";
		picture = QPATHTOF(data\ui\verpine_scope_ui_ca.paa);
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

		model = "\3AS\3AS_Weapons\Republic\ACC\3AS_acco_DC15X_Scope_F.p3d";

        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            bodyTextureSize = 1;
            hideMagnification = 1;
            disableTilt = 0;
        };

        weaponInfoType = "ace_xm157_info";

        class ItemInfo: InventoryOpticsItem_Base_F {
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
				class optic {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = "12 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=100;
                    distanceZoomMax=100;
                    memoryPointCamera="opticView";
                    opticsFlare=1;
                    opticsDisablePeripherialVision=1;
                    cameraDir="";
					visionMode[]= {
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={4};
                };

	            class Iron: optic {
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]= {
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					discreteDistance[] = {200};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
				};
            };
        };
    };
};
