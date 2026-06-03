#include "script_component.hpp"

//events
call FUNC(katarnUserHUD);
call FUNC(katarnTeamHUD);
[QGVAR(activateBattery), {_this call FUNC(activateBattery)}] call CBA_fnc_addEventHandler;
[QGVAR(deactivateShield), {_this call FUNC(deactivateBattery)}] call CBA_fnc_addEventHandler;
[QGVAR(onHitLocal), {_this call FUNC(shieldDamagedLocal)}] call CBA_fnc_addEventHandler;
[QGVAR(particleEffects), {_this call FUNC(shieldParticles)}] call CBA_fnc_addEventHandler; 

[QGVAR(batteryBreached), {
    params ["_unit"];
    private _regenTimeoutMod = ([_unit] call FUNC(getBatteryData)) select 3;
    _unit setVariable [QGVAR(regenTimeout), CBA_missionTime + GVAR(regenTimeoutBreach) + _regenTimeoutMod];
    _unit setVariable [QGVAR(batteryEnergy), 0];
    [QGVAR(particleEffects), [_unit, ptcl_breach]] call CBA_fnc_globalEvent;
    playSound QGVAR(breach);
}] call CBA_fnc_addEventHandler;

if (!hasInterface) exitWith {};

//katarn systems
private _katarnMenuAction = [
    QGVAR(KatarnSystemsMenu),
    "Katarn Systems",
    "",
    {true},
    { [ACE_player] call FUNC(hasBattery) }
] call ace_interact_menu_fnc_createAction;

[typeOf ACE_player, 1, ["ACE_SelfActions"], _katarnMenuAction] call ace_interact_menu_fnc_addActionToXeh;

//toggle battery
private _toggleBatteryAction = [
    QGVAR(ToggleBatteryAction),
    "Toggle Battery Grid",
    "", 
    {
        private _enabled = ACE_player getVariable [QGVAR(batteryEnabled), false];
        if (_enabled) then {
            ACE_player setVariable [QGVAR(batteryEnabled), false, true];
            ["Katarn Battery: Offline"] call ace_common_fnc_displayTextStructured;
        } else {
            ACE_player setVariable [QGVAR(batteryEnabled), true, true];
            ["Katarn Battery: Online"] call ace_common_fnc_displayTextStructured;
        };
    },
    { [ACE_player] call FUNC(hasBattery) }
] call ace_interact_menu_fnc_createAction;
[typeOf ACE_player, 1, ["ACE_SelfActions", QGVAR(KatarnSystemsMenu)], _toggleBatteryAction] call ace_interact_menu_fnc_addActionToXeh;
