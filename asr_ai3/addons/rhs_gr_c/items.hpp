#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class rhs_acc_scope_base: ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };

	class rhsgref_acc_oko21: ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
        };
    };


	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H;

	class rhsgref_silencer_base: muzzle_snds_H {
        class ItemInfo : InventoryMuzzleItem_Base_F {
			class AmmoCoef;
        };
    };

	class rhsgref_savz61_suppressor: rhsgref_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };

    class Uniform_Base;

    class rhsgref_uniform_ttsko_forest : Uniform_Base {
        //displayName = "M88 TTsKO (Forest)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_ttsko_mountain : Uniform_Base {
        //displayName = "M88 TTsKO (Mountain)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_ttsko_urban : Uniform_Base {
        //displayName = "M88 TTsKO (Urban)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_vsr : Uniform_Base {
        //displayName = "M88 (VSR)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_para_ttsko_oxblood : Uniform_Base {
        //displayName = "M10 TTsKO (Oxblood)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_para_ttsko_mountain : Uniform_Base {
        //displayName = "M10 TTsKO (Mountain)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_para_ttsko_urban : Uniform_Base {
        //displayName = "M10 TTsKO (Urban)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_specter : Uniform_Base {
        //displayName = "Spectre-SKWO";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_reed : Uniform_Base {
        //displayName = "M93 (Urban Reed)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_alpenflage : Uniform_Base {
        //displayName = "M93 (Alpenflage)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_flecktarn : Uniform_Base {
        __CAMO_U_CAMOMONO;
    };
    class rhsgref_uniform_flecktarn_full : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_tigerstripe : Uniform_Base {
        //displayName = "M93 (Tiger Stripe)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_woodland : Uniform_Base {
        //displayName = "M93 (Woodland)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_woodland_olive : Uniform_Base {
        //displayName = "M93 (Woodland/Olive)";
        __CAMO_U_CAMOMONO;
    };
    class rhsgref_uniform_ERDL : Uniform_Base {
        //displayName = "M93 (ERDL)";
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_altis_lizard : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_altis_lizard_olive : Uniform_Base {
        __CAMO_U_CAMOMONO;
    };
    class rhsgref_uniform_olive : Uniform_Base {
        __CAMO_U_MONOMONO;
    };
    class rhsgref_uniform_dpm : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_dpm_olive : Uniform_Base {
        __CAMO_U_CAMOMONO;
    };
    class rhsgref_uniform_3color_desert : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhsgref_uniform_og107 : Uniform_Base {
        //displayName = "M93 (OG-107)";
        __CAMO_U_CAMOMONO;
    };
    class rhsgref_uniform_og107_erdl : Uniform_Base {
        //displayName = "M93 (OG-107/ERDL)";
        __CAMO_U_CAMOMONO;
    };

    class rhs_6b23;
    class rhsgref_6b23_khaki : rhs_6b23 {
        //displayName = "6B23 Khaki (Utility)";
        __CAMO_V_MONO;
    };

    class rhsgref_6b23_khaki_rifleman;
    class rhsgref_6b23_khaki_sniper;
    class rhsgref_6b23_khaki_officer;
    class rhsgref_6b23_khaki_nco;
    class rhsgref_6b23_khaki_medic;

    class rhsgref_6b23_ttsko_forest : rhsgref_6b23_khaki {
        //displayName = "6B23 TTsKO Forest (Utility)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_forest_rifleman : rhsgref_6b23_khaki_rifleman {
        //displayName = "6B23 TTsKO Forest (Rifleman)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_mountain : rhsgref_6b23_khaki {
        //displayName = "6B23 TTsKO Mountain (Utility)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_mountain_rifleman : rhsgref_6b23_khaki_rifleman {
        //displayName = "6B23 TTsKO Mountain (Rifleman)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_mountain_sniper : rhsgref_6b23_khaki_sniper {
        //displayName = "6B23 TTsKO Mountain (Sniper)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_mountain_officer : rhsgref_6b23_khaki_officer {
        //displayName = "6B23 TTsKO Mountain (Officer)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_mountain_nco : rhsgref_6b23_khaki_nco {
        //displayName = "6B23 TTsKO Mountain (NCO)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_mountain_medic : rhsgref_6b23_khaki_medic {
        //displayName = "6B23 TTsKO Mountain (Medic)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_digi : rhsgref_6b23_khaki {
        //displayName = "6B23 TTsKO Digital (Utility)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_digi_rifleman : rhsgref_6b23_khaki_rifleman {
        //displayName = "6B23 TTsKO Digital (Rifleman)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_digi_sniper : rhsgref_6b23_khaki_sniper {
        //displayName = "6B23 TTsKO Digital (Sniper)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_digi_officer : rhsgref_6b23_khaki_officer {
        //displayName = "6B23 TTsKO Digital (Officer)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_digi_nco : rhsgref_6b23_khaki_nco {
        //displayName = "6B23 TTsKO Digital (NCO)";
        __CAMO_V_CAMO;
    };
    class rhsgref_6b23_ttsko_digi_medic : rhsgref_6b23_khaki_medic {
        //displayName = "6B23 TTsKO Digital (Medic)";
        __CAMO_V_CAMO;
    };

    class rhsgref_otv_khaki;
    class rhsgref_otv_digi : rhsgref_otv_khaki {
        //displayName = "OTV (Digital)";
        __CAMO_V_CAMO;
    };
    class rhsgref_TacVest_ERDL : rhsgref_6b23_khaki_rifleman {
        //displayName = "Tactical Vest (ERDL)";
        __CAMO_V_CAMO;
    };

    class rhs_6b5 : rhs_6b23 {
        __CAMO_V_MONO;
    };
    class rhsgref_alice_webbing : rhs_6b23 {
        __CAMO_V_IGNORE;
    };
