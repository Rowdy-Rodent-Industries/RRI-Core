class CfgAmmo {
	class GAMMO(Base);
	class GAMMO(dc17m): GAMMO(Base) {
		hit = 14; 
		caliber = 1;
	};
	class GAMMO(dc17m_ap): GAMMO(Base) {
		hit = 30;
		caliber = 5;
	};
};
