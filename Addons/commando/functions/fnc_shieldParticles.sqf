#include "..\script_component.hpp"

/*
Description: Particles for Katarn Shield/Battery. More of a pulse
*/
params ["_unit", "_type"];

if !(_type in [ptcl_hit, ptcl_breach]) exitWith {};
if !(canSuspend) exitWith { _nul = _this spawn FUNC(shieldParticles); };

switch (_type) do {
    case ptcl_hit: {
        private _particles = "#particlesource" createVehicle getPos _unit;
        _particles attachTo [_unit, [0, 0, 0], "Spine3"];
        _particles setParticleRandom [0, [0.1, 0.1, 0.1], [0.05, 0.05, 0.05], 0, 0.1, [0, 0, 0, 0], 0, 0];
        _particles setParticleParams [
            ["\A3\data_f\ParticleEffects\Universal\Universal", 16, 13, 2, 0],
            "",
            "Billboard",
            1,
            0.15,
            [0, 0, 0],
            [0, 0, 0],
            0,
            10,
            7.9,
            0,
            [0.2, 1.2, 1.8],
            [
                [0, 0.8, 1, 0.8],
                [0, 0.4, 1, 0.6],
                [0, 0.1, 0.8, 0] 
            ],
            [1],
            1,
            0,
            "",
            "",
            _particles
        ];
        _particles setDropInterval 0.05;
        sleep 0.05;
        deleteVehicle _particles;
    };
    case ptcl_breach: {
        private _particles = "#particlesource" createVehicle getPos _unit;
        _particles attachTo [_unit, [0, 0, 0], "Spine3"];
        _particles setParticleRandom [0, [0.2, 0.2, 0.2], [0.1, 0.1, 0.1], 0, 0.1, [0, 0, 0, 0], 0, 0];
        _particles setParticleParams [
            ["\A3\data_f\ParticleEffects\Universal\Universal", 16, 13, 2, 0],
            "",
            "Billboard",
            1,
            0.3,
            [0, 0, 0],
            [0, 0, 0],
            0,
            10,
            7.9,
            0,
            [0.5, 2.0, 3.5],
            [
                [0, 0.6, 1, 0.9],
                [0.05, 0.2, 0.5, 0.3],
                [0, 0, 0, 0] 
            ],
            [1],
            1,
            0,
            "",
            "",
            _particles
        ];

        _particles setDropInterval 0.1;
        sleep (GVAR(regenTimeoutBreach) / 2);

        _particles setDropInterval 0.2;
        sleep (GVAR(regenTimeoutBreach) / 2);

        deleteVehicle _particles;
    };
    default { };
};
