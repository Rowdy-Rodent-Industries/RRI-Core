#include "script_component.hpp"

[
    QGVAR(baseBatteryCharge),
    "SLIDER",
    ["Base Shield Strength", "Global value to adjust the base strength of the Katarn battery's shields."],
    COMPONENT_NAME,
    [1,1000,125,0],
    true,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(baseBatteryRecharge),
    "SLIDER",
    ["Base Battery Regen", "Global value to adjust the base regen rate of the katarn battery in (charge / s)."],
    COMPONENT_NAME,
    [0.1,10,2,1],
    true,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(regenTimeoutHit),
    "SLIDER",
    ["Battery Regen Timeout - Hit", "Delay in seconds after a player takes damage until the katarn battery begins recharging again."],
    COMPONENT_NAME,
    [1,300,7,0],
    true,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(regenTimeoutBreach),
    "SLIDER",
    ["Battery Regen Timeout - Breached", "Delay in seconds after a shield is breached until the katarn battery begins recharging again."],
    COMPONENT_NAME,
    [1,300,15,0],
    true,
    {},
    false
] call CBA_fnc_addSetting;
