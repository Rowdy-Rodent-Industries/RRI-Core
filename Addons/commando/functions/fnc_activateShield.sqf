#include "..\script_component.hpp"
/*
 * Activates the commando droid's energy shield. Does nothing if the shield
 * is already active. Applies a regen delay so the shield doesn't charge
 * instantly on activation.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 */

params ["_unit"];

if !(local _unit) exitWith {};
if (_unit getVariable [QGVAR(shieldEnabled), false]) exitWith {};
if !([_unit] call FUNC(hasShield)) exitWith {};

_unit setVariable [QGVAR(shieldEnabled),      true,                                     true];
_unit setVariable [QGVAR(shieldBreached),     false,                                    true];
_unit setVariable [QGVAR(shieldRegenTimeout), CBA_missionTime + SHIELD_REGEN_DELAY_HIT, true];

// Re-intercept damage — the HitPart EH is removed when shields are breached
_unit allowDamage false;
_unit call FUNC(loadHitHandlers);

// Reopen the shield HUD for the local player
if (hasInterface && _unit isEqualTo player) then {
    [] call FUNC(shieldHUD);
    playSound SHIELD_SOUND_ACTIVATE;
};
