class CfgWeapons {

    class JLTS_CloneHelmetP2;
    class SEA_Helmet_P1_Base: JLTS_CloneHelmetP2 {
        class ItemInfo;
    };

    class SEA_Helmet_P1_IllumBase: JLTS_CloneHelmetP2 {
        class ItemInfo;
    }; 

    class JLTS_CloneHelmetARC: JLTS_CloneHelmetP2 {
        class ItemInfo;
    };

    class JLTS_CloneHelmetARC_illum: JLTS_CloneHelmetARC {
        class ItemInfo;
    };

    class U_I_CombatUniform;
    class JLTS_CloneArmor: U_I_CombatUniform {
        class ItemInfo;
    };

    class 3as_JLTS_CloneArmor_Base;
    class 3AS_Clone_Phase1_Armor: 3as_JLTS_CloneArmor_Base {
        class ItemInfo;
    };

    class V_PlateCarrier1_rgr;
    class JLTS_CloneVestARC: V_PlateCarrier1_rgr {
        class ItemInfo;
    };

    class JLTS_CloneVestOfficer: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class JLTS_CloneVestOfficer2: JLTS_CloneVestOfficer {
        class ItemInfo;
    };

    class JLTS_CloneVestARCCadet: JLTS_CloneVestARC {
        class ItemInfo;
    };

    class NVGoggles;
    class JLTS_CloneNVG: NVGoggles{
        class ItemInfo;
    };

    class JLTS_CloneNVGRange: NVGoggles {
        class ItemInfo;
    };

    #include "cfg\Helmets.hpp"
    #include "cfg\NVGs.hpp"
    #include "cfg\Uniforms.hpp"
    #include "cfg\Vests.hpp"
};
