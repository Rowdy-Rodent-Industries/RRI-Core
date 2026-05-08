class CfgSoundSets
{
    class GVAR(causality_Shot_SoundSet)
	{
		soundShaders[] =
		{
			QGVAR(causality_closure_soundshader),
			QGVAR(causality_closeshot_soundhsader),
			QGVAR(causality_midshot_soundshader),
			QGVAR(causality_distShot_SoundShader)
		};
		volumeFactor = 0.65;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.35;
		volumeCurve = QGVAR(causality_Rifle_weapons_basic_volumecurve);
		sound3DProcessingType = QGVAR(causality_Rifle_weapons_3dprocessor);
		distanceFilter = QGVAR(causality_Rifle_weapons_lowpass_filter);
		occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class GVAR(causality_Tail_SoundSet)
	{
		soundShaders[] =
		{
			QGVAR(causality_tailTrees_SoundShader),
			QGVAR(causality_tailForest_SoundShader),
			QGVAR(causality_tailMeadows_SoundShader),
			QGVAR(causality_tailHouses_SoundShader)
		};
		volumeFactor = 0.55;
		volumeCurve = QGVAR(causality_Rifle_wpn_vl_sin);
		frequencyRandomizer = 1;
		sound3DProcessingType = QGVAR(causality_Rifle_weapons_tails_3dprocessor);
		distanceFilter = QGVAR(causality_Rifle_wpn_echo_lp_dia);
		spatial = 1;
		occlusionFactor = 0.25;
		obstructionFactor = 0;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
};

class CfgSoundCurves
{
	class GVAR(causality_Rifle_weapons_basic_volumecurve)
	{
		points[] = {{0, 1}, {0.1, 0.75}, {0.2, 0.5}, {0.3, 0.2}, {0.4, 0.1}, {0.5, 0.05}, {0.6, 0.01}, {0.7, 0.0075}, {0.8, 0.0025}, {0.9, 0.001}, {1, 0}};
	};
	class GVAR(causality_Rifle_wpn_vl_sin)
	{
		points[] = {{0, 1}, {0.1, 0.5}, {0.2, 0.325}, {0.3, 0.25}, {0.4, 0.2}, {0.5, 0.175}, {0.6, 0.15}, {0.7, 0.125}, {0.8, 0.1}, {0.9, 0.05}, {1, 0}};
	};
	class GVAR(causality_Rifle_basic_processorcurve)
	{
		points[] = {{0, 1}, {0.1, 0.97}, {0.2, 0.95}, {0.3, 0.85}, {0.4, 0.71}, {0.5, 0.52}, {0.6, 0.32}, {0.7, 0.18}, {0.8, 0.1}, {0.9, 0.03}, {1, 0}};
	};
	class GVAR(causality_Rifle_weapons_processorcurve)
	{
		points[] = {{0, 1}, {0.005, 0.75}, {0.01, 0.025}, {1, 0.01}};
	};
};

class Cfgsound3dprocessors
{
	class GVAR(causality_Rifle_weapons_3dprocessor)
	{
		type = "panner";
		innerrange = 5;
		range = 500;
		rangecurve = QGVAR(causality_Rifle_weapons_processorcurve);
	};
	class GVAR(causality_Rifle_weapons_tails_3dprocessor)
	{
		type = "panner";
		innerrange = 0;
		range = 100;
		rangecurve = QGVAR(causality_Rifle_basic_processorcurve);
	};
};

class cfgdistancefilters
{
	class GVAR(causality_Rifle_weapons_lowpass_filter)
	{
		type = "lowpassfilter";
		mincutofffrequency = 750;
		qfactor = 1;
		innerrange = 0;
		range = 900;
		powerfactor = 55;
	};
	class GVAR(causality_Rifle_wpn_echo_lp_dia)
	{
		type = "lowpassfilter";
		mincutofffrequency = 2500;
		qfactor = 1;
		innerrange = 30;
		range = 300;
		powerfactor = 75;
	};
};
