[
[MOD_NAME_BEAUTIFIED, QUOTE(COMPONENT_BEAUTIFIED)], QGVAR(key_smartScopeToggle), ["Toggle Smart Scope", "Toggles the smart scope overlay."],{}, { 
        GVAR(Active) = !GVAR(Active); 
        [format["Smart Scope %1", ["OFF", "ON"] select GVAR(Active)]] call ace_common_fnc_displayTextStructured;
    }, 
    [0x25, [false, false, false]], 
    false
] call CBA_fnc_addKeybind;

[
[MOD_NAME_BEAUTIFIED, QUOTE(COMPONENT_BEAUTIFIED)], QGVAR(key_smartScopeMode), ["Switch Scope Mode", "Switches between Infantry and Vehicle tracking."],{}, { 
        GVAR(Mode) = ["INF", "VEH"] select (GVAR(Mode) == "INF");
        [format["Smart Scope Mode: %1", GVAR(Mode)]] call ace_common_fnc_displayTextStructured;
    }, 
    [0x25, [false, true, false]], 
    false
] call CBA_fnc_addKeybind;
