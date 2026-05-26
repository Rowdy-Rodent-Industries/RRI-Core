class CfgWeapons 
{
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ToolKit;
    class GVAR(spike_item): ACE_ItemCore {
		author = AUTHOR;
		scope = 2;
		displayname = "[SOB] Computer Spike";
		descriptionshort = "Computer Spike";
		descriptionuse = "<t color='#9cf953'>Use: </t>Hacks locked Intel and Doors";
		model = QPATHTOF(mti_dataspike);
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { QPATHTOF(data\dataspike\camo_co.paa) };
        picture = QPATHTOF(data\ui\ComputerSpike.paa);
		GVAR_CORE(tech,isSpike) = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
		};
	};

	class GVAR(lockpick_item): ACE_ItemCore {
		scope = 2;
        author = AUTHOR;
        displayName = "[SOB] ALCD-1233 Lockpick";
        descriptionShort = "The 'Advanced Lock Countering Device, Model 1233' is a useful tool to combat locks of many kinds encountered in the field.";

		GVAR_CORE(doors,isLockpick) = 1;

		model = QPATHTOF(mti_lockpick);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\lockpick\camo1_CO.paa)
        };

		picture = QPATHTOF(data\ui\all-kit-tool_ca.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
	};

    class ACE_Clacker: ACE_ItemCore {
        class ItemInfo;
    };
    class GVAR(clacker_item): ACE_Clacker {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Advanced Firing Device";
		descriptionShort = "The Advanced Firing Device is used by Demolition Experts in the Special Operations Brigade.";

        ace_explosives_range = 5000;
        ace_explosives_triggerType = QGVAR_CORE(explosives,clacker);
		GVAR_CORE(explosives,isClacker) = 1;

		model = QPATHTOF(mti_clacker);
		// picture = QPATHTOF(); // todo: picture

        class ItemInfo: ItemInfo {
            mass = 6;
        };
    };

    class GVAR(toolkit_item): ToolKit {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Toolkit";
        descriptionShort = "Toolkit used by the Special Operations Bridage to repair vehicles";

        model = QPATHTOF(mti_toolbox.p3d);

        GVAR_CORE(arsenal,whitelists)[] = {"FieldSupport","ARC","Commando","Command","Jumptrooper","Trooper"};
    };
};
