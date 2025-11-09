// base
class rri_havoc_uniform_base: SFA_Havoc_Armor
{
	scope = 1;
	scopeArsenal = 1;
	author = AUTHOR;
	displayName = "[RSFD] Havoc Trooper";
	model = "SFA_Equipment_R\Uniform\Havoc\Havoc_uniform.p3d";

	class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = "rri_havoc_unit_base";
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

MACRO_UNIFORM(havoc,rct);
MACRO_UNIFORM(havoc,pvt);
