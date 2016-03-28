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
};