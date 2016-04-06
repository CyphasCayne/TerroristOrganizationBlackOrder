class CfgVehicles {
    class FlagPole_F;
    class Land_Laptop_unfolded_F;
    class Land_PCSet_01_screen_F;
    class Land_MobilePhone_smart_F;
    
    class TERROR_flag00 : FlagPole_F {
        scope = 2;
        author = "A.Brostrom";
        _generalMacro = "TERROR_flag00";
        displayName = "Flag (Black Order)";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(PATHTOF(data\flags\TERROR_flag00.paa)));
        };
    };
    
    class TERROR_I_Laptop : Land_Laptop_unfolded_F {
        scope = 2;
        author = "A.Brostrom";
        _generalMacro = "TERROR_I_Laptop";
        displayName = "Laptop (Black Order; Login Screen)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\electronics\TERROR_I_Laptop.paa)
        };
    };
    class TERROR_I_screenA : Land_PCSet_01_screen_F {
        scope = 2;
        author = "A.Brostrom";
        _generalMacro = "TERROR_I_screenA";
        displayName = "PC Set (Black Order; Login Screen)";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(PATHTOF(data\electronics\TERROR_I_screenA.paa)));
        };
    };
    class TERROR_I_screenB : Land_PCSet_01_screen_F {
        scope = 2;
        author = "A.Brostrom";
        _generalMacro = "TERROR_I_screenB";
        displayName = "PC Set (Black Order; Empty Screen)";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(PATHTOF(data\electronics\TERROR_I_screenB.paa)));
        };
    };
    class TERROR_I_MobilePhone : Land_MobilePhone_smart_F {
        scope = 2;
        author = "A.Brostrom";
        _generalMacro = "TERROR_I_MobilePhone";
        displayName = "Mobile Phone (Black Order)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\electronics\TERROR_I_MobilePhoneScreen.paa)
        };
    };

    class Box_NATO_Wps_F;
    class Box_NATO_Ammo_F;
    class Box_NATO_Support_F;
    class TERROR_Box_Wps_Basic : Box_NATO_Wps_F {
        scope=2;
        author="A.Brostrom";
        _generalMacro = "TERROR_Box_Wps_Basic";
        displayName = "Basic Weapons [Black Order]";
        
        hiddenSelections[] = {"Camo_Signs","Camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\ammoboxes\c_signs.paa),
            PATHTOF(data\ammoboxes\c_black.paa)
        };
        class TransportBackpacks {};
        class TransportItems {};
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_M118LR_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_Tracer,2);
            MACRO_ADDMAGAZINE(rhsusf_100Rnd_556x45_soft_pouch,2);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,6);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_JHP,6);
            
            MACRO_ADDMAGAZINE(30Rnd_65x39_caseless_mag,4);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(TERROR_MBRifle_00,1);
            MACRO_ADDWEAPON(TERROR_MBRifle_01,1);
            MACRO_ADDWEAPON(TERROR_MBRifle_02,1);
            MACRO_ADDWEAPON(TERROR_AR_L_00,1);
            MACRO_ADDWEAPON(TERROR_AR_S_00,1);
            MACRO_ADDWEAPON(TERROR_SideArm_00,3);
            
            MACRO_ADDWEAPON(TERROR_CCRifle_00,2);
        };
    };
    class TERROR_Box_Ammo_Basic : Box_NATO_Ammo_F {
        scope=2;
        author="A.Brostrom";
        _generalMacro = "TERROR_Box_Ammo_Basic";
        displayName = "Basic Ammo [Black Order]";
        
        hiddenSelections[] = {"Camo_Signs","Camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\ammoboxes\c_signs.paa),
            PATHTOF(data\ammoboxes\c_black.paa)
        };
        class TransportBackpacks {};
        class TransportItems {};
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_M118LR_Mag,12);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_Tracer,6);
            MACRO_ADDMAGAZINE(rhsusf_100Rnd_556x45_soft_pouch,4);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,6);
            MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_JHP,6);
            
            MACRO_ADDMAGAZINE(30Rnd_65x39_caseless_mag,8);
            
            MACRO_ADDMAGAZINE(HandGrenade,4);
        };
        class TransportWeapons {};
    };
    class TERROR_Box_Support : Box_NATO_Support_F {
        scope=2;
        author="A.Brostrom";
        _generalMacro = "TERROR_Box_Support";
        displayName = "Support [Black Order]";
        
        hiddenSelections[] = {"Camo_Signs","Camo"};
        hiddenSelectionsTextures[] = {
            PATHTOF(data\ammoboxes\c_signs.paa),
            PATHTOF(data\ammoboxes\c_black.paa)
        };
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(rhsusf_acc_anpeq15A,4);
            MACRO_ADDITEM(rhsusf_acc_anpeq15,4);
            MACRO_ADDITEM(ACE_MapTools,12);
            MACRO_ADDITEM(ACE_EarBuds,12);
            MACRO_ADDITEM(ACE_Flashlight_XL50,8);
            MACRO_ADDITEM(ACE_CableTie,12);
            MACRO_ADDITEM(ACE_DAGR,2);
            MACRO_ADDITEM(ACE_IR_Strobe_Item,2);
            MACRO_ADDITEM(ACE_SpareBarrel,2);
            MACRO_ADDITEM(Binocular,1);
            MACRO_ADDITEM(MineDetector,1);
            MACRO_ADDITEM(Rangefinder,1);
            MACRO_ADDITEM(ToolKit,1);
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(Chemlight_red,6);
            MACRO_ADDMAGAZINE(Chemlight_blue,6);
            MACRO_ADDMAGAZINE(Chemlight_green,6);
            MACRO_ADDMAGAZINE(Laserbatteries,2);
        };
        class TransportWeapons {};
    };
};