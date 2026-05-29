class CfgVehicles {
    class EGVAR(props,Prop_Base);
    class GVAR(base): EGVAR(props,Prop_Base) {
        scope = 1;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Munition Base";

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,munitions);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(cluster): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Cluster Rocket";

        model = QPATHTOF(rri_cluster_missile.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\clustermunition.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(aa): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] AA Missile";

        model = QPATHTOF(rri_aa_missile.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\aamunition.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(heat): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] HEAT Missile";

        model = QPATHTOF(rri_heat_missile.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\heatmunition.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(mortar): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Mortar Round";

        model = QPATHTOF(rri_mortar_round.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\mortarmunition.jpg);
        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(missile1): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Missile";

        model = QPATHTOF(rri_missile1.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\missile1.jpg);
        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(missile2): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Carbonite Missile";

        model = QPATHTOF(rri_missile2.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\missile2.jpg);
        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(missile3): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Cruise Missile";

        model = QPATHTOF(rri_missile3.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\missile3.jpg);
        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(mm9): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] MM9";

        model = QPATHTOF(rri_mm9_missile.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\mm9.jpg);
        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(smoke_grenade): GVAR(base) {
        scope = 2;
        scopecurator = 2;
        displayName = "[SOB] Smoke Grenade";

        model = QPATHTOF(rri_smoke_grenade.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\smoke_grenade_base.jpg);

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\smokegrenade\smokegrenade.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\smokegrenade\SmokeGrenade_base_CO.paa)};

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    SMOKE_GRENADE_MACRO(Blue);
    SMOKE_GRENADE_MACRO(Green);
    SMOKE_GRENADE_MACRO(Light_Blue);
    SMOKE_GRENADE_MACRO(Orange);
    SMOKE_GRENADE_MACRO(Pink);
    SMOKE_GRENADE_MACRO(Purple);
    SMOKE_GRENADE_MACRO(Red);
    SMOKE_GRENADE_MACRO(White);
    SMOKE_GRENADE_MACRO(Yellow);
};
