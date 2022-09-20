/*
	Faction: cls
	Author: Dom
*/
class cls {
	name = "Combat Life Saver";
	rank = "Private";
	description = "The squad CLS or Comabt Life Saver is responsible for keeping all members of the squad in the fight";
	traits[] = {
		{"Medic",true}
	};
	customVariables[] = {
		{"ace_medical_medicClass",1,true},
		{"commandant",false,true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";

	defaultLoadout[] = {
	{"Tier1_HK416D145_CTR_Desert_grip2","","","Tier1_EXPS3_0_Desert",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{},"rhsusf_acc_grip2"},{},{},{"USP_G3C_CU_KP_MC",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_MX991",1},{"ItemAndroid",1},{"ItemcTabHCam",1},{"ACE_IR_Strobe_Item",1},{"ACE_MapTools",1},{"ACE_microDAGR",1},{"kat_Pulseoximeter",1},{"kat_stethoscope",1},{"USP_GPNVG18",1},{"MS_Strobe_Mag_2",5,1}}},{"USP_CRYE_CPC_MEDIC_MC",{{"ACRE_PRC343",1},{"nzf_medikit",1},{"ACE_HandFlare_Green",2,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30},{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",3,30},{"MS_Strobe_Mag_2",2,1},{"ACE_Chemlight_IR",5,1}}},{"M9_Backpack",{{"nzf_medikit",1},{"kat_accuvac",1},{"rhs_mag_m18_purple",1,1}}},"USP_OPS_FASTXP_CT_TAN","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","ItemRadioAcreFlagged","ItemCompass","ATM_ALTIMETER",""}
	};

	arsenalWeapons[] = {
		"Tier1_HK416D10_CTR",
		"Tier1_HK416D10_CTR_Desert",
		"Tier1_HK416D10_LMT",
		"Tier1_HK416D10_LMT_Desert",
		"Tier1_HK416D10_MW9_CTR",
		"Tier1_HK416D10_MW9_CTR_BlackDesert",
		"Tier1_HK416D10_MW9_CTR_Desert",
		"Tier1_HK416D10_MW9_IMOD",
		"Tier1_HK416D10_MW9_IMOD_BlackDesert",
		"Tier1_HK416D10_MW9_IMOD_Desert",
		"Tier1_HK416D10_MW9_LMT",
		"Tier1_HK416D10_MW9_LMT_BlackDesert",
		"Tier1_HK416D10_MW9_LMT_Desert",
		"Tier1_HK416D10_MW9_MFT",
		"Tier1_HK416D10_MW9_MFT_BlackDesert",
		"Tier1_HK416D10_MW9_MFT_Desert",
		"Tier1_HK416D10_RAHG_CTR",
		"Tier1_HK416D10_RAHG_CTR_BlackDesert",
		"Tier1_HK416D10_RAHG_CTR_Desert",
		"Tier1_HK416D10_RAHG_IMOD",
		"Tier1_HK416D10_RAHG_IMOD_BlackDesert",
		"Tier1_HK416D10_RAHG_IMOD_Desert",
		"Tier1_HK416D10_RAHG_LMT",
		"Tier1_HK416D10_RAHG_LMT_BlackDesert",
		"Tier1_HK416D10_RAHG_LMT_Desert",
		"Tier1_HK416D10_RAHG_MFT",
		"Tier1_HK416D10_RAHG_MFT_BlackDesert",
		"Tier1_HK416D10_RAHG_MFT_Desert",
		"Tier1_HK416D10_SMR_CTR",
		"Tier1_HK416D10_SMR_CTR_BlackDesert",
		"Tier1_HK416D10_SMR_CTR_Desert",
		"Tier1_HK416D10_SMR_IMOD",
		"Tier1_HK416D10_SMR_IMOD_BlackDesert",
		"Tier1_HK416D10_SMR_IMOD_Desert",
		"Tier1_HK416D10_SMR_LMT",
		"Tier1_HK416D10_SMR_LMT_BlackDesert",
		"Tier1_HK416D10_SMR_LMT_Desert",
		"Tier1_HK416D10_SMR_MFT",
		"Tier1_HK416D10_SMR_MFT_BlackDesert",
		"Tier1_HK416D10_SMR_MFT_Desert",
		"Tier1_HK416D145_CTR",
		"Tier1_HK416D145_CTR_Desert",
		"Tier1_HK416D145_LMT",
		"Tier1_HK416D145_LMT_Desert",
		"Tier1_HK416D145_MW13_CTR",
		"Tier1_HK416D145_MW13_CTR_BlackDesert",
		"Tier1_HK416D145_MW13_CTR_Desert",
		"Tier1_HK416D145_MW13_IMOD",
		"Tier1_HK416D145_MW13_IMOD_BlackDesert",
		"Tier1_HK416D145_MW13_IMOD_Desert",
		"Tier1_HK416D145_MW13_LMT",
		"Tier1_HK416D145_MW13_LMT_BlackDesert",
		"Tier1_HK416D145_MW13_LMT_Desert",
		"Tier1_HK416D145_MW13_MFT",
		"Tier1_HK416D145_MW13_MFT_BlackDesert",
		"Tier1_HK416D145_MW13_MFT_Desert",
		"Tier1_HK416D145_RAHG_CTR",
		"Tier1_HK416D145_RAHG_CTR_BlackDesert",
		"Tier1_HK416D145_RAHG_CTR_Desert",
		"Tier1_HK416D145_RAHG_IMOD",
		"Tier1_HK416D145_RAHG_IMOD_BlackDesert",
		"Tier1_HK416D145_RAHG_IMOD_Desert",
		"Tier1_HK416D145_RAHG_LMT",
		"Tier1_HK416D145_RAHG_LMT_BlackDesert",
		"Tier1_HK416D145_RAHG_LMT_Desert",
		"Tier1_HK416D145_RAHG_MFT",
		"Tier1_HK416D145_RAHG_MFT_BlackDesert",
		"Tier1_HK416D145_RAHG_MFT_Desert",
		"Tier1_HK416D145_SMR_CTR",
		"Tier1_HK416D145_SMR_CTR_BlackDesert",
		"Tier1_HK416D145_SMR_CTR_Desert",
		"Tier1_HK416D145_SMR_IMOD",
		"Tier1_HK416D145_SMR_IMOD_BlackDesert",
		"Tier1_HK416D145_SMR_IMOD_Desert",
		"Tier1_HK416D145_SMR_LMT",
		"Tier1_HK416D145_SMR_LMT_BlackDesert",
		"Tier1_HK416D145_SMR_LMT_Desert",
		"Tier1_HK416D145_SMR_MFT",
		"Tier1_HK416D145_SMR_MFT_BlackDesert",
		"Tier1_HK416D145_SMR_MFT_Desert",
		"Tier1_SIG_MCX_115_Virtus",
		"Tier1_SIG_MCX_115_Virtus_Black",
		"Tier1_SIG_MCX_115_Virtus_Desert",
		"Tier1_SIG_MCX_115_Virtus_FDE",
		"Tier1_SR16_Carbine_Mod2_CTR_Black",
		"Tier1_SR16_Carbine_Mod2_CTR_FDE",
		"Tier1_SR16_Carbine_Mod2_IMOD_Black",
		"Tier1_SR16_Carbine_Mod2_IMOD_FDE",
		"Tier1_SR16_Carbine_Mod2_LMT_Black",
		"Tier1_SR16_Carbine_Mod2_LMT_FDE",
		"Tier1_SR16_Carbine_Mod2_MFT_Black",
		"Tier1_SR16_Carbine_Mod2_MFT_FDE",
		"Tier1_SR16_CQB_Mod2_CTR_Black",
		"Tier1_SR16_CQB_Mod2_CTR_FDE",
		"Tier1_SR16_CQB_Mod2_IMOD_Black",
		"Tier1_SR16_CQB_Mod2_IMOD_FDE",
		"Tier1_SR16_CQB_Mod2_LMT_Black",
		"Tier1_SR16_CQB_Mod2_LMT_FDE",
		"Tier1_SR16_CQB_Mod2_MFT_Black",
		"Tier1_SR16_CQB_Mod2_MFT_FDE",
		"rhsusf_weap_MP7A2",
		"rhsusf_weap_MP7A2_desert",
		"rhs_weap_mk17_CQC",
		"rhs_weap_mk17_STD",
		"rhs_weap_M590_5RD"
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
		"USP_CRYE_CPC_MEDIC",
		"USP_CRYE_CPC_MEDIC_MC",
		"USP_CRYE_CPC_MEDIC_RGR",
		"USP_CRYE_CPC_MEDIC_BELT",
		"USP_CRYE_CPC_MEDIC_BELT_MC",
		"USP_CRYE_CPC_MEDIC_BELT_RGR",
		"kat_accuvac",
		"nzf_Medikit",
		"kat_stethoscope",
		"kat_Pulseoximeter"
	};
	arsenalBackpacks[] = {

		"M9_Backpack",
		"RATS"

	};
};