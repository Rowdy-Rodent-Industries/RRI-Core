class CfgSoundSets
{
    class GVAR(hpb_Shot_SoundSet)
	{
		soundShaders[] =
		{
			QGVAR(hpb_closure_soundshader),
			QGVAR(hpb_closeshot_soundshader),
			QGVAR(hpb_midshot_soundshader),
			QGVAR(hpb_distShot_SoundShader)
		};
		volumeFactor = 1;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.35;
		volumeCurve = QGVAR(hpb_Rifle_weapons_basic_volumecurve);
		sound3DProcessingType = QGVAR(hpb_Rifle_weapons_3dprocessor);
		distanceFilter = QGVAR(hpb_Rifle_weapons_lowpass_filter);
		occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class GVAR(hpb_Tail_SoundSet)
	{
		soundShaders[] =
		{
			QGVAR(hpb_tailTrees_SoundShader),
			QGVAR(hpb_tailForest_SoundShader),
			QGVAR(hpb_tailMeadows_SoundShader),
			QGVAR(hpb_tailHouses_SoundShader)
		};
		volumeFactor = 1;
		volumeCurve = QGVAR(hpb_Rifle_wpn_vl_sin);
		frequencyRandomizer = 1;
		sound3DProcessingType = QGVAR(hpb_Rifle_weapons_tails_3dprocessor);
		distanceFilter = QGVAR(hpb_Rifle_wpn_echo_lp_dia);
		spatial = 1;
		occlusionFactor = 0.25;
		obstructionFactor = 0;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
    class GVAR(ubs_Shot_SoundSet)
	{
		soundShaders[] =
		{
			QGVAR(ubs_closure_soundshader),
			QGVAR(ubs_closeshot_soundshader),
			QGVAR(ubs_midshot_soundshader),
			QGVAR(ubs_distShot_SoundShader)
		};
		volumeFactor = 1;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.35;
		volumeCurve = QGVAR(ubs_weapons_basic_volumecurve);
		sound3DProcessingType = QGVAR(ubs_weapons_3dprocessor);
		distanceFilter = QGVAR(ubs_weapons_lowpass_filter);
		occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class GVAR(ubs_Tail_SoundSet)
	{
		soundShaders[] =
		{
			QGVAR(ubs_tailTrees_SoundShader),
			QGVAR(ubs_tailForest_SoundShader),
			QGVAR(ubs_tailMeadows_SoundShader),
			QGVAR(ubs_tailHouses_SoundShader)
		};
		volumeFactor = 1;
		volumeCurve = QGVAR(ubs_wpn_vl_sin);
		frequencyRandomizer = 1;
		sound3DProcessingType = QGVAR(ubs_weapons_tails_3dprocessor);
		distanceFilter = QGVAR(ubs_wpn_echo_lp_dia);
		spatial = 1;
		occlusionFactor = 0.25;
		obstructionFactor = 0;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
};

class Cfgsoundcurves
{
	class GVAR(hpb_Rifle_weapons_basic_volumecurve)
	{
		points[] = {{0, 1}, {0.1, 0.75}, {0.2, 0.5}, {0.3, 0.2}, {0.4, 0.1}, {0.5, 0.05}, {0.6, 0.01}, {0.7, 0.0075}, {0.8, 0.0025}, {0.9, 0.001}, {1, 0}};
	};
	class GVAR(hpb_Rifle_wpn_vl_sin)
	{
		points[] = {{0, 1}, {0.1, 0.5}, {0.2, 0.325}, {0.3, 0.25}, {0.4, 0.2}, {0.5, 0.175}, {0.6, 0.15}, {0.7, 0.125}, {0.8, 0.1}, {0.9, 0.05}, {1, 0}};
	};
	class GVAR(hpb_Rifle_basic_processorcurve)
	{
		points[] = {{0, 1}, {0.1, 0.97}, {0.2, 0.95}, {0.3, 0.85}, {0.4, 0.71}, {0.5, 0.52}, {0.6, 0.32}, {0.7, 0.18}, {0.8, 0.1}, {0.9, 0.03}, {1, 0}};
	};
	class GVAR(hpb_Rifle_weapons_processorcurve)
	{
		points[] = {{0, 1}, {0.005, 0.75}, {0.01, 0.025}, {1, 0.01}};
	};
	class GVAR(ubs_weapons_basic_volumecurve)
	{
		points[] = {{0, 1}, {0.1, 0.75}, {0.2, 0.5}, {0.3, 0.2}, {0.4, 0.1}, {0.5, 0.05}, {0.6, 0.01}, {0.7, 0.0075}, {0.8, 0.0025}, {0.9, 0.001}, {1, 0}};
	};
	class GVAR(ubs_wpn_vl_sin)
	{
		points[] = {{0, 1}, {0.1, 0.5}, {0.2, 0.325}, {0.3, 0.25}, {0.4, 0.2}, {0.5, 0.175}, {0.6, 0.15}, {0.7, 0.125}, {0.8, 0.1}, {0.9, 0.05}, {1, 0}};
	};
	class GVAR(ubs_basic_processorcurve)
	{
		points[] = {{0, 1}, {0.1, 0.97}, {0.2, 0.95}, {0.3, 0.85}, {0.4, 0.71}, {0.5, 0.52}, {0.6, 0.32}, {0.7, 0.18}, {0.8, 0.1}, {0.9, 0.03}, {1, 0}};
	};
	class GVAR(ubs_weapons_processorcurve)
	{
		points[] = {{0, 1}, {0.005, 0.75}, {0.01, 0.025}, {1, 0.01}};
	};
};

class Cfgsound3dprocessors
{
	class GVAR(hpb_Rifle_weapons_3dprocessor)
	{
		type = "panner";
		innerrange = 5;
		range = 500;
		rangecurve = QGVAR(hpb_Rifle_weapons_processorcurve);
	};
	class GVAR(hpb_Rifle_weapons_tails_3dprocessor)
	{
		type = "panner";
		innerrange = 0;
		range = 100;
		rangecurve = QGVAR(hpb_Rifle_basic_processorcurve);
	};
	class GVAR(ubs_weapons_3dprocessor)
	{
		type = "panner";
		innerrange = 5;
		range = 500;
		rangecurve = QGVAR(ubs_weapons_processorcurve);
	};
	class GVAR(ubs_weapons_tails_3dprocessor)
	{
		type = "panner";
		innerrange = 0;
		range = 100;
		rangecurve = QGVAR(ubs_basic_processorcurve);
	};
};

class cfgdistancefilters
{
	class GVAR(hpb_Rifle_weapons_lowpass_filter)
	{
		type = "lowpassfilter";
		mincutofffrequency = 750;
		qfactor = 1;
		innerrange = 0;
		range = 900;
		powerfactor = 55;
	};
	class GVAR(hpb_Rifle_wpn_echo_lp_dia)
	{
		type = "lowpassfilter";
		mincutofffrequency = 2500;
		qfactor = 1;
		innerrange = 30;
		range = 300;
		powerfactor = 75;
	};
	class GVAR(ubs_weapons_lowpass_filter)
	{
		type = "lowpassfilter";
		mincutofffrequency = 750;
		qfactor = 1;
		innerrange = 0;
		range = 900;
		powerfactor = 55;
	};
	class GVAR(ubs_wpn_echo_lp_dia)
	{
		type = "lowpassfilter";
		mincutofffrequency = 2500;
		qfactor = 1;
		innerrange = 30;
		range = 300;
		powerfactor = 75;
	};
};
