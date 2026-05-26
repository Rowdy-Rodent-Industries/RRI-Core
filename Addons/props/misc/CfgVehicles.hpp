class CfgVehicles {
    class EGVAR(props,Prop_Base);
    class GVAR(shark_fren): EGVAR(props,Prop_Base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Shark Friend";

        model = QPATHTOF(shark_fren);
        editorPreview = QPATHTOF(data\editorpreviews\shark.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,misc);

        ace_cargo_size = 2;
        ace_cargo_canLoad = 1;
        ace_dragging_canCarry = 1;
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};

        class SimpleObject
        {
            eden = 1;
            // ...
        };

        class ACE_Actions {
            class ACE_MainActions {
                displayName = "Interactions";
                selection = "";
                distance = 2;
                condition = "true";

                class GVAR(kick) {
                    displayName = "<t color='#FFFF00'>Kick</t>";
                    condition = "stance _player == 'STAND'";
                    statement = "[_target,_player] remoteExec ['JLTS_fnc_mse6Kick',_target,true]";
                };
            };
        };
    };

    class GVAR(barricade): EGVAR(props,Prop_Base)
    {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Barricade";

        model = QPATHTOF(mti_barricade);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\barricade\barricade_CO.paa)
        };
        editorPreview = QPATHTOF(data\editorpreviews\barricade.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,misc);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(toolbox): EGVAR(props,Prop_Base)
    {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Toolbox";

        model = QPATHTOF(mti_toolbox);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\toolbox\toolbox_CO.paa)
        };
        editorPreview = QPATHTOF(data\editorpreviews\toolbox.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,misc);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(clacker): EGVAR(props,Prop_Base)
    {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Advanced Firing Device";

        model = QPATHTOF(mti_clacker);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\clacker\clacker_CO.paa)
        };
        editorPreview = QPATHTOF(data\editorpreviews\clacker.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,misc);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(lockpick): EGVAR(props,Prop_Base)
    {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Lockpick";

        model = QPATHTOF(mti_lockpick);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\lockpick\camo1_CO.paa)
        };
        editorPreview = QPATHTOF(data\editorpreviews\lockpick.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,misc);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(charity_wall): EGVAR(props,Prop_Base)
    {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Charity Wall";

        model = QPATHTOF(charity_wall);
        hiddenSelections[] = {
                "camo1",
                "camo2",
                "camo3",
                "camo4"
            };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\charitywall\camo1_CO.paa),
            QPATHTOF(data\charitywall\camo2_CO.paa),
            QPATHTOF(data\charitywall\camo3_CO.paa),
            QPATHTOF(data\charitywall\camo4_CO.paa)
        };

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,misc);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    #include "groundholders.hpp"
};
