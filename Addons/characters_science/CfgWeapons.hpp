class CfgWeapons {
    
    // Uniform
    class UniformItem;
    class U_C_Scientist;
    class TERROR_U_ScienceCoveralls_1 : U_C_Scientist {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_U_ScienceCoveralls_1";
        displayName = "Black Order Science Coveralls";
        picture = QUOTE(PATHTOF(data\uniform\icon\TERROR_U_ScienceCoveralls_1.paa));
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "TERROR_O_MAN_SCIENTIST";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                PATHTOF(data\uniform\TERROR_U_ScienceCoveralls_1.paa)
            };
            containerClass = "Supply20";
        };
    };
    class TERROR_U_ScienceCoveralls_2 : U_C_Scientist {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_U_ScienceCoveralls_2";
        displayName = "Black Order Science Security Coveralls";
        picture = QUOTE(PATHTOF(data\uniform\icon\TERROR_U_ScienceCoveralls_1.paa));
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "CAV_TO_SCIENTIST_SOLDIER";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                PATHTOF(data\uniform\TERROR_U_ScienceCoveralls_2.paa)
            };
            containerClass = "Supply20";
        };
    };
    class TERROR_U_ScienceCoveralls_3 : U_C_Scientist {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_U_ScienceCoveralls_3";
        displayName = "Black Order Science Security Coveralls (Black)";
        picture = QUOTE(PATHTOF(data\uniform\icon\TERROR_U_ScienceCoveralls_1.paa));
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "CAV_TO_SCIENTIST_SPECIALSOLDIER";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                PATHTOF(data\uniform\TERROR_U_ScienceCoveralls_3.paa)
            };
            containerClass = "Supply20";
        };
    };

    // Vest
    class V_TacVest_blk_POLICE;
    class TERROR_V_TacVest_SECURITY : V_TacVest_blk_POLICE {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_V_TacVest_SECURITY";
        displayName = "Black Order Tactical Vest Science (Security)";
        picture = QUOTE(PATHTOF(data\Vest\icon\TERROR_V_TacVest_SECURITY.paa));
        hiddenSelectionsTextures[] = {
            PATHTOF(data\Vest\TERROR_V_TacVest_SECURITY.paa)
        };
    };
};