#include "..\script_component.hpp"

/*
Description: Handles the data automation and layout for the 3-man Squad HUD Panel.
*/

if (!hasInterface) exitWith {};

[] spawn {
    while {true} do {
        private _display = uiNamespace getVariable ["rri_commando_team_hud_display", displayNull];
        
        private _hudSysOn = uiNamespace getVariable [QGVAR(HUD_enabled), true];
        private _hudMode  = uiNamespace getVariable [QGVAR(activeHUDMode), 0];

        if (alive player && { [player] call FUNC(hasBattery) } && { _hudSysOn } && { _hudMode == 1 }) then {
            if (isNull _display) then {
                "rri_commando_team_hud_layer" cutRsc [QGVAR(KatarnTeamHUD), "PLAIN", -1, false];
                _display = uiNamespace getVariable ["rri_commando_team_hud_display", displayNull];
            };

            if (!isNull _display) then {
                //grabs squad
                private _squadMembers = (units (group player)) - [player];
                private _validTeammates = _squadMembers select { alive _x };
                
                //x3
                for "_i" from 0 to 2 do {
                    private _idcOffset = 1300 + (_i * 100);
                    private _ctrlName   = _display displayCtrl (_idcOffset);
                    private _ctrlDist   = _display displayCtrl (_idcOffset + 1);
                    private _ctrlArrow  = _display displayCtrl (_idcOffset + 2);
                    private _ctrlStatus = _display displayCtrl (_idcOffset + 3);

                    if (_i < count _validTeammates) then {
                        private _unit = _validTeammates select _i;

                        //teammate name
                        private _nameString = format ["<t align='center' size='1.0' font='PuristaMedium' color='#ffffff'>%1</t>", name _unit];
                        _ctrlName ctrlSetStructuredText parseText _nameString;

                        //distance
                        private _distance = round (player distance _unit);
                        private _distString = format ["<t align='center' size='0.9' font='PuristaLight' color='#aaaaaa'>%1m</t>", _distance];
                        _ctrlDist ctrlSetStructuredText parseText _distString;

                        //need to fix this later to look better
                        private _relDir = player getRelDir _unit;
                        private _arrow = "▲";
                        switch (true) do {
                            case (_relDir > 337.5 || _relDir <= 22.5):   { _arrow = "▲"; };
                            case (_relDir > 22.5  && _relDir <= 67.5):   { _arrow = "↗"; };
                            case (_relDir > 67.5  && _relDir <= 112.5):  { _arrow = "▶"; };
                            case (_relDir > 112.5 && _relDir <= 157.5):  { _arrow = "↘"; };
                            case (_relDir > 157.5 && _relDir <= 202.5):  { _arrow = "▼"; };
                            case (_relDir > 202.5 && _relDir <= 247.5):  { _arrow = "↙"; };
                            case (_relDir > 247.5 && _relDir <= 292.5):  { _arrow = "◀"; };
                            case (_relDir > 292.5 && _relDir <= 337.5):  { _arrow = "↖"; };
                        };
                        private _arrowString = format ["<t align='center' size='1.1' font='PuristaMedium' color='#00ccff'>%1</t>", _arrow];
                        _ctrlArrow ctrlSetStructuredText parseText _arrowString;

                        //status check
                        private _isUncon = _unit getVariable ["ACE_isUnconscious", false] || {_unit getVariable ["incapacitated", false]};
                        private _statusString = "";
                        
                        if (_isUncon) then {
                            _statusString = "<t align='center' size='0.9' font='PuristaMedium' color='#ff3300'>UNCON</t>";
                        } else {
                            _statusString = "<t align='center' size='0.9' font='PuristaMedium' color='#00ff00'>AWAKE</t>";
                        };
                        _ctrlStatus ctrlSetStructuredText parseText _statusString;

                    } else {

                        _ctrlName ctrlSetStructuredText parseText "";
                        _ctrlDist ctrlSetStructuredText parseText "";
                        _ctrlArrow ctrlSetStructuredText parseText "";
                        _ctrlStatus ctrlSetStructuredText parseText "";
                    };
                };
            };
        } else {
            if (!isNull _display) then {
                "rri_commando_team_hud_layer" cutText ["", "PLAIN"];
            };
        };
        sleep 0.1;
    };
};
