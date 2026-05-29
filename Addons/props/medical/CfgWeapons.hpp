class CfgWeapons
{
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;

    class GVAR(Injector_item_base): ACE_ItemCore {
        scope = 1;
        author = AUTHOR;
        model = QPATHTOF(rri_injector.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\base\injector.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\base\injector_CO.paa)};
        ACE_isMedicalItem = 1;
    };

    class GVAR(Injector_item_Batrox): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Batroxobine";
        descriptionShort = "Batroxobine Coagulant, 400um Autoinjector";
        descriptionUse = "A common coagulant, when applied it will drastically slow down the bleeding rate of wounds. Prolonged use or high doses might cause unconsciousness.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\batrox\batrox.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\batrox\batrox_CO.paa)};
        picture = QPATHTOF(data\ui\stim_batroxobine_ui_ca.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_deraformine): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Deraformine";
        descriptionShort = "Deraformine Sedative, 400um Autoinjector";
        descriptionUse = "A fast-acting, highly effective and fairly long-lasting sedative that can be used to induce unconsciousness. High doses cause cardiac arrest and may be fatal.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\deraformine\deraformine.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\deraformine\deraformine_CO.paa)};
        picture = QPATHTOF(data\ui\stim_deraformine_ui_ca.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_latheniol): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Latheniol";
        descriptionShort = "Latheniol Barbiturate, 5um Autoinjector";
        descriptionUse = "An extremely aggressive CNS depressant. Is used by GAR Trauma Centers to 'treat' soldiers that are beyond the point of recovery. Field use is not sanctioned by GAR.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\latheniol\latheniol.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\latheniol\latheniol_CO.paa)};
        picture = QPATHTOF(data\ui\stim_latheniol_ui_ca.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_pba): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Pentabenzadrenolyne (PBA)";
        descriptionShort = "PBA Adrenal-Stim, 400um Autoinjector";
        descriptionUse = "An adrenal-based stimulant that temporarily increases aggressiveness, overall physical acuity and reaction speeds. High doses can lead to a momentary 'super-soldier' state before inducing cardiac arrest.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\pba\pba.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\pba\pba_CO.paa)};
        picture = QPATHTOF(data\ui\stim_pba_ui_ca.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_Symoxin): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Symoxin";
        descriptionShort = "Symoxin Anesthetic, 400um Autoinjector";
        descriptionUse = "A common painkiller used all throughout the galaxy. While Symoxin does not directly interact with the cardiac process, high doses can lead to respiratory arrest, followed by cardiac arrest.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\symox\symox.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\symox\symox_CO.paa)};
        picture = QPATHTOF(data\ui\stim_symoxin_ui_ca.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_Vutalamine): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Vutalamine";
        descriptionShort = "Vutalamine Anxiolytic, 15um Autoinjector";
        descriptionUse = "Vutalamine is an anti-anxiety drug produced by BioTech Industries. Among the wealthy elites, vutalamine abuse is common due to its relaxing properties, routinely leading to a variety of psychological problems like addiction and paranoia. MokTech Industries has ordered a special, low-dose batch of Vutalamine with a much shorter in-system time to prevent these issues.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\vutalamine\vutalamine.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\vutalamine\vutalamine_CO.paa)};
        picture = QPATHTOF(data\ui\stim_vutalamine_ui_ca.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_Nevastrin8): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Nevastrin-8";
        descriptionShort = "Nevastrin-8, 10,000um Autoinjector";
        descriptionUse = "Nevastrin-8 is a highly aggressive agent that attacks the CNS and can cause spontaneous resuscitation in patients.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\nevastrin\nevastrin.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\nevastrin\nevastrin_CO.paa)};
        picture = QPATHTOF(data\ui\stim_vutalamine_ui_ca.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_Glitteryl): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Glitteryl";
        descriptionShort = "Glitteryl Amnestic Agent";
        descriptionUse = "This potent drug from Ryloth has a strong adverse effect on certain neural pathways related to the memory. This highly experimental agent should cause a nearly complete deconsolidation of a subject's memory for the past 24 hours.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\glitteryl\glitteryl.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\glitteryl\glitteryl_CO.paa)};
        picture = QPATHTOF(data\ui\stim_vutalamine_ui_ca.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_Epinephrine): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Epinephrine";
        descriptionShort = "Increase heart rate and counter effects given by allergic reactions";
        descriptionUse = "A drug that works on a sympathetic response to dilate the bronchi, increase heart rate and counter such effects given by allergic reactions (anaphylaxis). Used in sudden cardiac arrest scenarios with decreasing positive outcomes.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\epi\epi.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\epi\epi_CO.paa)};
        picture = "\z\ace\addons\medical_treatment\ui\epinephrine_ca.paa";
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Injector_item_Morphine): GVAR(Injector_item_base) {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Morphine";
        descriptionShort = "Used to combat moderate to severe pain experiences";
        descriptionUse = "An analgesic used to combat moderate to severe pain experiences.";
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\morphine\morphine.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\morphine\morphine_CO.paa)};
        picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Bacta_Item_Base): ACE_ItemCore {
        scope = 1;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Bacta Tank";
        descriptionShort = "Bacta Tank";
        descriptionUse = "Bacta used by the medics of the Special Operations Brigade for injured troopers";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bacta\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bacta\Base_CO.paa),QPATHTOF(data\bacta\Bacta_blue_CA.paa)};
        model = QPATHTOF(rri_bacta_tank.p3d);
        ACE_isMedicalItem = 1;
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        picture = QPATHTOF(data\ui\BactaTank.paa);

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(Bacta_Item_250): GVAR(Bacta_Item_Base) {
        scope = 2;
        displayName = "[SOB] 250ml Bacta Tank";
        descriptionShort = "250ml Bacta Tank";
        descriptionUse = "250ml Bacta Tank used by the medics of the Special Operations Brigade for injured troopers";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.5;
        };
    };

    class GVAR(Bacta_Item_500): GVAR(Bacta_Item_Base) {
        scope = 2;
        displayName = "[SOB] 500ml Bacta Tank";
        descriptionShort = "500ml Bacta Tank";
        descriptionUse = "500ml Bacta Tank used by the medics of the Special Operations Brigade for injured troopers";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };

    class GVAR(Bacta_Item_1000): GVAR(Bacta_Item_Base) {
        scope = 2;
        displayName = "[SOB] 1000ml Bacta Tank";
        descriptionShort = "1000ml Bacta Tank";
        descriptionUse = "1000ml Bacta Tank used by the medics of the Special Operations Brigade for injured troopers";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class GVAR(Bacta_spray_Item_Base): ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Bacta Spray";
        descriptionShort = "Bacta Spray";
        descriptionUse = "Bacta Spray used by the medics of the Special Operations Brigade for injured troopers";
        model = QPATHTOF(rri_bacta_spray.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bactaspray\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bactaspray\base_CO.paa),QPATHTOF(data\bactaspray\bacta_blue_CA.paa)};
        picture = QPATHTOF(data\ui\BactaSpray.paa);
        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(inhaler_item_Base): ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Anti-Chemical Inhaler";
        descriptionShort = "Anti-Chemical Inhaler";
        descriptionUse = "This inhaler clears your lungs of all chemicals taken in during combat. Only one is needed to cure yourself.";
        model = QPATHTOF(rri_inhaler.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\inhaler\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\inhaler\base_CO.paa),QPATHTOF(data\inhaler\glass_CA.paa)};
        picture = QPATHTOF(data\ui\Inhaler.paa);

        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class GVAR(bacta_patch_item_Base): ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] Bacta Patch";
        descriptionShort = "A large Bacta-infused patch to deal with large trauma.";
        descriptionUse = "This patch is equipped with an integrated bacta supply. Its size makes it especially useful when dealing with large amounts of trauma to a single body part.";
        model = QPATHTOF(rri_bacta_patch.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bactapatch\bacta.rvmat)};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bactapatch\bacta_CO.paa)};
       // picture = QPATHTOF(data\ui\BactaPatch);

        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
        };
    };

    class GVAR(medi_sensor_item_Base): ACE_ItemCore {
        scope = 2;
        author = AUTHOR;
        aceArsenalCategory = "Medical";
        displayName = "[SOB] RFX/K Medisensor";
        descriptionShort = "RFX/K Advanced Diagnostics Scanner";
        model = QPATHTOF(rri_medical_scanner.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\medisensor\camo1.rvmat)};
        hiddenSelectionsTextures[] ={QPATHTOF(data\medisensor\camo1_CO.paa)};
        picture = QPATHTOF(data\ui\Scanner.paa);

        ACE_isMedicalItem = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 6;
        };
    };
};
