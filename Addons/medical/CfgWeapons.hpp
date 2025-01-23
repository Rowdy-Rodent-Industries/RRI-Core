class CfgWeapons 
{	
	class ACE_ItemCore;
	class GVAR(Painkiller): ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        displayName = "Painkiller";
        descriptionShort = "Drug to remove pain";
        descriptionUse = "A common painkiller, when applied will reduce pain";

        EGVAR(common,isMedicalItem) = 1;
        aceArsenalCategory = "Medical"; // compat for @Ace Arsenal Category Framework

		model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
}