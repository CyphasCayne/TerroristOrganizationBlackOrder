#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            "TERROR_VEH_O_m1025",
            "TERROR_VEH_O_m1025_m2",
            "TERROR_VEH_O_m1025_Mk19",
            
            "TERROR_VEH_O_SUV"
        };
        weapons[] = {
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TOBlackOrder_Main",
            "rhsusf_hmmwv"
        };
        VERSION_CONFIG;
        author[] = {"Brostrom.A (Evul)"};
        authorUrl = "http://dev.evul.nu/";
	};
};

#include "CfgVehicles.hpp"