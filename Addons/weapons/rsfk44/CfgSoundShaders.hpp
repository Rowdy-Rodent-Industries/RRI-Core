class CfgSoundShaders {
    class GVAR(RSKF44_closeShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\closeShot_1.wss),1},
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };

    class GVAR(RSKF44_midShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\midShot_1.wss),1},
        };
        volume = 1;
        range = 1800;
        rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
    };

    class GVAR(RSKF44_distShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\distShot_1.wss),1},
        };
        volume = 1.0;
        range = 1800;
        rangeCurve[] = {{0,0},{50,0},{300,0.7},{1800,1}};
    };

    //--------- Light - Tails
    class GVAR(RSKF44_tailDistant_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailMeadows_1.wss),1},
        };
        volume = 1;
        range = 1800;
        rangeCurve[] = {{0, 0}, {300, 0.7}, {1800, 1}};
        limitation = 1;
    };

    class GVAR(RSKF44_tailForest_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailMeadows_1.wss),1},
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(RSKF44_tailHouses_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailHouses_1.wss),1},
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1200;
        limitation = 1;
    };

    class GVAR(RSKF44_tailMeadows_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailMeadows_1.wss),1},
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(RSKF44_tailTrees_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailMeadows_1.wss),1},
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(RSKF44_tailInterior_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailInterior_1.wss),1},
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };
};
