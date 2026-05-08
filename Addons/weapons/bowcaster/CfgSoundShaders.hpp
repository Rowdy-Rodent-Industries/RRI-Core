class CfgSoundShaders {
    //--------- Light - Shots
    /*
    class MTI_Bowcaster_Closure_SoundShader {
        samples[] = {
            {QPATHTOF(data\sounds\closure_1.wss),1},
            {QPATHTOF(data\sounds\closure_2.wss),1},
            {QPATHTOF(data\sounds\closure_3.wss),1},
        };
        volume = 0.4466836;
        range = 5;
    };
    */

    class GVAR(Bowcaster_closeShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\closeShot_1.wss),1},
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };

    class GVAR(Bowcaster_midShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\midShot_1.wss),1},
        };
        volume = 0.79432382;
        range = 1800;
        rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
    };

    class GVAR(Bowcaster_distShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\distShot_1.wss),1},
        };
        volume = 1.0;
        range = 1800;
        rangeCurve[] = {{0,0},{50,0},{300,0.7},{1800,1}};
    };

    //--------- Light - Tails
    class GVAR(Bowcaster_tailDistant_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailDistant_1.wss),1},
        };
        volume = 1;
        range = 1800;
        rangeCurve[] = {{0, 0}, {300, 0.7}, {1800, 1}};
        limitation = 1;
    };

    class GVAR(Bowcaster_tailForest_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(Bowcaster_tailHouses_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailHouses_1.wss),1},
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1200;
        limitation = 1;
    };

    class GVAR(Bowcaster_tailMeadows_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(Bowcaster_tailTrees_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(Bowcaster_tailInterior_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\tailInterior_1.wss),1},
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };

    //--------- Heavy - Shots
    /*
    class MTI_Bowcaster_Heavy_Closure_SoundShader {
        samples[] = {
            {QPATHTOF(data\sounds\closure_1.wss),1},
            {QPATHTOF(data\sounds\closure_2.wss),1},
            {QPATHTOF(data\sounds\closure_3.wss),1},
        };
        volume = 0.4466836;
        range = 5;
    };
    */

    class GVAR(Bowcaster_Heavy_closeShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_closeShot_1.wss),1},
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };

    class GVAR(Bowcaster_Heavy_midShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_midShot_1.wss),1},
        };
        volume = 0.79432382;
        range = 1800;
        rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
    };

    class GVAR(Bowcaster_Heavy_distShot_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_distShot_1.wss),1},
        };
        volume = 1.0;
        range = 1800;
        rangeCurve[] = {{0,0},{50,0},{300,0.7},{1800,1}};
    };

    //--------- Heavy - Tails
    class GVAR(Bowcaster_Heavy_tailDistant_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_tailDistant_1.wss),1},
        };
        volume = 1;
        range = 1800;
        rangeCurve[] = {{0, 0}, {300, 0.7}, {1800, 1}};
        limitation = 1;
    };

    class GVAR(Bowcaster_Heavy_tailForest_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(Bowcaster_Heavy_tailHouses_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_tailHouses_1.wss),1},
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1200;
        limitation = 1;
    };

    class GVAR(Bowcaster_Heavy_tailMeadows_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(Bowcaster_Heavy_tailTrees_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_tailDistant_1.wss),1},
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 1800;
        limitation = 1;
    };

    class GVAR(Bowcaster_Heavy_tailInterior_SoundShader) {
        samples[] = {
            {QPATHTOF(data\sounds\heavy_tailInterior_1.wss),1},
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };
};
