#include "..\script_component.hpp"
/*
 * Checks whether the given unit has any equipped item with Katarn OS capability
 * (rri_commando_hasKatarn = 1). Caches the result for the local player.
 * Cache is cleared on loadout change (see XEH_postInit).
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Has Katarn OS? <BOOL>
 *
 * Author: Ramsey
 */

params ["_unit"];

if ((_unit isEqualTo ACE_Player) && !(isNil QGVAR(hasKatarnCache))) exitWith { GVAR(hasKatarnCache) };

private _items = [_unit] call ace_common_fnc_uniqueItems;
_items pushBack (headgear _unit);
_items pushBack (uniform _unit);
_items pushBack (vest _unit);
_items append (assignedItems _unit);

private _uniqueItems = [_items] call ace_common_fnc_uniqueElements;

private _iCount = {
    GET_BOOL(configFile >> "CfgWeapons" >> _x >> QGVAR(hasKatarn))
} count _uniqueItems;

// Backpack is CfgVehicles
_iCount = _iCount + GET_NUMBER(configFile >> "CfgVehicles" >> (backpack _unit) >> QGVAR(hasKatarn), 0);

// Goggles are CfgGlasses
_iCount = _iCount + GET_NUMBER(configFile >> "CfgGlasses" >> (goggles _unit) >> QGVAR(hasKatarn), 0);

private _hasKatarn = _iCount > 0;

if (_unit isEqualTo ACE_Player) then {
    GVAR(hasKatarnCache) = _hasKatarn;
};

_hasKatarn
