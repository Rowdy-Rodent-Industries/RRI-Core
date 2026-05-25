class CfgSoundShaders 
{
    class GVAR(boltblaster_closure_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_base.wav), 1}};
		volume = 0.4466836;
		range = 5;
	};
	class GVAR(boltblaster_closeshot_soundhsader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_base.wav), 1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class GVAR(boltblaster_midshot_soundshader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_base.wav), 1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class GVAR(boltblaster_distShot_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_base.wav), 1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,0}};
	};
	class GVAR(boltblaster_tailinterior_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_far.wav), 1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class GVAR(boltblaster_tailTrees_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_far.wav), 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(boltblaster_tailForest_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_far.wav), 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(boltblaster_tailMeadows_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_far.wav), 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(boltblaster_tailHouses_SoundShader)
	{
		samples[] = {{QPATHTOF(data\sounds\boltblaster_far.wav), 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};
