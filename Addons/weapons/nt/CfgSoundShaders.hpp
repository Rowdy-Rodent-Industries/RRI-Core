class CfgSoundShaders 
{
    class GVAR(nt_closure_soundshader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-fired.ogg), 1}};
		volume = 0.4466836;
		range = 5;
	};
	class GVAR(nt_closeShot_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-fired.ogg), 1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class GVAR(nt_midShot_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-fired.ogg), 1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class GVAR(nt_distShot_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-fired-distance.ogg), 1}};
		volume = 1;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,0}};
	};
	class GVAR(nt_tailInterior_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-tail.ogg), 1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class GVAR(nt_tailTrees_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-tail.ogg), 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(nt_tailForest_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-tail.ogg), 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(nt_tailMeadows_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-tail.ogg), 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(nt_tailHouses_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\nt-tail.ogg), 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class GVAR(NTExp_Close)
	{
		samples[]={{QPATHTOF(data\sounds\ammo\NT_Big_Explosion_close_1.wss),1},{QPATHTOF(data\sounds\ammo\NT_Big_Explosion_close_2.wss),1}};
		volume=1;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{250,0.3},
			{250,0},
			{1800,0}
		};
	};
	class GVAR(NTExp_Detonate)
	{
		samples[]={{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_midExp_02.wss",1}};
		volume=1.1;
		range=500;
		rangeCurve[]=
		{
			{0,1},
			{250,1},
			{500,1},
			{1800,0}
		};
	};
	class GVAR(NTExp_Far)
	{
		samples[]={{QPATHTOF(data\sounds\ammo\NT_Big_Explosion_far.wss),1}};
		volume=1.1;
		range=2800;
		rangeCurve[]=
		{
			{0,0},
			{250,0.5},
			{500,1},
			{2800,1}
		};
	};
};
