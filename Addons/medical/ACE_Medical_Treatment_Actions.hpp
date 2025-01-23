class ace_medical_treatment_actions {
    class BasicBandage {
        callbackSuccess = QFUNC(bandage);
    };

    class Morphine;
    class Painkiller: Morphine {
        displayName = "Inject Painkiller";
        displayNameProgress = "Injecting Painkiller...";
        items[] = {QGVAR(PainKiller)};
        condition = QGVAR(systemEnabled);
        callbackSuccess = QFUNC(medication);
        medicRequired = 0;
    };

    // class CPR;
    // class Reorient: CPR {
    //     displayName = "Reorient Patient";
    //     displayNameProgress = "Reorienting...";
    //     allowedSelections[] = {"Head"};
    //     allowSelfTreatment = 0;
    //     medicRequired = 1;
    //     treatmentTime = 1;
    //     items[] = {};
    //     condition = QUOTE(GVAR(systemEnabled) && !([_patient] call ace_common_fnc_isAwake));
    //     patientStateCondition = 0;
    //     callbackFailure = "";
	// 	callbackProgress = "";
    //     callbackSuccess = QUOTE([ARR_2(_player,_patient)] call FUNC(reorient));
	// 	callbackStart = "";
    //     animationMedic = "AwopPknlMstpSgthWrflDnon_End";
    //     animationMedicProne = "AwopPpneMstpSgthWnonDnon_Fast_End";
    // };
};
