class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;

class CfgWeapons {
	class 3AS_Chaingun;
	class GWEAPON(chaingun): 3AS_Chaingun {
		author = AUTHOR;
		scope = 2;
		displayName = "[SOB] Z-6 Chaingun";
		baseWeapon = QGWEAPON(chaingun);

		magazines[] = {QGMAG(chaingun)};
		magazineWell[] = {QGMAGWELL(chaingun)};
		GVAR_CORE(arsenal,whitelists)[] = {"Commando"};
	};
};
