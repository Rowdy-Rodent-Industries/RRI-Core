class CfgSoundShaders {
    //--------- Light - Shots
    class GVAR(Verpine_Closure_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\closure_1.wss),1}
        };
        volume = 0.4466836;
        range = 5;
    };

    class GVAR(Verpine_closeShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\closeShot_1.wss),1},
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };

    class GVAR(Verpine_midShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\midShot_1.wss),1},
        };
        volume = 0.79432382;
        range = 1800;
        rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
    };

    //--------- Light - Tails
    class GVAR(Verpine_tailHouses_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailHouses_1.wss),1},
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1200;
        limitation = 1;
    };

    class GVAR(Verpine_tailMeadows_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailMeadows_1.wss),1},
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(Verpine_tailInterior_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailInterior_1.wss),1},
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };
};
