class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons {
    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class GWEAPON(defib_base): Pistol_Base_F {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Field Defibrillation Unit";
        descriptionShort="Republic Field Defibrillation Unit";

        GVAR_CORE(arsenal,whitelists)[] = {"JumpTrooper","Commando","Fieldsupport","ARC"};

        baseWeapon = QGWEAPON(defib);

        model=QPATHTOF(RCHealing_Low.p3d);

        picture=QPATHTOF(data\ui\defib_icon_ca.paa);
        UiPicture=QPATHTOF(data\ui\defib_icon_ca.paa);

        reloadAction="GestureReloadPistol";
        magazineReloadSwitchPhase=0.40000001;
        discreteDistanceInitIndex=0;
        maxRecoilSway=0.1;
        swayDecaySpeed=1.25;
        inertia=0.5;
        initSpeed=-1;
        recoil="recoil_pistol_signal";

        magazines[]= { QGMAG(defib) };
        magazineWell[] = { QGMAGWELL(defib) };

        class GunParticles: GunParticles {
            class SecondEffect {
                positionName="Nabojnicestart";
                directionName="Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };

        class WeaponSlotsInfo:WeaponSlotsInfo {
            class CowsSlot: SlotInfo {
                linkProxy="";
            };

            allowedSlots[]={801,701,901};
            holsterOffset="holster";
            holsterScale=1;
        };

        opticsZoomMin=0.375;
        opticsZoomMax=1.1;
        opticsZoomInit=0.75;
        distanceZoomMin=300;
        distanceZoomMax=300;

        weaponInfoType="RscWeaponZeroing";

        dexterity=1.8;
        caseless[]= {
            "",
            1,
            1,
            1
        };

        soundBullet[]= {
            "caseless",
            1
        };

        //selectionFireAnim="muzzleFlash";

        modes[]= {
            "Single",
            "single_medium_optics1",
            "single_far_optics2"
        };

        class Single: Mode_SemiAuto {
            sounds[]= { "StandardSound" };

            class BaseSoundModeType {
                closure1[]={};
                closure2[]={};
                soundClosure[]={};
            };

            class StandardSound: BaseSoundModeType {
                soundSetShot[]= {
                    QGVAR(Shot_SoundSet),
                    QGVAR(Tail_SoundSet),
                    QGVAR(InteriorTail_SoundSet)
                };
            };

            reloadTime = 5.5;
            magazineReloadTime = 5.5;
        };

        class single_medium_optics1: Single {
            requiredOpticType=1;
            showToPlayer=0;
            minRange=2;
            minRangeProbab=0.2;
            midRange=450;
            midRangeProbab=0.69999999;
            maxRange=600;
            maxRangeProbab=0.2;
            aiRateOfFire=6;
            aiRateOfFireDistance=600;
        };

        class single_far_optics2: single_medium_optics1 {
            requiredOpticType=2;
            showToPlayer=0;
            minRange=100;
            minRangeProbab=0.1;
            midRange=500;
            midRangeProbab=0.60000002;
            maxRange=700;
            maxRangeProbab=0.050000001;
            aiRateOfFire=8;
            aiRateOfFireDistance=700;
        };

        aiDispersionCoefY=6;
        aiDispersionCoefX=4;

        drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10}; // todo:

        reloadMagazineSound[]= {
            "A3\sounds_f\weapons\reloads\new_MX.wss",
            "db-8",
            1,
            30
        };

        class EventHandlers {
            fired = QUOTE(_this call FUNC(fired));
        };
    };

    class GWEAPON(defib): GWEAPON(defib_base) {
        scope=2;

        hiddenSelections[] = {"camo","front","front2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo_co.paa),
            QPATHTOF(data\camo_co.paa),
            QPATHTOF(data\camo2_ca.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\camo.rvmat),
            "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
            QPATHTOF(data\camo.rvmat)
        };
    };
};
