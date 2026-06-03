class GVAR(mainAction) {
    displayName = "KatarnOS";
    condition = QUOTE([_player] call FUNC(hasKatarn));
    statement = "";
    icon = QPATHTOF(data\katarnOS_logo.paa);
    exceptions[] = {};

    class GVAR(suit) {
        displayName = "Armour Systems";
        condition = QUOTE([_player] call FUNC(hasSuit));
        statement = "";
        icon = ""; // icontodo
        exceptions[] = {};

        class GVAR(shield) {
            displayName = "Deflector Shield System";
            condition = QUOTE([_player] call FUNC(hasShield));
            statement = "";
            icon = ""; // icontodo
            exceptions[] = {};

            class GVAR(shieldOn) {
                displayName = "Activate Shield";
                condition = QUOTE([_player] call FUNC(canActivateShield));
                statement = QUOTE([ARR_2(QQGVAR(activateShield),[_player])] call CBA_fnc_localEvent);
                icon = ""; //icontodo
                exceptions[] = {};
            };

            class GVAR(shieldOff) {
                displayName = "Deactivate Shield";
                condition = QUOTE([_player] call FUNC(canDeactivateShield));
                statement = QUOTE([ARR_2(QQGVAR(deactivateShield),[_player])] call CBA_fnc_localEvent);
                icon = ""; //icontodo
                exceptions[] = {};
            };
        };

    };
};