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
    class GVAR(base): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Locker";

        model = QPATHTOF(rri_locker.p3d);
        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,lockers);
        icon = "iconObject_circle";
        destrType = "DestructNo";
        armor = 99999;
        armorStructural = 4;

        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\base_texture\door.rvmat),QPATHTOF(data\base_texture\locker.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\base_texture\Door_CO.paa),QPATHTOF(data\base_texture\locker_CO.paa)};
        editorPreview = QPATHTOF(locker\data\editorpreviews\locker_base.jpg);

        // class EventHandlers {
        //     init = QUOTE([(_this select 0)] call rri_arsenal_fnc_postinit);
        // };

        class ACE_Actions:ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                displayName = "Locker";
                condition = "true";
                position = "[0.0, 0.50, 1.3]";
                distance = 15;

                class GVAR(armoury) {
                    displayName = "[SOB] Armoury";
                    condition = "true";
                    statement = "";
                    showDisabled = 1;
                    insertChildren = QUOTE([ARR_2(_target,_player)] call rri_arsenal_fnc_insertArmouryActions);
                };
            };
        };

        class SimpleObject
        {
            eden = 1;
            // ...
        };

        class AnimationSources
        {
            class Door_1_source
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
                sound = "MetalDoorsSound";
                soundPosition = "door_trigger";
            };
        };

        class UserActions
        {
            class OpenDoor_1
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "$STR_DN_OUT_O_DOOR";
                position = "door_trigger";
                priority = 11;
                radius = 2;
                aiMaxRange = 5.25;
                onlyForPlayer = 0;
                condition = "((this animationSourcePhase 'Door_1_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animatesource ['Door_1_source',1]";
            };
            class CloseDoor_1: OpenDoor_1
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "$STR_DN_OUT_C_DOOR";
                priority = 11;
                condition = "((this animationSourcePhase 'Door_1_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "this animatesource ['Door_1_source',0]";
            };
        };
        actionBegin1 = "OpenDoor_1";
        actionEnd1 = "OpenDoor_1";
    };

    LOCKER_MACRO(JumpTrooper,jt,ARMOURY_TYPE_JUMPTROOPER);
    LOCKER_MACRO(ARC,arc,ARMOURY_TYPE_ARC);
    LOCKER_MACRO(Command,command,ARMOURY_TYPE_COMMAND);
    LOCKER_MACRO(FieldSupport,fs,ARMOURY_TYPE_FIELDSUPPORT);
    LOCKER_MACRO(Trooper,p2,ARMOURY_TYPE_TROOPER);
    LOCKER_MACRO(Pilot,pilot,ARMOURY_TYPE_PILOT);
    LOCKER_MACRO(Commando,rc,ARMOURY_TYPE_COMMANDO);
};
