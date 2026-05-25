class GWEAPON(DC17S_ARC): GWEAPON(DC17S) {
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] DC-17s ARC";
    baseWeapon = QGWEAPON(DC17S_ARC);
    magazines[] = {QGMAG(DC17s_ARC)};
    magazineWell[] = {QGMAGWELL(DC17S_ARC)};

    GVAR_CORE(arsenal,whitelists)[] = {"ARC"};

    GVAR_CORE(weapons_core,addLinkedItems) = 1;

    muzzles[] = {"this", "Stun"};

    modes[] = {"Single", "FullAuto"};

    class Stun : EGVAR(weapons_core,Stun_Muzzle) {};

    class Single: Single {
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc17s_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };

    class FullAuto: Mode_FullAuto {
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

        recoil = "recoil_smg_03";
        recoilProne = "recoil_smg_03";
        reloadTime = 0.10;
        dispersion = 0.0015;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
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
                MRD_LIST
            };
        };
        class PointerSlot: PointerSlot {
            compatibleItems[] = {"MTI_flashlight_noModel","JLTS_DC17SA_flashlight"};
        };
        class MuzzleSlot : MuzzleSlot {
            compatibleItems[] = {"3AS_muzzle_DC17S_F"};
        };
    };

    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = QEGVAR(weapons_core,HMRD_Blue);
        };

        class LinkedItemsPointer {
            slot = "PointerSlot";
            item = QEGVAR(weapons_core,Flashlight_nomodel);
        };
    };

    class XtdGearInfo {
        model = QGVAR(arc);
        type = "Single";
    };
};

class GWEAPON(DC17S_Dual_ARC): ls_weapon_dc17s_dual 
{
    scope = 2;
    author = AUTHOR;
    displayName = "[SOB] DC-17s ARC (Dual)";
    baseWeapon = QGWEAPON(DC17S_Dual_ARC);
    magazines[] = {QGMAG(DC17s_ARC)};
    magazineWell[] = {QGMAGWELL(DC17S_ARC)};
    picture = QPATHTOF(data\ui\DC17S_Dual_ca.paa);
    reloadAction = "ls_reload_dc17s_dual";
    reloadMagazineSound[] = {"\ls\core\addons\sounds\weapons\reload\dc17s_dual.ogg",3.54813,1,10};

    muzzles[] = {"Right", "Left"};

    ls_isWeaponType = 0;
    GVAR_CORE(weapons_core,isDual) = 1;
    GVAR_CORE(weapons_core,addLinkedItems) = 1;

	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;

    class Right: GWEAPON(DC17S_ARC) {
        displayName = "[SOB] DC-17s (Right Hand)";
        magazines[] = {QGMAG(DC17s_ARC)};
        magazineWell[] = {QGMAGWELL(DC17S_ARC)};
    };

    class Left: Right {
        displayName = "[SOB] DC-17s (Left Hand)";
        showToPlayer = 0;
        muzzlePos = "usti hlavne left";
        muzzleEnd = "konec hlavne left";
    };

	class XtdGearInfo {
		model = QGVAR(arc);
		type = "Dual";
	};
};
