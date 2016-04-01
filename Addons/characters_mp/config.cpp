#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            "TERROR_O_SOLDIER_MP_R",
            "TERROR_O_SOLDIER_MP_R2",
            "TERROR_O_SOLDIER_MP_R3",
            "TERROR_O_SOLDIER_MP_SL",
            "TERROR_O_SOLDIER_MP_MEDIC",
            "TERROR_O_SOLDIER_MP_PO",
            "TERROR_O_SOLDIER_MP_PO2"
        };
        weapons[] = {
            "TERROR_U_Uniform_3",
            
            "TERROR_V_TacVest_MP"
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TOBlackOrder_Main",
            "TOBlackOrder_Characters",
            "TOBlackOrder_Weapons"
        };
        VERSION_CONFIG;
        author[] = {"Brostrom.A (Evul)"};
        authorUrl = "http://dev.evul.nu/";
	};
};
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"