class CfgSoundShaders 
{
    class GVAR(pcb_closure_soundshader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_base.wav), 1}};
		volume = 0.4466836;
		range = 5;
	};
	class GVAR(pcb_closeShot_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_base.wav), 1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class GVAR(pcb_midShot_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_base.wav), 1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class GVAR(pcb_distShot_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_base.wav), 1}};
		volume = 1;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,0}};
	};
	class GVAR(pcb_tailInterior_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_far.wav), 1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class GVAR(pcb_tailTrees_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_far.wav), 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(pcb_tailForest_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_far.wav), 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(pcb_tailMeadows_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_far.wav), 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class GVAR(pcb_tailHouses_SoundShader)
	{
		samples[] = {{QPATHTOF(Data\sounds\pcb_far.wav), 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};
