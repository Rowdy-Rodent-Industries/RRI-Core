class CfgVehicles {
    class  EGVAR(props,Prop_Base);
    class GVAR(datapad): EGVAR(props,Prop_Base) {
        scope = 2;
        scopecurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Datapad";

        model = QPATHTOF(rri_datapad.p3d);
        hiddenSelections[] = {"datapad","buttons","screen","panel"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\datapad\datapad_co.paa),
            QPATHTOF(data\datapad\buttons_co.paa),
            QPATHTOF(data\datapad\screen_co.paa),
            QPATHTOF(data\datapad\panel_co.paa)
        };
        editorPreview = QPATHTOF(data\editorpreviews\datapad.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,intel);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(Holoprojector): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Holoprojector";

        model = QPATHTOF(rri_holoprojector.p3d);
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\holoprojector\Planet_CA.paa),QPATHTOF(data\holoprojector\Holoprojector_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\holoprojector.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,intel);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(Antenna): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "[SOB] Antenna";

        model = QPATHTOF(rri_antenna.p3d);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\antenna\antenna_CO.paa)};
        editorPrevew = QPATHTOF(data\editorpreviews\antenna.jpg);
        GVAR_CORE(tech,item) = QGVAR(antenna_item);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,intel);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
    class GVAR(DataPad2): EGVAR(props,Prop_Base) {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "[SOB] DataPad #2";

        model = QPATHTOF(rri_datapad2.p3d);
        hiddenSelections[] = {"Camo1","Screen"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\datapad2\datapad_CO.paa),QPATHTOF(data\datapad2\datapad_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\Datapad2.jpg);

        vehicleClass = "Cargo";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,intel);

        class SimpleObject
        {
            eden = 1;
            // ...
        };

        class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="getObjectTextures _this select 0";
			};
		};
    };
  
    #include "groundholders.hpp"
};
