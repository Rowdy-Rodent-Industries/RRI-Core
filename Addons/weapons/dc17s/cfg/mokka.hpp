class GWEAPON(DC17S_Mokka): GWEAPON(DC17S_ARC) {
    displayName = "[SOB] DC-17sm";
    baseWeapon = QGWEAPON(DC17S_Mokka);
    model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";

    hiddenSelectionsTextures[] = {QPATHTOF(data\DC17SA_Mokka_co.paa)};

        modes[] = {"Single"};

    class Single: Single {
        dispersion = 0.00515;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 20;
        class CowsSlot: CowsSlot {
            compatibleItems[] = {
                MRCO_LIST
            };
        };
    };

    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = QEGVAR(weapons_core,HMRCO_Green);
        };

        class LinkedItemsPointer {
            slot = "PointerSlot";
            item = QEGVAR(weapons_core,Flashlight_nomodel);
        };
    };
    
    class XtdGearInfo {
        model = QGVAR(mokka);
        type = "Single";
    };
};

class GWEAPON(DC17S_Dual_Mokka): GWEAPON(DC17S_Dual_ARC) {
    displayName = "[SOB] DC-17sm (Dual)";

	class XtdGearInfo {
	    model = QGVAR(mokka);
	    type = "Dual";
	};
};
