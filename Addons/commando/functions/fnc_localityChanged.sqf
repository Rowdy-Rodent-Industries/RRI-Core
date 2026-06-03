#include "..\script_component.hpp"
/*
 * Re-registers or removes HitPart EH when the unit's locality changes.
 * Called from the OwnerChanged event handler registered in fnc_initDroid.
 * Follows the pangolin fnc_localityChangedEH pattern.
 *
 * Arguments:
 * 0: Unit   <OBJECT>
 * 1: Is now local to this machine <BOOL>
 *
 * Return Value:
 * None
 */

params ["_unit", "_isLocal"];

if (_isLocal) then {
    _unit call FUNC(loadHitHandlers);
    _unit call FUNC(initShield);
} else {
    _unit removeAllEventHandlers "HitPart";

    // Tear down the shield PFH — it will be restarted on the new owner via initShield
    private _pfhID = _unit getVariable [QGVAR(shield_pfh), -1];
    if (_pfhID != -1) then {
        [_pfhID] call CBA_fnc_removePerFrameHandler;
        _unit setVariable [QGVAR(shield_pfh), -1];
    };
};
