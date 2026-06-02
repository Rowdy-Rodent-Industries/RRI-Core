[
    QGVAR(SmartScopeRange),
    "SLIDER",
    ["Smart Scope Detection Range", "Smart Scope Detection Range in meters"],
    ["RRI", "Weapons"],
    [100, 1500, 500, 0],      // min range, max range, default range, make sure not decimals for meters  (I RECOMMEND LOWER AS HIGHER = MORE TARGETS)
    true
] call CBA_fnc_addSetting;
