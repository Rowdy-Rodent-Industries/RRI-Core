class CfgWeapons {
    class EGHELMET(equipment_trooper,base);
    class EGHELMET(equipment_trooper,illum_base);
    class EGHELMET(equipment_trooper,p1_base);
    class EGHELMET(equipment_trooper,p1_illum_base);
    class EGHELMET(equipment_trooper,p2_base);
    class EGHELMET(equipment_trooper,p2_illum_base);
    class EGHELMET(equipment_trooper,arf_base);
    class EGHELMET(equipment_trooper,arf_illum_base);
    class EGHELMET(equipment_trooper,ab_base);
    class EGHELMET(equipment_trooper,ab_illum_base);
    class EGHELMET(equipment_trooper,engi_base);
    class EGHELMET(equipment_trooper,engi_illum_base);
    class EGHELMET(equipment_custom,Tanker);

    class U_I_CombatUniform;
    class JLTS_CloneArmor: U_I_CombatUniform {
        class ItemInfo;
    };

    class V_PlateCarrier1_rgr;
    class JLTS_CloneVestSuspender: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class JLTS_CloneVestSuspender_white: JLTS_CloneVestSuspender {
        class ItemInfo;
    };
    class JLTS_CloneVestSuspender_41_Gree: JLTS_CloneVestSuspender {
        class ItemInfo;
    };

    class JLTS_CloneHelmetP2;
    class LSEA_Helmet_Pilot_P1_Base: JLTS_CloneHelmetP2 {
        class ItemInfo;
    };
    class LSEA_Helmet_Pilot_P1_Base_Illum: JLTS_CloneHelmetP2 {
        class ItemInfo;
    };
	class SEA_Helmet_P1_IllumBase: JLTS_CloneHelmetP2 {
		class ItemInfo;
	};

    class EGVEST(equipment_trooper,PlatoonCommand);
    class EGVEST(equipment_trooper,CP);

    #include "cfg\Helmets.hpp"
    #include "cfg\NVGs.hpp"
    #include "cfg\Uniforms.hpp"
    #include "cfg\Vests.hpp"
};
