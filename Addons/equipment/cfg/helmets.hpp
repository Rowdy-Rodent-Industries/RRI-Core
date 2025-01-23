class GHELMET(P2): ls_gar_phase2_helmet
{
	scope = 1;
	displayName = "(41st) P2 Helmet";

	hiddenSelections[]=
	{
		"camo1","visor"
	};
	hiddenselectionsmaterials[]= {QPATHTOF(data\Helmets\Base\P2Helmet.rvmat)};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(data\Helmets\Base\Rank\helmet_co.paa)
	};
};

class GHELMET(Pilot): ls_gar_phase2Pilot_helmet
{
	scope = 1;
	displayName = "(41st) P2 Pilot Helmet";
};

class GHELMET(ARF): ls_gar_phase1Arf_helmet
{
	scope = 1;
	displayName = "(41st) P1 ARF Helmet";
};

class GHELMET(BARC): ls_gar_barc_helmet
{
	scope = 1;
	displayName = "(41st) BARC Helmet";
};

class GHELMET(RTO): ls_sob_phase2SpecOp_helmet
{
	scope = 1;
	displayName = "(41st) P2 RTO Helmet";
};

MACRO_RANK_HELMET(2,P2,Recruit);
MACRO_RANK_HELMET(2,P2,Enlisted);
MACRO_RANK_HELMET(2,P2,Veteran);
MACRO_RANK_HELMET(2,P2,NCO);