#include "..\script_component.hpp"
/*
 * Called from Extended_Init_EventHandlers for commando unit classes.
 * Runs on all machines; shields are only initialised on the local owner.
 * Only initialises the battery/shield system when the unit has a shield vest.
 *
 * Arguments:
 * 0: Unit <OBJECT>  (_this select 0 from the EH)
 *
 * Return Value:
 * None
 */

params ["_unit"];

// Only init for units that have a shield-capable vest
if !([_unit] call FUNC(hasShield)) exitWith {};

[_unit] call FUNC(initBattery);
