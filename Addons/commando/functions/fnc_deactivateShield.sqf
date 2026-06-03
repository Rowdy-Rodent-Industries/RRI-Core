#include "..\script_component.hpp"
/*
 * Deactivates the commando droid's energy shield. Shield energy is preserved
 * so re-activation resumes from the same level rather than starting from zero.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 */

params ["_unit"];

if !(local _unit) exitWith {};
if !(_unit getVariable [QGVAR(shieldEnabled), false]) exitWith {};

_unit setVariable [QGVAR(shieldEnabled),  false, true];
_unit setVariable [QGVAR(shieldBreached), false, true];

// Remove the HitPart EH and hand damage back to ACE
_unit removeAllEventHandlers "HitPart";
_unit allowDamage true;

// Close the shield HUD for the local player
if (hasInterface && _unit isEqualTo player) then {
    if !(isNil QGVAR(shieldHUD_id)) then {
        [GVAR(shieldHUD_id)] call CBA_fnc_removePerFrameHandler;
        GVAR(shieldHUD_id) = nil;
    };
    1 cutRsc ["RRI_CommandoShieldHUD", "PLAIN", 0, false];
};
