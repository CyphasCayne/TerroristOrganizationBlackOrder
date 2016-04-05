class CfgWeapons {
    
    class srifle_DMR_03_spotter_F;
    class rhsusf_weap_glock17g4;
    class rhs_weap_m249_pip_L;
    class rhs_weap_m249_pip_S;
    class TERROR_MBRifle_00 : srifle_DMR_03_spotter_F {
        scope = 2;
        _generalMacro = "TERROR_MBRifle_00";
        displayName = "SIG 556 (Black Order)";
        class LinkedItems {
            //MACRO_LINKEDOPTIC();
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class TERROR_MBRifle_01 : TERROR_MBRifle_00 {
        scope = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_eotech_552);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15A);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class TERROR_MBRifle_02 : TERROR_MBRifle_00 {
        scope = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15A);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class TERROR_MBRifle_03 : TERROR_MBRifle_00 {
        scope = 1;
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ELCAN);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15A);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };

    class TERROR_SideArm_00 : rhsusf_weap_glock17g4 {
        scope = 2;
        _generalMacro = "TERROR_SideArm_00";
        displayName = "Glock 17 (Black Order)";
        class LinkedItems {
            //MACRO_LINKEDOPTIC();
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    
    class TERROR_AR_L_00 : rhs_weap_m249_pip_L {
        scope = 2;
        _generalMacro = "TERROR_AR_L_00";
        displayName = "M249 PIP Long (Black Order)";
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ELCAN);
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    class TERROR_AR_S_00 : rhs_weap_m249_pip_S {
        scope = 2;
        _generalMacro = "TERROR_AR_S_00";
        displayName = "M249 PIP Short (Black Order)";
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ELCAN);
            //MACRO_LINKEDACC();
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    
    //Special Forces
    class rhs_weap_m4a1_m320;
    class TERROR_SFRifle_00 : rhs_weap_m4a1_m320 {
        scope = 2;
        _generalMacro = "TERROR_SFRifle_00";
        displayName = "M4A1 PIP M203S (Black Order)";
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_ACOG);
            MACRO_LINKEDACC(rhsusf_acc_anpeq15);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
    
    //Military Police
    class arifle_MXC_Black_F;
    class TERROR_CCRifle_00 : arifle_MXC_Black_F {
        scope = 2;
        _generalMacro = "TERROR_CCRifle_00";
        displayName = "MXC (Black Order)";
        class LinkedItems {
            MACRO_LINKEDOPTIC(rhsusf_acc_eotech_552);
            MACRO_LINKEDACC(acc_flashlight);
            //MACRO_LINKEDMUZZLE();
            //MACRO_LINKEDBARREL();
        };
    };
};
