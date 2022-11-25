/**
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNTL_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNTL_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x0)
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CLOSE_FLASH_ENA : R/W; bitpos: [6]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CLOSE_FLASH_ENA    (BIT(6))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CLOSE_FLASH_ENA_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CLOSE_FLASH_ENA_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CLOSE_FLASH_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CLOSE_FLASH_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CLOSE_FLASH_ENA_S  6
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_PD_RF_ENA : R/W; bitpos: [7]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_PD_RF_ENA    (BIT(7))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_PD_RF_ENA_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_PD_RF_ENA_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_PD_RF_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_PD_RF_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_PD_RF_ENA_S  7
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_WAIT : R/W; bitpos: [17:8]; default: 1;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_WAIT    0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_WAIT_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_WAIT_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_WAIT_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_WAIT_V  0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_WAIT_S  8
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_WAIT : R/W; bitpos: [27:18]; default: 1023;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_WAIT    0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_WAIT_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_WAIT_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_WAIT_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_WAIT_V  0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_WAIT_S  18
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNT_CLR : R/W; bitpos: [28]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNT_CLR    (BIT(28))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNT_CLR_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNT_CLR_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_CNT_CLR_S  28
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_ENA : R/W; bitpos: [29]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_ENA    (BIT(29))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_ENA_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_ENA_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INTR_ENA_S  29
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_SEL : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_SEL    (BIT(30))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_SEL_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_SEL_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_SEL_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_SEL_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_SEL_S  30
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_ENA : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_ENA    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_ENA_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_ENA_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_RESET_ENA_S  31

/** LP_ANALOG_PERI_LP_ANA_BOD_MODE1_CNTL_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE1_CNTL_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x4)
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE1_RESET_ENA : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE1_RESET_ENA    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE1_RESET_ENA_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE1_RESET_ENA_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE1_RESET_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE1_RESET_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE1_RESET_ENA_S  31

/** LP_ANALOG_PERI_LP_ANA_VDD_SOURCE_CNTL_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDD_SOURCE_CNTL_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x8)
/** LP_ANALOG_PERI_LP_ANA_DETMODE_SEL : R/W; bitpos: [7:0]; default: 255;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_DETMODE_SEL    0x000000FFU
#define LP_ANALOG_PERI_LP_ANA_DETMODE_SEL_M  (LP_ANALOG_PERI_LP_ANA_DETMODE_SEL_V << LP_ANALOG_PERI_LP_ANA_DETMODE_SEL_S)
#define LP_ANALOG_PERI_LP_ANA_DETMODE_SEL_V  0x000000FFU
#define LP_ANALOG_PERI_LP_ANA_DETMODE_SEL_S  0
/** LP_ANALOG_PERI_LP_ANA_VGOOD_EVENT_RECORD : RO; bitpos: [15:8]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VGOOD_EVENT_RECORD    0x000000FFU
#define LP_ANALOG_PERI_LP_ANA_VGOOD_EVENT_RECORD_M  (LP_ANALOG_PERI_LP_ANA_VGOOD_EVENT_RECORD_V << LP_ANALOG_PERI_LP_ANA_VGOOD_EVENT_RECORD_S)
#define LP_ANALOG_PERI_LP_ANA_VGOOD_EVENT_RECORD_V  0x000000FFU
#define LP_ANALOG_PERI_LP_ANA_VGOOD_EVENT_RECORD_S  8
/** LP_ANALOG_PERI_LP_ANA_VBAT_EVENT_RECORD_CLR : WT; bitpos: [23:16]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VBAT_EVENT_RECORD_CLR    0x000000FFU
#define LP_ANALOG_PERI_LP_ANA_VBAT_EVENT_RECORD_CLR_M  (LP_ANALOG_PERI_LP_ANA_VBAT_EVENT_RECORD_CLR_V << LP_ANALOG_PERI_LP_ANA_VBAT_EVENT_RECORD_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_VBAT_EVENT_RECORD_CLR_V  0x000000FFU
#define LP_ANALOG_PERI_LP_ANA_VBAT_EVENT_RECORD_CLR_S  16
/** LP_ANALOG_PERI_LP_ANA_BOD_SOURCE_ENA : R/W; bitpos: [31:24]; default: 4;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_SOURCE_ENA    0x000000FFU
#define LP_ANALOG_PERI_LP_ANA_BOD_SOURCE_ENA_M  (LP_ANALOG_PERI_LP_ANA_BOD_SOURCE_ENA_V << LP_ANALOG_PERI_LP_ANA_BOD_SOURCE_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_SOURCE_ENA_V  0x000000FFU
#define LP_ANALOG_PERI_LP_ANA_BOD_SOURCE_ENA_S  24

/** LP_ANALOG_PERI_LP_ANA_VDDBAT_BOD_CNTL_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_BOD_CNTL_REG (DR_REG_LP_ANALOG_PERI_BASE + 0xc)
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_FLAG : RO; bitpos: [0]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_FLAG    (BIT(0))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_FLAG_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_FLAG_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_FLAG_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_FLAG_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_FLAG_S  0
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGER : R/W; bitpos: [10]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGER    (BIT(10))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGER_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGER_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGER_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGER_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGER_S  10
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CNT_CLR : R/W; bitpos: [11]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CNT_CLR    (BIT(11))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CNT_CLR_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CNT_CLR_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CNT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CNT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CNT_CLR_S  11
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_TARGET : R/W; bitpos: [21:12]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_TARGET    0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_TARGET_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_TARGET_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_TARGET_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_TARGET_V  0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_TARGET_S  12
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_TARGET : R/W; bitpos: [31:22]; default: 1023;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_TARGET    0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_TARGET_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_TARGET_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_TARGET_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_TARGET_V  0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_TARGET_S  22

/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNTL_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNTL_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x10)
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_FLAG : RO; bitpos: [0]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_FLAG    (BIT(0))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_FLAG_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_FLAG_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_FLAG_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_FLAG_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_FLAG_S  0
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CHARGER : R/W; bitpos: [10]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CHARGER    (BIT(10))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CHARGER_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CHARGER_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CHARGER_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CHARGER_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CHARGER_S  10
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNT_CLR : R/W; bitpos: [11]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNT_CLR    (BIT(11))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNT_CLR_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNT_CLR_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_CNT_CLR_S  11
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_TARGET : R/W; bitpos: [21:12]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_TARGET    0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_TARGET_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_TARGET_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_TARGET_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_TARGET_V  0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_TARGET_S  12
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_TARGET : R/W; bitpos: [31:22]; default: 1023;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_TARGET    0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_TARGET_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_TARGET_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_TARGET_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_TARGET_V  0x000003FFU
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_TARGET_S  22

/** LP_ANALOG_PERI_LP_ANA_CK_GLITCH_CNTL_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_CK_GLITCH_CNTL_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x14)
/** LP_ANALOG_PERI_LP_ANA_CK_GLITCH_RESET_ENA : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_CK_GLITCH_RESET_ENA    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_CK_GLITCH_RESET_ENA_M  (LP_ANALOG_PERI_LP_ANA_CK_GLITCH_RESET_ENA_V << LP_ANALOG_PERI_LP_ANA_CK_GLITCH_RESET_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_CK_GLITCH_RESET_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_CK_GLITCH_RESET_ENA_S  31

/** LP_ANALOG_PERI_LP_ANA_PG_GLITCH_CNTL_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_PG_GLITCH_CNTL_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x18)
/** LP_ANALOG_PERI_LP_ANA_POWER_GLITCH_RESET_ENA : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_POWER_GLITCH_RESET_ENA    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_POWER_GLITCH_RESET_ENA_M  (LP_ANALOG_PERI_LP_ANA_POWER_GLITCH_RESET_ENA_V << LP_ANALOG_PERI_LP_ANA_POWER_GLITCH_RESET_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_POWER_GLITCH_RESET_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_POWER_GLITCH_RESET_ENA_S  31

/** LP_ANALOG_PERI_LP_ANA_FIB_ENABLE_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_FIB_ENABLE_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x1c)
/** LP_ANALOG_PERI_LP_ANA_ANA_FIB_ENA : R/W; bitpos: [31:0]; default: 4294967295;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_ANA_FIB_ENA    0xFFFFFFFFU
#define LP_ANALOG_PERI_LP_ANA_ANA_FIB_ENA_M  (LP_ANALOG_PERI_LP_ANA_ANA_FIB_ENA_V << LP_ANALOG_PERI_LP_ANA_ANA_FIB_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_ANA_FIB_ENA_V  0xFFFFFFFFU
#define LP_ANALOG_PERI_LP_ANA_ANA_FIB_ENA_S  0

#define LP_ANALOG_PERI_LP_ANA_FIB_GLITCH_RST BIT(0)
#define LP_ANALOG_PERI_LP_ANA_FIB_BOR_RST BIT(1)
#define LP_ANALOG_PERI_LP_ANA_FIB_SUPER_WDT_RST BIT(2)

/** LP_ANALOG_PERI_LP_ANA_INT_RAW_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_INT_RAW_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x20)
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_RAW : R/WTC/SS; bitpos: [27]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_RAW    (BIT(27))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_RAW_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_RAW_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_RAW_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_RAW_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_RAW_S  27
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_RAW : R/WTC/SS; bitpos: [28]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_RAW    (BIT(28))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_RAW_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_RAW_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_RAW_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_RAW_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_RAW_S  28
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_RAW : R/WTC/SS; bitpos: [29]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_RAW    (BIT(29))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_RAW_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_RAW_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_RAW_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_RAW_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_RAW_S  29
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_RAW : R/WTC/SS; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_RAW    (BIT(30))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_RAW_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_RAW_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_RAW_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_RAW_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_RAW_S  30
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_RAW : R/WTC/SS; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_RAW    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_RAW_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_RAW_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_RAW_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_RAW_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_RAW_S  31

/** LP_ANALOG_PERI_LP_ANA_INT_ST_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_INT_ST_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x24)
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ST : RO; bitpos: [27]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ST    (BIT(27))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ST_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ST_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ST_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ST_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ST_S  27
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ST : RO; bitpos: [28]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ST    (BIT(28))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ST_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ST_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ST_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ST_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ST_S  28
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ST : RO; bitpos: [29]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ST    (BIT(29))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ST_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ST_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ST_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ST_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ST_S  29
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ST : RO; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ST    (BIT(30))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ST_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ST_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ST_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ST_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ST_S  30
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ST : RO; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ST    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ST_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ST_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ST_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ST_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ST_S  31

/** LP_ANALOG_PERI_LP_ANA_INT_ENA_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_INT_ENA_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x28)
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ENA : R/W; bitpos: [27]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ENA    (BIT(27))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ENA_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ENA_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_ENA_S  27
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ENA : R/W; bitpos: [28]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ENA    (BIT(28))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ENA_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ENA_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_ENA_S  28
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ENA : R/W; bitpos: [29]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ENA    (BIT(29))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ENA_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ENA_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_ENA_S  29
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ENA : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ENA    (BIT(30))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ENA_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ENA_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_ENA_S  30
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ENA : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ENA    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ENA_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ENA_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_ENA_S  31

/** LP_ANALOG_PERI_LP_ANA_INT_CLR_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_INT_CLR_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x2c)
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_CLR : WT; bitpos: [27]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_CLR    (BIT(27))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_CLR_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_CLR_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UPVOLTAGE_INT_CLR_S  27
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_CLR : WT; bitpos: [28]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_CLR    (BIT(28))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_CLR_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_CLR_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_CHARGE_UNDERVOLTAGE_INT_CLR_S  28
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_CLR : WT; bitpos: [29]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_CLR    (BIT(29))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_CLR_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_CLR_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UPVOLTAGE_INT_CLR_S  29
/** LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_CLR : WT; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_CLR    (BIT(30))
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_CLR_M  (LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_CLR_V << LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_VDDBAT_UNDERVOLTAGE_INT_CLR_S  30
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_CLR : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_CLR    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_CLR_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_CLR_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_INT_CLR_S  31

/** LP_ANALOG_PERI_LP_ANA_LP_INT_RAW_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_LP_INT_RAW_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x30)
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_RAW : R/WTC/SS; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_RAW    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_RAW_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_RAW_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_RAW_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_RAW_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_RAW_S  31

/** LP_ANALOG_PERI_LP_ANA_LP_INT_ST_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_LP_INT_ST_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x34)
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ST : RO; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ST    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ST_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ST_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ST_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ST_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ST_S  31

/** LP_ANALOG_PERI_LP_ANA_LP_INT_ENA_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_LP_INT_ENA_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x38)
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ENA : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ENA    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ENA_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ENA_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ENA_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ENA_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_ENA_S  31

/** LP_ANALOG_PERI_LP_ANA_LP_INT_CLR_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_LP_INT_CLR_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x3c)
/** LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_CLR : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_CLR    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_CLR_M  (LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_CLR_V << LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_CLR_S)
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_CLR_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_BOD_MODE0_LP_INT_CLR_S  31

/** LP_ANALOG_PERI_LP_ANA_DATE_REG register
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_DATE_REG (DR_REG_LP_ANALOG_PERI_BASE + 0x3fc)
/** LP_ANALOG_PERI_LP_ANA_LP_ANALOG_PERI_LP_ANA_DATE : R/W; bitpos: [30:0]; default: 35684944;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_LP_ANALOG_PERI_LP_ANA_DATE    0x7FFFFFFFU
#define LP_ANALOG_PERI_LP_ANA_LP_ANALOG_PERI_LP_ANA_DATE_M  (LP_ANALOG_PERI_LP_ANA_LP_ANALOG_PERI_LP_ANA_DATE_V << LP_ANALOG_PERI_LP_ANA_LP_ANALOG_PERI_LP_ANA_DATE_S)
#define LP_ANALOG_PERI_LP_ANA_LP_ANALOG_PERI_LP_ANA_DATE_V  0x7FFFFFFFU
#define LP_ANALOG_PERI_LP_ANA_LP_ANALOG_PERI_LP_ANA_DATE_S  0
/** LP_ANALOG_PERI_LP_ANA_CLK_EN : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_ANALOG_PERI_LP_ANA_CLK_EN    (BIT(31))
#define LP_ANALOG_PERI_LP_ANA_CLK_EN_M  (LP_ANALOG_PERI_LP_ANA_CLK_EN_V << LP_ANALOG_PERI_LP_ANA_CLK_EN_S)
#define LP_ANALOG_PERI_LP_ANA_CLK_EN_V  0x00000001U
#define LP_ANALOG_PERI_LP_ANA_CLK_EN_S  31

#ifdef __cplusplus
}
#endif
