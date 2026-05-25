class CfgSoundShaders 
{
    class GVAR(br77_closure_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-fired.ogg), 1}};
		volume = 0.4466836;
		range = 5;
	};
	class GVAR(br77_closeshot_soundhsader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-fired.ogg), 1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class GVAR(br77_midshot_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-fired.ogg), 1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class GVAR(BR77_distShot_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-fired-distance.ogg), 1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,0}};
	};
	class GVAR(BR77_tailinterior_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-tail.ogg), 1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class GVAR(BR77_tailTrees_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-tail.ogg), 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(BR77_tailForest_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-tail.ogg), 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(BR77_tailMeadows_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-tail.ogg), 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(BR77_tailHouses_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\dc-tail.ogg), 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};
