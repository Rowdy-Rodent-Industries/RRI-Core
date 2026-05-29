class CfgGlasses {
	class GFACEWEAR(base) {
        author=AUTHOR;
        ACE_Resistance = 2;
        identityTypes[]={};
        mass=4;
        name = "None";
        scope=0;

        GVAR_CORE(equipment,hideFacewear) = 1;
    };

	#include "cfg\Facewear.hpp"
};

