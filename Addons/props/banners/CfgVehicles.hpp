class CfgVehicles {
    class ThingX;
    class ReammoBox_F: ThingX {
        class ACE_Actions;
    };
    class EGVAR(props,Prop_Base): ReammoBox_F {
        class ACE_Actions:ACE_Actions {
            class ACE_MainActions;
        };
    };

    class GVAR(Banner_Double_spin_Base): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double (Spin)";

        model = QPATHTOF(mti_banner_double_spin.p3d);
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\base\Camo2_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublebase.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,banner);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Single_spin_Base): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single (Spin)";

        model = QPATHTOF(mti_banner_single_spin.p3d);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\single\base\Camo1_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglebase.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,banner);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_Base): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double";

        model = QPATHTOF(mti_banner_double.p3d);
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\base\Camo2_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublebase.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,banner);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_Base): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single";

        model = QPATHTOF(mti_banner_Single.p3d);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\single\base\Camo1_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglebase.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,banner);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_co_spin): GVAR(Banner_Double_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double Company (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_co_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoubleco.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_p1_spin): GVAR(Banner_Double_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double Platoon 1 (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_P1_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublep1.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_p2_spin): GVAR(Banner_Double_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double Platoon 2 (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_P2_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublep2.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_fs_spin): GVAR(Banner_Double_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double Field Support (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_fs_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublefs.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_x_spin): GVAR(Banner_Double_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double X-Ray (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_xray_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublexray.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_co): GVAR(Banner_Double_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double Company";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_co_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoubleco.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_p1): GVAR(Banner_Double_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double Platoon 1";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_P1_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublep1.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_p2): GVAR(Banner_Double_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double Platoon 2";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_P2_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublep2.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_fs): GVAR(Banner_Double_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double Field Support";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_fs_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublefs.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_Double_x): GVAR(Banner_Double_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Double X-Ray";

        hiddenSelectionsTextures[] = {QPATHTOF(data\double\base\Camo1_CO.paa),QPATHTOF(data\double\Camo2_xray_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannerdoublexray.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_co_spin): GVAR(Banner_Single_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single Company (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_co_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersingleco.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_p1_spin): GVAR(Banner_Single_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single Platoon 1 (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_p1_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglep1.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_p2_spin): GVAR(Banner_Single_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single Platoon 2 (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_p2_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglep2.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_fs_spin): GVAR(Banner_Single_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single Field Support (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_fs_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglefs.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_x_spin): GVAR(Banner_Single_spin_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single X-Ray (Spin)";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_xray_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglexray.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_co): GVAR(Banner_single_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single Company";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_co_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersingleco.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_p1): GVAR(Banner_single_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single Platoon 1";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_p1_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglep1.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_p2): GVAR(Banner_single_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single Platoon 2";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_p2_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglep2.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_fs): GVAR(Banner_single_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single Field Support";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_fs_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglefs.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_single_x): GVAR(Banner_single_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner Single X-Ray";

        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_xray_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglexray.jpg);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(Banner_fob_core): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "[SOB] Banner FOB Core";

        model = QPATHTOF(mti_banner_Single.p3d);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\single\Camo1_fs_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bannersinglefs.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,banner);

        GVAR_CORE(fortify,availablePresets)[] = {"Arsenals", 800};

        class SimpleObject
        {
            eden = 1;
            // ...
        };

        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class GVAR(FOB_Controls) {
                    displayName = "FOB Options";
                    condition = QUOTE([_player] call C_FUNC_CORE(fortify,canFortify,[]));
                    statement = "";
                    exceptions[] = {};
                    showDisabled = 0;
                    priority = 1;

                    class createMarker {
                        displayName = "<t color='#FFA500'>Create FOB Marker</t>";
                        condition = QUOTE([ARR_2(_player,_target)] call mti_fortify_fnc_canCreateFOBMarker);
                        statement = QUOTE([ARR_2(_player,_target)] call mti_fortify_fnc_createFOBMarker);
                    };

                    class deleteMarker {
                        displayName = "<t color='#FFFF66'>Delete FOB Marker</t>";
                        condition = QUOTE(!(isNil {_target getVariable 'mti_fortify_FOBMarker'}));
                        statement = QUOTE([ARR_2(_player,_target)] call mti_fortify_fnc_deleteFOBMarker);
                    };

                    class updateRespawn {
                        displayName = "<t color='#006da3'>Update Respawn Position</t>";
                        condition = QUOTE(mti_common_respawnUpdateEnabled);
                        statement = QUOTE([position _target] call mti_common_fnc_updateRespawn);
                    };
                };
            };
        };
    };
};
