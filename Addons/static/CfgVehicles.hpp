class CfgVehicles
{
    class Strategic;
    class ReammoBox_F;
    class rri_prop_base: Strategic 
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
        editorCategory = QEGVAR(edcat,rri);
        editorSubcategory = QEGVAR(edsubcat,Props);
    };

    class rri_cargo_Base: ReammoBox_F
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
        editorCategory = QEGVAR(edcat,rri);
        editorSubcategory = QEGVAR(edsubcat,Props);

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
    };

    class rri_box1: rri_cargo_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[RRI] Cargo Crate";
        model = QPATHTOF(box1.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\box1\box_base_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\box1.jpg);
        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };
};
