#include "script_component.hpp"

// PostInit to setup NSM damage ma
[
	{
		count nsm_jumppack_damage_map > 0
	}, 
    // what code to run when above is true
	{
        nsm_jumppack_damage_map set [
            QGBACKPACK(TL), //class name of backpack
            [0,0] // [Percent chance to take damage, damage multiplier]
        ];
        nsm_jumppack_damage_map set [
            QGBACKPACK(SL),
            [0,0]
        ];
		nsm_jumppack_damage_map set [
            QGBACKPACK(Medic),
            [0,0]
        ];
		nsm_jumppack_damage_map set [
            QGBACKPACK(EOD),
            [0,0]
        ];
		nsm_jumppack_damage_map set [
            QGBACKPACK(base),
            [0,0]
        ];
        nsm_jumppack_damage_map set [
            QEGBACKPACK(equipment_trooper,JT12),
            [0,0]
        ];
    }, 
	[],
	60, //after 60 seconds, if the condition isnt met do the below code
    //what code to run when timed out
	{
        //timed out cause it never got defined for watever reason

        nsm_jumppack_damage_map = createHashMap;

        nsm_jumppack_damage_map set [
            QGBACKPACK(TL),
            [0,0] 
        ];
        nsm_jumppack_damage_map set [
            QGBACKPACK(SL),
            [0,0]
        ];
		nsm_jumppack_damage_map set [
            QGBACKPACK(Medic),
            [0,0]
        ];
		nsm_jumppack_damage_map set [
            QGBACKPACK(EOD),
            [0,0]
        ];
		nsm_jumppack_damage_map set [
            QGBACKPACK(base),
            [0,0]
        ];
        nsm_jumppack_damage_map set [
            QEGBACKPACK(equipment_trooper,JT12),
            [0,0]
        ];
    }
] call CBA_fnc_waitUntilAndExecute;
