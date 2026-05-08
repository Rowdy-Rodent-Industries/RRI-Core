class CfgSoundShaders {
    class GVAR(Closure_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_closure_1.wss),1},
            {QPATHTOF(data\sounds\defib_closure_2.wss),1},
            {QPATHTOF(data\sounds\defib_closure_3.wss),1}
        };
        volume = 0.4466836;
        range = 5;
    };

    class GVAR(closeShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_closeShot_1.wss),1},
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };

    class GVAR(midShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_midShot_1.wss),1},
        };
        volume = 0.79432382;
        range = 1800;
        rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
    };

    class GVAR(distShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_distShot_1.wss),1},
        };
        volume = 1.0;
        range = 1800;
        rangeCurve[] = {{0,0},{50,0},{300,0.7},{1800,1}};
    };

    //--------- Tails

    class GVAR(tailDistant_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_tailDistant_1.wss),1},
        };
        volume = 1;
        range = 1800;
        rangeCurve[] = {{0, 0}, {300, 0.7}, {1800, 1}};
        limitation = 1;
    };

    class GVAR(tailForest_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(tailHouses_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1200;
        limitation = 1;
    };

    class GVAR(tailMeadows_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(tailTrees_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(tailInterior_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\defib_tailInterior_1.wss),1},
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };
};
