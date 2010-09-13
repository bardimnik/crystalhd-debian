/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 **********************************************************************
 * This file is part of the crystalhd device driver.
 *
 * This driver is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 *
 * This driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this driver.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************
 *
 * $brcm_Workfile: bchp_xpt_fe.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:23p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:20 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_xpt_fe.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:23p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_XPT_FE_H__
#define BCHP_XPT_FE_H__

/***************************************************************************
 *XPT_FE - XPT FRONTEND Control Registers
 ***************************************************************************/
#define BCHP_XPT_FE_INTR_STATUS_REG              0x00208010 /* Interrupt Status Register */
#define BCHP_XPT_FE_INTR_STATUS_REG_EN           0x00208014 /* Interrupt Status Enable Register */
#define BCHP_XPT_FE_MAX_PID_CHANNEL              0x0020801c /* Maximum Pid Channel number register */
#define BCHP_XPT_FE_PSG_CFG                      0x00208300 /* Passage Config Register */
#define BCHP_XPT_FE_PSG_RESET0                   0x0020831c /* Passage Per PID Reset for Secondary PID Channels 0-31 Register */
#define BCHP_XPT_FE_PSG_RESET1                   0x00208320 /* Passage Per PID Reset for Secondary PID Channels 32-63 Register */
#define BCHP_XPT_FE_PSG_RESET2                   0x0020835c /* Passage Per PID Reset for Secondary PID Channels 64-95 Register */
#define BCHP_XPT_FE_PSG_RESET3                   0x00208360 /* Passage Per PID Reset for Secondary PID Channels 96-127 Register */
#define BCHP_XPT_FE_PSG_PR_ERR0                  0x00208374 /* Passage Per PID Protocol Error for PID Channels 0-31 Register */
#define BCHP_XPT_FE_PSG_PR_ERR1                  0x00208378 /* Passage Per PID Protocol Error for PID Channels 32-63 Register */
#define BCHP_XPT_FE_PSG_PR_ERR2                  0x0020837c /* Passage Per PID Protocol Error for PID Channels 95-64 Register */
#define BCHP_XPT_FE_PSG_PR_ERR3                  0x00208380 /* Passage Per PID Protocol Error for PID Channels 127-96 Register */
#define BCHP_XPT_FE_PSG_PR_ERR_EN0               0x00208394 /* Passage Per PID Protocol Error Enable for PID Channels 0-31 Register */
#define BCHP_XPT_FE_PSG_PR_ERR_EN1               0x00208398 /* Passage Per PID Protocol Error Enable for PID Channels 32-63 Register */
#define BCHP_XPT_FE_PSG_PR_ERR_EN2               0x0020839c /* Passage Per PID Protocol Error Enable for PID Channels 64-95 Register */
#define BCHP_XPT_FE_PSG_PR_ERR_EN3               0x002083a0 /* Passage Per PID Protocol Error Enable for PID Channels 96-127 Register */
#define BCHP_XPT_FE_SCC_ERROR0                   0x002083b4 /* Per PID Secondary CC Error for PID Channels 0-31 Register */
#define BCHP_XPT_FE_SCC_ERROR1                   0x002083b8 /* Per PID Secondary CC Error for PID Channels 32-63 Register */
#define BCHP_XPT_FE_SCC_ERROR2                   0x002083bc /* Per PID Secondary CC Error for PID Channels 64-95 Register */
#define BCHP_XPT_FE_SCC_ERROR3                   0x002083c0 /* Per PID Secondary CC Error for PID Channels 96-127 Register */
#define BCHP_XPT_FE_PCC_ERROR0                   0x002083d4 /* Per PID Primary CC Error for PID Channels 0-31 Register */
#define BCHP_XPT_FE_PCC_ERROR1                   0x002083d8 /* Per PID Primary CC Error for PID Channels 32-63 Register */
#define BCHP_XPT_FE_PCC_ERROR2                   0x002083dc /* Per PID Primary CC Error for PID Channels 64-95 Register */
#define BCHP_XPT_FE_PCC_ERROR3                   0x002083e0 /* Per PID Primary CC Error for PID Channels 96-127 Register */
#define BCHP_XPT_FE_PID_ERR_SNIFFER              0x002083f4 /* PID Error Sniffer Register */

/***************************************************************************
 *INTR_STATUS_REG - Interrupt Status Register
 ***************************************************************************/
/* XPT_FE :: INTR_STATUS_REG :: reserved0 [31:30] */
#define BCHP_XPT_FE_INTR_STATUS_REG_reserved0_MASK                 0xc0000000
#define BCHP_XPT_FE_INTR_STATUS_REG_reserved0_SHIFT                30

/* XPT_FE :: INTR_STATUS_REG :: PSG_PROTOCOL_ERROR [29:29] */
#define BCHP_XPT_FE_INTR_STATUS_REG_PSG_PROTOCOL_ERROR_MASK        0x20000000
#define BCHP_XPT_FE_INTR_STATUS_REG_PSG_PROTOCOL_ERROR_SHIFT       29

/* XPT_FE :: INTR_STATUS_REG :: reserved1 [28:00] */
#define BCHP_XPT_FE_INTR_STATUS_REG_reserved1_MASK                 0x1fffffff
#define BCHP_XPT_FE_INTR_STATUS_REG_reserved1_SHIFT                0

/***************************************************************************
 *INTR_STATUS_REG_EN - Interrupt Status Enable Register
 ***************************************************************************/
/* XPT_FE :: INTR_STATUS_REG_EN :: reserved0 [31:30] */
#define BCHP_XPT_FE_INTR_STATUS_REG_EN_reserved0_MASK              0xc0000000
#define BCHP_XPT_FE_INTR_STATUS_REG_EN_reserved0_SHIFT             30

/* XPT_FE :: INTR_STATUS_REG_EN :: INTR_STATUS_REG_EN [29:29] */
#define BCHP_XPT_FE_INTR_STATUS_REG_EN_INTR_STATUS_REG_EN_MASK     0x20000000
#define BCHP_XPT_FE_INTR_STATUS_REG_EN_INTR_STATUS_REG_EN_SHIFT    29

/* XPT_FE :: INTR_STATUS_REG_EN :: reserved1 [28:00] */
#define BCHP_XPT_FE_INTR_STATUS_REG_EN_reserved1_MASK              0x1fffffff
#define BCHP_XPT_FE_INTR_STATUS_REG_EN_reserved1_SHIFT             0

/***************************************************************************
 *MAX_PID_CHANNEL - Maximum Pid Channel number register
 ***************************************************************************/
/* XPT_FE :: MAX_PID_CHANNEL :: reserved0 [31:07] */
#define BCHP_XPT_FE_MAX_PID_CHANNEL_reserved0_MASK                 0xffffff80
#define BCHP_XPT_FE_MAX_PID_CHANNEL_reserved0_SHIFT                7

/* XPT_FE :: MAX_PID_CHANNEL :: MAX_PID_CHANNEL [06:00] */
#define BCHP_XPT_FE_MAX_PID_CHANNEL_MAX_PID_CHANNEL_MASK           0x0000007f
#define BCHP_XPT_FE_MAX_PID_CHANNEL_MAX_PID_CHANNEL_SHIFT          0

/***************************************************************************
 *PSG_CFG - Passage Config Register
 ***************************************************************************/
/* XPT_FE :: PSG_CFG :: reserved0 [31:12] */
#define BCHP_XPT_FE_PSG_CFG_reserved0_MASK                         0xfffff000
#define BCHP_XPT_FE_PSG_CFG_reserved0_SHIFT                        12

/* XPT_FE :: PSG_CFG :: PSG_PBP2_DROP_ON_SCC_ERR [11:11] */
#define BCHP_XPT_FE_PSG_CFG_PSG_PBP2_DROP_ON_SCC_ERR_MASK          0x00000800
#define BCHP_XPT_FE_PSG_CFG_PSG_PBP2_DROP_ON_SCC_ERR_SHIFT         11

/* XPT_FE :: PSG_CFG :: PSG_PBP1_DROP_ON_SCC_ERR [10:10] */
#define BCHP_XPT_FE_PSG_CFG_PSG_PBP1_DROP_ON_SCC_ERR_MASK          0x00000400
#define BCHP_XPT_FE_PSG_CFG_PSG_PBP1_DROP_ON_SCC_ERR_SHIFT         10

/* XPT_FE :: PSG_CFG :: PSG_PBP0_DROP_ON_SCC_ERR [09:09] */
#define BCHP_XPT_FE_PSG_CFG_PSG_PBP0_DROP_ON_SCC_ERR_MASK          0x00000200
#define BCHP_XPT_FE_PSG_CFG_PSG_PBP0_DROP_ON_SCC_ERR_SHIFT         9

/* XPT_FE :: PSG_CFG :: reserved1 [08:02] */
#define BCHP_XPT_FE_PSG_CFG_reserved1_MASK                         0x000001fc
#define BCHP_XPT_FE_PSG_CFG_reserved1_SHIFT                        2

/* XPT_FE :: PSG_CFG :: PSG_START_IMMEDIATE [01:01] */
#define BCHP_XPT_FE_PSG_CFG_PSG_START_IMMEDIATE_MASK               0x00000002
#define BCHP_XPT_FE_PSG_CFG_PSG_START_IMMEDIATE_SHIFT              1

/* XPT_FE :: PSG_CFG :: PSG_MASTER_EN [00:00] */
#define BCHP_XPT_FE_PSG_CFG_PSG_MASTER_EN_MASK                     0x00000001
#define BCHP_XPT_FE_PSG_CFG_PSG_MASTER_EN_SHIFT                    0

/***************************************************************************
 *PSG_RESET0 - Passage Per PID Reset for Secondary PID Channels 0-31 Register
 ***************************************************************************/
/* XPT_FE :: PSG_RESET0 :: PSG_RST [31:00] */
#define BCHP_XPT_FE_PSG_RESET0_PSG_RST_MASK                        0xffffffff
#define BCHP_XPT_FE_PSG_RESET0_PSG_RST_SHIFT                       0

/***************************************************************************
 *PSG_RESET1 - Passage Per PID Reset for Secondary PID Channels 32-63 Register
 ***************************************************************************/
/* XPT_FE :: PSG_RESET1 :: PSG_RST [31:00] */
#define BCHP_XPT_FE_PSG_RESET1_PSG_RST_MASK                        0xffffffff
#define BCHP_XPT_FE_PSG_RESET1_PSG_RST_SHIFT                       0

/***************************************************************************
 *PSG_RESET2 - Passage Per PID Reset for Secondary PID Channels 64-95 Register
 ***************************************************************************/
/* XPT_FE :: PSG_RESET2 :: PSG_RST [31:00] */
#define BCHP_XPT_FE_PSG_RESET2_PSG_RST_MASK                        0xffffffff
#define BCHP_XPT_FE_PSG_RESET2_PSG_RST_SHIFT                       0

/***************************************************************************
 *PSG_RESET3 - Passage Per PID Reset for Secondary PID Channels 96-127 Register
 ***************************************************************************/
/* XPT_FE :: PSG_RESET3 :: PSG_RST [31:00] */
#define BCHP_XPT_FE_PSG_RESET3_PSG_RST_MASK                        0xffffffff
#define BCHP_XPT_FE_PSG_RESET3_PSG_RST_SHIFT                       0

/***************************************************************************
 *PSG_PR_ERR0 - Passage Per PID Protocol Error for PID Channels 0-31 Register
 ***************************************************************************/
/* XPT_FE :: PSG_PR_ERR0 :: PSG_PR_ERROR [31:00] */
#define BCHP_XPT_FE_PSG_PR_ERR0_PSG_PR_ERROR_MASK                  0xffffffff
#define BCHP_XPT_FE_PSG_PR_ERR0_PSG_PR_ERROR_SHIFT                 0

/***************************************************************************
 *PSG_PR_ERR1 - Passage Per PID Protocol Error for PID Channels 32-63 Register
 ***************************************************************************/
/* XPT_FE :: PSG_PR_ERR1 :: PSG_PR_ERROR [31:00] */
#define BCHP_XPT_FE_PSG_PR_ERR1_PSG_PR_ERROR_MASK                  0xffffffff
#define BCHP_XPT_FE_PSG_PR_ERR1_PSG_PR_ERROR_SHIFT                 0

/***************************************************************************
 *PSG_PR_ERR2 - Passage Per PID Protocol Error for PID Channels 95-64 Register
 ***************************************************************************/
/* XPT_FE :: PSG_PR_ERR2 :: PSG_PR_ERROR [31:00] */
#define BCHP_XPT_FE_PSG_PR_ERR2_PSG_PR_ERROR_MASK                  0xffffffff
#define BCHP_XPT_FE_PSG_PR_ERR2_PSG_PR_ERROR_SHIFT                 0

/***************************************************************************
 *PSG_PR_ERR3 - Passage Per PID Protocol Error for PID Channels 127-96 Register
 ***************************************************************************/
/* XPT_FE :: PSG_PR_ERR3 :: PSG_PR_ERROR [31:00] */
#define BCHP_XPT_FE_PSG_PR_ERR3_PSG_PR_ERROR_MASK                  0xffffffff
#define BCHP_XPT_FE_PSG_PR_ERR3_PSG_PR_ERROR_SHIFT                 0

/***************************************************************************
 *PSG_PR_ERR_EN0 - Passage Per PID Protocol Error Enable for PID Channels 0-31 Register
 ***************************************************************************/
/* XPT_FE :: PSG_PR_ERR_EN0 :: PSG_PR_ERROR_EN [31:00] */
#define BCHP_XPT_FE_PSG_PR_ERR_EN0_PSG_PR_ERROR_EN_MASK            0xffffffff
#define BCHP_XPT_FE_PSG_PR_ERR_EN0_PSG_PR_ERROR_EN_SHIFT           0

/***************************************************************************
 *PSG_PR_ERR_EN1 - Passage Per PID Protocol Error Enable for PID Channels 32-63 Register
 ***************************************************************************/
/* XPT_FE :: PSG_PR_ERR_EN1 :: PSG_PR_ERROR_EN [31:00] */
#define BCHP_XPT_FE_PSG_PR_ERR_EN1_PSG_PR_ERROR_EN_MASK            0xffffffff
#define BCHP_XPT_FE_PSG_PR_ERR_EN1_PSG_PR_ERROR_EN_SHIFT           0

/***************************************************************************
 *PSG_PR_ERR_EN2 - Passage Per PID Protocol Error Enable for PID Channels 64-95 Register
 ***************************************************************************/
/* XPT_FE :: PSG_PR_ERR_EN2 :: PSG_PR_ERROR_EN [31:00] */
#define BCHP_XPT_FE_PSG_PR_ERR_EN2_PSG_PR_ERROR_EN_MASK            0xffffffff
#define BCHP_XPT_FE_PSG_PR_ERR_EN2_PSG_PR_ERROR_EN_SHIFT           0

/***************************************************************************
 *PSG_PR_ERR_EN3 - Passage Per PID Protocol Error Enable for PID Channels 96-127 Register
 ***************************************************************************/
/* XPT_FE :: PSG_PR_ERR_EN3 :: PSG_PR_ERROR_EN [31:00] */
#define BCHP_XPT_FE_PSG_PR_ERR_EN3_PSG_PR_ERROR_EN_MASK            0xffffffff
#define BCHP_XPT_FE_PSG_PR_ERR_EN3_PSG_PR_ERROR_EN_SHIFT           0

/***************************************************************************
 *SCC_ERROR0 - Per PID Secondary CC Error for PID Channels 0-31 Register
 ***************************************************************************/
/* XPT_FE :: SCC_ERROR0 :: SCC_ERROR [31:00] */
#define BCHP_XPT_FE_SCC_ERROR0_SCC_ERROR_MASK                      0xffffffff
#define BCHP_XPT_FE_SCC_ERROR0_SCC_ERROR_SHIFT                     0

/***************************************************************************
 *SCC_ERROR1 - Per PID Secondary CC Error for PID Channels 32-63 Register
 ***************************************************************************/
/* XPT_FE :: SCC_ERROR1 :: SCC_ERROR [31:00] */
#define BCHP_XPT_FE_SCC_ERROR1_SCC_ERROR_MASK                      0xffffffff
#define BCHP_XPT_FE_SCC_ERROR1_SCC_ERROR_SHIFT                     0

/***************************************************************************
 *SCC_ERROR2 - Per PID Secondary CC Error for PID Channels 64-95 Register
 ***************************************************************************/
/* XPT_FE :: SCC_ERROR2 :: SCC_ERROR [31:00] */
#define BCHP_XPT_FE_SCC_ERROR2_SCC_ERROR_MASK                      0xffffffff
#define BCHP_XPT_FE_SCC_ERROR2_SCC_ERROR_SHIFT                     0

/***************************************************************************
 *SCC_ERROR3 - Per PID Secondary CC Error for PID Channels 96-127 Register
 ***************************************************************************/
/* XPT_FE :: SCC_ERROR3 :: SCC_ERROR [31:00] */
#define BCHP_XPT_FE_SCC_ERROR3_SCC_ERROR_MASK                      0xffffffff
#define BCHP_XPT_FE_SCC_ERROR3_SCC_ERROR_SHIFT                     0

/***************************************************************************
 *PCC_ERROR0 - Per PID Primary CC Error for PID Channels 0-31 Register
 ***************************************************************************/
/* XPT_FE :: PCC_ERROR0 :: PCC_ERROR [31:00] */
#define BCHP_XPT_FE_PCC_ERROR0_PCC_ERROR_MASK                      0xffffffff
#define BCHP_XPT_FE_PCC_ERROR0_PCC_ERROR_SHIFT                     0

/***************************************************************************
 *PCC_ERROR1 - Per PID Primary CC Error for PID Channels 32-63 Register
 ***************************************************************************/
/* XPT_FE :: PCC_ERROR1 :: PCC_ERROR [31:00] */
#define BCHP_XPT_FE_PCC_ERROR1_PCC_ERROR_MASK                      0xffffffff
#define BCHP_XPT_FE_PCC_ERROR1_PCC_ERROR_SHIFT                     0

/***************************************************************************
 *PCC_ERROR2 - Per PID Primary CC Error for PID Channels 64-95 Register
 ***************************************************************************/
/* XPT_FE :: PCC_ERROR2 :: PCC_ERROR [31:00] */
#define BCHP_XPT_FE_PCC_ERROR2_PCC_ERROR_MASK                      0xffffffff
#define BCHP_XPT_FE_PCC_ERROR2_PCC_ERROR_SHIFT                     0

/***************************************************************************
 *PCC_ERROR3 - Per PID Primary CC Error for PID Channels 96-127 Register
 ***************************************************************************/
/* XPT_FE :: PCC_ERROR3 :: PCC_ERROR [31:00] */
#define BCHP_XPT_FE_PCC_ERROR3_PCC_ERROR_MASK                      0xffffffff
#define BCHP_XPT_FE_PCC_ERROR3_PCC_ERROR_SHIFT                     0

/***************************************************************************
 *PID_ERR_SNIFFER - PID Error Sniffer Register
 ***************************************************************************/
/* XPT_FE :: PID_ERR_SNIFFER :: SNIF_ERROR_COUNT [31:16] */
#define BCHP_XPT_FE_PID_ERR_SNIFFER_SNIF_ERROR_COUNT_MASK          0xffff0000
#define BCHP_XPT_FE_PID_ERR_SNIFFER_SNIF_ERROR_COUNT_SHIFT         16

/* XPT_FE :: PID_ERR_SNIFFER :: reserved0 [15:07] */
#define BCHP_XPT_FE_PID_ERR_SNIFFER_reserved0_MASK                 0x0000ff80
#define BCHP_XPT_FE_PID_ERR_SNIFFER_reserved0_SHIFT                7

/* XPT_FE :: PID_ERR_SNIFFER :: SNIF_PID_CHANNEL_NUMBER [06:00] */
#define BCHP_XPT_FE_PID_ERR_SNIFFER_SNIF_PID_CHANNEL_NUMBER_MASK   0x0000007f
#define BCHP_XPT_FE_PID_ERR_SNIFFER_SNIF_PID_CHANNEL_NUMBER_SHIFT  0

/***************************************************************************
 *PID_TABLE_%i - Data Transport Primary PID Table
 ***************************************************************************/
#define BCHP_XPT_FE_PID_TABLE_i_ARRAY_BASE                         0x00208800
#define BCHP_XPT_FE_PID_TABLE_i_ARRAY_START                        0
#define BCHP_XPT_FE_PID_TABLE_i_ARRAY_END                          127
#define BCHP_XPT_FE_PID_TABLE_i_ARRAY_ELEMENT_SIZE                 32

/***************************************************************************
 *PID_TABLE_%i - Data Transport Primary PID Table
 ***************************************************************************/
/* XPT_FE :: PID_TABLE_i :: reserved0 [31:29] */
#define BCHP_XPT_FE_PID_TABLE_i_reserved0_MASK                     0xe0000000
#define BCHP_XPT_FE_PID_TABLE_i_reserved0_SHIFT                    29

/* XPT_FE :: PID_TABLE_i :: IGNORE_PID_VERSION [28:28] */
#define BCHP_XPT_FE_PID_TABLE_i_IGNORE_PID_VERSION_MASK            0x10000000
#define BCHP_XPT_FE_PID_TABLE_i_IGNORE_PID_VERSION_SHIFT           28

/* XPT_FE :: PID_TABLE_i :: PLAYBACK_FE_SEL [27:27] */
#define BCHP_XPT_FE_PID_TABLE_i_PLAYBACK_FE_SEL_MASK               0x08000000
#define BCHP_XPT_FE_PID_TABLE_i_PLAYBACK_FE_SEL_SHIFT              27

/* XPT_FE :: PID_TABLE_i :: PID_VERSION [26:24] */
#define BCHP_XPT_FE_PID_TABLE_i_PID_VERSION_MASK                   0x07000000
#define BCHP_XPT_FE_PID_TABLE_i_PID_VERSION_SHIFT                  24

/* XPT_FE :: PID_TABLE_i :: reserved1 [23:21] */
#define BCHP_XPT_FE_PID_TABLE_i_reserved1_MASK                     0x00e00000
#define BCHP_XPT_FE_PID_TABLE_i_reserved1_SHIFT                    21

/* XPT_FE :: PID_TABLE_i :: PID_CHANNEL_ENABLE [20:20] */
#define BCHP_XPT_FE_PID_TABLE_i_PID_CHANNEL_ENABLE_MASK            0x00100000
#define BCHP_XPT_FE_PID_TABLE_i_PID_CHANNEL_ENABLE_SHIFT           20

/* XPT_FE :: PID_TABLE_i :: PID_CHANNEL_INPUT_SELECT [19:16] */
#define BCHP_XPT_FE_PID_TABLE_i_PID_CHANNEL_INPUT_SELECT_MASK      0x000f0000
#define BCHP_XPT_FE_PID_TABLE_i_PID_CHANNEL_INPUT_SELECT_SHIFT     16

/* XPT_FE :: PID_TABLE_i :: reserved2 [15:14] */
#define BCHP_XPT_FE_PID_TABLE_i_reserved2_MASK                     0x0000c000
#define BCHP_XPT_FE_PID_TABLE_i_reserved2_SHIFT                    14

/* XPT_FE :: PID_TABLE_i :: ENABLE_HD_FILTER [13:13] */
#define BCHP_XPT_FE_PID_TABLE_i_ENABLE_HD_FILTER_MASK              0x00002000
#define BCHP_XPT_FE_PID_TABLE_i_ENABLE_HD_FILTER_SHIFT             13

/* union - case HD_FILT_EN [12:00] */
/* XPT_FE :: PID_TABLE_i :: HD_FILT_EN :: HD_FILTER_TYPE [12:12] */
#define BCHP_XPT_FE_PID_TABLE_i_HD_FILT_EN_HD_FILTER_TYPE_MASK     0x00001000
#define BCHP_XPT_FE_PID_TABLE_i_HD_FILT_EN_HD_FILTER_TYPE_SHIFT    12

/* XPT_FE :: PID_TABLE_i :: HD_FILT_EN :: PID_CHANNEL_SCID [11:00] */
#define BCHP_XPT_FE_PID_TABLE_i_HD_FILT_EN_PID_CHANNEL_SCID_MASK   0x00000fff
#define BCHP_XPT_FE_PID_TABLE_i_HD_FILT_EN_PID_CHANNEL_SCID_SHIFT  0

/* union - case HD_FILT_DIS [12:00] */
/* XPT_FE :: PID_TABLE_i :: HD_FILT_DIS :: PID_CHANNEL_PID [12:00] */
#define BCHP_XPT_FE_PID_TABLE_i_HD_FILT_DIS_PID_CHANNEL_PID_MASK   0x00001fff
#define BCHP_XPT_FE_PID_TABLE_i_HD_FILT_DIS_PID_CHANNEL_PID_SHIFT  0


/***************************************************************************
 *SPID_TABLE_%i - Data Transport Secondary PID Table
 ***************************************************************************/
#define BCHP_XPT_FE_SPID_TABLE_i_ARRAY_BASE                        0x00208c00
#define BCHP_XPT_FE_SPID_TABLE_i_ARRAY_START                       0
#define BCHP_XPT_FE_SPID_TABLE_i_ARRAY_END                         127
#define BCHP_XPT_FE_SPID_TABLE_i_ARRAY_ELEMENT_SIZE                32

/***************************************************************************
 *SPID_TABLE_%i - Data Transport Secondary PID Table
 ***************************************************************************/
/* XPT_FE :: SPID_TABLE_i :: PID_DESTINATION [31:24] */
#define BCHP_XPT_FE_SPID_TABLE_i_PID_DESTINATION_MASK              0xff000000
#define BCHP_XPT_FE_SPID_TABLE_i_PID_DESTINATION_SHIFT             24

/* XPT_FE :: SPID_TABLE_i :: reserved0 [23:20] */
#define BCHP_XPT_FE_SPID_TABLE_i_reserved0_MASK                    0x00f00000
#define BCHP_XPT_FE_SPID_TABLE_i_reserved0_SHIFT                   20

/* XPT_FE :: SPID_TABLE_i :: SPID_MODE [19:16] */
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_MASK                    0x000f0000
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_SHIFT                   16
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_DISABLE_SPID            0
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_PID_INSERTION           5
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_PID_MERGE               6
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_PID_REMAP               7
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_STREAM_ID_FILTER        8
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_STREAM_ID_RANGE         10
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_STREAM_ID_EXTENSION_FILTER 12
#define BCHP_XPT_FE_SPID_TABLE_i_SPID_MODE_SUBSTREAM_ID_FILTER     14

/* union - case STREAM_ID_FILTER [15:00] */
/* XPT_FE :: SPID_TABLE_i :: STREAM_ID_FILTER :: STREAM_ID [15:08] */
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_FILTER_STREAM_ID_MASK   0x0000ff00
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_FILTER_STREAM_ID_SHIFT  8

/* XPT_FE :: SPID_TABLE_i :: STREAM_ID_FILTER :: reserved0 [07:00] */
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_FILTER_reserved0_MASK   0x000000ff
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_FILTER_reserved0_SHIFT  0

/* union - case STREAM_ID_RANGE [15:00] */
/* XPT_FE :: SPID_TABLE_i :: STREAM_ID_RANGE :: STREAM_ID_HI [15:08] */
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_RANGE_STREAM_ID_HI_MASK 0x0000ff00
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_RANGE_STREAM_ID_HI_SHIFT 8

/* XPT_FE :: SPID_TABLE_i :: STREAM_ID_RANGE :: STREAM_ID_LO [07:00] */
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_RANGE_STREAM_ID_LO_MASK 0x000000ff
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_RANGE_STREAM_ID_LO_SHIFT 0

/* union - case STREAM_ID_EXTENSION_FILTER [15:00] */
/* XPT_FE :: SPID_TABLE_i :: STREAM_ID_EXTENSION_FILTER :: STREAM_ID [15:08] */
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_EXTENSION_FILTER_STREAM_ID_MASK 0x0000ff00
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_EXTENSION_FILTER_STREAM_ID_SHIFT 8

/* XPT_FE :: SPID_TABLE_i :: STREAM_ID_EXTENSION_FILTER :: STREAM_ID_EXTENSION [07:00] */
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_EXTENSION_FILTER_STREAM_ID_EXTENSION_MASK 0x000000ff
#define BCHP_XPT_FE_SPID_TABLE_i_STREAM_ID_EXTENSION_FILTER_STREAM_ID_EXTENSION_SHIFT 0

/* union - case SUBSTREAM_ID_FILTER [15:00] */
/* XPT_FE :: SPID_TABLE_i :: SUBSTREAM_ID_FILTER :: STREAM_ID [15:08] */
#define BCHP_XPT_FE_SPID_TABLE_i_SUBSTREAM_ID_FILTER_STREAM_ID_MASK 0x0000ff00
#define BCHP_XPT_FE_SPID_TABLE_i_SUBSTREAM_ID_FILTER_STREAM_ID_SHIFT 8

/* XPT_FE :: SPID_TABLE_i :: SUBSTREAM_ID_FILTER :: SUBSTREAM_ID [07:00] */
#define BCHP_XPT_FE_SPID_TABLE_i_SUBSTREAM_ID_FILTER_SUBSTREAM_ID_MASK 0x000000ff
#define BCHP_XPT_FE_SPID_TABLE_i_SUBSTREAM_ID_FILTER_SUBSTREAM_ID_SHIFT 0

/* union - case PID_FUNCTIONS [15:00] */
/* XPT_FE :: SPID_TABLE_i :: PID_FUNCTIONS :: reserved0 [15:13] */
#define BCHP_XPT_FE_SPID_TABLE_i_PID_FUNCTIONS_reserved0_MASK      0x0000e000
#define BCHP_XPT_FE_SPID_TABLE_i_PID_FUNCTIONS_reserved0_SHIFT     13

/* XPT_FE :: SPID_TABLE_i :: PID_FUNCTIONS :: SPID_CHANNEL_PID [12:00] */
#define BCHP_XPT_FE_SPID_TABLE_i_PID_FUNCTIONS_SPID_CHANNEL_PID_MASK 0x00001fff
#define BCHP_XPT_FE_SPID_TABLE_i_PID_FUNCTIONS_SPID_CHANNEL_PID_SHIFT 0


#endif /* #ifndef BCHP_XPT_FE_H__ */

/* End of File */