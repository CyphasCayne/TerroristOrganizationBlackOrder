class CfgWeapons {
    
    // Uniform
    class UniformItem;
    class U_B_CTRG_1;
    class TERROR_U_Uniform_3 : U_B_CTRG_1 {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_U_Uniform_3";
        displayName = "Black Order Uniform (MP)";
        picture = QUOTE(PATHTOF(data\uniform\icon\TERROR_U_Uniform_3.paa));
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        modelSides[] = {3,2,1,0};
        class ItemInfo : UniformItem {
            modelSides[] = {3,2,1,0};
            uniformModel = "-";
            uniformClass = "TERROR_O_SOLDIER_MP_R";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {
                PATHTOF(data\uniform\TERROR_U_Uniform_3.paa)
            };
            containerClass = "Supply40";
        };
    };

    // Vest
    class V_TacVest_blk_POLICE;
    class TERROR_V_TacVest_MP : V_TacVest_blk_POLICE {
        scope = 2;
        author = "Brostrom.A";
        _generalMacro = "TERROR_V_TacVest_MP";
        displayName = "Black Order Tactical Vest (Military Police)";
        picture = QUOTE(PATHTOF(data\Vest\icon\TERROR_V_TacVest_MP.paa));
        hiddenSelectionsTextures[] = {
            PATHTOF(data\Vest\TERROR_V_TacVest_MP.paa)
        };
    };
};