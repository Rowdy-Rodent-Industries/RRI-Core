class CfgGlasses {
	class GFACEWEAR(base) {
        author=AUTHOR;
        ACE_Overlay = "";
        ACE_OverlayCracked = "";
        ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ACE_Protection = 1;
        ACE_Resistance = 2;
        identityTypes[]={};
        mass=4;
        name = "None";
        scope=0;

        GVAR_CORE(equipment,hideFacewear) = 1;
    };

	#include "cfg\Facewear.hpp"
};
