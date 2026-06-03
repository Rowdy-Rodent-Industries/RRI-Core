[[MOD_NAME_BEAUTIFIED, QUOTE(COMPONENT_BEAUTIFIED)], QGVAR(key_toggleKatarnHUD), ["Toggle Katarn HUD System", "Hotkey to quickly toggle the Katarn HUD display interface on/off."],{}, {
    if ([ACE_player] call FUNC(hasBattery)) then {
        private _hudEnabled = uiNamespace getVariable [QGVAR(HUD_enabled), true];
        if (_hudEnabled) then {
            uiNamespace setVariable [QGVAR(HUD_enabled), false];
            // Clear out display layers immediately when shutting system down
            "rri_commando_hud_layer" cutText ["", "PLAIN"];
            "rri_commando_team_hud_layer" cutText ["", "PLAIN"];
            ["Katarn HUD: Off"] call ace_common_fnc_displayTextStructured;
        } else {
            uiNamespace setVariable [QGVAR(HUD_enabled), true];
            ["Katarn HUD: On"] call ace_common_fnc_displayTextStructured;
        };
    } else {
        ["You do not have a compatible Katarn System Vest!"] call ace_common_fnc_displayTextStructured;
    };
}, nil, false] call CBA_fnc_addKeybind;

[[MOD_NAME_BEAUTIFIED, QUOTE(COMPONENT_BEAUTIFIED)], QGVAR(key_toggleKatarnHUDMode), ["Toggle Katarn HUD Mode", "Hotkey to quickly swap between the personal User Panel and the Team Panel."],{}, {
    if ([ACE_player] call FUNC(hasBattery)) then {
        if !(uiNamespace getVariable [QGVAR(HUD_enabled), true]) exitWith {
            ["Cannot change mode while HUD System is offline!"] call ace_common_fnc_displayTextStructured;
        };

        private _currentMode = uiNamespace getVariable [QGVAR(activeHUDMode), 0];
        if (_currentMode == 0) then {
            uiNamespace setVariable [QGVAR(activeHUDMode), 1];
            "rri_commando_hud_layer" cutText ["", "PLAIN"];
            ["HUD Mode: Team Panel"] call ace_common_fnc_displayTextStructured;
        } else {
            uiNamespace setVariable [QGVAR(activeHUDMode), 0];
            "rri_commando_team_hud_layer" cutText ["", "PLAIN"];
            ["HUD Mode: Personal Diagnostics"] call ace_common_fnc_displayTextStructured;
        };
    } else {
        ["You do not have a compatible Katarn System Vest!"] call ace_common_fnc_displayTextStructured;
    };
}, nil, false] call CBA_fnc_addKeybind;

[[MOD_NAME_BEAUTIFIED, QUOTE(COMPONENT_BEAUTIFIED)], QGVAR(key_toggleBatteryGrid), ["Toggle Katarn Battery", "Hotkey to quickly boot up or shut down the vest battery power grid."],{}, {
    if ([ACE_player] call FUNC(hasBattery)) then {
        private _enabled = ACE_player getVariable [QGVAR(batteryEnabled), false];
        if (_enabled) then {
            ACE_player setVariable [QGVAR(batteryEnabled), false, true];
            ["Katarn Battery: Offline"] call ace_common_fnc_displayTextStructured;
        } else {
            ACE_player setVariable [QGVAR(batteryEnabled), true, true];
            ["Katarn Battery: Online"] call ace_common_fnc_displayTextStructured;
        };
    } else {
        ["You do not have a compatible Katarn System Vest!"] call ace_common_fnc_displayTextStructured;
    };
}, nil, false] call CBA_fnc_addKeybind;
