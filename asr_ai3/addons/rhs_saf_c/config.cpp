#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {QUOTE(MAIN_ADDON),"rhssaf_c_troops"};
		version = VERSION;
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
