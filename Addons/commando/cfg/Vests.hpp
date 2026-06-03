//GVAR CORE MARCOS NEED FIXED

class GVEST(base) : ls_sob_commando_vest {
    author = AUTHOR;
    displayName = "[SOB] Katarn I Commando Vest";

    GVAR(hasBattery) = 1;
    GVAR(batteryCharge) = 100;
    GVAR(batteryRecharge) = 4;
    GVAR(regenTimeoutMod) = 1;

    picture = QPATHTOF(data\ui\RCVest.paa);

    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        mass = 80;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
    class XtdGearInfo {
        model = QGVAR(vest);
        role = "Base";
        camo = "White";
    };
};

class GVEST(Cadet) : ls_sob_commando_vest {
    author = AUTHOR;
    displayName = "[SOB] Katarn I Commando Vest (Cadet)";

    GVAR(hasBattery) = 1;
    GVAR(batteryCharge) = 75;
    GVAR(batteryRecharge) = 4;
    GVAR(regenTimeoutMod) = 1;

    picture = QPATHTOF(data\ui\RCVest.paa);

    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        mass = 80;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
    class XtdGearInfo {
        model = QGVAR(vest);
        role = "Cadet";
        camo = "White";
    };
};

class GVEST(sniper) : ls_sob_commando_sniper_vest {
    author = AUTHOR;
    displayName = "[SOB] Katarn I Commando Vest (Sniper)";

    GVAR(hasBattery) = 1;
    GVAR(batteryCharge) = 100;
    GVAR(batteryRecharge) = 4;
    GVAR(regenTimeoutMod) = 1;

    picture = QPATHTOF(data\ui\Sniper1.paa);

    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        mass = 80;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
    class XtdGearInfo {
        model = QGVAR(vest);
        role = "Sniper";
        camo = "White";
    };
};

class GVEST(tech) : ls_sob_commando_tech_vest {
    author = AUTHOR;
    displayName = "[SOB] Katarn I Commando Vest (Tech)";

    GVAR(hasBattery) = 1;
    GVAR(batteryCharge) = 100;
    GVAR(batteryRecharge) = 4;
    GVAR(regenTimeoutMod) = 1;

    picture = QPATHTOF(data\ui\Tech1.paa);

    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        mass = 80;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
    class XtdGearInfo {
        model = QGVAR(vest);
        role = "Tech";
        camo = "White";
    };
};

class GVEST(eod) : ls_sob_commando_eod_vest {
    author = AUTHOR;
    displayName = "[SOB] Katarn I Commando Vest (EOD)";

    GVAR(hasBattery) = 1;
    GVAR(batteryCharge) = 125;
    GVAR(batteryRecharge) = 4;
    GVAR(regenTimeoutMod) = 1;

    picture = QPATHTOF(data\ui\Demo1.paa);

    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        mass = 80;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
    class XtdGearInfo {
        model = QGVAR(vest);
        role = "EOD";
        camo = "White";
    };
};

class GVEST(sl) : ls_sob_commando_sl_vest {
    author = AUTHOR;
    displayName = "[SOB] Katarn I Commando Vest (SL)";

    GVAR(hasBattery) = 1;
    GVAR(batteryCharge) = 100;
    GVAR(batteryRecharge) = 4;
    GVAR(regenTimeoutMod) = 1;

    picture = QPATHTOF(data\ui\SL1.paa);

    class ItemInfo: ItemInfo {
        containerClass = VEST_SUPPLYCLASS;
        mass = 80;
        vestType = "Rebreather";
        VEST_PROTECTION;
    };
    class XtdGearInfo {
        model = QGVAR(vest);
        role = "SL";
        camo = "White";
    };
};
