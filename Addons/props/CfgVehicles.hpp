class CfgVehicles {
    class Strategic;
    class ThingX;
    class ReammoBox_F: ThingX {
        class ACE_Actions;
    };

    class GVAR(Prop_Base): Strategic 
    {
        author = AUTHOR;
        model = "";
        displayName = "";
        scope = 1;
        scopeCurator = 1;
        placement = "vertical";
        mapSize = 1;
        destrType="DestructNo";
        armor = 50000;
        armorStructural = 4;
        maximumLoad = 0;
        editorPreview="";
		eden=1;
        icon = "iconObject_circle";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,misc);
    };

    class GVAR(Cargo_Base): ReammoBox_F
    {
        author = AUTHOR;
        model = "";
        displayName = "";
        scope = 1;
        scopeCurator = 1;
        placement = "vertical";
        mapSize = 1;
        destrType="DestructNo";
        editorPreview="";
		eden=1;
        icon = "iconObject_circle";
        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,crates);

        ace_dragging_canCarry=1;
		ace_dragging_canDrag=1;
		ace_dragging_dragPosition[]={0,1.36,-0.1};

        maximumLoad=7000;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.4;

        parachuteClass = "B_Parachute_02_F";	
		parachuteHeightLimit = 40;				
		canBeTransported = 1;				
		dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
        rotation = 0;

        class ACE_Actions:ACE_Actions {
            class ACE_MainActions{
                displayName = "Interaction";
                condition = "true";
                position = "[0.0, 0.0, 0.0]";
                distance = 15;
            };
        };	
    };
};


