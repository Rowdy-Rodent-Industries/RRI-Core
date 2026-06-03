#include "..\script_component.hpp"

/*
Description: Handles the data automation and layer control for the Player's personal HUD.
*/

if (!hasInterface) exitWith {};

[] spawn {
    while {true} do {
        private _display = uiNamespace getVariable ["rri_commando_hud_display", displayNull];
        
        private _hudSysOn = uiNamespace getVariable [QGVAR(HUD_enabled), true];
        private _hudMode  = uiNamespace getVariable [QGVAR(activeHUDMode), 0];

        if (alive player && { [player] call FUNC(hasBattery) } && { _hudSysOn } && { _hudMode == 0 }) then {
            if (isNull _display) then {
                "rri_commando_hud_layer" cutRsc [QGVAR(KatarnUserHUD), "PLAIN", -1, false];
                _display = uiNamespace getVariable ["rri_commando_hud_display", displayNull];
            };

            if (!isNull _display) then {
                private _ctrlName       = _display displayCtrl 1100;
                private _ctrlSquad      = _display displayCtrl 1101;
                private _ctrlShieldLvl  = _display displayCtrl 1102;
                private _ctrlPercentNum = _display displayCtrl 1103;

                //player squad data
                private _playerName = profileName;
                private _squadName  = groupID (group player);
                private _energy     = player getVariable [QGVAR(batteryEnergy), 0];
                ([player] call FUNC(getBatteryData)) params ["_maxEnergy"];

                //from number to percentage
                private _pctFraction = if (_maxEnergy > 0) then { _energy / _maxEnergy } else { 0 };
                private _pctDisplay  = round (_pctFraction * 100);

                //shield level
                private _bracketText  = "HIGH";
                private _bracketColor = "#00ccff"; // Light Blue

                switch (true) do {
                    case (_pctFraction <= 0): {
                        _bracketText  = "BREACHED";
                        _bracketColor = "#ff3300"; // Red
                    };
                    case (_pctFraction <= 0.35): {
                        _bracketText  = "LOW";
                        _bracketColor = "#ff3300"; // Red
                    };
                    case (_pctFraction <= 0.70): {
                        _bracketText  = "MED";
                        _bracketColor = "#ffaa00"; // Orange
                    };
                };

                //player name
                private _nameString = format ["<t align='left' size='1.1' font='PuristaMedium' color='#ffffff'>%1</t>", _playerName];
                _ctrlName ctrlSetStructuredText parseText _nameString;

                //squad name
                private _squadString = format ["<t align='left' size='0.9' font='PuristaLight' color='#aaaaaa'>%1</t>", _squadName];
                _ctrlSquad ctrlSetStructuredText parseText _squadString;

                //shield level
                private _lvlString = format ["<t align='left' size='1.0' font='PuristaMedium'>SHIELD LEVEL: <t color='%1'>%2</t></t>", _bracketColor, _bracketText];
                _ctrlShieldLvl ctrlSetStructuredText parseText _lvlString;

                //big energy level
                private _pctString = format ["<t align='right' size='2.2' font='PuristaBold' color='%1'>%2%%</t>", _bracketColor, _pctDisplay];
                _ctrlPercentNum ctrlSetStructuredText parseText _pctString;
            };
        } else {
            if (!isNull _display) then {
                "rri_commando_hud_layer" cutText ["", "PLAIN"];
            };
        };
        sleep 0.05;
    };
};
