#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            "TERROR_flag00",
            "TERROR_I_Laptop",
            "TERROR_I_screenA",
            "TERROR_I_screenB",
            "TERROR_I_MobilePhone"
        };
        weapons[] = {
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TOBlackOrder_Main"
        };
        VERSION_CONFIG;
        author[] = {"Brostrom.A (Evul)"};
        authorUrl = "http://dev.evul.nu/";
	};
};

#include "CfgVehicles.hpp"