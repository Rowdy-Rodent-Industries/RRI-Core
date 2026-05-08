class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {

	class ItemCore;
	class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
		class Single;
    };
	class optic_Nightstalker: ItemCore {
		class ItemInfo;
	};
	class Pistol_Base_F;
	class hgun_P07_F: Pistol_Base_F {
		class Single;
		class WeaponSlotsInfo;
	};
    class EGVAR(weapons_core,Stun_Muzzle);

	class GWEAPON(causality): arifle_MX_Base_F
	{
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] Causality";
		baseWeapon = QGWEAPON(causality);
		magazines[]  = {QGMAG(Causality_base),QGMAG(Causality_Precision),QGMAG(causality_rail)};
		magazineWell[] = {QGMAGWELL(causality)};
		GVAR_CORE(arsenal,whitelists)[] = {"Commando","FieldSupport"};

		picture = QPATHTOF(data\ui\Causality_Base_ca.paa);
		UiPicture = QPATHTOF(data\ui\Causality_Base_ca.paa);

		hiddenSelectionsTextures[] = {QPATHTOF(data\Causilty_CO.paa),QPATHTOF(data\Causilty_CO.paa)};
		model = QPATHTOF(mti_causality.p3d);

		class EventHandlers
		{
			fired = QUOTE(_this spawn FUNC(fire));
		};

		modes[] = {"FullAuto","Single"};
		muzzles[] = {"this","Stun"};
		reloadAction = QGVAR(causality_Reload);
		reloadMagazineSound[] = {QPATHTOF(data\sounds\causality_reload.ogg),2,1,30};
		reloadSound[] = {QPATHTOF(data\sounds\causality_reload.ogg),2,1,30};

		handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anim\causality_hand.rtm)};

		class GunParticles
		{
			class FireEffect {
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = QGVAR(causality_smoke);
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					QEGVAR(weapons_causality,causality_Shot_SoundSet),
					QEGVAR(weapons_causality,causality_Tail_SoundSet)
				};
			};
			reloadTime = 0.55;
			dispersion=0.00001;
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
		sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					QEGVAR(weapons_causality,causality_Shot_SoundSet),
					QEGVAR(weapons_causality,causality_Tail_SoundSet)
				};
			};
			reloadTime=0.25;
			dispersion=0.0005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
		};

		class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
		    mass = 275;

            class CowsSlot: CowsSlot {
		    	compatibleItems[] = {
					MRCO_LIST,
					RCO_LIST,
					HOLO_LIST,
					QGVAR(causality_scope)
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

		initspeed=1000;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.7;
		recoil="recoil_pdw";
	};

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(causality);

	class GWEAPON(causaility_sidearm): hgun_P07_F {
		scope = 2;
		displayName = "[SOB] Causality Sidearm";
		model = QPATHTOF(mti_causality_sidearm.p3d);
		hiddenSelections[] = {"camo1","emissive"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\Sidearm_CO.paa),QPATHTOF(data\Sidearm_CO.paa)};
		baseWeapon = QGWEAPON(causaility_sidearm);
		magazines[] = {QGMAG(causality_precision)};
		reloadAction = "GestureReloadPistolHeavy02";
		recoil = "recoil_pistol_zubr";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr.wss", 0.562341, 1, 10};
		GVAR_CORE(arsenal,whitelists)[] = {"Commando","Fieldsupport"};

		class Single: Single {
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					QEGVAR(weapons_causality,causality_Shot_SoundSet),
					QEGVAR(weapons_causality,causality_Tail_SoundSet)
				};
			};

			dispersion = 0.0095;
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.25;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 30;
			holsterScale = 0.84;
			class CowsSlot: CowsSlot {
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = {
					MRD_LIST,
					MRCO_LIST,
					HOLO_LIST
				};
			};

            class MuzzleSlot: MuzzleSlot {
				compatibleItems[] = {};
			};

			class PointerSlot: PointerSlot {
				compatibleItems[] = {QEGVAR(weapons_core,Flashlight_nomodel),QEGVAR(weapons_core,Pointer_IR_nomdel)};
			};

            class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
	};

	class GVAR(causality_scope): optic_Nightstalker {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] Causality Scope";

		model = QPATHTOF(mti_causality_scope.p3d);

		GVAR_CORE(arsenal,whitelists)[] = {"Commando","FieldSupport"};

        class ItemInfo: ItemInfo {

			modelOptics=QPATHTOF(mti_reticle_causality.p3d);

            class OpticsModes {
				class NCTALKEP {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = ZOOM_FACTOR(8);
					opticsZoomMax = ZOOM_FACTOR(1);
					opticsZoomInit = ZOOM_FACTOR(1);
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=100;
                    distanceZoomMax=100;
                    memoryPointCamera="reticle";
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
	};
};
