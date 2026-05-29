class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class UGL_F;

class CfgWeapons {
    class EGVAR(weapons,stun);

	class ItemCore;
	class optic_Nightstalker: ItemCore {
		class ItemInfo;
	};
	class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
		class GunClouds;
        class GunParticles;
		class Single;
    };
	class GWEAPON(fc36_base): arifle_MX_Base_F {
		scope = 2;
		displayName = "[SOB] FC-36";
		descriptionShort = "Boltblaster used by Assault Specialist of the Special Operations Brigade";
		baseWeapon = QGWEAPON(fc36_base);

		class GunParticles {
			class FireEffect {
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = QGVAR(fc36_fire);
			};
		};

		model = QPATHTOF(rri_fc36.p3d);
		hiddenSelections[] = {"Camo1"};
		hiddenselectionsmaterials[] = {QPATHTOF(data\gun.rvmat)};
		hiddenSelectionsTextures[] = {QPATHTOF(data\MainGun_CO.paa)};

		picture = QPATHTOF(data\ui\fc36_ca.paa);
		UiPicture = QPATHTOF(data\ui\fc36_ca.paa);

		magazines[] = { QGMAG(fc36)};
		magazineWell[] = {QGMAGWELL(fc36)};
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

		drySound[] = {QPATHTOEF(weapons,core\data\sounds\empty.wss),5,1,10};

		handAnim[] = {"OFP2_ManSkeleton",QPATHTOF(data\anims\fc36_hand.rtm)};

		recoil = QEGVAR(weapons_Core,dp23hp_recoil);
		reloadMagazineSound[] = {QPATHTOF(data\sounds\fc36_reload.ogg),2.3,1,30};
		reloadSound[] = {QPATHTOF(data\sounds\fc36_reload.ogg),2.3,1,30};
		reloadAction = QGVAR(fc36_Reload);
		maxRecoilSway = 0.03;
		swayDecaySpeed = 1.25;
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1;
		ace_overheating_mrbs = 100000;

		modes[] = {"Single"};

		class Single: Mode_SemiAuto {
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					QGVAR(fc36_Shot_SoundSet),
					QGVAR(fc36_Tail_SoundSet)
				};
			};

			reloadTime = 1.00;
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

		class Stun : EGVAR(weapons,stun) {};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 97;
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
					HOLO_LIST,
					MRD_LIST,
					QGVAR(fc36_scope)
				};
			};

			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = { RAILATTACHMENT_LIST };
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {};
			};
		};
	};

	class GVAR(fc36_scope): optic_Nightstalker {
		scope = 2;
		author = AUTHOR;
		displayName = "[SOB] fc36 Scope";

		model = QPATHTOF(rri_fc36_scope.p3d);

		picture = QPATHTOF(data\ui\fc36_scope_ca.paa);
		UiPicture = QPATHTOF(data\ui\fc36_scope_ca.paa);

		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};

        class ItemInfo: ItemInfo {
			modelOptics=QPATHTOF(rri_reticle_fc36.p3d);
            class OpticsModes {
				class NCTALKEP {
                    opticsID=1;
                    useModelOptics=1;
                    opticsPPEffects[]={ "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = ZOOM_FACTOR(12);
					opticsZoomMax = ZOOM_FACTOR(4);
					opticsZoomInit = ZOOM_FACTOR(4);
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

	WEAPON_BCSEWPN_HEADER;
	WEAPON_BCSEWPN_ZASLEH_MACRO(fc36_base);
};
