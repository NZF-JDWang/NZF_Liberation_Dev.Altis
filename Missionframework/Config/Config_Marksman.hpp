/*
	Faction: Rifleman
	Author: Dom
*/
class marksman {
	name = "Designated Marksman";
	rank = "Private";
	description = "For those who require the crutch of a long range scope this role is for supporting the command team with some long range precision shooting";
	traits[] = {

	};
	customVariables[] = {
		{"commandant",false,true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconMan_ca.paa";

	defaultLoadout[] = {
	{"Tier1_SR25_EC_tan","","","Tier1_LeupoldM3A_Geissele_Docter_Tan",{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",20},{},"Tier1_Harris_Bipod_Tan"},{},{"Tier1_Glock19_Urban_TB","Tier1_Octane9","Tier1_TLR1","",{"Tier1_15Rnd_9x19_JHP",15},{},""},{"USP_G3C_CU_KP_MC",{{"ACE_CableTie",5},{"ACE_EarPlugs",1},{"ACE_Flashlight_MX991",1},{"ItemcTabHCam",1},{"ACE_IR_Strobe_Item",1},{"ACE_Kestrel4500",1},{"ACE_MapTools",1},{"kat_Pulseoximeter",1},{"ACE_RangeCard",1},{"USP_GPNVG18",1},{"ItemAndroid",1},{"ACE_microDAGR",1},{"ACRE_PRC152",1}}},{"USP_EAGLE_MBAV_LOAD_MC",{{"ACRE_PRC343",1},{"Tier1_20Rnd_762x51_M118_Special_SR25_Mag",12,20}}},{"ECPV1",{{"nzf_fak",1},{"ACE_Tripod",1},{"MS_Strobe_Mag_2",5,1},{"rhs_mag_an_m8hc",1,1},{"rhs_mag_m18_green",2,1},{"ACE_HandFlare_Green",2,1},{"ACE_Chemlight_IR",5,1}}},"USP_OPS_FASTXP_CT_TAN","",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadioAcreFlagged","ItemCompass","ATM_ALTIMETER",""}
	};

	arsenalWeapons[] = {
	"Tier1_SR25_EC_tan",
	"Tier1_SR25_EC",
	"Tier1_SR25_tan",
	"Tier1_SR25",
	"Tier1_M110k5_ACS",
	"Tier1_M110k5",
	"Tier1_M110k1_CTR",
	"Tier1_M110k1",
	"rhs_weap_mk17_LB",
	"srifle_LRR_F",
	"tier1_leupoldm3a_geissele_docter_tan",
	"tier1_leupoldm3a_geissele_docter_black",
	"tier1_leupoldm3a_adm_t2_tan",
	"tier1_leupoldm3a_adm_t2_black",
	"rhsusf_acc_nxs_3515x50f1_md_sun",
	"tier1_anpvs10_tan"
	};
	arsenalMagazines[] = {
		
	};
	arsenalItems[] = {
		//headgear
	"nzf_beret_black_silver",
	"USP_A2_BANDANA",
	"USP_A2_BANDANA_RGR",
	"USP_A2_BANDANA_DC",
	"USP_A2_BANDANA_DC_RGR",
	"USP_BASEBALL_CAP_BLK",
	"USP_BASEBALL_CAP_CBR",
	"USP_BASEBALL_CAP",
	"USP_BASEBALL_CAP_RGR",
	"USP_BASEBALL_CAPB_BLK",
	"USP_BASEBALL_CAPB_CBR",
	"USP_BASEBALL_CAPB",
	"USP_BASEBALL_CAPB_RGR",
	"USP_BASEBALL_CAPB_BLK_B",
	"USP_BASEBALL_CAPB_CBR_B",
	"USP_BASEBALL_CAPB_B",
	"USP_BASEBALL_CAPB_RGR_B",
	"USP_BASEBALL_CAPB_BLK_BD",
	"USP_BASEBALL_CAPB_CBR_BD",
	"USP_BASEBALL_CAPB_BD",
	"USP_BASEBALL_CAPB_RGR_BD",
	"USP_BASEBALL_CAPB_CT3_BLK",
	"USP_BASEBALL_CAPB_CT3_CBR",
	"USP_BASEBALL_CAPB_CT3",
	"USP_BASEBALL_CAPB_CT3_RGR",
	"USP_BASEBALL_CAPB_BLK_D",
	"USP_BASEBALL_CAPB_CBR_D",
	"USP_BASEBALL_CAPB_D",
	"USP_BASEBALL_CAPB_RGR_D",
	"USP_BASEBALL_CAP_BLK_B",
	"USP_BASEBALL_CAP_CBR_B",
	"USP_BASEBALL_CAP_B",
	"USP_BASEBALL_CAP_RGR_B",
	"USP_BASEBALL_CAP_BLK_BD",
	"USP_BASEBALL_CAP_CBR_BD",
	"USP_BASEBALL_CAP_BD",
	"USP_BASEBALL_CAP_RGR_BD",
	"USP_BASEBALL_CAP_CT3_BLK",
	"USP_BASEBALL_CAP_CT3_CBR",
	"USP_BASEBALL_CAP_CT3",
	"USP_BASEBALL_CAP_CT3_RGR",
	"USP_BASEBALL_CAP_BLK_D",
	"USP_BASEBALL_CAP_CBR_D",
	"USP_BASEBALL_CAP_D",
	"USP_BASEBALL_CAP_RGR_D",
	"USP_THM_BEANIE",
	"USP_THM_BEANIE_RGR",
	"USP_THM_BEANIE_TAN",
	"USP_THM_BEANIE_DC",
	"USP_THM_BEANIE_DC_RGR",
	"USP_THM_BEANIE_DC_TAN",
	"USP_OPSCORE_FASTMT_OD_C",
	"USP_OPSCORE_FASTMT_C",
	"USP_OPSCORE_FASTMT_OD_CM",
	"USP_OPSCORE_FASTMT_CM",
	"USP_OPSCORE_FASTMT_OD_CMW",
	"USP_OPSCORE_FASTMT_CMW",
	"USP_OPSCORE_FASTMT_OD_CMG",
	"USP_OPSCORE_FASTMT_CMG",
	"USP_OPSCORE_FASTMT_OD_CMGS",
	"USP_OPSCORE_FASTMT_CMGS",
	"USP_OPSCORE_FASTMT_OD_CMGSW",
	"USP_OPSCORE_FASTMT_CMGSW",
	"USP_OPSCORE_FASTMT_OD_CMS",
	"USP_OPSCORE_FASTMT_CMS",
	"USP_OPSCORE_FASTMT_OD_CMSW",
	"USP_OPSCORE_FASTMT_CMSW",
	"USP_OPSCORE_FASTMT_OD_CW",
	"USP_OPSCORE_FASTMT_CW",
	"USP_OPSCORE_FASTMT_OD_CG",
	"USP_OPSCORE_FASTMT_CG",
	"USP_OPSCORE_FASTMT_OD_CGW",
	"USP_OPSCORE_FASTMT_CGW",
	"USP_OPSCORE_FASTMT_OD_CGS",
	"USP_OPSCORE_FASTMT_CGS",
	"USP_OPSCORE_FASTMT_OD_CGSW",
	"USP_OPSCORE_FASTMT_CGSW",
	"USP_OPSCORE_FASTMT_OD_CS",
	"USP_OPSCORE_FASTMT_CS",
	"USP_OPSCORE_FASTMT_OD_CSW",
	"USP_OPSCORE_FASTMT_CSW",
	"USP_OPSCORE_FASTMT_FCV_OD_C",
	"USP_OPSCORE_FASTMT_FCV_C",
	"USP_OPSCORE_FASTMT_FCV_OD_CM",
	"USP_OPSCORE_FASTMT_FCV_CM",
	"USP_OPSCORE_FASTMT_FCV_OD_CMW",
	"USP_OPSCORE_FASTMT_FCV_CMW",
	"USP_OPSCORE_FASTMT_FCV_OD_CMG",
	"USP_OPSCORE_FASTMT_FCV_CMG",
	"USP_OPSCORE_FASTMT_FCV_OD_CMGS",
	"USP_OPSCORE_FASTMT_FCV_CMGS",
	"USP_OPSCORE_FASTMT_FCV_OD_CMGSW",
	"USP_OPSCORE_FASTMT_FCV_CMGSW",
	"USP_OPSCORE_FASTMT_FCV_OD_CMS",
	"USP_OPSCORE_FASTMT_FCV_CMS",
	"USP_OPSCORE_FASTMT_FCV_OD_CMSW",
	"USP_OPSCORE_FASTMT_FCV_CMSW",
	"USP_OPSCORE_FASTMT_FCV_OD_CW",
	"USP_OPSCORE_FASTMT_FCV_CW",
	"USP_OPSCORE_FASTMT_FCV_OD_CG",
	"USP_OPSCORE_FASTMT_FCV_CG",
	"USP_OPSCORE_FASTMT_FCV_OD_CGW",
	"USP_OPSCORE_FASTMT_FCV_CGW",
	"USP_OPSCORE_FASTMT_FCV_OD_CGS",
	"USP_OPSCORE_FASTMT_FCV_CGS",
	"USP_OPSCORE_FASTMT_FCV_OD_CGSW",
	"USP_OPSCORE_FASTMT_FCV_CGSW",
	"USP_OPSCORE_FASTMT_FCV_OD_CS",
	"USP_OPSCORE_FASTMT_FCV_CS",
	"USP_OPSCORE_FASTMT_FCV_OD_CSW",
	"USP_OPSCORE_FASTMT_FCV_CSW",
	"USP_OPS_FASTXP_CT_FG",
	"USP_OPS_FASTXP_CT_TAN",
	//Uniforms
	"USP_G3C_CU_KP_MC",
	"USP_G3C_CU_KP_MX_MC",
	"USP_G3C_CS_CU_KP_MC",
	"USP_G3C_CS_CU_KP_MX_MC",
	"USP_G3C_RS_CU_KP_MC",
	"USP_G3C_RS_CU_KP_MX_MC",
	"USP_G3C_RS2_CU_KP_MC",
	"USP_G3C_RS2_CU_KP_MX_MC",
	//MC Overwhites
	"USP_OVERWHITE_G3C_KP2_BLK_MC",
	"USP_OVERWHITE_G3C_KP2_GRN_MC",
	"USP_OVERWHITE_G3C_KP2_TAN_MC",
	//MC PCU
	"USP_PCU_G3C_KP_MC",
	"USP_PCU_G3C_KP_MX_MC",
	"USP_PCU_G3C_KP_BLK_MC",
	"USP_PCU_G3C_KP_MX_BLK_MC",
	"USP_PCU_G3C_KP_GRY_MC",
	"USP_PCU_G3C_KP_MX_GRY_MC",
	//MC SoftShell
	"USP_SOFTSHELL_G3C_KP_MC",
	"USP_SOFTSHELL_G3C_KP_MX_MC",
	"USP_SOFTSHELL_G3C_KP_RGR_MC",
	"USP_SOFTSHELL_G3C_KP_MX_RGR_MC",
	"USP_SOFTSHELL_G3C_KP_BLK_MC",
	"USP_SOFTSHELL_G3C_KP_MX_BLK_MC",
	"USP_SOFTSHELL_G3C_KP_CBR_MC",
	"USP_SOFTSHELL_G3C_KP_MX_CBR_MC",
	"USP_SOFTSHELL_G3C_KP_GRY_MC",
	"USP_SOFTSHELL_G3C_KP_MX_MC",
	//MC Untucked T-shirt
	"USP_TSHIRT_G3C_KP_BLK_MC",
	"USP_TSHIRT_G3C_KP_CBR_MC",
	"USP_TSHIRT_G3C_KP_GRN_MC",
	"USP_TSHIRT_G3C_KP_GRY_MC",
	"USP_TSHIRT_G3C_KP_NAV_MC",
	"USP_TSHIRT_G3C_KP_MX_BLK_MC",
	"USP_TSHIRT_G3C_KP_MX_CBR_MC",
	"USP_TSHIRT_G3C_KP_MX_GRN_MC",
	"USP_TSHIRT_G3C_KP_MX_GRY_MC",
	"USP_TSHIRT_G3C_KP_MX_NAV_MC",
	//MC Tucked T-shirt
	"USP_TSHIRT2_G3C_KP_BLK_MC",
	"USP_TSHIRT2_G3C_KP_CBR_MC",
	"USP_TSHIRT2_G3C_KP_GRN_MC",
	"USP_TSHIRT2_G3C_KP_GRY_MC",
	"USP_TSHIRT2_G3C_KP_NAV_MC",
	"USP_TSHIRT2_G3C_KP_MX_BLK_MC",
	"USP_TSHIRT2_G3C_KP_MX_CBR_MC",
	"USP_TSHIRT2_G3C_KP_MX_GRN_MC",
	"USP_TSHIRT2_G3C_KP_MX_GRY_MC",
	"USP_TSHIRT2_G3C_KP_MX_NAV_MC",
	"USP_CRYE_CPC_FAST",
	"USP_CRYE_CPC_FAST_MC",
	"USP_CRYE_CPC_FAST_RGR",
	"USP_CRYE_CPC_FAST_BELT",
	"USP_CRYE_CPC_FAST_BELT_MC",
	"USP_CRYE_CPC_FAST_BELT_RGR",
	"USP_CRYE_CPC_WEAPON",
	"USP_CRYE_CPC_WEAPON_MC",
	"USP_CRYE_CPC_WEAPON_RGR",
	"USP_CRYE_CPC_WEAPON_BELT",
	"USP_CRYE_CPC_WEAPON_BELT_MC",
	"USP_CRYE_CPC_WEAPON_BELT_RGR",
	"USP_CRYE_JPC_ASLTB_CBR",
	"USP_CRYE_JPC_ASLTB",
	"USP_CRYE_JPC_ASLTB_RGR",
	"USP_CRYE_JPC_ASLT_CBR",
	"USP_CRYE_JPC_ASLT",
	"USP_CRYE_JPC_ASLT_RGR",
	"USP_CRYE_JPC_FS_CBR",
	"USP_CRYE_JPC_FS",
	"USP_CRYE_JPC_FS_RGR",
	"USP_CRYE_JPC_GRB_CBR",
	"USP_CRYE_JPC_GRB",
	"USP_CRYE_JPC_GRB_RGR",
	"USP_CRYE_JPC_GR_CBR",
	"USP_CRYE_JPC_GR",
	"USP_CRYE_JPC_GR_RGR",
	"USP_EAGLE_MBAV_LOAD_MC",
	"USP_EAGLE_MBAV_LOAD",
	"USP_VEST_STRANDHOGG2_CBR",
	"USP_VEST_STRANDHOGG2_MC",
	"USP_VEST_STRANDHOGG2_RGR",
	"USP_VEST_PLATEFRAME_LOAD_MC",
	"USP_VEST_PLATEFRAME_LOAD_TAN",
	"USP_VEST_PLATEFRAME_LOAD2_MC",
	"USP_VEST_PLATEFRAME_LOAD2_TAN",
	"ACE_ATragMX",
	"ACE_Kestrel4500",
	"ACRE_PRC152",
	"Rangefinder",
	"ACE_RangeCard",
	"ACE_Tripod"
	};
	arsenalBackpacks[] = {
		"USP_CRYE_BELT_PACK",
		"USP_CRYE_BELT_PACK_MC",
		"USP_CRYE_BELT_PACK_RGR",
		"USP_ZIPON_PANEL_CBR",
		"USP_ZIPON_PANEL_MC",
		"USP_ZIPON_PANEL_RGR",
		"USP_ZIPON_PANEL_CBR_RF",
		"USP_ZIPON_PANEL_MC_RF",
		"USP_ZIPON_PANEL_RGR_RF",
		"USP_ZIPON_PANEL_CBR_RF2",
		"USP_ZIPON_PANEL_MC_RF2",
		"USP_ZIPON_PANEL_RGR_RF2",
		"USP_PACK_FASTHAWK",
		"USP_PACK_HYDRATION",
		"USP_PACK_POINTMAN",
		"USP_ROLLFLAG",
		"USP_ROLLFLAG2",
		"USP_HYDROPACK_CBR",
		"USP_HYDROPACK_MC",
		"USP_HYDROPACK_RGR",
		"ECPV1"
		
	};
};