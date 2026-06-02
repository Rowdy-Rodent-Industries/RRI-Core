class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class JLTS_CloneHelmetP2: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };

    class SEA_Helmet_P1_Base: JLTS_CloneHelmetP2 {
        class ItemInfo;
    };

    class SEA_Helmet_P1_IllumBase: JLTS_CloneHelmetP2 {
        class ItemInfo;
    };

    class JLTS_CloneNVG;
    class SEA_P1_Rangefinder;

    class U_I_CombatUniform;
    class JLTS_CloneArmor: U_I_CombatUniform {
        class ItemInfo;
    };

    class V_PlateCarrier1_rgr;
    class VestItem; 
    class JLTS_CloneVestOfficer: V_PlateCarrier1_rgr
    {
        class ItemInfo: VestItem{};
    };
    class JLTS_CloneVestAirborne: JLTS_CloneVestOfficer
    {
        class ItemInfo: VestItem{};
    };
    class JLTS_CloneVestAirborneNCO: JLTS_CloneVestAirborne
    {
        class ItemInfo: VestItem{};
    };

    #include "cfg\Helmets.hpp"
    #include "cfg\NVGs.hpp"
    #include "cfg\Uniforms.hpp"
    #include "cfg\Vests.hpp"
};
