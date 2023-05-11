//###########################################################################
//
// FILE:   F2837xD_Emif_defines.h
//
// TITLE:  #defines used in EMIF examples
//
//###########################################################################
// $TI Release: F2837xD Support Library v3.09.00.00 $
// $Release Date: Thu Mar 19 07:35:24 IST 2020 $
// $Copyright:
// Copyright (C) 2013-2020 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//###########################################################################

#ifndef F2837xD_EMIF_DEFINES_H
#define F2837xD_EMIF_DEFINES_H

#ifdef __cplusplus
extern "C" {
#endif

//
// Defines
//

//
//cpu1 to cpu2 message for handshaking
//
#define CPU1_CPU2_MSG       0x3fd00

//
//cpu2_to_cpu1 message ram for handshaking
//
#define CPU2_CPU1_MSG       0x3fb00

#define MSEL_EMIF1_CPU1 0x93A5CE71
#define MSEL_EMIF1_CPU2 0x93A5CE72
#define MSEL_DEF_3      0x93A5CE73
#define MSEL_DEF_0      0x93A5CE70
#define MSEL_DEF_1      0x93A5CE71
#define MSEL_DEF_2      0x93A5CE72

//
//soft reset bit register
//
#define EMIF_SOFT_PRES_REG 0x5D084

//
//Device capability/EMIF customization register
//
#define EMIF_DEV_DC_REG 0x5D014

//
// Values for ASYNC_CSx_CR Registers
//
#define EMIF_ASYNC_ASIZE_8  0x0
#define EMIF_ASYNC_ASIZE_16 0x1
#define EMIF_ASYNC_ASIZE_32 0x2

#define EMIF_ASYNC_TA_1 0x0
#define EMIF_ASYNC_TA_2 0x4
#define EMIF_ASYNC_TA_3 0x8
#define EMIF_ASYNC_TA_4 0xC

#define EMIF_ASYNC_RHOLD_1 0x00
#define EMIF_ASYNC_RHOLD_2 0x10
#define EMIF_ASYNC_RHOLD_3 0x20
#define EMIF_ASYNC_RHOLD_4 0x30
#define EMIF_ASYNC_RHOLD_5 0x40
#define EMIF_ASYNC_RHOLD_6 0x50
#define EMIF_ASYNC_RHOLD_7 0x60
#define EMIF_ASYNC_RHOLD_8 0x70

#define EMIF_ASYNC_RSTROBE_1  0x0000
#define EMIF_ASYNC_RSTROBE_2  0x0080
#define EMIF_ASYNC_RSTROBE_3  0x0100
#define EMIF_ASYNC_RSTROBE_4  0x0180
#define EMIF_ASYNC_RSTROBE_5  0x0200
#define EMIF_ASYNC_RSTROBE_6  0x0280
#define EMIF_ASYNC_RSTROBE_7  0x0300
#define EMIF_ASYNC_RSTROBE_8  0x0380
#define EMIF_ASYNC_RSTROBE_9  0x0400
#define EMIF_ASYNC_RSTROBE_10 0x0480
#define EMIF_ASYNC_RSTROBE_11 0x0500
#define EMIF_ASYNC_RSTROBE_12 0x0580
#define EMIF_ASYNC_RSTROBE_13 0x0600
#define EMIF_ASYNC_RSTROBE_14 0x0680
#define EMIF_ASYNC_RSTROBE_15 0x0700
#define EMIF_ASYNC_RSTROBE_16 0x0780
#define EMIF_ASYNC_RSTROBE_17 0x0800
#define EMIF_ASYNC_RSTROBE_18 0x0880
#define EMIF_ASYNC_RSTROBE_19 0x0900
#define EMIF_ASYNC_RSTROBE_20 0x0980
#define EMIF_ASYNC_RSTROBE_21 0x0A00
#define EMIF_ASYNC_RSTROBE_22 0x0A80
#define EMIF_ASYNC_RSTROBE_23 0x0B00
#define EMIF_ASYNC_RSTROBE_24 0x0B80
#define EMIF_ASYNC_RSTROBE_25 0x0C00
#define EMIF_ASYNC_RSTROBE_26 0x0C80
#define EMIF_ASYNC_RSTROBE_27 0x0D00
#define EMIF_ASYNC_RSTROBE_28 0x0D80
#define EMIF_ASYNC_RSTROBE_29 0x0E00
#define EMIF_ASYNC_RSTROBE_30 0x0E80
#define EMIF_ASYNC_RSTROBE_31 0x0F00
#define EMIF_ASYNC_RSTROBE_32 0x0F80
#define EMIF_ASYNC_RSTROBE_33 0x1000
#define EMIF_ASYNC_RSTROBE_34 0x1080
#define EMIF_ASYNC_RSTROBE_35 0x1100
#define EMIF_ASYNC_RSTROBE_36 0x1180
#define EMIF_ASYNC_RSTROBE_37 0x1200
#define EMIF_ASYNC_RSTROBE_38 0x1280
#define EMIF_ASYNC_RSTROBE_39 0x1300
#define EMIF_ASYNC_RSTROBE_40 0x1380
#define EMIF_ASYNC_RSTROBE_41 0x1400
#define EMIF_ASYNC_RSTROBE_42 0x1480
#define EMIF_ASYNC_RSTROBE_43 0x1500
#define EMIF_ASYNC_RSTROBE_44 0x1580
#define EMIF_ASYNC_RSTROBE_45 0x1600
#define EMIF_ASYNC_RSTROBE_46 0x1680
#define EMIF_ASYNC_RSTROBE_47 0x1700
#define EMIF_ASYNC_RSTROBE_48 0x1780
#define EMIF_ASYNC_RSTROBE_49 0x1800
#define EMIF_ASYNC_RSTROBE_50 0x1880
#define EMIF_ASYNC_RSTROBE_51 0x1900
#define EMIF_ASYNC_RSTROBE_52 0x1980
#define EMIF_ASYNC_RSTROBE_53 0x1A00
#define EMIF_ASYNC_RSTROBE_54 0x1A80
#define EMIF_ASYNC_RSTROBE_55 0x1B00
#define EMIF_ASYNC_RSTROBE_56 0x1B80
#define EMIF_ASYNC_RSTROBE_57 0x1C00
#define EMIF_ASYNC_RSTROBE_58 0x1C80
#define EMIF_ASYNC_RSTROBE_59 0x1D00
#define EMIF_ASYNC_RSTROBE_60 0x1D80
#define EMIF_ASYNC_RSTROBE_61 0x1E00
#define EMIF_ASYNC_RSTROBE_62 0x1E80
#define EMIF_ASYNC_RSTROBE_63 0x1F00
#define EMIF_ASYNC_RSTROBE_64 0x1F80

#define EMIF_ASYNC_RSETUP_1  0x0000
#define EMIF_ASYNC_RSETUP_2  0x2000
#define EMIF_ASYNC_RSETUP_3  0x4000
#define EMIF_ASYNC_RSETUP_4  0x6000
#define EMIF_ASYNC_RSETUP_5  0x8000
#define EMIF_ASYNC_RSETUP_6  0xA000
#define EMIF_ASYNC_RSETUP_7  0xC000
#define EMIF_ASYNC_RSETUP_8  0xE000
#define EMIF_ASYNC_RSETUP_9  0x10000
#define EMIF_ASYNC_RSETUP_10 0x12000
#define EMIF_ASYNC_RSETUP_11 0x14000
#define EMIF_ASYNC_RSETUP_12 0x16000
#define EMIF_ASYNC_RSETUP_13 0x18000
#define EMIF_ASYNC_RSETUP_14 0x1A000
#define EMIF_ASYNC_RSETUP_15 0x1C000
#define EMIF_ASYNC_RSETUP_16 0x1E000

#define EMIF_ASYNC_WHOLD_1 0x00000
#define EMIF_ASYNC_WHOLD_2 0x20000
#define EMIF_ASYNC_WHOLD_3 0x40000
#define EMIF_ASYNC_WHOLD_4 0x60000
#define EMIF_ASYNC_WHOLD_5 0x80000
#define EMIF_ASYNC_WHOLD_6 0xA0000
#define EMIF_ASYNC_WHOLD_7 0xC0000
#define EMIF_ASYNC_WHOLD_8 0xE0000

#define EMIF_ASYNC_WSTROBE_1 0x0000000
#define EMIF_ASYNC_WSTROBE_2 0x0100000
#define EMIF_ASYNC_WSTROBE_3 0x0200000
#define EMIF_ASYNC_WSTROBE_4 0x0300000
#define EMIF_ASYNC_WSTROBE_5 0x0400000
#define EMIF_ASYNC_WSTROBE_6 0x0500000
#define EMIF_ASYNC_WSTROBE_7 0x0600000
#define EMIF_ASYNC_WSTROBE_8 0x0700000
#define EMIF_ASYNC_WSTROBE_9 0x0800000
#define EMIF_ASYNC_WSTROBE_10 0x0900000
#define EMIF_ASYNC_WSTROBE_11 0x0A00000
#define EMIF_ASYNC_WSTROBE_12 0x0B00000
#define EMIF_ASYNC_WSTROBE_13 0x0C00000
#define EMIF_ASYNC_WSTROBE_14 0x0D00000
#define EMIF_ASYNC_WSTROBE_15 0x0E00000
#define EMIF_ASYNC_WSTROBE_16 0x0F00000
#define EMIF_ASYNC_WSTROBE_17 0x1000000
#define EMIF_ASYNC_WSTROBE_18 0x1100000
#define EMIF_ASYNC_WSTROBE_19 0x1200000
#define EMIF_ASYNC_WSTROBE_20 0x1300000
#define EMIF_ASYNC_WSTROBE_21 0x1400000
#define EMIF_ASYNC_WSTROBE_22 0x1500000
#define EMIF_ASYNC_WSTROBE_23 0x1600000
#define EMIF_ASYNC_WSTROBE_24 0x1700000
#define EMIF_ASYNC_WSTROBE_25 0x1800000
#define EMIF_ASYNC_WSTROBE_26 0x1900000
#define EMIF_ASYNC_WSTROBE_27 0x1A00000
#define EMIF_ASYNC_WSTROBE_28 0x1B00000
#define EMIF_ASYNC_WSTROBE_29 0x1C00000
#define EMIF_ASYNC_WSTROBE_30 0x1D00000
#define EMIF_ASYNC_WSTROBE_31 0x1E00000
#define EMIF_ASYNC_WSTROBE_32 0x1F00000
#define EMIF_ASYNC_WSTROBE_33 0x2000000
#define EMIF_ASYNC_WSTROBE_34 0x2100000
#define EMIF_ASYNC_WSTROBE_35 0x2200000
#define EMIF_ASYNC_WSTROBE_36 0x2300000
#define EMIF_ASYNC_WSTROBE_37 0x2400000
#define EMIF_ASYNC_WSTROBE_38 0x2500000
#define EMIF_ASYNC_WSTROBE_39 0x2600000
#define EMIF_ASYNC_WSTROBE_40 0x2700000
#define EMIF_ASYNC_WSTROBE_41 0x2800000
#define EMIF_ASYNC_WSTROBE_42 0x2900000
#define EMIF_ASYNC_WSTROBE_43 0x2A00000
#define EMIF_ASYNC_WSTROBE_44 0x2B00000
#define EMIF_ASYNC_WSTROBE_45 0x2C00000
#define EMIF_ASYNC_WSTROBE_46 0x2D00000
#define EMIF_ASYNC_WSTROBE_47 0x2E00000
#define EMIF_ASYNC_WSTROBE_48 0x2F00000
#define EMIF_ASYNC_WSTROBE_49 0x3000000
#define EMIF_ASYNC_WSTROBE_50 0x3100000
#define EMIF_ASYNC_WSTROBE_51 0x3200000
#define EMIF_ASYNC_WSTROBE_52 0x3300000
#define EMIF_ASYNC_WSTROBE_53 0x3400000
#define EMIF_ASYNC_WSTROBE_54 0x3500000
#define EMIF_ASYNC_WSTROBE_55 0x3600000
#define EMIF_ASYNC_WSTROBE_56 0x3700000
#define EMIF_ASYNC_WSTROBE_57 0x3800000
#define EMIF_ASYNC_WSTROBE_58 0x3900000
#define EMIF_ASYNC_WSTROBE_59 0x3A00000
#define EMIF_ASYNC_WSTROBE_60 0x3B00000
#define EMIF_ASYNC_WSTROBE_61 0x3C00000
#define EMIF_ASYNC_WSTROBE_62 0x3D00000
#define EMIF_ASYNC_WSTROBE_63 0x3E00000
#define EMIF_ASYNC_WSTROBE_64 0x3F00000

#define EMIF_ASYNC_WSETUP_1 0x00000000
#define EMIF_ASYNC_WSETUP_2 0x04000000
#define EMIF_ASYNC_WSETUP_3 0x08000000
#define EMIF_ASYNC_WSETUP_4 0x0C000000
#define EMIF_ASYNC_WSETUP_5 0x10000000
#define EMIF_ASYNC_WSETUP_6 0x14000000
#define EMIF_ASYNC_WSETUP_7 0x18000000
#define EMIF_ASYNC_WSETUP_8 0x1C000000
#define EMIF_ASYNC_WSETUP_9 0x20000000
#define EMIF_ASYNC_WSETUP_10 0x24000000
#define EMIF_ASYNC_WSETUP_11 0x28000000
#define EMIF_ASYNC_WSETUP_12 0x2C000000
#define EMIF_ASYNC_WSETUP_13 0x30000000
#define EMIF_ASYNC_WSETUP_14 0x34000000
#define EMIF_ASYNC_WSETUP_15 0x38000000
#define EMIF_ASYNC_WSETUP_16 0x3C000000

#define EMIF_ASYNC_EW_DISABLE 0x00000000
#define EMIF_ASYNC_EW_ENABLE  0x40000000

#define EMIF_ASYNC_SS_DISABLE 0x00000000
#define EMIF_ASYNC_SS_ENABLE  0x80000000

//
// Values for ASYNC_WCCR Register
//
#define EMIF_ASYNC_WCCR_WP_LOW 0x00000000
#define EMIF_ASYNC_WCCR_WP_HIGH 0x01000000

//
// Read mask for the registers which has reserved bits.
//
#define ASYNC_WCCR_RDMASK              0xF0FF00FF
#define SDRAM_CR_RDMASK                0xE3FF7F7F
#define SDRAM_RCR_RDMASK               0x00071FFF
#define SDRAM_TR_RDMASK                0xFF77FF70
#define SDR_EXT_TMNG_RDMASK            0x1F
#define INT_RAW_RDMASK                 0x3F
#define INT_MASK_RDMASK                0x3F
#define IO_CTRL_RDMASK_RDMASK          0xFFFF
#define IO_STAT_RDMASK_RDMASK          0xF
#define NAND_FLASH_CTRL_RDMASK         0x3F3F
#define NAND_FLASH_STAT_RDMASK         0x30F0F
#define IODFT_TLECR_REG_RDMASK         0xFFFF
#define IODFT_TLGCR_REG_RDMASK         0x71FF
#define IODFT_TLAMR_REG_RDMASK         0x0FFFFFFF
#define IODFT_TLDCMR_REG_RDMASK        0x3fff3f07
#define  MODEL_REL_NUM_REG_RDMASK      0xFF
#define NAND_FLASH_4BIT_ECCLR_RDMASK   0x3F
#define  NAND_FLASH_4BIT_ECCx_RDMASK   0x03ff03ff
#define NAND_FLASH_ERR_ADDRx_RDMASK    0x03ff03ff
#define NAND_FLASH_ERR_VALx_RDMASK     0x03ff03ff

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif   // - end of F2837xD_EMIF_DEFINES_H

//
// End of file
//
