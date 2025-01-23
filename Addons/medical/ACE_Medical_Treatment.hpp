class ace_medical_treatment {
    class Bandaging {
        class FieldDressing;
    };
    class Medication {
        class Morphine {
            singleDose = 400;
        };

        class Epinephrine {
            singleDose = 400;
        };

        class Adenosine {
            hrIncreaseHigh[] = {-25, -55};
            timeInSystem = 600;

            singleDose = 400;
        };

        class PainKiller {
            painReduce = 0.7;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 800;
            timeTillMaxEffect = 60;
            maxDose = 3;
            incompatibleMedication[] = {};
            viscosityChange = 5;

            singleDose = 400;
        };
    };
};
