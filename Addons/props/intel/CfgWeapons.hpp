class CfgWeapons {
    class ACE_ItemCore;
 	class CBA_MiscItem_ItemInfo;
	
	class GVAR(datapad_item): ACE_ItemCore {
		author = AUTHOR;
		scope = 2;
		displayname = "[SOB] Technician's Datapad";
		descriptionshort = "Technician's Datapad";
		descriptionuse = "Datapad used by Technicians of the Special Operations Brigade";
		picture = QPATHTOF(data\ui\datapad_ui_ca.paa);
        model = QPATHTOF(rri_datapad.p3d);
        GVAR_CORE(tech,isTechpad) = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 20;
		};
	};

	class GVAR(antenna_item): ACE_ItemCore {
		author = AUTHOR;
		scope = 2;
		displayname = "[SOB] Antenna";
		descriptionshort = "Antenna";
		descriptionuse = "Portable antenna used by Technicians of the Special Operations Brigade";
		picture = QPATHTOF(data\ui\Antenna.paa);
        model = QPATHTOF(rri_antenna.p3d);
		GVAR_CORE(tech,vehicle) = QGVAR(antenna);
		GVAR_CORE(tech,isAntennaItem) = 1;
		GVAR_CORE(arsenal,whitelists)[] = {"ARC"};
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 56;
		};
	};
};
