class CfgVehicles {
    class Items_base_F;
    class GVAR(Injector_Base): Items_base_F
    {
        scope = 1;
        author = AUTHOR;
        displayName = "[SOB] Injector";
        descriptionShort = "Basic Injector used by the Special Operations Brigade";
        model = QPATHTOF(mti_injector.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\base\injector.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\base\injector_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\injector.jpg);

        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,medical);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(Bacta_base): Items_base_F
    {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Bacta Tank";
        descriptionShort = "Mobile Bacta tank used by field medics in the Special Operations Brigade";
        model = QPATHTOF(mti_bacta_tank.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bacta\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bacta\Base_CO.paa),QPATHTOF(data\bacta\Bacta_blue_CA.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bacta.jpg);

        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,medical);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(Bacta_Red): GVAR(Bacta_base)
    {
        displayName = "[SOB] Bacta Tank (Red)";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bacta\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bacta\Base_CO.paa),QPATHTOF(data\bacta\Bacta_red_CA.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bacta_red.jpg);
    };

    class GVAR(Bacta_Spray): Items_base_F
    {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Bacta Spray";
        descriptionShort = "Mobile Bacta Sprayused by field medics in the Special Operations Brigade";
        model = QPATHTOF(mti_bacta_spray.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bactaspray\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bactaspray\base_CO.paa),QPATHTOF(data\bactaspray\bacta_blue_CA.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bacta_spray.jpg);

        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,medical);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(Bacta_Spray_red): GVAR(Bacta_Spray)
    {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Bacta Spray";
        hiddenSelectionsTextures[] ={QPATHTOF(data\bactaspray\base_CO.paa),QPATHTOF(data\bactaspray\bacta_red_CA.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\bacta_spray_red.jpg);
    };

    class GVAR(Inhaler): Items_base_F
    {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Anti-Chemical Inhaler";
        descriptionShort = "This inhaler clears your lungs of all chemicals taken in during combat. Only one is needed to cure yourself.";
        model = QPATHTOF(mti_inhaler.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\inhaler\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\inhaler\base_CO.paa),QPATHTOF(data\inhaler\glass_ca.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\inhaler.jpg);

        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,medical);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(patch): Items_base_F
    {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Bacta Patch";
        descriptionShort = "A large Bacta-infused patch to deal with large trauma.";
        model = QPATHTOF(mti_bacta_patch.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bactapatch\bacta.rvmat)};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bactapatch\bacta_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\patch.jpg);

        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,medical);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(medi_scanner): Items_base_F
    {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Medical Scanner";
        model = QPATHTOF(mti_medical_scanner.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\medisensor\camo1.rvmat)};
        hiddenSelectionsTextures[] ={QPATHTOF(data\medisensor\camo1_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\scanner.jpg);

        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,medical);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    class GVAR(coffin): Items_base_F
    {
        scope = 2;
        author = AUTHOR;
        displayName = "[SOB] Coffin";
        model = QPATHTOF(mti_coffin.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\coffin\coffin.rvmat)};
        hiddenSelectionsTextures[] ={QPATHTOF(data\coffin\coffin_CO.paa)};
        editorPreview = QPATHTOF(data\editorpreviews\coffin.jpg);

        editorCategory = QEGVAR(edcat,Props);
        editorSubcategory = QEGVAR(edsubcat,medical);

        class SimpleObject
        {
            eden = 1;
            // ...
        };
    };

    INJECTOR_MACRO(Batroxobine,batrox);
    INJECTOR_MACRO(Deraformine,deraformine);
    INJECTOR_MACRO(Epinephrine,epi);
    INJECTOR_MACRO(Glitteryl,glitteryl);
    INJECTOR_MACRO(Latheniol,latheniol);
    INJECTOR_MACRO(Morphine,morphine);
    INJECTOR_MACRO(Nevastrin-8,nevastrin);
    INJECTOR_MACRO(PBA-Stim,pba);
    INJECTOR_MACRO(Symoxin,symox);
    INJECTOR_MACRO(Vutalamine,vutalamine);

    class ACE_MedicalLitterBase;
    class GVAR(litter_base): ACE_MedicalLitterBase {
        scope = 1;
        author = AUTHOR;

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {};

        // Tell ACE to use the class as the simpleObject instead of the model
        // This allows using custom textures
        ace_medical_treatment_useClass = 1;
    };

    class GVAR(litter_injector): GVAR(litter_base) {
        scope = 1;
        author = AUTHOR;
        model = QPATHTOF(mti_injector.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\injector\base\injector.rvmat)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\injector\base\injector_CO.paa)};
    };

    LITTER_MACRO_INJECTOR(batrox);      // GVAR(litter_batrox)
    LITTER_MACRO_INJECTOR(deraformine); // GVAR(litter_deraformine)
    LITTER_MACRO_INJECTOR(epi);         // GVAR(litter_epi)
    LITTER_MACRO_INJECTOR(glitteryl);   // GVAR(litter_glitteryl)
    LITTER_MACRO_INJECTOR(latheniol);   // GVAR(litter_latheniol)
    LITTER_MACRO_INJECTOR(morphine);    // GVAR(litter_morphine)
    LITTER_MACRO_INJECTOR(nevastrin);   // GVAR(litter_nevastrin)
    LITTER_MACRO_INJECTOR(pba);         // GVAR(litter_pba)
    LITTER_MACRO_INJECTOR(symox);       // GVAR(litter_symox)
    LITTER_MACRO_INJECTOR(vutalamine);   // GVAR(litter_vutalamine)

    class GVAR(litter_inhaler): GVAR(litter_base) {
        scope = 1;
        author = AUTHOR;
        model = QPATHTOF(mti_inhaler.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\inhaler\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\inhaler\base_CO.paa),QPATHTOF(data\inhaler\glass_ca.paa)};
    };

    class GVAR(litter_bacta_patch): GVAR(litter_base) {
        scope = 1;
        author = AUTHOR;
        model = QPATHTOF(mti_bacta_patch.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bactapatch\bacta.rvmat)};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bactapatch\bacta_CO.paa)};
    };

    class GVAR(litter_bacta_spray): GVAR(litter_base) {
        scope = 1;
        author = AUTHOR;
        model = QPATHTOF(mti_bacta_spray.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bactaspray\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bactaspray\base_CO.paa),QPATHTOF(data\bactaspray\bacta_blue_CA.paa)};
    };

    class GVAR(litter_bacta_tank): GVAR(litter_base) {
        scope = 1;
        author = AUTHOR;
        model = QPATHTOF(mti_bacta_tank.p3d);
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsmaterials[] = {QPATHTOF(data\bacta\base.rvmat),"a3\characters_f_bootcamp\common\data\VRarmorEmmisive.rvmat"};
        hiddenSelectionsTextures[] ={QPATHTOF(data\bacta\Base_CO.paa),QPATHTOF(data\bacta\Bacta_red_CA.paa)};
    };
    #include "groundholders.hpp"
};
