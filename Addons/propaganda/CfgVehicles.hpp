class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class ACE_tagWallBlack;
                class TERROR_tagWallRed_Special: ACE_tagWallBlack {
                    displayName = "Tag Propaganda";
                    //condition = QUOTE(('ACE_SpraypaintRed' in items ACE_player2) && ('ACE_player' in faction TERROR_Faction_O) && {[] call FUNC(checkTaggable)});
                    condition = QUOTE(('ACE_SpraypaintRed' in items ACE_player) && {[] call FUNC(checkTaggable)});
                    statement = QUOTE([ARR_2(ACE_player,'red')] call FUNC(tagWall));
                    icon = QUOTE(PATHTOF(UI\icons\iconTaggingRedSpecial.paa));
                };
            };
        };
    };
};