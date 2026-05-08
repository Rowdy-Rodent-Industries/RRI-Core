class CfgSoundShaders 
{
    class GVAR(hpb_closure_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_base.wav), 1}};
		volume = 0.4466836;
		range = 5;
	};
	class GVAR(hpb_closeshot_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_base.wav), 1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class GVAR(hpb_midshot_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_base.wav), 1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class GVAR(hpb_distShot_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_base.wav), 1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,0}};
	};
	class GVAR(hpb_tailinterior_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_close.wav), 1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class GVAR(hpb_tailTrees_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_close.wav), 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(hpb_tailForest_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_close.wav), 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(hpb_tailMeadows_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_close.wav), 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(hpb_tailHouses_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\hpb_close.wav), 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
    class GVAR(ubs_closure_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_base.wav), 1}};
		volume = 0.4466836;
		range = 5;
	};
	class GVAR(ubs_closeshot_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_base.wav), 1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class GVAR(ubs_midshot_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_base.wav), 1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class GVAR(ubs_distShot_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_base.wav), 1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,0}};
	};
	class GVAR(ubs_tailinterior_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_far.wav), 1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class GVAR(ubs_tailTrees_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_far.wav), 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(ubs_tailForest_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_far.wav), 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(ubs_tailMeadows_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_far.wav), 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(ubs_tailHouses_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\ubs_far.wav), 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};
