#include "..\script_component.hpp"
params ["_openMap"];

// Playing gestures during either of these can cause annoying issues, better to just not play the gesture than to bug people's weapons
// Prone is okay, but unwanted for this
if (ace_common_isReloading || isSwitchingWeapon ace_player || stance ace_player == "PRONE"|| !isNull (objectParent ace_player)) exitWith {};

if (_openMap) then {
    private _weapon = currentWeapon ace_player;
    private _primary = primaryWeapon ace_player;
    private _handgun = handgunWeapon ace_player;
    private _launcher = secondaryWeapon ace_player;
    private _animation = switch (true) do {
        case (_weapon == ""): { QGVAR(map_arm_stand_unarmed) };
        case (_weapon == _primary && _primary != ""): { QGVAR(map_arm_stand_rifle) };
        case (_weapon == _handgun && _handgun != ""): { QGVAR(map_arm_stand_pistol) };
        case (_weapon == _launcher && _launcher != ""): { QGVAR(map_arm_stand_launcher) };
        default { "" };
    };

    if (_animation == "") exitWith {};

    ace_player switchGesture _animation;

    private _projector = createSimpleObject [QPATHTOEF(props,intel\mti_holoprojector_nogeo.p3d), [0, 0, 0]];
    _projector attachTo [ace_player, [0, 0, 0], "LeftHand", true]; // Can adjust as desired
    [_projector, [180, 270, 190]] call BIS_fnc_setObjectRotation; 
    ace_player setVariable [QGVAR(mapProjector), _projector];
    playSound QGVAR(Holo_Open);
} else {
    ace_player switchGesture "ace_common_stop";
    deleteVehicle (ace_player getVariable [QGVAR(mapProjector), objNull]);
    playSound QGVAR(Holo_Close);
};
