class DefaultEventhandlers;

class CfgVehicles {
    class NonStrategic;
    class EGVAR(props,Cargo_Base);

    class GVAR(base): EGVAR(props,Cargo_Base) {
        scope = 1;
        scopecurator = 2;
        author = AUTHOR;
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,crates);

        hiddenSelections[] = {"crate", "screen", "decals"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supplycrate\crate_co.paa),
            QPATHTOF(data\supplycrate\screens\screen_empty_co.paa),
            QPATHTOF(data\supplycrate\decals\decal_blank_co.paa)
        };

        class SimpleObject
        {
            eden = 1;
            // ...
        };

    // todo: picture & editorpreview
    };

    class GVAR(double_closed): GVAR(base) {
        scope = 2;
        displayName = "[SOB] Double Crate (Blank, Closed)";
        model = QPATHTOF(crate_double.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\cratedoubleclosed.jpg);
        class AnimationSources {
            class hide_open_lid {
                source = "user";
                animPeriod = 0.0001;
                initPhase = 1;
            };

            class hide_closed_lid {
                source = "user";
                animPeriod = 0.0001;
                initPhase = 0;
            };
        };
    };

    class GVAR(double_open): GVAR(double_closed) {
        scope = 2;
        displayName = "[SOB] Double Crate (Blank, Open)";
        model = QPATHTOF(crate_double.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\cratedoubleopen.jpg);
        class AnimationSources: AnimationSources {
            class hide_open_lid: hide_open_lid {
                initPhase = 0;
            };

            class hide_closed_lid: hide_closed_lid {
                initPhase = 1;
            };
        };
    };

    class GVAR(single_closed): GVAR(base) {
        scope = 2;
        displayName = "[SOB] Single Crate (Blank, Closed)";
        model = QPATHTOF(crate_single.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\cratesingleclosed.jpg);
        class AnimationSources {
            class hide_open_lid {
                source = "user";
                animPeriod = 0.0001;
                initPhase = 1;
            };

            class hide_closed_lid {
                source = "user";
                animPeriod = 0.0001;
                initPhase = 0;
            };
        };
    };

    class GVAR(single_open): GVAR(single_closed) {
        scope = 2;
        displayName = "[SOB] Single Crate (Blank, Open)";
        model = QPATHTOF(crate_single.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\cratesingleopen.jpg);
        class AnimationSources: AnimationSources {
            class hide_open_lid: hide_open_lid {
                initPhase = 0;
            };

            class hide_closed_lid: hide_closed_lid {
                initPhase = 1;
            };
        };
    };

    class GVAR(resupply_closed): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Resupply Crate (Closed)";
        model = QPATHTOF(rri_resupply_crate.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\resupplycrate\Box_CO.paa),QPATHTOF(data\resupplycrate\Round_CO.paa)};

        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 12000;
        ace_rearm_supply = 12000;
        ace_refuel_fuelCargo = 99999;
        ace_dragging_canDrag = 1;
        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeight = 1;

        GVAR_CORE(aircraft,canService) = 1;
        GVAR_CORE(aircraft,service_repairOnly) = 1;

        
        class AnimationSources {
            class hide_open_lid {
                source = "user";
                animPeriod = 0.0001;
                initPhase = 1;
            };

            class hide_closed_lid {
                source = "user";
                animPeriod = 0.0001;
                initPhase = 0;
            };
        };
    };

    class GVAR(resupply_open): GVAR(resupply_closed) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Resupply Crate (Open)";
        model = QPATHTOF(rri_resupply_crate.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\resupplycrate\Box_CO.paa),QPATHTOF(data\resupplycrate\Round_CO.paa)};
        class AnimationSources: AnimationSources {
            class hide_open_lid: hide_open_lid {
                initPhase = 0;
            };

            class hide_closed_lid: hide_closed_lid {
                initPhase = 1;
            };
        };
    };

MACRO_CRATE_ALL(Blue);
MACRO_CRATE_ALL(Green);
MACRO_CRATE_ALL(Orange);
MACRO_CRATE_ALL(Purple);
MACRO_CRATE_ALL(White);

    //Fortify Crate
    class GVAR(Fortify_Small): EGVAR(props,Cargo_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Fortify Crate (Small)";
        model = QPATHTOF(rri_fortify_small.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\fortifysmall.jpg);
        ace_cargo_size = 5;

        author = AUTHOR;
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,crates);

        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fortifyCrate\small\SmallBox_CO.paa)};

        GVAR_CORE(fortify,availablePresets)[] = {"Fortifications_Small", 1000};
        class EventHandlers: DefaultEventhandlers {
            init = "(_this select 0) setVariable ['ace_cargo_delay', 5];";
        };
    };

    class GVAR(Fortify_medium): GVAR(Fortify_Small) {
        scope = 2;
        scopeCurator = 2;
        ace_cargo_size = 10;
        displayName = "[SOB] Fortify Crate (Medium)";
        model = QPATHTOF(rri_fortify_medium.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\fortifymedium.jpg);

        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fortifyCrate\medium\MediumBox_CO.paa)};

        GVAR_CORE(fortify,availablePresets)[] = {"Fortifications_Medium", 1000, "Outpost_Walls", 500, "Outpost_Objects", 300};
        class EventHandlers: DefaultEventhandlers {
            init = "(_this select 0) setVariable ['ace_cargo_delay', 10];";
        };
    };

    class GVAR(Fortify_large): GVAR(Fortify_Small) {
        scope = 2;
        scopeCurator = 2;
        ace_cargo_size = 20;
        displayName = "[SOB] Fortify Crate (FOB)";
        model = QPATHTOF(rri_fortify_large.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\fortifylarge.jpg);

        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fortifyCrate\large\LargeBox_CO.paa)};

        GVAR_CORE(fortify,availablePresets)[] = {"FOB_Walls", 2000, "FOB_Objects", 600, "LaserWalls", 500, "FOB_Decorations_Large", 300,"FOB_Decorations_Small", 300, "FOB_HBarrier", 1000,"Fortifications_Medium", 1000, "FOB_HBarrier", 500, "FOB_Decorations_Small", 100};
        class EventHandlers: DefaultEventhandlers {
            init = "(_this select 0) setVariable ['ace_cargo_delay', 15];";
        };
    };

    class GVAR(Droppod_closed): EGVAR(props,Cargo_Base) {
        scope = 2;
        displayName = "[SOB] Droppod (Closed)";
        model = QPATHTOF(rri_droppod.p3d);
        editorPreview = QPATHTOF(data\editorpreviews\droppod.jpg);

        author = AUTHOR;
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,crates);

        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\droppods\base\camo1_CO.paa),QPATHTOF(data\droppods\base\camo2_CO.paa)};

        class AnimationSources {
            class hide_open_lid {
                source = "user";
                animPeriod = 0.0001;
                initPhase = 1;
            };

            class hide_closed_lid {
                source = "user";
                animPeriod = 0.0001;
                initPhase = 0;
            };
        };
    };

    class GVAR(Droppod_open): GVAR(Droppod_closed) {
        scope = 2;
        displayName = "[SOB] Droppod (Open)";

        class AnimationSources: AnimationSources {
            class hide_open_lid: hide_open_lid {
                initPhase = 0;
            };

            class hide_closed_lid: hide_closed_lid {
                initPhase = 1;
            };
        };
    };

    class GVAR(fuel_canister): GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Fuel Canister";
        model = QPATHTOF(rri_fueltank.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fuelcrate\fuelcanister_CO.paa)};

        ace_repair_canRepair = 1;
        ace_rearm_supply = 12000;
        ace_refuel_fuelCargo = -10;
        ace_dragging_canDrag = 1;
        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeight = 1;
    };

    MACRO_DROPPOD(Arc);
    MACRO_DROPPOD(Medical);
    MACRO_DROPPOD(Commando);
    MACRO_DROPPOD(Trooper);
};
