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

    class Rifle_Long_Base_F;
    class GM6_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
    };

    class GWEAPON(Bowcaster_base): GM6_base_F {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Bowcaster";
        descriptionShort = "Bowcaster used by some Exotic Weapon Specialists of the Special Operations Brigade.";

        baseWeapon = QGWEAPON(Bowcaster);

        magazines[] = {QGMAG(Bowcaster_base)};
        magazineWell[] = {QGMAGWELL(bowcaster)};
		GVAR_CORE(arsenal,whitelists)[] = {"ARC","Commando","Jumptrooper"};

        reloadAction = "GestureReload_JLTS_DC15S";
        handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(anims\bowcaster_handanim.rtm)};

		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10}; //todo

		recoil = "recoil_mx";
		maxRecoilSway = 0.0225;
		swayDecaySpeed = 1.25;
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1;

		class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {QGVAR(Bowcaster_Shot_SoundSet),QGVAR(Bowcaster_Tail_SoundSet),QGVAR(Bowcaster_InteriorTail_SoundSet)};
			};

			reloadTime = 0.26;
			dispersion = 0.00025;
			soundContinuous = 0;

            recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";

            minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};

		class single_medium_optics1: Single {
			showToPlayer = 0;
			requiredOpticType = 1;

            minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
		};

        class single_far_optics2: single_medium_optics1 {
			showToPlayer = 0;
            requiredOpticType = 2;

            minRange = 100;
			minRangeProbab = 0.2;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 2100;
			maxRangeProbab = 0.3;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 1000;
		};

        class WeaponSlotsInfo: WeaponSlotsInfo {
		    mass = 275;

            class CowsSlot: CowsSlot {
		    	compatibleItems[] = {
                    QGVAR(Bowcaster_Scope),
					MRCO_LIST,
					RCO_LIST,
					HOLO_LIST,
					QEGVAR(weapons_core,reflex),
					QEGVAR(weapons_core,ACOG_2)
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

		class GunParticles {
			class FirstEffect {
				effectName = "SniperCloud";
				directionName = "Konec hlavne";
				positionName = "Usti hlavne";
			};
		};
    };

    class GWEAPON(Bowcaster): GWEAPON(Bowcaster_base) {
        scope = 2;

        model = QPATHTOF(mti_Bowcaster.p3d);

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\Bowcaster_co.paa)};

        picture = QPATHTOF(data\icon\Bowcaster_base_ca.paa);

        muzzles[] = {"this", "Heavy"};

        class Heavy: GWEAPON(Bowcaster_base) {
			displayName = "[SOB] Bowcaster (Heavy)";
			magazines[] = {QGMAG(Bowcaster_Heavy),QGMAG(Bowcaster_Heavy_2)};
        	magazineWell[] = {QGMAGWELL(bowcaster_heavy)};

			class Single: Single {
				sounds[] = {"StandardSound"};
				class BaseSoundModeType{};
            	class StandardSound: BaseSoundModeType {
					soundSetShot[] = {QGVAR(Bowcaster_Heavy_Shot_SoundSet),QGVAR(Bowcaster_Heavy_Tail_SoundSet),QGVAR(Bowcaster_Heavy_InteriorTail_SoundSet)};
				};
				reloadTime = 0.6;
				dispersion = 0.00025;

				recoil = "recoil_single_gm6";
				recoilProne = "recoil_single_prone_gm6";
			};
		};
    };

	class ItemCore;
	class optic_Nightstalker: ItemCore {
		class ItemInfo;
	};
	class GVAR(Bowcaster_Scope_Base): optic_Nightstalker {
		scope=1;
		author=AUTHOR;
		displayName="[SOB] Bowcaster Scope";
		descriptionShort="Bowcaster Top-Mounted Optics.";
		weaponInfoType="RscOptics_nightstalker";

	    class ItemInfo : ItemInfo {
			mass=12;

	        class OpticsModes {
				class NCTALKEP {
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]= {
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin = ZOOM_FACTOR(16);
					opticsZoomMax = ZOOM_FACTOR(4);
					opticsZoomInit = ZOOM_FACTOR(4);
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					memoryPointCamera="opticView";
					visionMode[]= {
						"Normal",
						"NVG",
	                    "TI"
					};
					thermalMode[]={5,6};
					opticsFlare=1;
					opticsDisablePeripherialVision=0;
					cameraDir="";
				};

	            class Iron: NCTALKEP {
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
		inertia=0.2;
	};

	class GVAR(Bowcaster_Scope) : GVAR(Bowcaster_Scope_Base) {
		scope = 2;

		model=QPATHTOF(mti_bowcaster_scope.p3d);
		picture=QPATHTOF(data\ui\bowcaster_scope_ui_ca.paa);
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_MUZZLEFLASH_MACRO(Bowcaster);
};
