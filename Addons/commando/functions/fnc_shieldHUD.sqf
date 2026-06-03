#include "..\script_component.hpp"
/*
 * Opens (or re-opens) the Republic Commando shield HUD bar and starts the
 * per-frame handler that keeps it updated.  Called from fnc_initBattery on
 * the local player's machine only.
 *
 * The HUD is defined in config.cpp under RscTitles >> RRI_CommandoShieldHUD.
 * Controls:
 *   3100 — dark bar background
 *   3101 — cyan fill (width scaled each tick)
 *   3102 — "SHIELD" label
 *   3103 — numeric "50 / 50" readout
 *   3104 — status tag (ACTIVE / OFFLINE / RECHARGING)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Author: Ramsey
 */

if (!hasInterface) exitWith {};

// Tear down any existing PFH first
if !(isNil QGVAR(shieldHUD_id)) then {
    [GVAR(shieldHUD_id)] call CBA_fnc_removePerFrameHandler;
    GVAR(shieldHUD_id) = nil;
};

[{!isNull findDisplay 46}, {
    1 cutRsc ["RRI_CommandoShieldHUD", "PLAIN"];

    GVAR(shieldHUD_id) = [{
    private _display = uiNamespace getVariable ["RRI_CommandoShieldHUD", displayNull];
    if (isNull _display) exitWith {
        [_this select 1] call CBA_fnc_removePerFrameHandler;
        GVAR(shieldHUD_id) = nil;
    };

    private _maxEnergy = GET_NUMBER(configFile >> "CfgWeapons" >> (vest player) >> QGVAR(shieldMax), SHIELD_MAX_DEFAULT);
    private _energy    = player getVariable [QGVAR(shieldEnergy), _maxEnergy];
    private _enabled   = player getVariable [QGVAR(shieldEnabled), false];
    private _breached  = player getVariable [QGVAR(shieldBreached), false];
    private _pct       = (_energy / _maxEnergy) min 1 max 0;

    // --- Colours ---
    private _color = switch true do {
        case (_pct > 0.60): { [0.0,  0.70, 1.0,  0.90] };
        case (_pct > 0.30): { [0.2,  0.55, 0.95, 0.90] };
        default { [0.6,  0.20, 0.80, 0.90] };  // purple-ish when critical
    };
    private _colorHex = switch true do {
        case (_pct > 0.60): { "#00BFFF" };
        case (_pct > 0.30): { "#3388F2" };
        default { "#9933CC" };
    };

    // --- Fill bar: scale width ---
    private _barFill = _display displayCtrl 3101;
    private _bgBar   = _display displayCtrl 3100;
    private _bgPos   = ctrlPosition _bgBar;
    private _maxW    = _bgPos select 2;

    private _fillPos = ctrlPosition _barFill;
    _fillPos set [2, _maxW * _pct];
    _barFill ctrlSetPosition _fillPos;
    _barFill ctrlSetBackgroundColor _color;
    _barFill ctrlCommit 0.08;

    // --- Numeric value ---
    (_display displayCtrl 3103) ctrlSetStructuredText parseText format [
        "<t align='right' size='0.45' color='%1' font='PuristaMedium'>%2 / %3</t>",
        _colorHex, round _energy, round _maxEnergy
    ];

    // --- Status tag ---
    private _statusText = switch true do {
        case (!_enabled && _breached): {
            private _timeLeft = round ((player getVariable [QGVAR(shieldRegenTimeout), 0]) - CBA_missionTime) max 0;
            format ["<t align='left' size='0.40' color='#FF3300' font='PuristaMedium'>OFFLINE  [RECHARGING IN %1s]</t>", _timeLeft]
        };
        case (!_enabled): {
            "<t align='left' size='0.40' color='#888888' font='PuristaMedium'>OFFLINE</t>"
        };
        case (_pct < 1): {
            "<t align='left' size='0.40' color='#00BFFF' font='PuristaMedium'>ACTIVE  [RECHARGING]</t>"
        };
        default {
            "<t align='left' size='0.40' color='#00BFFF' font='PuristaMedium'>ACTIVE</t>"
        };
    };
    (_display displayCtrl 3104) ctrlSetStructuredText parseText _statusText;

    }, 0.1, []] call CBA_fnc_addPerFrameHandler;
}] call CBA_fnc_waitUntilAndExecute;
