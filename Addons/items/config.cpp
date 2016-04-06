#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            "TERROR_flag00",
            "TERROR_I_Laptop",
            "TERROR_I_screenA",
            "TERROR_I_screenB",
            "TERROR_I_MobilePhone",
            
            "TERROR_Box_Wps_Basic",
            "TERROR_Box_Ammo_Basic",
            "TERROR_Box_Support"
        };
        weapons[] = {
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TOBlackOrder_Main",
            "TOBlackOrder_Weapons"
        };
        VERSION_CONFIG;
        author[] = {"Brostrom.A (Evul)"};
        authorUrl = "http://dev.evul.nu/";
	};
};

#include "CfgVehicles.hpp"