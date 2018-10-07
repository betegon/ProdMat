// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _prodMat_HH_
#define _prodMat_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "prodMat_mul_32s_3bkb.h"

namespace ap_rtl {

struct prodMat : public sc_module {
    // Port declarations 26
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > R_address0;
    sc_out< sc_logic > R_ce0;
    sc_out< sc_logic > R_we0;
    sc_out< sc_lv<32> > R_d0;
    sc_out< sc_lv<6> > R_address1;
    sc_out< sc_logic > R_ce1;
    sc_out< sc_logic > R_we1;
    sc_out< sc_lv<32> > R_d1;
    sc_out< sc_lv<6> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<32> > A_q0;
    sc_out< sc_lv<6> > A_address1;
    sc_out< sc_logic > A_ce1;
    sc_in< sc_lv<32> > A_q1;
    sc_out< sc_lv<5> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_in< sc_lv<32> > B_q0;
    sc_out< sc_lv<5> > B_address1;
    sc_out< sc_logic > B_ce1;
    sc_in< sc_lv<32> > B_q1;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    prodMat(sc_module_name name);
    SC_HAS_PROCESS(prodMat);

    ~prodMat();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U1;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U2;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U3;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U4;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U5;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U6;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U7;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U8;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U9;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U10;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U11;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U12;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U13;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U14;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U15;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U16;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U17;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U18;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U19;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U20;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U21;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U22;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U23;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U24;
    prodMat_mul_32s_3bkb<1,2,32,32,32>* prodMat_mul_32s_3bkb_U25;
    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > i_reg_475;
    sc_signal< sc_lv<32> > reg_486;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state18_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<1> > exitcond2_reg_1068;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_state5_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state20_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< bool > ap_block_state7_pp0_stage5_iter0;
    sc_signal< bool > ap_block_pp0_stage5_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage7;
    sc_signal< bool > ap_block_state9_pp0_stage7_iter0;
    sc_signal< bool > ap_block_pp0_stage7_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage9;
    sc_signal< bool > ap_block_state11_pp0_stage9_iter0;
    sc_signal< bool > ap_block_pp0_stage9_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage11;
    sc_signal< bool > ap_block_state13_pp0_stage11_iter0;
    sc_signal< bool > ap_block_pp0_stage11_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage13;
    sc_signal< bool > ap_block_state15_pp0_stage13_iter0;
    sc_signal< bool > ap_block_pp0_stage13_11001;
    sc_signal< sc_lv<32> > reg_490;
    sc_signal< sc_lv<32> > reg_494;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state4_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state19_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_state6_pp0_stage4_iter0;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage6;
    sc_signal< bool > ap_block_state8_pp0_stage6_iter0;
    sc_signal< bool > ap_block_pp0_stage6_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage8;
    sc_signal< bool > ap_block_state10_pp0_stage8_iter0;
    sc_signal< bool > ap_block_pp0_stage8_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage10;
    sc_signal< bool > ap_block_state12_pp0_stage10_iter0;
    sc_signal< bool > ap_block_pp0_stage10_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage12;
    sc_signal< bool > ap_block_state14_pp0_stage12_iter0;
    sc_signal< bool > ap_block_pp0_stage12_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage14;
    sc_signal< bool > ap_block_state16_pp0_stage14_iter0;
    sc_signal< bool > ap_block_pp0_stage14_11001;
    sc_signal< sc_lv<32> > reg_498;
    sc_signal< sc_lv<32> > grp_fu_502_p2;
    sc_signal< sc_lv<32> > reg_527;
    sc_signal< sc_lv<32> > grp_fu_507_p2;
    sc_signal< sc_lv<32> > reg_531;
    sc_signal< sc_lv<32> > grp_fu_512_p2;
    sc_signal< sc_lv<32> > reg_535;
    sc_signal< sc_lv<32> > grp_fu_517_p2;
    sc_signal< sc_lv<32> > reg_539;
    sc_signal< sc_lv<32> > grp_fu_522_p2;
    sc_signal< sc_lv<32> > reg_543;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond2_fu_559_p2;
    sc_signal< sc_lv<1> > exitcond2_reg_1068_pp0_iter1_reg;
    sc_signal< sc_lv<4> > i_1_fu_565_p2;
    sc_signal< sc_lv<4> > i_1_reg_1072;
    sc_signal< sc_lv<7> > tmp_3_fu_587_p2;
    sc_signal< sc_lv<7> > tmp_3_reg_1077;
    sc_signal< sc_lv<7> > tmp_3_reg_1077_pp0_iter1_reg;
    sc_signal< sc_lv<7> > tmp_10_fu_613_p2;
    sc_signal< sc_lv<7> > tmp_10_reg_1086;
    sc_signal< sc_lv<32> > A_load_reg_1114;
    sc_signal< sc_lv<32> > A_load_1_reg_1122;
    sc_signal< sc_lv<32> > A_load_2_reg_1140;
    sc_signal< sc_lv<32> > A_load_4_reg_1148;
    sc_signal< sc_lv<32> > A_load_3_reg_1156;
    sc_signal< sc_lv<32> > A_load_5_reg_1165;
    sc_signal< sc_lv<32> > grp_fu_675_p2;
    sc_signal< sc_lv<32> > tmp_5_0_5_reg_1173;
    sc_signal< sc_lv<32> > grp_fu_553_p2;
    sc_signal< sc_lv<32> > tmp1_reg_1178;
    sc_signal< sc_lv<32> > grp_fu_680_p2;
    sc_signal< sc_lv<32> > tmp_5_1_reg_1183;
    sc_signal< sc_lv<32> > tmp4_fu_695_p2;
    sc_signal< sc_lv<32> > tmp4_reg_1188;
    sc_signal< sc_lv<32> > grp_fu_685_p2;
    sc_signal< sc_lv<32> > tmp_5_1_1_reg_1193;
    sc_signal< sc_lv<32> > grp_fu_690_p2;
    sc_signal< sc_lv<32> > tmp_5_1_2_reg_1198;
    sc_signal< sc_lv<32> > grp_fu_700_p2;
    sc_signal< sc_lv<32> > tmp_5_1_4_reg_1203;
    sc_signal< sc_lv<32> > tmp5_fu_709_p2;
    sc_signal< sc_lv<32> > tmp5_reg_1208;
    sc_signal< sc_lv<32> > tmp8_fu_724_p2;
    sc_signal< sc_lv<32> > tmp8_reg_1213;
    sc_signal< sc_lv<32> > grp_fu_714_p2;
    sc_signal< sc_lv<32> > tmp_5_2_reg_1218;
    sc_signal< sc_lv<32> > grp_fu_719_p2;
    sc_signal< sc_lv<32> > tmp_5_2_1_reg_1223;
    sc_signal< sc_lv<32> > grp_fu_729_p2;
    sc_signal< sc_lv<32> > tmp_5_2_2_reg_1228;
    sc_signal< sc_lv<32> > grp_fu_734_p2;
    sc_signal< sc_lv<32> > tmp_5_2_4_reg_1233;
    sc_signal< sc_lv<32> > grp_fu_739_p2;
    sc_signal< sc_lv<32> > tmp_5_2_5_reg_1238;
    sc_signal< sc_lv<32> > tmp9_fu_753_p2;
    sc_signal< sc_lv<32> > tmp9_reg_1243;
    sc_signal< sc_lv<32> > grp_fu_744_p2;
    sc_signal< sc_lv<32> > tmp_5_3_reg_1248;
    sc_signal< sc_lv<32> > tmp10_fu_768_p2;
    sc_signal< sc_lv<32> > tmp10_reg_1253;
    sc_signal< sc_lv<32> > grp_fu_758_p2;
    sc_signal< sc_lv<32> > tmp_5_3_1_reg_1258;
    sc_signal< sc_lv<32> > grp_fu_763_p2;
    sc_signal< sc_lv<32> > tmp_5_3_2_reg_1263;
    sc_signal< sc_lv<32> > grp_fu_772_p2;
    sc_signal< sc_lv<32> > tmp_5_3_4_reg_1268;
    sc_signal< sc_lv<32> > grp_fu_777_p2;
    sc_signal< sc_lv<32> > tmp_5_3_5_reg_1273;
    sc_signal< sc_lv<32> > tmp13_fu_786_p2;
    sc_signal< sc_lv<32> > tmp13_reg_1278;
    sc_signal< sc_lv<32> > tmp14_fu_791_p2;
    sc_signal< sc_lv<32> > tmp14_reg_1283;
    sc_signal< sc_lv<32> > grp_fu_795_p2;
    sc_signal< sc_lv<32> > tmp_5_0_3_reg_1288;
    sc_signal< sc_lv<32> > B_load_21_reg_1293;
    sc_signal< sc_lv<32> > B_load_27_reg_1298;
    sc_signal< sc_lv<32> > tmp17_reg_1303;
    sc_signal< sc_lv<32> > grp_fu_800_p2;
    sc_signal< sc_lv<32> > tmp_5_1_3_reg_1308;
    sc_signal< sc_lv<32> > grp_fu_805_p2;
    sc_signal< sc_lv<32> > tmp_5_2_3_reg_1313;
    sc_signal< sc_lv<32> > tmp18_fu_832_p2;
    sc_signal< sc_lv<32> > tmp18_reg_1318;
    sc_signal< sc_lv<32> > grp_fu_824_p2;
    sc_signal< sc_lv<32> > tmp_5_3_3_reg_1323;
    sc_signal< sc_lv<32> > grp_fu_828_p2;
    sc_signal< sc_lv<32> > tmp_5_4_3_reg_1328;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_pp0_stage14_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_lv<4> > ap_phi_mux_i_phi_fu_479_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > tmp_11_cast_fu_619_p1;
    sc_signal< sc_lv<64> > tmp_12_cast_fu_630_p1;
    sc_signal< sc_lv<64> > tmp_13_cast_fu_640_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<64> > tmp_15_cast_fu_650_p1;
    sc_signal< sc_lv<64> > tmp_14_cast_fu_660_p1;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<64> > tmp_16_cast_fu_670_p1;
    sc_signal< sc_lv<64> > tmp_3_cast_fu_810_p1;
    sc_signal< sc_lv<64> > tmp_4_cast_fu_843_p1;
    sc_signal< sc_lv<64> > tmp_6_cast_fu_853_p1;
    sc_signal< sc_lv<64> > tmp_7_cast_fu_883_p1;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<64> > tmp_8_cast_fu_893_p1;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< bool > ap_block_pp0_stage5;
    sc_signal< bool > ap_block_pp0_stage6;
    sc_signal< bool > ap_block_pp0_stage7;
    sc_signal< bool > ap_block_pp0_stage8;
    sc_signal< bool > ap_block_pp0_stage9;
    sc_signal< bool > ap_block_pp0_stage10;
    sc_signal< bool > ap_block_pp0_stage11;
    sc_signal< bool > ap_block_pp0_stage12;
    sc_signal< bool > ap_block_pp0_stage13;
    sc_signal< bool > ap_block_pp0_stage14;
    sc_signal< sc_lv<32> > prod_1_0_5_fu_818_p2;
    sc_signal< sc_lv<32> > prod_1_1_5_fu_862_p2;
    sc_signal< sc_lv<32> > prod_1_2_5_fu_872_p2;
    sc_signal< sc_lv<32> > prod_1_3_5_fu_902_p2;
    sc_signal< sc_lv<32> > prod_1_4_5_fu_912_p2;
    sc_signal< sc_lv<32> > grp_fu_547_p2;
    sc_signal< sc_lv<6> > tmp_2_fu_575_p3;
    sc_signal< sc_lv<7> > tmp_cast_fu_571_p1;
    sc_signal< sc_lv<7> > p_shl2_cast_fu_583_p1;
    sc_signal< sc_lv<5> > tmp_s_fu_601_p3;
    sc_signal< sc_lv<7> > tmp_9_fu_593_p3;
    sc_signal< sc_lv<7> > p_shl1_cast_fu_609_p1;
    sc_signal< sc_lv<7> > tmp_11_fu_624_p2;
    sc_signal< sc_lv<7> > tmp_12_fu_635_p2;
    sc_signal< sc_lv<7> > tmp_14_fu_645_p2;
    sc_signal< sc_lv<7> > tmp_13_fu_655_p2;
    sc_signal< sc_lv<7> > tmp_15_fu_665_p2;
    sc_signal< sc_lv<32> > tmp6_fu_705_p2;
    sc_signal< sc_lv<32> > tmp_fu_749_p2;
    sc_signal< sc_lv<32> > tmp12_fu_782_p2;
    sc_signal< sc_lv<32> > tmp3_fu_814_p2;
    sc_signal< sc_lv<7> > tmp_4_fu_838_p2;
    sc_signal< sc_lv<7> > tmp_6_fu_848_p2;
    sc_signal< sc_lv<32> > tmp7_fu_858_p2;
    sc_signal< sc_lv<32> > tmp11_fu_868_p2;
    sc_signal< sc_lv<7> > tmp_7_fu_878_p2;
    sc_signal< sc_lv<7> > tmp_8_fu_888_p2;
    sc_signal< sc_lv<32> > tmp15_fu_898_p2;
    sc_signal< sc_lv<32> > tmp19_fu_908_p2;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< bool > ap_block_pp0_stage5_subdone;
    sc_signal< bool > ap_block_pp0_stage6_subdone;
    sc_signal< bool > ap_block_pp0_stage7_subdone;
    sc_signal< bool > ap_block_pp0_stage8_subdone;
    sc_signal< bool > ap_block_pp0_stage9_subdone;
    sc_signal< bool > ap_block_pp0_stage10_subdone;
    sc_signal< bool > ap_block_pp0_stage11_subdone;
    sc_signal< bool > ap_block_pp0_stage12_subdone;
    sc_signal< bool > ap_block_pp0_stage13_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_pp0_stage0;
    static const sc_lv<17> ap_ST_fsm_pp0_stage1;
    static const sc_lv<17> ap_ST_fsm_pp0_stage2;
    static const sc_lv<17> ap_ST_fsm_pp0_stage3;
    static const sc_lv<17> ap_ST_fsm_pp0_stage4;
    static const sc_lv<17> ap_ST_fsm_pp0_stage5;
    static const sc_lv<17> ap_ST_fsm_pp0_stage6;
    static const sc_lv<17> ap_ST_fsm_pp0_stage7;
    static const sc_lv<17> ap_ST_fsm_pp0_stage8;
    static const sc_lv<17> ap_ST_fsm_pp0_stage9;
    static const sc_lv<17> ap_ST_fsm_pp0_stage10;
    static const sc_lv<17> ap_ST_fsm_pp0_stage11;
    static const sc_lv<17> ap_ST_fsm_pp0_stage12;
    static const sc_lv<17> ap_ST_fsm_pp0_stage13;
    static const sc_lv<17> ap_ST_fsm_pp0_stage14;
    static const sc_lv<17> ap_ST_fsm_state21;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<64> ap_const_lv64_14;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<64> ap_const_lv64_15;
    static const sc_lv<64> ap_const_lv64_1A;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_11;
    static const sc_lv<64> ap_const_lv64_16;
    static const sc_lv<64> ap_const_lv64_1B;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_12;
    static const sc_lv<64> ap_const_lv64_17;
    static const sc_lv<64> ap_const_lv64_1C;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_13;
    static const sc_lv<64> ap_const_lv64_18;
    static const sc_lv<64> ap_const_lv64_1D;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<7> ap_const_lv7_2;
    static const sc_lv<7> ap_const_lv7_4;
    static const sc_lv<7> ap_const_lv7_3;
    static const sc_lv<7> ap_const_lv7_5;
    static const sc_lv<32> ap_const_lv32_10;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_A_address0();
    void thread_A_address1();
    void thread_A_ce0();
    void thread_A_ce1();
    void thread_B_address0();
    void thread_B_address1();
    void thread_B_ce0();
    void thread_B_ce1();
    void thread_R_address0();
    void thread_R_address1();
    void thread_R_ce0();
    void thread_R_ce1();
    void thread_R_d0();
    void thread_R_d1();
    void thread_R_we0();
    void thread_R_we1();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage10();
    void thread_ap_CS_fsm_pp0_stage11();
    void thread_ap_CS_fsm_pp0_stage12();
    void thread_ap_CS_fsm_pp0_stage13();
    void thread_ap_CS_fsm_pp0_stage14();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_CS_fsm_pp0_stage7();
    void thread_ap_CS_fsm_pp0_stage8();
    void thread_ap_CS_fsm_pp0_stage9();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state21();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage10();
    void thread_ap_block_pp0_stage10_11001();
    void thread_ap_block_pp0_stage10_subdone();
    void thread_ap_block_pp0_stage11();
    void thread_ap_block_pp0_stage11_11001();
    void thread_ap_block_pp0_stage11_subdone();
    void thread_ap_block_pp0_stage12();
    void thread_ap_block_pp0_stage12_11001();
    void thread_ap_block_pp0_stage12_subdone();
    void thread_ap_block_pp0_stage13();
    void thread_ap_block_pp0_stage13_11001();
    void thread_ap_block_pp0_stage13_subdone();
    void thread_ap_block_pp0_stage14();
    void thread_ap_block_pp0_stage14_11001();
    void thread_ap_block_pp0_stage14_subdone();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_pp0_stage5();
    void thread_ap_block_pp0_stage5_11001();
    void thread_ap_block_pp0_stage5_subdone();
    void thread_ap_block_pp0_stage6();
    void thread_ap_block_pp0_stage6_11001();
    void thread_ap_block_pp0_stage6_subdone();
    void thread_ap_block_pp0_stage7();
    void thread_ap_block_pp0_stage7_11001();
    void thread_ap_block_pp0_stage7_subdone();
    void thread_ap_block_pp0_stage8();
    void thread_ap_block_pp0_stage8_11001();
    void thread_ap_block_pp0_stage8_subdone();
    void thread_ap_block_pp0_stage9();
    void thread_ap_block_pp0_stage9_11001();
    void thread_ap_block_pp0_stage9_subdone();
    void thread_ap_block_state10_pp0_stage8_iter0();
    void thread_ap_block_state11_pp0_stage9_iter0();
    void thread_ap_block_state12_pp0_stage10_iter0();
    void thread_ap_block_state13_pp0_stage11_iter0();
    void thread_ap_block_state14_pp0_stage12_iter0();
    void thread_ap_block_state15_pp0_stage13_iter0();
    void thread_ap_block_state16_pp0_stage14_iter0();
    void thread_ap_block_state17_pp0_stage0_iter1();
    void thread_ap_block_state18_pp0_stage1_iter1();
    void thread_ap_block_state19_pp0_stage2_iter1();
    void thread_ap_block_state20_pp0_stage3_iter1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state4_pp0_stage2_iter0();
    void thread_ap_block_state5_pp0_stage3_iter0();
    void thread_ap_block_state6_pp0_stage4_iter0();
    void thread_ap_block_state7_pp0_stage5_iter0();
    void thread_ap_block_state8_pp0_stage6_iter0();
    void thread_ap_block_state9_pp0_stage7_iter0();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_phi_fu_479_p4();
    void thread_ap_ready();
    void thread_exitcond2_fu_559_p2();
    void thread_grp_fu_547_p2();
    void thread_grp_fu_553_p2();
    void thread_i_1_fu_565_p2();
    void thread_p_shl1_cast_fu_609_p1();
    void thread_p_shl2_cast_fu_583_p1();
    void thread_prod_1_0_5_fu_818_p2();
    void thread_prod_1_1_5_fu_862_p2();
    void thread_prod_1_2_5_fu_872_p2();
    void thread_prod_1_3_5_fu_902_p2();
    void thread_prod_1_4_5_fu_912_p2();
    void thread_tmp10_fu_768_p2();
    void thread_tmp11_fu_868_p2();
    void thread_tmp12_fu_782_p2();
    void thread_tmp13_fu_786_p2();
    void thread_tmp14_fu_791_p2();
    void thread_tmp15_fu_898_p2();
    void thread_tmp18_fu_832_p2();
    void thread_tmp19_fu_908_p2();
    void thread_tmp3_fu_814_p2();
    void thread_tmp4_fu_695_p2();
    void thread_tmp5_fu_709_p2();
    void thread_tmp6_fu_705_p2();
    void thread_tmp7_fu_858_p2();
    void thread_tmp8_fu_724_p2();
    void thread_tmp9_fu_753_p2();
    void thread_tmp_10_fu_613_p2();
    void thread_tmp_11_cast_fu_619_p1();
    void thread_tmp_11_fu_624_p2();
    void thread_tmp_12_cast_fu_630_p1();
    void thread_tmp_12_fu_635_p2();
    void thread_tmp_13_cast_fu_640_p1();
    void thread_tmp_13_fu_655_p2();
    void thread_tmp_14_cast_fu_660_p1();
    void thread_tmp_14_fu_645_p2();
    void thread_tmp_15_cast_fu_650_p1();
    void thread_tmp_15_fu_665_p2();
    void thread_tmp_16_cast_fu_670_p1();
    void thread_tmp_2_fu_575_p3();
    void thread_tmp_3_cast_fu_810_p1();
    void thread_tmp_3_fu_587_p2();
    void thread_tmp_4_cast_fu_843_p1();
    void thread_tmp_4_fu_838_p2();
    void thread_tmp_6_cast_fu_853_p1();
    void thread_tmp_6_fu_848_p2();
    void thread_tmp_7_cast_fu_883_p1();
    void thread_tmp_7_fu_878_p2();
    void thread_tmp_8_cast_fu_893_p1();
    void thread_tmp_8_fu_888_p2();
    void thread_tmp_9_fu_593_p3();
    void thread_tmp_cast_fu_571_p1();
    void thread_tmp_fu_749_p2();
    void thread_tmp_s_fu_601_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif