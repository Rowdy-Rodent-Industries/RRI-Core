class CfgRecoils
{
	class recoil_default;
	class GVAR(Recoil_Base): recoil_default
	{
		kickBack[]={0.02,0.029999999};
		muzzleOuter[]={0.31000001,0.41000001,0.30000001,0.2};
		permanent=0.029999999;
		temporary=0.0020000001;
	};
	class GVAR(Rifle_Recoil): recoil_default
	{
		muzzleOuter[]={0.30000001,0.80000001,0.40000001,0.2};
		kickBack[]={0.02,0.039999999};
		temporary=0.0099999998;
	};
	class GVAR(nt_recoil): recoil_default
	{
		muzzleOuter[] = {0.2,0.6,0.2,0.2};
		kickBack[] = {0.06,0.12};
		temporary = 0.01;
	};
	class GVAR(dp23hp_recoil): recoil_default
	{
		muzzleOuter[]={0.6,1,0.40000001,0.2};
		kickBack[]={0.02,0.05};
		temporary=0.1;
	};
};
