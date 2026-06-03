#include "..\script_component.hpp"
/*
 * Loads the HitPart event handler for commando droids.
 *
 * Shield energy IS the unit's health pool. While shields are up, this EH
 * intercepts all damage and subtracts it from the shield pool. When the pool
 * hits zero the EH removes itself and re-enables ACE damage, handing all
 * further hits back to ACE medical as normal.
 *
 * Damage multipliers:
 *   Indirect fire (explosions) — 0.5× after LOS check
 *   Headshots                  — 2×
 *
 * Arguments:
 * 0: Unit <OBJECT> (passed as _this)
 *
 * Return Value:
 * None
 *
 * Public: No
 */

if !(local _this) exitWith {};

_this removeAllEventHandlers "HitPart";
_this addEventHandler [
    "HitPart",
    {
        (_this select 0) params [
            "_target", "_shooter", "_bullet", "_position",
            "_velocity", "_selection", "_ammo", "_direction",
            "_radius", "_surface", "_direct"
        ];

        if (!(alive _target) || (animationState _target in [
            "b1_droid_die_1","b1_droid_die_2","b1_droid_die_3",
            "b1_droid_die_4","b1_droid_die_5","b1_droid_die_6","b1_droid_die_7"
        ])) exitWith {};

        // Shields must be active to intercept
        if !(_target getVariable [QGVAR(shieldEnabled), false]) exitWith {};

        private _selName = _selection select 0;
        private _rawDmg  = _ammo select 0;

        private _hitDmg = switch true do {
            case !(_direct): {
                // Indirect fire — LOS check, then 0.5× if exposed
                private _pos = [
                    getPosASL _bullet # 0,
                    getPosASL _bullet # 1,
                    (getPosASL _bullet # 2) + 0.5
                ];
                if (count (lineIntersectsSurfaces [
                    _pos, eyePos _target, _bullet, _target, true, 1, "FIRE", "NONE"
                ]) != 0) exitWith { 0 };
                _rawDmg * 0.5
            };
            case (_selName in ["head", "neck", "face_hub"]): { _rawDmg * 2 };
            default { _rawDmg };
        };

        if (_hitDmg <= 0) exitWith {};

        private _energy = _target getVariable [QGVAR(shieldEnergy), 0];
        private _newEnergy = _energy - _hitDmg;

        if (_target isEqualTo player) then { [_hitDmg] call FUNC(shieldHitEffect) };

        if (_newEnergy <= 0) exitWith {
            _target setVariable [QGVAR(shieldEnergy),  0,     true];
            _target setVariable [QGVAR(shieldEnabled), false, true];
            _target setVariable [QGVAR(shieldBreached), true, true];
            _target removeAllEventHandlers "HitPart";

            // Re-enable ACE damage — ACE medical now handles all further damage
            _target allowDamage true;

            // Shield breach audio cue (local player only)
            if (hasInterface && _target isEqualTo player) then {
                playSound SHIELD_SOUND_BREACH;
            };
        };

        _target setVariable [QGVAR(shieldEnergy),       _newEnergy,                                    true];
        _target setVariable [QGVAR(shieldRegenTimeout), CBA_missionTime + SHIELD_REGEN_DELAY_HIT,      true];

        if (_target isEqualTo player) then {
            private _partKey = switch true do {
                case (_selName in ["head","neck","face_hub"]):  { QGVAR(dmg_head)  };
                case (_selName in ["leftarm","leftforearm"]):   { QGVAR(dmg_larm)  };
                case (_selName in ["rightarm","rightforearm"]): { QGVAR(dmg_rarm)  };
                case (_selName in ["leftleg","leftupleg"]):     { QGVAR(dmg_lleg)  };
                case (_selName in ["rightleg","rightupleg"]):   { QGVAR(dmg_rleg)  };
                default                                         { QGVAR(dmg_torso) };
            };
            player setVariable [_partKey, (player getVariable [_partKey, 0]) + _hitDmg];
        };
    }
];

