#include "\x\cba\addons\main\script_macros_common.hpp"

//This part includes parts of the CBA and ACE3 macro libraries
#define GETPRVAR(var1,var2) (profileNamespace getVariable [ARR_2(var1,var2)])
#define SETPRVAR(var1,var2) (profileNamespace setVariable [ARR_2(var1,var2)])

#define EXCEPTIONS exceptions[] = {"isNotInside","isNotSitting","isNotSwimming"}

#define ICON_ROOT "\x\tfar_ace_extended\addons\main\ui\interact_root.paa"

#define ICON_SAVE "\x\tfar_ace_extended\addons\main\ui\save.paa"
#define ICON_LOAD "\x\tfar_ace_extended\addons\main\ui\load.paa"
#define ICON_ADD "\A3\ui_f\data\gui\cfg\cursors\add_gs.paa"
#define ICON_DELETE "\A3\ui_f\data\igui\cfg\commandbar\unitcombatmode_ca.paa"

#define ICON_SR "\x\tfar_ace_extended\addons\main\ui\sr.paa"
#define ICON_LR "\x\tfar_ace_extended\addons\main\ui\lr.paa"
#define ICON_VLR "\x\tfar_ace_extended\addons\main\ui\vlr_plane.paa"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif
