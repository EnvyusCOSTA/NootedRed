// Copyright © 2024-2025 ChefKiss. Licensed under the Thou Shalt Not Profit License version 1.5.
// See LICENSE for details.

#pragma once
#include <IOKit/IOTypes.h>

constexpr UInt32 MC_VM_FB_OFFSET = 0x96b;
constexpr UInt32 DB_DEBUG2 = 0x60D;
constexpr UInt32 DB_DEBUG2_BASE_IDX = 0;
constexpr UInt32 DB_DEBUG3 = 0x60E;
constexpr UInt32 DB_DEBUG3_BASE_IDX = 0;
constexpr UInt32 GB_GPU_ID = 0x640;
constexpr UInt32 GB_GPU_ID_BASE_IDX = 0;
constexpr UInt32 PA_SC_BINNER_EVENT_CNTL_3 = 0x2CF;
constexpr UInt32 PA_SC_BINNER_EVENT_CNTL_3_BASE_IDX = 0;
constexpr UInt32 PA_CL_GB_HORZ_CLIP_ADJ = 0x2FC;
constexpr UInt32 PA_CL_GB_HORZ_CLIP_ADJ_BASE_IDX = 1;
constexpr UInt32 PA_SC_LINE_STIPPLE_STATE = 0x2281;
constexpr UInt32 PA_SC_LINE_STIPPLE_STATE_BASE_IDX = 1;
constexpr UInt32 PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3 = 0x30D;
constexpr UInt32 PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3_BASE_IDX = 1;
constexpr UInt32 SPI_RESOURCE_RESERVE_CU_0 = 0x11DC;
constexpr UInt32 SPI_RESOURCE_RESERVE_CU_0_BASE_IDX = 0;
constexpr UInt32 SPI_RESOURCE_RESERVE_CU_1 = 0x11DD;
constexpr UInt32 SPI_RESOURCE_RESERVE_CU_1_BASE_IDX = 0;
constexpr UInt32 SPI_RESOURCE_RESERVE_EN_CU_0 = 0x11E6;
constexpr UInt32 SPI_RESOURCE_RESERVE_EN_CU_0_BASE_IDX = 0;
constexpr UInt32 SPI_RESOURCE_RESERVE_EN_CU_1 = 0x11E7;
constexpr UInt32 SPI_RESOURCE_RESERVE_EN_CU_1_BASE_IDX = 0;
constexpr UInt32 PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3 = 0x301;
constexpr UInt32 PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3_BASE_IDX = 1;
constexpr UInt32 TA_CNTL_AUX = 0x542;
constexpr UInt32 TA_CNTL_AUX_BASE_IDX = 0;
constexpr UInt32 VGT_GS_MAX_WAVE_ID = 0x269;
constexpr UInt32 VGT_GS_MAX_WAVE_ID_BASE_IDX = 0;
constexpr UInt32 CB_HW_CONTROL = 0x680;
constexpr UInt32 CB_HW_CONTROL_BASE_IDX = 0;
constexpr UInt32 CB_HW_CONTROL_3 = 0x683;
constexpr UInt32 CB_HW_CONTROL_3_BASE_IDX = 0;
constexpr UInt32 CPC_UTCL1_CNTL = 0x103D;
constexpr UInt32 CPC_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 CPF_UTCL1_CNTL = 0x103E;
constexpr UInt32 CPF_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 CPG_UTCL1_CNTL = 0x103C;
constexpr UInt32 CPG_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 GB_ADDR_CONFIG = 0x63E;
constexpr UInt32 GB_ADDR_CONFIG_BASE_IDX = 0;
constexpr UInt32 GB_ADDR_CONFIG_READ = 0x642;
constexpr UInt32 GB_ADDR_CONFIG_READ_BASE_IDX = 0;
constexpr UInt32 IA_UTCL1_CNTL = 0x246;
constexpr UInt32 IA_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 PA_CL_GB_HORZ_DISC_ADJ = 0x2FD;
constexpr UInt32 PA_CL_GB_HORZ_DISC_ADJ_BASE_IDX = 1;
constexpr UInt32 PA_SC_MODE_CNTL_1 = 0x293;
constexpr UInt32 PA_SC_MODE_CNTL_1_BASE_IDX = 1;
constexpr UInt32 RLC_GPM_UTCL1_CNTL_0 = 0x4CB2;
constexpr UInt32 RLC_GPM_UTCL1_CNTL_0_BASE_IDX = 1;
constexpr UInt32 RLC_GPM_UTCL1_CNTL_1 = 0x4CB3;
constexpr UInt32 RLC_GPM_UTCL1_CNTL_1_BASE_IDX = 1;
constexpr UInt32 RLC_GPM_UTCL1_CNTL_2 = 0x4CB4;
constexpr UInt32 RLC_GPM_UTCL1_CNTL_2_BASE_IDX = 1;
constexpr UInt32 RLC_PREWALKER_UTCL1_CNTL = 0x4CCD;
constexpr UInt32 RLC_PREWALKER_UTCL1_CNTL_BASE_IDX = 1;
constexpr UInt32 RLC_SPM_UTCL1_CNTL = 0x4CB5;
constexpr UInt32 RLC_SPM_UTCL1_CNTL_BASE_IDX = 1;
constexpr UInt32 RMI_UTCL1_CNTL2 = 0x78C;
constexpr UInt32 RMI_UTCL1_CNTL2_BASE_IDX = 0;
constexpr UInt32 TCP_CHAN_STEER_HI = 0xB04;
constexpr UInt32 TCP_CHAN_STEER_HI_BASE_IDX = 0;
constexpr UInt32 TCP_CHAN_STEER_LO = 0xB03;
constexpr UInt32 TCP_CHAN_STEER_LO_BASE_IDX = 0;
constexpr UInt32 TD_CNTL = 0x525;
constexpr UInt32 TD_CNTL_BASE_IDX = 0;
constexpr UInt32 VGT_CACHE_INVALIDATION = 0x231;
constexpr UInt32 VGT_CACHE_INVALIDATION_BASE_IDX = 0;
constexpr UInt32 WD_UTCL1_CNTL = 0x243;
constexpr UInt32 WD_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 CB_DCC_CONFIG = 0x688;
constexpr UInt32 CB_DCC_CONFIG_BASE_IDX = 0;
constexpr UInt32 CB_HW_CONTROL_2 = 0x682;
constexpr UInt32 CB_HW_CONTROL_2_BASE_IDX = 0;
constexpr UInt32 GCEA_SDP_BACKDOOR_DATACREDITS0 = 0x711;
constexpr UInt32 GCEA_SDP_BACKDOOR_DATACREDITS0_BASE_IDX = 0;
