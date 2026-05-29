class CfgWeapons {
    class H_HelmetO_ViperSP_hex_F;
    class ls_helmet_base: H_HelmetO_ViperSP_hex_F {
        class ItemInfo;
    };
    class ls_sob_commando_helmet: ls_helmet_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head;
                class HitFace;
            };
        };
    };

    class ls_uniform_base;
    class ls_nvg_base;
    class ls_sob_commando_uniform: ls_uniform_base {
        class ItemInfo;
    };

    class NVGoggles;
    class JLTS_NVG_droid_chip_1: NVGoggles {
        class ItemInfo;
    };

    class ls_sob_commando_visor_nvg: ls_nvg_base {
        class ItemInfo;
    };

    class ls_sob_commando_antenna_nvg: ls_nvg_base {
        class ItemInfo;
    };

    // class SWLB_MPStealth_Nvg: SWLB_clone_commando_nvg {
    //     class ItemInfo;
    // };

    // class SWLB_OmegaAtin_Antenna: SWLB_clone_commando_nvg_antenna {
    //     class ItemInfo;
    // };

    // class SWLB_OmegaFi_Nvg: SWLB_clone_commando_nvg {
    //     class ItemInfo;
    // };

    class ItemCore;
    class Vest_NoCamo_Base: ItemCore {
        class ItemInfo;
    };

    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest;
                class Diaphragm;
                class Abdomen;
                class Body;
            };
        };
    };

    class ls_sob_commando_vest: V_PlateCarrier1_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {};
                class Diaphragm: Diaphragm {};
                class Abdomen: Abdomen {};
                class Body: Body {};
            };
        };
    };

    class ls_sob_commando_sniper_vest: V_PlateCarrier1_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {};
                class Diaphragm: Diaphragm {};
                class Abdomen: Abdomen {};
                class Body: Body {};
            };
        };
    };

    class ls_sob_commando_tech_vest: V_PlateCarrier1_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {};
                class Diaphragm: Diaphragm {};
                class Abdomen: Abdomen {};
                class Body: Body {};
            };
        };
    };

    class ls_sob_commando_eod_vest: V_PlateCarrier1_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {};
                class Diaphragm: Diaphragm {};
                class Abdomen: Abdomen {};
                class Body: Body {};
            };
        };
    };

    class ls_sob_commando_sl_vest: V_PlateCarrier1_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {};
                class Diaphragm: Diaphragm {};
                class Abdomen: Abdomen {};
                class Body: Body {};
            };
        };
    };

    #include "cfg\Helmets.hpp"
    #include "cfg\NVGs.hpp"
    #include "cfg\Uniforms.hpp"
    #include "cfg\Vests.hpp"
};
