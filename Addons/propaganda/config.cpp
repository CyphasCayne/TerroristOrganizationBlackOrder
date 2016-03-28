#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
        };
        weapons[] = {
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "TOBlackOrder_Main",
            "ACE_tagging"
        };
        VERSION_CONFIG;
        author[] = {"Brostrom.A (Evul)"};
        authorUrl = "http://dev.evul.nu/";
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"