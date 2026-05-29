class CfgVehicles {
    class EGVAR(props,Prop_Base);

    class GVAR(barricade): EGVAR(props,Prop_Base)
    {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Barricade";

        model = QPATHTOF(rri_barricade.p3d);
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

        model = QPATHTOF(rri_toolbox.p3d);
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

        model = QPATHTOF(rri_clacker.p3d);
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

        model = QPATHTOF(rri_lockpick.p3d);
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

        model = QPATHTOF(charity_wall.p3d);
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
