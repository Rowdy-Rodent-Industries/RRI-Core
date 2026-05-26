class CfgVehicles {
    class  EGVAR(props,Prop_Base);
    class GVAR(console1):  EGVAR(props,Prop_Base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Console #1";

        model = QPATHTOF(mti_console1);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\console1\camo1_co.paa),
            "#(argb,8,8,3)color(0.000,0.000,0.000,1.0,co)"
        };
        editorPreview = QPATHTOF(console\data\editorpreviews\console1.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,intel);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

        class GVAR(console2): GVAR(console1) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Reinsert Terminal";

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\console2\console2_co.paa)};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\console2\console2.rvmat)};
        model = QPATHTOF(mti_console2.p3d);
        editorPreview = QPATHTOF(console\data\editorpreviews\console2.jpg);

        class UserActions {
            class GVAR(CallReinsertNotif) {
                displayName = "Call Reinsert Notification";
                position = "driver";
                radius = 4;
                condition = QUOTE([this] call C_FUNC_CORE(common,canNotifyReinsert,false));
                statement = QUOTE([ARR_2(this,[ARR_2(0,QUOTE(QPATHTOF(data\console2\console2_2_co.paa)))])] call C_FUNC_CORE(common,reinsertNotif,nil));
                onlyforplayer = 1;
            };
        };

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
};
