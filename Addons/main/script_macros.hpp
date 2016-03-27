#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

#define QUA1(a) a
#define QUA2(a) a, a
#define QUA3(a) a, a, a
#define QUA4(a) a, a, a, a
#define QUA5(a) a, a, a, a, a
#define QUA6(a) a, a, a, a, a, a
#define QUA7(a) a, a, a, a, a, a, a
#define QUA8(a) a, a, a, a, a, a, a, a
#define QUA9(a) a, a, a, a, a, a, a, a, a
#define QUA10(a) a, a, a, a, a, a, a, a, a, a
#define QUA11(a) a, a, a, a, a, a, a, a, a, a, a
#define QUA12(a) a, a, a, a, a, a, a, a, a, a, a, a

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

#define MACRO_ADDWEAPON(WEAPON,COUNT) \
class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) \
class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) \
class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) \
class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

// Linked items
#define MACRO_LINKEDOPTIC(OPTIC) \
class LinkedItemsOptic { \
    slot = CowsSlot; \
    item = ##OPTIC; \
}

#define MACRO_LINKEDACC(ACC) \
class LinkedItemsAcc { \
    slot = PointerSlot; \
    item = ##ACC; \
}

#define MACRO_LINKEDMUZZLE(MUZZLE) \
class LinkedItemsMuzzle { \
    slot = MuzzleSlot; \
    item = ##MUZZLE; \
}

#define MACRO_LINKEDBARREL(BARREL) \
class LinkedItemsUnder { \
    slot = UnderBarrelSlot; \
    item = ##BARREL; \
}