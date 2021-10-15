#include "\x\cba\addons\main\script_macros_common.hpp"

//This part includes parts of the CBA and ACE3 macro libraries
#define GETPRVAR(var1,var2) (profileNamespace getVariable [ARR_2(var1,var2)])
#define SETPRVAR(var1,var2) (profileNamespace setVariable [ARR_2(var1,var2)])

#define GETMVAR(var1,var2) (missionNamespace getVariable [ARR_2(var1,var2)])

#define DELETE_PROFILE 0
#define EXPORT_PROFILE 1

#define EXCEPTIONS exceptions[] = {"isNotInside","isNotSitting","isNotSwimming"}

#define ICON_ROOT "\x\tfar_ace_extended\addons\main\ui\interact_root.paa"
#define ICON_SAVE "\x\tfar_ace_extended\addons\main\ui\save.paa"
#define ICON_LOAD "\x\tfar_ace_extended\addons\main\ui\load.paa"
#define ICON_ADD "\A3\ui_f\data\gui\cfg\cursors\add_gs.paa"
#define ICON_DELETE "\A3\ui_f\data\igui\cfg\commandbar\unitcombatmode_ca.paa"
#define ICON_PERSON "\a3\Modules_F_Bootcamp\Data\PortraitPunishment.paa"
#define ICON_SR "\x\tfar_ace_extended\addons\main\ui\sr.paa"
#define ICON_LR "\x\tfar_ace_extended\addons\main\ui\lr.paa"
#define ICON_VLR "\x\tfar_ace_extended\addons\main\ui\vlr_plane.paa"

#define IDC_OK 1 // emulate "OK" button
#define IDC_CANCEL 2 // emulate "Cancel" button

#define IDD_MISSION 46
#define IDD_EDIT_BOX_NAME 123
#define IDD_EDIT_BOX_SETTINGS 124
#define IDD_LIST_SELECTED 125

#define POS_W(var1) var1 * _wOff
#define POS_H(var1) var1 * _hOff
#define POS_X(var1) POS_W(var1) + _xOff
#define POS_Y(var1) POS_H(var1) + _yOff

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif
