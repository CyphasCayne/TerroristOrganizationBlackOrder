class CfgVehicles {
    class rhsusf_m1025_d;
    class rhsusf_m1025_d_m2;
    class rhsusf_m1025_d_Mk19;
    class C_SUV_01_F;
    
    class TERROR_VEH_O_m1025 : rhsusf_m1025_d {
        scope = 2;
        displayname = "M1025A2";
        author = "Brostrom.A";
        faction = "TERROR_Faction_O";
        side = 0;
        vehicleClass = "Car";
        crew = "TERROR_O_SOLDIER_R";
        typicalCargo[] = {"TERROR_O_SOLDIER_R"};
        hiddenSelections[] = {
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"camo2",
			"unitdecals_1",
			"unitdecals_2",

			//hide rest of stuff
			"ind_wait",
			"ind_brake",
			"ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
			PATHTOF(data\m998_exterior_terror.paa),
			PATHTOF(data\m998_interior_terror.paa),
			PATHTOF(data\m1025_A2_parts_terror.paa),
			//PATHTOF(data\wheel_wranglermt_terror.paa),
			QUOTE(rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa),
			PATHTOF(data\m998_mainbody_terror.paa),
			PATHTOF(data\m1025_gratting_terror.paa),
			PATHTOF(data\m1025_terror.paa),
			PATHTOF(data\decals\empty.paa),
			PATHTOF(data\decals\empty.paa)
        };
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025.paa";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhs_m1025_pic_ca.paa";
        class TransportBackpacks {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,3);
            MACRO_ADDITEM(ACE_Flashlight_XL50,1);
            MACRO_ADDITEM(ACE_EarBuds,3);
        };
    };
    class TERROR_VEH_O_m1025_m2 : rhsusf_m1025_d_m2 {
        scope = 2;
        displayname = "M1025A2 (M2)";
        faction = "TERROR_Faction_O";
        side = 0;
        vehicleClass = "Car";
        crew = "TERROR_O_SOLDIER_R";
        typicalCargo[] = {"TERROR_O_SOLDIER_R"};
        hiddenSelections[] = {
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"camo2",
			"camo3",
			"unitdecals_1",
			"unitdecals_2",

			//hide rest of stuff
			"ind_wait",
			"ind_brake",
			"ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
			PATHTOF(data\m998_exterior_terror.paa),
			PATHTOF(data\m998_interior_terror.paa),
			PATHTOF(data\m1025_A2_parts_terror.paa),
			QUOTE(rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa),
			PATHTOF(data\m998_mainbody_terror.paa),
			PATHTOF(data\m1025_gratting_terror.paa),
			PATHTOF(data\m1025_terror.paa),
			PATHTOF(data\mk64mount_terror.paa),
			PATHTOF(data\decals\empty.paa),
			PATHTOF(data\decals\empty.paa)
        };
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_m2";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_m2.paa";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhs_m1025_m2_pic_ca.paa";
        class TransportBackpacks {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,3);
            MACRO_ADDITEM(ACE_Flashlight_XL50,1);
            MACRO_ADDITEM(ACE_EarBuds,3);
        };
    };
    class TERROR_VEH_O_m1025_Mk19 : rhsusf_m1025_d_Mk19 {
        scope = 2;
        displayname = "M1025A2 (Mk19)";
        faction = "TERROR_Faction_O";
        side = 0;
        vehicleClass = "Car";
        crew = "TERROR_O_SOLDIER_R";
        typicalCargo[] = {"TERROR_O_SOLDIER_R"};
        hiddenSelections[] = {
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"camo2",
			"camo3",
			"unitdecals_1",
			"unitdecals_2",

			//hide rest of stuff
			"ind_wait",
			"ind_brake",
			"ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
			PATHTOF(data\m998_exterior_terror.paa),
			PATHTOF(data\m998_interior_terror.paa),
			PATHTOF(data\m1025_A2_parts_terror.paa),
			QUOTE(rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa),
			PATHTOF(data\m998_mainbody_terror.paa),
			PATHTOF(data\m1025_gratting_terror.paa),
			PATHTOF(data\m1025_terror.paa),
			PATHTOF(data\mk64mount_terror.paa),
			PATHTOF(data\decals\empty.paa),
			PATHTOF(data\decals\empty.paa)
        };
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_mk19";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_mk19.paa";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhs_m1025_mk19_pic_ca.paa";
        class TransportBackpacks {
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(Chemlight_red,2);
            MACRO_ADDMAGAZINE(Chemlight_blue,2);
            MACRO_ADDMAGAZINE(Chemlight_green,2);
        };
        class TransportWeapons {
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,3);
            MACRO_ADDITEM(ACE_Flashlight_XL50,1);
            MACRO_ADDITEM(ACE_EarBuds,3);
        };
    };
    class TERROR_VEH_O_SUV : C_SUV_01_F {
        scope = 2;
        author = "Brostrom.A";
        faction = "TERROR_Faction_O";
        side = 0;
        vehicleClass = "Car";
        crew = "TERROR_O_SOLDIER_R";
        typicalCargo[] = {"TERROR_O_SOLDIER_R"};
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\TERROR_VEH_SUV.paa)
        };
        class TransportBackpacks {
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,3);
            MACRO_ADDITEM(ACE_Flashlight_XL50,1);
            MACRO_ADDITEM(ACE_EarBuds,3);
        };
        class textureSources {
            class TERROR {
                author = "Brostrom.A";
                displayName = "TERROR";
                factions[] = {"TERROR_Faction_O"};
                textures[] = {
                    PATHTOF(data\TERROR_VEH_SUV.paa)
                };
            };
        };
    };
};