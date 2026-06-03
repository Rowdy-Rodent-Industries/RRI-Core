class CfgSounds {
    class GVAR(breach) {
        name = "Shield Breached";
        sound[] = { QPATHTOF(data\sounds\ShieldBreach.wss), 1, 1, 100 };
        titles[] = { 0, "Shield Breached" };
    };
    class GVAR(full_charge) {
        name = "Battery Fully Charged";
        sound[] = { QPATHTOF(data\sounds\BatteryFullyCharged.wss), 1, 1, 100 };
        titles[] = { 0, "Battery Fully Charged" };
    };
    class GVAR(half_charge) {
        name = "Battery Half Charge";
        sound[] = { QPATHTOF(data\sounds\BatteryHalf.wss), 1, 1, 100 };
        titles[] = { 0, "Energy at 50 Percent" };
    };
    class GVAR(recharging) {
        name = "Battery Recharging";
        sound[] = { QPATHTOF(data\sounds\ShieldRecharge.wss), 1, 1, 100 };
        titles[] = { 0, "Battery Recharging" };
    };
    class GVAR(shutdown) {
        name = "Battery Shutdown";
        sound[] = { QPATHTOF(data\sounds\Shield_Offline.wss), 1, 1, 100 };
        titles[] = { 0, "Battery Shutdown" };
    };
    class GVAR(startup) {
        name = "Battery Startup";
        sound[] = { QPATHTOF(data\sounds\Shield_Online.wss), 1, 1, 100 };
        titles[] = { 0, "Battery Startup" };
    };
};