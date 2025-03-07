class GHELMET(P2): ls_gar_phase2_helmet
{
	scope = 1;
	displayName = "[41st] P2 Helmet";

	hiddenSelections[]=
	{
		"camo1","visor"
	};
	hiddenselectionsmaterials[]= {QPATHTOF(data\Helmets\Base\P2Helmet.rvmat)};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\Helmets\Base\Rank\helmet_co.paa)
	};

	HELMET_PROTECTION;
};

class GHELMET(Pilot): 3as_P2_Pilot_helmet
{
	scope = 1;
	displayName = "[41st] P2 Pilot Helmet";

	HELMET_PROTECTION;
};

class GHELMET(ARF): ls_gar_phase1Arf_helmet
{
	scope = 1;
	displayName = "[41st] P1 ARF Helmet";

	HELMET_PROTECTION;
};

class GHELMET(BARC): ls_gar_barc_helmet
{
	scope = 1;
	displayName = "[41st] BARC Helmet";

	HELMET_PROTECTION;
};

class GHELMET(RTO): ls_sob_phase2SpecOp_helmet
{
	scope = 1;
	displayName = "[41st] P2 RTO Helmet";

	HELMET_PROTECTION;
};

//P2 Rank 
MACRO_RANK_HELMET(2,P2,Recruit);
MACRO_RANK_HELMET(2,P2,Enlisted);
MACRO_RANK_HELMET(2,P2,Veteran);
MACRO_RANK_HELMET(2,P2,NCO);

//P2 Custom

//Pilot Rank
MACRO_PILOT_HELMET(2,Pilot,Recruit);
MACRO_PILOT_HELMET(2,Pilot,Enlisted);
MACRO_PILOT_HELMET(2,Pilot,Veteran);
MACRO_PILOT_HELMET(2,Pilot,NCO);