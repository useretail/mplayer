#ifndef _RADEON_H
#define _RADEON_H


/* radeon PCI ids */
#define PCI_DEVICE_ID_RADEON_QD		0x5144
#define PCI_DEVICE_ID_RADEON_QE		0x5145
#define PCI_DEVICE_ID_RADEON_QF		0x5146
#define PCI_DEVICE_ID_RADEON_QG		0x5147
#define PCI_DEVICE_ID_RADEON_QY		0x5159
#define PCI_DEVICE_ID_RADEON_QZ		0x515A
#define PCI_DEVICE_ID_RADEON_LY		0x4C59
#define PCI_DEVICE_ID_RADEON_LZ		0x4C5A
#define PCI_DEVICE_ID_RADEON_LW		0x4C57
#define PCI_DEVICE_ID_R200_QL		0x514C
#define PCI_DEVICE_ID_RV200_QW		0x5157

#define RADEON_REGSIZE			0x4000


#define MM_INDEX                        0x0000  
/* MM_INDEX bit constants */
#	define MM_APER                         0x80000000
#define MM_DATA                                0x0004  
#define BUS_CNTL                               0x0030  
/* BUS_CNTL bit constants */
#	define BUS_DBL_RESYNC                  0x00000001
#	define BUS_MSTR_RESET                  0x00000002
#	define BUS_FLUSH_BUF                   0x00000004
#	define BUS_STOP_REQ_DIS                0x00000008
#	define BUS_ROTATION_DIS                0x00000010
#	define BUS_MASTER_DIS                  0x00000040
#	define BUS_ROM_WRT_EN                  0x00000080
#	define BUS_DIS_ROM                     0x00001000
#	define BUS_PCI_READ_RETRY_EN           0x00002000
#	define BUS_AGP_AD_STEPPING_EN          0x00004000
#	define BUS_PCI_WRT_RETRY_EN            0x00008000
#	define BUS_MSTR_RD_MULT                0x00100000
#	define BUS_MSTR_RD_LINE                0x00200000
#	define BUS_SUSPEND                     0x00400000
#	define LAT_16X                         0x00800000
#	define BUS_RD_DISCARD_EN               0x01000000
#	define BUS_RD_ABORT_EN                 0x02000000
#	define BUS_MSTR_WS                     0x04000000
#	define BUS_PARKING_DIS                 0x08000000
#	define BUS_MSTR_DISCONNECT_EN          0x10000000
#	define BUS_WRT_BURST                   0x20000000
#	define BUS_READ_BURST                  0x40000000
#	define BUS_RDY_READ_DLY                0x80000000
#define HI_STAT                                0x004C  
#define BUS_CNTL1                              0x0034
#	define BUS_WAIT_ON_LOCK_EN             (1 << 4)
#define I2C_CNTL_0			       0x0090
#	define I2C_DONE			       (1<<0)
#	define I2C_NACK			       (1<<1)
#	define I2C_HALT			       (1<<2)
#	define I2C_SOFT_RST		       (1<<5)
#	define I2C_DRIVE_EN		       (1<<6)
#	define I2C_DRIVE_SEL		       (1<<7)
#	define I2C_START		       (1<<8)
#	define I2C_STOP			       (1<<9)
#	define I2C_RECEIVE		       (1<<10)
#	define I2C_ABORT		       (1<<11)
#	define I2C_GO			       (1<<12)
#	define I2C_SEL			       (1<<16)
#	define I2C_EN			       (1<<17)
#define I2C_CNTL_1			       0x0094 
#define I2C_DATA			       0x0098
#define CONFIG_CNTL                            0x00E0  
/* CONFIG_CNTL bit constants */
#	define CFG_VGA_RAM_EN                  0x00000100
#define CONFIG_MEMSIZE                         0x00F8  
#define CONFIG_APER_0_BASE                     0x0100  
#define CONFIG_APER_1_BASE                     0x0104  
#define CONFIG_APER_SIZE                       0x0108  
#define CONFIG_REG_1_BASE                      0x010C  
#define CONFIG_REG_APER_SIZE                   0x0110  
#define PAD_AGPINPUT_DELAY                     0x0164  
#define PAD_CTLR_STRENGTH                      0x0168  
#define PAD_CTLR_UPDATE                        0x016C
#define AGP_CNTL                               0x0174
#	define AGP_APER_SIZE_256MB             (0x00 << 0)
#	define AGP_APER_SIZE_128MB             (0x20 << 0)
#	define AGP_APER_SIZE_64MB              (0x30 << 0)
#	define AGP_APER_SIZE_32MB              (0x38 << 0)
#	define AGP_APER_SIZE_16MB              (0x3c << 0)
#	define AGP_APER_SIZE_8MB               (0x3e << 0)
#	define AGP_APER_SIZE_4MB               (0x3f << 0)
#	define AGP_APER_SIZE_MASK              (0x3f << 0)
#define AMCGPIO_A_REG                          0x01a0
#define AMCGPIO_EN_REG                         0x01a8
#define AMCGPIO_MASK                           0x0194
#define AMCGPIO_Y_REG                          0x01a4
#define BM_STATUS                              0x0160
#define MPP_TB_CONFIG                          0x01c0 /* ? */
#define MPP_GP_CONFIG                          0x01c8 /* ? */
#define CAP0_TRIG_CNTL			       0x0950
#define CAP1_TRIG_CNTL                         0x09c0 /* ? */
#define VENDOR_ID                              0x0F00  
#define DEVICE_ID                              0x0F02  
#define COMMAND                                0x0F04  
#define STATUS                                 0x0F06  
#define REVISION_ID                            0x0F08  
#define REGPROG_INF                            0x0F09  
#define SUB_CLASS                              0x0F0A  
#define BASE_CODE                              0x0F0B  
#define CACHE_LINE                             0x0F0C  
#define LATENCY                                0x0F0D  
#define HEADER                                 0x0F0E  
#define BIST                                   0x0F0F  
#define REG_MEM_BASE                           0x0F10  
#define REG_IO_BASE                            0x0F14  
#define REG_REG_BASE                           0x0F18
#define ADAPTER_ID                             0x0F2C
#define BIOS_ROM                               0x0F30
#define CAPABILITIES_PTR                       0x0F34  
#define INTERRUPT_LINE                         0x0F3C  
#define INTERRUPT_PIN                          0x0F3D  
#define MIN_GRANT                              0x0F3E  
#define MAX_LATENCY                            0x0F3F  
#define ADAPTER_ID_W                           0x0F4C  
#define PMI_CAP_ID                             0x0F50  
#define PMI_NXT_CAP_PTR                        0x0F51  
#define PMI_PMC_REG                            0x0F52  
#define PM_STATUS                              0x0F54  
#define PMI_DATA                               0x0F57  
#define AGP_CAP_ID                             0x0F58  
#define AGP_STATUS                             0x0F5C  
#	define AGP_1X_MODE                     0x01
#	define AGP_2X_MODE                     0x02
#	define AGP_4X_MODE                     0x04
#	define AGP_MODE_MASK                   0x07
#define AGP_COMMAND                            0x0F60  
#define AIC_CTRL                               0x01D0
#define AIC_STAT                               0x01D4
#define AIC_PT_BASE                            0x01D8
#define AIC_LO_ADDR                            0x01DC  
#define AIC_HI_ADDR                            0x01E0  
#define AIC_TLB_ADDR                           0x01E4  
#define AIC_TLB_DATA                           0x01E8  
#define DAC_CNTL                               0x0058  
/* DAC_CNTL bit constants */   
#	define DAC_8BIT_EN                     0x00000100
#	define DAC_4BPP_PIX_ORDER              0x00000200
#	define DAC_CRC_EN                      0x00080000
#	define DAC_MASK_ALL		       (0xff << 24)
#	define DAC_VGA_ADR_EN		       (1 << 13)
#	define DAC_RANGE_CNTL		       (3 << 0)
#	define DAC_BLANKING		       (1 << 2)
#define DAC_CNTL2                              0x007c
/* DAC_CNTL2 bit constants */   
#	define DAC2_DAC_CLK_SEL                (1 <<  0)
#	define DAC2_DAC2_CLK_SEL               (1 <<  1)
#	define DAC2_PALETTE_ACC_CTL            (1 <<  5)
#define TV_DAC_CNTL                            0x088c
/* TV_DAC_CNTL bit constants */   
#	define TV_DAC_STD_MASK                 0x0300
#	define TV_DAC_RDACPD                   (1 <<  24)
#	define TV_DAC_GDACPD                   (1 <<  25)
#	define TV_DAC_BDACPD                   (1 <<  26)
#define CRTC_GEN_CNTL                          0x0050  
/* CRTC_GEN_CNTL bit constants */
#	define CRTC_DBL_SCAN_EN                0x00000001
#	define CRTC_INTERLACE_EN               (1 << 1)
#	define CRTC_CSYNC_EN                   (1 << 4)
#	define CRTC_CUR_EN                     0x00010000
#	define CRTC_CUR_MODE_MASK              (7 << 17)
#	define CRTC_ICON_EN                    (1 << 20)
#	define CRTC_EXT_DISP_EN      	       (1 << 24)
#	define CRTC_EN			       (1 << 25)
#	define CRTC_DISP_REQ_EN_B              (1 << 26)
#define CRTC2_GEN_CNTL                         0x03f8
/* CRTC2_GEN_CNTL bit constants */
#	define CRTC2_DBL_SCAN_EN               (1 <<  0)
#	define CRTC2_INTERLACE_EN              (1 <<  1)
#	define CRTC2_SYNC_TRISTAT              (1 <<  4)
#	define CRTC2_HSYNC_TRISTAT             (1 <<  5)
#	define CRTC2_VSYNC_TRISTAT             (1 <<  6)
#	define CRTC2_CRT2_ON                   (1 <<  7)
#	define CRTC2_ICON_EN                   (1 << 15)
#	define CRTC2_CUR_EN                    (1 << 16)
#	define CRTC2_CUR_MODE_MASK             (7 << 20)
#	define CRTC2_DISP_DIS                  (1 << 23)
#	define CRTC2_EN                        (1 << 25)
#	define CRTC2_DISP_REQ_EN_B             (1 << 26)
#	define CRTC2_HSYNC_DIS                 (1 << 28)
#	define CRTC2_VSYNC_DIS                 (1 << 29)
#define MEM_CNTL                               0x0140  
/* MEM_CNTL bit constants */
#	define MEM_CTLR_STATUS_IDLE            0x00000000
#	define MEM_CTLR_STATUS_BUSY            0x00100000
#	define MEM_SEQNCR_STATUS_IDLE          0x00000000
#	define MEM_SEQNCR_STATUS_BUSY          0x00200000
#	define MEM_ARBITER_STATUS_IDLE         0x00000000
#	define MEM_ARBITER_STATUS_BUSY         0x00400000
#	define MEM_REQ_UNLOCK                  0x00000000
#	define MEM_REQ_LOCK                    0x00800000
#define EXT_MEM_CNTL                           0x0144  
#define MC_AGP_LOCATION                        0x014C  
#define MEM_IO_CNTL_A0                         0x0178  
#define MEM_INIT_LATENCY_TIMER                 0x0154  
#define MEM_SDRAM_MODE_REG                     0x0158  
#define AGP_BASE                               0x0170  
#define MEM_IO_CNTL_A1                         0x017C  
#define MEM_IO_CNTL_B0                         0x0180
#define MEM_IO_CNTL_B1                         0x0184
#define MC_DEBUG                               0x0188
#define MC_STATUS                              0x0150  
#define MEM_IO_OE_CNTL                         0x018C  
#define MC_FB_LOCATION                         0x0148  
#define HOST_PATH_CNTL                         0x0130  
#define MEM_VGA_WP_SEL                         0x0038  
#define MEM_VGA_RP_SEL                         0x003C  
#define HDP_DEBUG                              0x0138  
#define SW_SEMAPHORE                           0x013C  
#define SURFACE_CNTL                           0x0B00  
/* SURFACE_CNTL bit constants */
#	define SURF_TRANSLATION_DIS	       (1 << 8)
#	define NONSURF_AP0_SWP_16BPP	       (1 << 20)
#	define NONSURF_AP0_SWP_32BPP	       (2 << 20)
#define SURFACE0_LOWER_BOUND                   0x0B04  
#define SURFACE1_LOWER_BOUND                   0x0B14  
#define SURFACE2_LOWER_BOUND                   0x0B24  
#define SURFACE3_LOWER_BOUND                   0x0B34  
#define SURFACE4_LOWER_BOUND                   0x0B44  
#define SURFACE5_LOWER_BOUND                   0x0B54
#define SURFACE6_LOWER_BOUND                   0x0B64
#define SURFACE7_LOWER_BOUND                   0x0B74
#define SURFACE0_UPPER_BOUND                   0x0B08  
#define SURFACE1_UPPER_BOUND                   0x0B18  
#define SURFACE2_UPPER_BOUND                   0x0B28  
#define SURFACE3_UPPER_BOUND                   0x0B38  
#define SURFACE4_UPPER_BOUND                   0x0B48  
#define SURFACE5_UPPER_BOUND                   0x0B58  
#define SURFACE6_UPPER_BOUND                   0x0B68  
#define SURFACE7_UPPER_BOUND                   0x0B78  
#define SURFACE0_INFO                          0x0B0C  
#define SURFACE1_INFO                          0x0B1C  
#define SURFACE2_INFO                          0x0B2C  
#define SURFACE3_INFO                          0x0B3C  
#define SURFACE4_INFO                          0x0B4C  
#define SURFACE5_INFO                          0x0B5C  
#define SURFACE6_INFO                          0x0B6C
#define SURFACE7_INFO                          0x0B7C
#define SURFACE_ACCESS_FLAGS                   0x0BF8
#define SURFACE_ACCESS_CLR                     0x0BFC  
#define GEN_INT_CNTL                           0x0040  
#define GEN_INT_STATUS                         0x0044  
#	define VSYNC_INT_AK                    (1 <<  2)
#	define VSYNC_INT                       (1 <<  2)
#define CRTC_EXT_CNTL                          0x0054
/* CRTC_EXT_CNTL bit constants */
#	define CRTC_VGA_XOVERSCAN              (1 <<  0)
#	define VGA_ATI_LINEAR                  0x00000008
#	define VGA_128KAP_PAGING               0x00000010
#	define XCRT_CNT_EN		       (1 << 6)
#	define CRTC_HSYNC_DIS		       (1 << 8)
#	define CRTC_VSYNC_DIS		       (1 << 9)
#	define CRTC_DISPLAY_DIS		       (1 << 10)
#	define CRTC_SYNC_TRISTAT               (1 << 11)
#	define CRTC_CRT_ON                     (1 << 15)
#define CRTC_EXT_CNTL_DPMS_BYTE                0x0055
#	define CRTC_HSYNC_DIS_BYTE             (1 <<  0)
#	define CRTC_VSYNC_DIS_BYTE             (1 <<  1)
#	define CRTC_DISPLAY_DIS_BYTE           (1 <<  2)
#define RB3D_CNTL			       0x1C3C  
#define WAIT_UNTIL                             0x1720  
#define ISYNC_CNTL                             0x1724  
#define RBBM_GUICNTL                           0x172C  
#define RBBM_STATUS                            0x0E40  
#	define RBBM_FIFOCNT_MASK               0x007f
#	define RBBM_ACTIVE                     (1 << 31)
#define RBBM_STATUS_alt_1                      0x1740  
#define RBBM_CNTL                              0x00EC  
#define RBBM_CNTL_alt_1                        0x0E44  
#define RBBM_SOFT_RESET                        0x00F0  
/* RBBM_SOFT_RESET bit constants */
#	define SOFT_RESET_CP          	       (1 <<  0)
#	define SOFT_RESET_HI           	       (1 <<  1)
#	define SOFT_RESET_SE           	       (1 <<  2)
#	define SOFT_RESET_RE           	       (1 <<  3)
#	define SOFT_RESET_PP           	       (1 <<  4)
#	define SOFT_RESET_E2           	       (1 <<  5)
#	define SOFT_RESET_RB           	       (1 <<  6)
#	define SOFT_RESET_HDP          	       (1 <<  7)
#define RBBM_SOFT_RESET_alt_1                  0x0E48  
#define NQWAIT_UNTIL                           0x0E50  
#define RBBM_DEBUG                             0x0E6C
#define RBBM_CMDFIFO_ADDR                      0x0E70
#define RBBM_CMDFIFO_DATAL                     0x0E74
#define RBBM_CMDFIFO_DATAH                     0x0E78  
#define RBBM_CMDFIFO_STAT                      0x0E7C  
#define CRTC_STATUS                            0x005C  
/* CRTC_STATUS bit constants */
#	define CRTC_VBLANK                     0x00000001
#	define CRTC_VBLANK_SAVE               (1 <<  1)
#define GPIO_VGA_DDC                           0x0060  
#define GPIO_DVI_DDC                           0x0064  
#define GPIO_MONID                             0x0068  
#define PALETTE_INDEX                          0x00B0  
#define PALETTE_DATA                           0x00B4  
#define PALETTE_30_DATA                        0x00B8  
#define CRTC_H_TOTAL_DISP                      0x0200  
#	define CRTC_H_TOTAL                    (0x03ff << 0)
#	define CRTC_H_TOTAL_SHIFT              0
#	define CRTC_H_DISP                     (0x01ff << 16)
#	define CRTC_H_DISP_SHIFT               16
#define CRTC2_H_TOTAL_DISP                     0x0300
#	define CRTC2_H_TOTAL                   (0x03ff << 0)
#	define CRTC2_H_TOTAL_SHIFT             0
#	define CRTC2_H_DISP                    (0x01ff << 16)
#	define CRTC2_H_DISP_SHIFT              16
#define CRTC_H_SYNC_STRT_WID                   0x0204  
#	define CRTC_H_SYNC_STRT_PIX            (0x07  <<  0)
#	define CRTC_H_SYNC_STRT_CHAR           (0x3ff <<  3)
#	define CRTC_H_SYNC_STRT_CHAR_SHIFT     3
#	define CRTC_H_SYNC_WID                 (0x3f  << 16)
#	define CRTC_H_SYNC_WID_SHIFT           16
#	define CRTC_H_SYNC_POL                 (1     << 23)
#define CRTC2_H_SYNC_STRT_WID                  0x0304
#	define CRTC2_H_SYNC_STRT_PIX           (0x07  <<  0)
#	define CRTC2_H_SYNC_STRT_CHAR          (0x3ff <<  3)
#	define CRTC2_H_SYNC_STRT_CHAR_SHIFT    3
#	define CRTC2_H_SYNC_WID                (0x3f  << 16)
#	define CRTC2_H_SYNC_WID_SHIFT          16
#	define CRTC2_H_SYNC_POL                (1     << 23)
#define CRTC_V_TOTAL_DISP                      0x0208  
#	define CRTC_V_TOTAL                    (0x07ff << 0)
#	define CRTC_V_TOTAL_SHIFT              0
#	define CRTC_V_DISP                     (0x07ff << 16)
#	define CRTC_V_DISP_SHIFT               16
#define CRTC2_V_TOTAL_DISP                     0x0308
#	define CRTC2_V_TOTAL                   (0x07ff << 0)
#	define CRTC2_V_TOTAL_SHIFT             0
#	define CRTC2_V_DISP                    (0x07ff << 16)
#	define CRTC2_V_DISP_SHIFT              16
#define CRTC_V_SYNC_STRT_WID                   0x020C  
#	define CRTC_V_SYNC_STRT                (0x7ff <<  0)
#	define CRTC_V_SYNC_STRT_SHIFT          0
#	define CRTC_V_SYNC_WID                 (0x1f  << 16)
#	define CRTC_V_SYNC_WID_SHIFT           16
#	define CRTC_V_SYNC_POL                 (1     << 23)
#define CRTC2_V_SYNC_STRT_WID                  0x030C
#	define CRTC2_V_SYNC_STRT               (0x7ff <<  0)
#	define CRTC2_V_SYNC_STRT_SHIFT         0
#	define CRTC2_V_SYNC_WID                (0x1f  << 16)
#	define CRTC2_V_SYNC_WID_SHIFT          16
#	define CRTC2_V_SYNC_POL                (1     << 23)
#define CRTC_VLINE_CRNT_VLINE                  0x0210  
#	define CRTC_CRNT_VLINE_MASK            (0x7ff << 16)
#define CRTC2_VLINE_CRNT_VLINE                 0x0310
#define CRTC_CRNT_FRAME                        0x0214
#define CRTC2_CRNT_FRAME                       0x0314
#define CRTC_GUI_TRIG_VLINE                    0x0218
#define CRTC2_GUI_TRIG_VLINE                   0x0318
#define CRTC_DEBUG                             0x021C
#define CRTC2_DEBUG                            0x031C
#define CRTC_OFFSET_RIGHT                      0x0220  
#define CRTC_OFFSET                            0x0224  
#define CRTC2_OFFSET                           0x0324
#define CRTC_OFFSET_CNTL                       0x0228  
#	define CRTC_TILE_EN                    (1 << 15)
#define CRTC2_OFFSET_CNTL                      0x0328
#	define CRTC2_TILE_EN                   (1 << 15)
#define CRTC_PITCH                             0x022C  
#define CRTC2_PITCH                            0x032C
#define TMDS_CRC                               0x02a0
#define OVR_CLR                                0x0230  
#define OVR_WID_LEFT_RIGHT                     0x0234  
#define OVR_WID_TOP_BOTTOM                     0x0238  
#define DISPLAY_BASE_ADDR                      0x023C  
#define SNAPSHOT_VH_COUNTS                     0x0240  
#define SNAPSHOT_F_COUNT                       0x0244  
#define N_VIF_COUNT                            0x0248  
#define SNAPSHOT_VIF_COUNT                     0x024C  
#define FP_CRTC_H_TOTAL_DISP                   0x0250  
#define FP_CRTC2_H_TOTAL_DISP                  0x0350
#define FP_CRTC_V_TOTAL_DISP                   0x0254  
#define FP_CRTC2_V_TOTAL_DISP                  0x0354
#	define FP_CRTC_H_TOTAL_MASK            0x000003ff
#	define FP_CRTC_H_DISP_MASK             0x01ff0000
#	define FP_CRTC_V_TOTAL_MASK            0x00000fff
#	define FP_CRTC_V_DISP_MASK             0x0fff0000
#	define FP_H_SYNC_STRT_CHAR_MASK        0x00001ff8
#	define FP_H_SYNC_WID_MASK              0x003f0000
#	define FP_V_SYNC_STRT_MASK             0x00000fff
#	define FP_V_SYNC_WID_MASK              0x001f0000
#	define FP_CRTC_H_TOTAL_SHIFT           0x00000000
#	define FP_CRTC_H_DISP_SHIFT            0x00000010
#	define FP_CRTC_V_TOTAL_SHIFT           0x00000000
#	define FP_CRTC_V_DISP_SHIFT            0x00000010
#	define FP_H_SYNC_STRT_CHAR_SHIFT       0x00000003
#	define FP_H_SYNC_WID_SHIFT             0x00000010
#	define FP_V_SYNC_STRT_SHIFT            0x00000000
#	define FP_V_SYNC_WID_SHIFT             0x00000010
#define CRT_CRTC_H_SYNC_STRT_WID               0x0258
#define CRT_CRTC_V_SYNC_STRT_WID               0x025C
#define CUR_OFFSET                             0x0260
#define CUR_HORZ_VERT_POSN                     0x0264  
#define CUR_HORZ_VERT_OFF                      0x0268  
/* CUR_OFFSET, CUR_HORZ_VERT_POSN, CUR_HORZ_VERT_OFF bit constants */
#	define CUR_LOCK                        0x80000000
#define CUR_CLR0                               0x026C  
#define CUR_CLR1                               0x0270  
#define CUR2_OFFSET                            0x0360
#define CUR2_HORZ_VERT_POSN                    0x0364
#define CUR2_HORZ_VERT_OFF                     0x0368
#	define CUR2_LOCK                       (1 << 31)
#define CUR2_CLR0                              0x036c
#define CUR2_CLR1                              0x0370
#define FP_HORZ_VERT_ACTIVE                    0x0278  
#define CRTC_MORE_CNTL                         0x027C  
#define DAC_EXT_CNTL                           0x0280  
#define FP_GEN_CNTL                            0x0284  
/* FP_GEN_CNTL bit constants */
#	define FP_FPON                         (1 <<  0)
#	define FP_TMDS_EN                      (1 <<  2)
#	define FP_EN_TMDS                      (1 <<  7)
#	define FP_DETECT_SENSE                 (1 <<  8)
#	define FP_SEL_CRTC2                    (1 << 13)
#	define FP_CRTC_DONT_SHADOW_HPAR        (1 << 15)
#	define FP_CRTC_DONT_SHADOW_VPAR        (1 << 16)
#	define FP_CRTC_DONT_SHADOW_HEND        (1 << 17)
#	define FP_CRTC_USE_SHADOW_VEND         (1 << 18)
#	define FP_RMX_HVSYNC_CONTROL_EN        (1 << 20)
#	define FP_DFP_SYNC_SEL                 (1 << 21)
#	define FP_CRTC_LOCK_8DOT               (1 << 22)
#	define FP_CRT_SYNC_SEL                 (1 << 23)
#	define FP_USE_SHADOW_EN                (1 << 24)
#	define FP_CRT_SYNC_ALT                 (1 << 26)
#define FP2_GEN_CNTL                           0x0288
/* FP2_GEN_CNTL bit constants */
#	define FP2_FPON                        (1 <<  0)
#	define FP2_TMDS_EN                     (1 <<  2)
#	define FP2_EN_TMDS                     (1 <<  7)
#	define FP2_DETECT_SENSE                (1 <<  8)
#	define FP2_SEL_CRTC2                   (1 << 13)
#	define FP2_FP_POL                      (1 << 16)
#	define FP2_LP_POL                      (1 << 17)
#	define FP2_SCK_POL                     (1 << 18)
#	define FP2_LCD_CNTL_MASK               (7 << 19)
#	define FP2_PAD_FLOP_EN                 (1 << 22)
#	define FP2_CRC_EN                      (1 << 23)
#	define FP2_CRC_READ_EN                 (1 << 24)
#define FP_HORZ_STRETCH                        0x028C
#define FP_HORZ2_STRETCH                       0x038C
#	define HORZ_STRETCH_RATIO_MASK         0xffff
#	define HORZ_STRETCH_RATIO_MAX          4096
#	define HORZ_PANEL_SIZE                 (0x1ff   << 16)
#	define HORZ_PANEL_SHIFT                16
#	define HORZ_STRETCH_PIXREP             (0      << 25)
#	define HORZ_STRETCH_BLEND              (1      << 26)
#	define HORZ_STRETCH_ENABLE             (1      << 25)
#	define HORZ_AUTO_RATIO                 (1      << 27)
#	define HORZ_FP_LOOP_STRETCH            (0x7    << 28)
#	define HORZ_AUTO_RATIO_INC             (1      << 31)
#define FP_VERT_STRETCH                        0x0290
#define FP_VERT2_STRETCH                       0x0390
#	define VERT_PANEL_SIZE                 (0xfff << 12)
#	define VERT_PANEL_SHIFT                12
#	define VERT_STRETCH_RATIO_MASK         0xfff
#	define VERT_STRETCH_RATIO_SHIFT        0
#	define VERT_STRETCH_RATIO_MAX          4096
#	define VERT_STRETCH_ENABLE             (1     << 25)
#	define VERT_STRETCH_LINEREP            (0     << 26)
#	define VERT_STRETCH_BLEND              (1     << 26)
#	define VERT_AUTO_RATIO_EN              (1     << 27)
#	define VERT_STRETCH_RESERVED           0xf1000000
#define FP_H_SYNC_STRT_WID                     0x02C4
#define FP_H2_SYNC_STRT_WID                    0x03C4
#define FP_V_SYNC_STRT_WID                     0x02C8
#define FP_V2_SYNC_STRT_WID                    0x03C8
#define LVDS_GEN_CNTL                          0x02d0
#	define LVDS_ON                         (1   <<  0)
#	define LVDS_DISPLAY_DIS                (1   <<  1)
#	define LVDS_PANEL_TYPE                 (1   <<  2)
#	define LVDS_PANEL_FORMAT               (1   <<  3)
#	define LVDS_EN                         (1   <<  7)
#	define LVDS_DIGON                      (1   << 18)
#	define LVDS_BLON                       (1   << 19)
#	define LVDS_SEL_CRTC2                  (1   << 23)
#define LVDS_PLL_CNTL                          0x02d4
#	define HSYNC_DELAY_SHIFT               28
#	define HSYNC_DELAY_MASK                (0xf << 28)
#define AUX_WINDOW_HORZ_CNTL                   0x02D8  
#define AUX_WINDOW_VERT_CNTL                   0x02DC  
#define DDA_CONFIG			       0x02e0
#define DDA_ON_OFF			       0x02e4

#define GRPH_BUFFER_CNTL                       0x02F0
#define VGA_BUFFER_CNTL                        0x02F4
/* first overlay unit (there is only one) */
#define OV0_Y_X_START                          0x0400
#define OV0_Y_X_END                            0x0404  
#define OV0_PIPELINE_CNTL                      0x0408  
#define OV0_EXCLUSIVE_HORZ                     0x0408
#	define EXCL_HORZ_START_MASK            0x000000ff
#	define EXCL_HORZ_END_MASK              0x0000ff00
#	define EXCL_HORZ_BACK_PORCH_MASK       0x00ff0000
#	define EXCL_HORZ_EXCLUSIVE_EN          0x80000000
#define OV0_EXCLUSIVE_VERT                     0x040C
#	define EXCL_VERT_START_MASK            0x000003ff
#	define EXCL_VERT_END_MASK              0x03ff0000
#define OV0_REG_LOAD_CNTL                      0x0410  
#	define REG_LD_CTL_LOCK                 0x00000001L
#	define REG_LD_CTL_VBLANK_DURING_LOCK   0x00000002L
#	define REG_LD_CTL_STALL_GUI_UNTIL_FLIP 0x00000004L
#	define REG_LD_CTL_LOCK_READBACK        0x00000008L
/*#define OV0_REG_SLICE_CNTL                     0xXXXX*/
#define OV0_SCALE_CNTL                         0x0420  
#	define SCALER_PIX_EXPAND               0x00000001L
#	define SCALER_Y2R_TEMP                 0x00000002L
#ifdef RAGE128
#	define SCALER_HORZ_PICK_NEAREST        0x00000003L
#	define SCALER_VERT_PICK_NEAREST        0x00000004L
#else
#	define SCALER_HORZ_PICK_NEAREST        0x00000004L
#	define SCALER_VERT_PICK_NEAREST        0x00000008L
#endif
#	define SCALER_SIGNED_UV                0x00000010L
#	define SCALER_GAMMA_SEL_MASK           0x00000060L
#	define SCALER_GAMMA_SEL_BRIGHT         0x00000000L
#	define SCALER_GAMMA_SEL_G22            0x00000020L
#	define SCALER_GAMMA_SEL_G18            0x00000040L
#	define SCALER_GAMMA_SEL_G14            0x00000060L
#	define SCALER_COMCORE_SHIFT_UP_ONE     0x00000080L
#	define SCALER_SURFAC_FORMAT            0x00000f00L
#	define SCALER_SOURCE_UNK0	       0x00000000L /* 2 bpp ??? */
#	define SCALER_SOURCE_UNK1	       0x00000100L /* 4 bpp ??? */
#	define SCALER_SOURCE_UNK2	       0x00000200L /* 8 bpp ??? */
#	define SCALER_SOURCE_15BPP             0x00000300L
#	define SCALER_SOURCE_16BPP             0x00000400L
#	define SCALER_SOURCE_24BPP             0x00000500L
#	define SCALER_SOURCE_32BPP             0x00000600L
#	define SCALER_SOURCE_UNK3	       0x00000700L /* 8BPP_RGB332 ??? */
#	define SCALER_SOURCE_UNK4	       0x00000800L /* 8BPP_Y8 ??? */
#	define SCALER_SOURCE_YUV9              0x00000900L /* 8BPP_RGB8 */
#	define SCALER_SOURCE_YUV12             0x00000A00L
#	define SCALER_SOURCE_VYUY422           0x00000B00L
#	define SCALER_SOURCE_YVYU422           0x00000C00L
#	define SCALER_SOURCE_UNK5	       0x00000D00L /* ??? */
#	define SCALER_SOURCE_UNK6	       0x00000E00L /* 32BPP_AYUV444 */
#	define SCALER_SOURCE_UNK7	       0x00000F00L /* 16BPP_ARGB4444 */
#	define SCALER_ADAPTIVE_DEINT           0x00001000L
#	define SCALER_UNKNOWN_FLAG0            0x00002000L /* ??? */
#	define SCALER_UNKNOWN_FLAG1            0x00004000L /* ??? */
#	define SCALER_SMART_SWITCH             0x00008000L
#ifdef RAGE128
#	define SCALER_BURST_PER_PLANE          0x00ff0000L
#else
#	define SCALER_BURST_PER_PLANE          0x007f0000L
#endif
#	define SCALER_DOUBLE_BUFFER            0x01000000L
#	define SCALER_UNKNOWN_FLAG3            0x02000000L /* ??? */
#	define SCALER_UNKNOWN_FLAG4            0x04000000L /* ??? */
#	define SCALER_DIS_LIMIT                0x08000000L
#	define SCALER_PRG_LOAD_START           0x10000000L
#	define SCALER_INT_EMU                  0x20000000L
#	define SCALER_ENABLE                   0x40000000L
#	define SCALER_SOFT_RESET               0x80000000L
#define OV0_V_INC                              0x0424  
#define OV0_P1_V_ACCUM_INIT                    0x0428  
#	define OV0_P1_MAX_LN_IN_PER_LN_OUT     0x00000003L
#	define OV0_P1_V_ACCUM_INIT_MASK        0x01ff8000L
#define OV0_P23_V_ACCUM_INIT                   0x042C  
#	define OV0_P23_MAX_LN_IN_PER_LN_OUT     0x00000003L
#	define OV0_P23_V_ACCUM_INIT_MASK        0x01ff8000L
#define OV0_P1_BLANK_LINES_AT_TOP              0x0430  
#	define P1_BLNK_LN_AT_TOP_M1_MASK       0x00000fffL
#	define P1_ACTIVE_LINES_M1              0x0fff0000L
#define OV0_P23_BLANK_LINES_AT_TOP             0x0434  
#	define P23_BLNK_LN_AT_TOP_M1_MASK      0x000007ffL
#	define P23_ACTIVE_LINES_M1             0x07ff0000L
#define OV0_BASE_ADDR                          0x043C  
#define OV0_VID_BUF0_BASE_ADRS                 0x0440  
#	define VIF_BUF0_PITCH_SEL              0x00000001L
#	define VIF_BUF0_TILE_ADRS              0x00000002L
#	define VIF_BUF0_BASE_ADRS_MASK         0x03fffff0L
#	define VIF_BUF0_1ST_LINE_LSBS_MASK     0x48000000L
#define OV0_VID_BUF1_BASE_ADRS                 0x0444  
#	define VIF_BUF1_PITCH_SEL              0x00000001L
#	define VIF_BUF1_TILE_ADRS              0x00000002L
#	define VIF_BUF1_BASE_ADRS_MASK         0x03fffff0L
#	define VIF_BUF1_1ST_LINE_LSBS_MASK     0x48000000L
#define OV0_VID_BUF2_BASE_ADRS                 0x0448  
#	define VIF_BUF2_PITCH_SEL              0x00000001L
#	define VIF_BUF2_TILE_ADRS              0x00000002L
#	define VIF_BUF2_BASE_ADRS_MASK         0x03fffff0L
#	define VIF_BUF2_1ST_LINE_LSBS_MASK     0x48000000L
#define OV0_VID_BUF3_BASE_ADRS                 0x044C  
#	define VIF_BUF3_PITCH_SEL              0x00000001L
#	define VIF_BUF3_TILE_ADRS              0x00000002L
#	define VIF_BUF3_BASE_ADRS_MASK         0x03fffff0L
#	define VIF_BUF3_1ST_LINE_LSBS_MASK     0x48000000L
#define OV0_VID_BUF4_BASE_ADRS                 0x0450
#	define VIF_BUF4_PITCH_SEL              0x00000001L
#	define VIF_BUF4_TILE_ADRS              0x00000002L
#	define VIF_BUF4_BASE_ADRS_MASK         0x03fffff0L
#	define VIF_BUF4_1ST_LINE_LSBS_MASK     0x48000000L
#define OV0_VID_BUF5_BASE_ADRS                 0x0454
#	define VIF_BUF5_PITCH_SEL              0x00000001L
#	define VIF_BUF5_TILE_ADRS              0x00000002L
#	define VIF_BUF5_BASE_ADRS_MASK         0x03fffff0L
#	define VIF_BUF5_1ST_LINE_LSBS_MASK     0x48000000L
#define OV0_VID_BUF_PITCH0_VALUE               0x0460
#define OV0_VID_BUF_PITCH1_VALUE               0x0464  
#define OV0_AUTO_FLIP_CNTL                     0x0470  
#	define OV0_AUTO_FLIP_CNTL_SOFT_BUF_NUM        0x00000007
#	define OV0_AUTO_FLIP_CNTL_SOFT_REPEAT_FIELD   0x00000008
#	define OV0_AUTO_FLIP_CNTL_SOFT_BUF_ODD        0x00000010
#	define OV0_AUTO_FLIP_CNTL_IGNORE_REPEAT_FIELD 0x00000020
#	define OV0_AUTO_FLIP_CNTL_SOFT_EOF_TOGGLE     0x00000040
#	define OV0_AUTO_FLIP_CNTL_VID_PORT_SELECT     0x00000300
#	define OV0_AUTO_FLIP_CNTL_P1_FIRST_LINE_EVEN  0x00010000
#	define OV0_AUTO_FLIP_CNTL_SHIFT_EVEN_DOWN     0x00040000
#	define OV0_AUTO_FLIP_CNTL_SHIFT_ODD_DOWN      0x00080000
#	define OV0_AUTO_FLIP_CNTL_FIELD_POL_SOURCE    0x00800000
#define OV0_DEINTERLACE_PATTERN                0x0474  
#define OV0_SUBMIT_HISTORY                     0x0478  
#define OV0_H_INC                              0x0480  
#define OV0_STEP_BY                            0x0484  
#define OV0_P1_H_ACCUM_INIT                    0x0488  
#define OV0_P23_H_ACCUM_INIT                   0x048C  
#define OV0_P1_X_START_END                     0x0494  
#define OV0_P2_X_START_END                     0x0498  
#define OV0_P3_X_START_END                     0x049C  
#define OV0_FILTER_CNTL                        0x04A0  
#define OV0_FOUR_TAP_COEF_0                    0x04B0  
#define OV0_FOUR_TAP_COEF_1                    0x04B4  
#define OV0_FOUR_TAP_COEF_2                    0x04B8
#define OV0_FOUR_TAP_COEF_3                    0x04BC
#define OV0_FOUR_TAP_COEF_4                    0x04C0
#define OV0_FLAG_CNTL                          0x04DC  
#define OV0_COLOUR_CNTL                        0x04E0
#define OV0_VID_KEY_CLR                        0x04E4  
#define OV0_VID_KEY_MSK                        0x04E8  
#define OV0_GRAPHICS_KEY_CLR                   0x04EC
#define OV0_GRAPHICS_KEY_MSK                   0x04F0
#define OV0_KEY_CNTL                           0x04F4  
#ifdef RAGE128
#	define VIDEO_KEY_FN_MASK               0x00000007L
#else
#	define VIDEO_KEY_FN_MASK               0x00000003L
#endif
#	define VIDEO_KEY_FN_FALSE              0x00000000L
#	define VIDEO_KEY_FN_TRUE               0x00000001L
#ifdef RAGE128
#	define VIDEO_KEY_FN_EQ                 0x00000004L
#	define VIDEO_KEY_FN_NE                 0x00000005L
#else
#	define VIDEO_KEY_FN_EQ                 0x00000002L
#	define VIDEO_KEY_FN_NE                 0x00000003L
#endif
#ifdef RAGE128
#	define GRAPHIC_KEY_FN_MASK             0x00000070L
#else
#	define GRAPHIC_KEY_FN_MASK             0x00000030L
#endif
#	define GRAPHIC_KEY_FN_FALSE            0x00000000L
#	define GRAPHIC_KEY_FN_TRUE             0x00000010L
#ifdef RAGE128
#	define GRAPHIC_KEY_FN_EQ               0x00000040L
#	define GRAPHIC_KEY_FN_NE               0x00000050L
#else
#	define GRAPHIC_KEY_FN_EQ               0x00000020L
#	define GRAPHIC_KEY_FN_NE               0x00000030L
#endif
#	define CMP_MIX_MASK                    0x00000100L
#	define CMP_MIX_OR                      0x00000000L
#	define CMP_MIX_AND                     0x00000100L
#define OV0_TEST                               0x04F8  
#define SUBPIC_CNTL                            0x0540  
#define SUBPIC_DEFCOLCON                       0x0544  
#define SUBPIC_Y_X_START                       0x054C  
#define SUBPIC_Y_X_END                         0x0550  
#define SUBPIC_V_INC                           0x0554  
#define SUBPIC_H_INC                           0x0558  
#define SUBPIC_BUF0_OFFSET                     0x055C
#define SUBPIC_BUF1_OFFSET                     0x0560
#define SUBPIC_LC0_OFFSET                      0x0564
#define SUBPIC_LC1_OFFSET                      0x0568  
#define SUBPIC_PITCH                           0x056C  
#define SUBPIC_BTN_HLI_COLCON                  0x0570  
#define SUBPIC_BTN_HLI_Y_X_START               0x0574  
#define SUBPIC_BTN_HLI_Y_X_END                 0x0578  
#define SUBPIC_PALETTE_INDEX                   0x057C  
#define SUBPIC_PALETTE_DATA                    0x0580  
#define SUBPIC_H_ACCUM_INIT                    0x0584  
#define SUBPIC_V_ACCUM_INIT                    0x0588  
#define DISP_MISC_CNTL                         0x0D00  
#	define SOFT_RESET_GRPH_PP              (1 << 0)
#define DAC_MACRO_CNTL                         0x0D04  
#define DISP_PWR_MAN                           0x0D08  
#define DISP_TEST_DEBUG_CNTL                   0x0D10  
#define DISP_HW_DEBUG                          0x0D14  
#define DAC_CRC_SIG1                           0x0D18
#define DAC_CRC_SIG2                           0x0D1C
#define OV0_LIN_TRANS_A                        0x0D20
#define OV0_LIN_TRANS_B                        0x0D24  
#define OV0_LIN_TRANS_C                        0x0D28  
#define OV0_LIN_TRANS_D                        0x0D2C  
#define OV0_LIN_TRANS_E                        0x0D30  
#define OV0_LIN_TRANS_F                        0x0D34  
#define OV0_GAMMA_0_F                          0x0D40  
#define OV0_GAMMA_10_1F                        0x0D44  
#define OV0_GAMMA_20_3F                        0x0D48  
#define OV0_GAMMA_40_7F                        0x0D4C  
#define OV0_GAMMA_380_3BF                      0x0D50  
#define OV0_GAMMA_3C0_3FF                      0x0D54  
#define DISP_MERGE_CNTL                        0x0D60  
#define DISP_OUTPUT_CNTL                       0x0D64  
#	define DISP_DAC_SOURCE_MASK            0x03
#	define DISP_DAC_SOURCE_CRTC2           0x01
#define DISP_LIN_TRANS_GRPH_A                  0x0D80  
#define DISP_LIN_TRANS_GRPH_B                  0x0D84
#define DISP_LIN_TRANS_GRPH_C                  0x0D88
#define DISP_LIN_TRANS_GRPH_D                  0x0D8C
#define DISP_LIN_TRANS_GRPH_E                  0x0D90  
#define DISP_LIN_TRANS_GRPH_F                  0x0D94  
#define DISP_LIN_TRANS_VID_A                   0x0D98  
#define DISP_LIN_TRANS_VID_B                   0x0D9C  
#define DISP_LIN_TRANS_VID_C                   0x0DA0  
#define DISP_LIN_TRANS_VID_D                   0x0DA4  
#define DISP_LIN_TRANS_VID_E                   0x0DA8  
#define DISP_LIN_TRANS_VID_F                   0x0DAC  
#define RMX_HORZ_FILTER_0TAP_COEF              0x0DB0  
#define RMX_HORZ_FILTER_1TAP_COEF              0x0DB4  
#define RMX_HORZ_FILTER_2TAP_COEF              0x0DB8  
#define RMX_HORZ_PHASE                         0x0DBC  
#define DAC_EMBEDDED_SYNC_CNTL                 0x0DC0  
#define DAC_BROAD_PULSE                        0x0DC4  
#define DAC_SKEW_CLKS                          0x0DC8
#define DAC_INCR                               0x0DCC
#define DAC_NEG_SYNC_LEVEL                     0x0DD0
#define DAC_POS_SYNC_LEVEL                     0x0DD4  
#define DAC_BLANK_LEVEL                        0x0DD8  
#define CLOCK_CNTL_INDEX                       0x0008  
/* CLOCK_CNTL_INDEX bit constants */
#	define PLL_WR_EN                       0x00000080
#	define PLL_DIV_SEL                     (3 << 8)
#	define PLL2_DIV_SEL_MASK               ~(3 << 8)
#define CLOCK_CNTL_DATA                        0x000C  
#define CP_RB_CNTL                             0x0704  
#define CP_RB_BASE                             0x0700  
#define CP_RB_RPTR_ADDR                        0x070C  
#define CP_RB_RPTR                             0x0710  
#define CP_RB_WPTR                             0x0714  
#define CP_RB_WPTR_DELAY                       0x0718  
#define CP_IB_BASE                             0x0738  
#define CP_IB_BUFSZ                            0x073C  
#define SCRATCH_REG0                           0x15E0  
#define GUI_SCRATCH_REG0                       0x15E0  
#define SCRATCH_REG1                           0x15E4  
#define GUI_SCRATCH_REG1                       0x15E4  
#define SCRATCH_REG2                           0x15E8
#define GUI_SCRATCH_REG2                       0x15E8
#define SCRATCH_REG3                           0x15EC
#define GUI_SCRATCH_REG3                       0x15EC  
#define SCRATCH_REG4                           0x15F0  
#define GUI_SCRATCH_REG4                       0x15F0  
#define SCRATCH_REG5                           0x15F4  
#define GUI_SCRATCH_REG5                       0x15F4  
#define SCRATCH_UMSK                           0x0770  
#define SCRATCH_ADDR                           0x0774  
#define DP_BRUSH_FRGD_CLR                      0x147C  
#define DP_BRUSH_BKGD_CLR                      0x1478
#define DST_LINE_START                         0x1600
#define DST_LINE_END                           0x1604  
#define SRC_OFFSET                             0x15AC  
#define SRC_PITCH                              0x15B0
#define SRC_TILE                               0x1704
#define SRC_PITCH_OFFSET                       0x1428
#define SRC_X                                  0x1414  
#define SRC_Y                                  0x1418  
#define SRC_X_Y                                0x1590  
#define SRC_Y_X                                0x1434  
#define DST_Y_X				       0x1438
#define DST_WIDTH_HEIGHT		       0x1598
#define DST_HEIGHT_WIDTH		       0x143c
#define SRC_CLUT_ADDRESS                       0x1780  
#define SRC_CLUT_DATA                          0x1784  
#define SRC_CLUT_DATA_RD                       0x1788  
#define HOST_DATA0                             0x17C0  
#define HOST_DATA1                             0x17C4  
#define HOST_DATA2                             0x17C8  
#define HOST_DATA3                             0x17CC  
#define HOST_DATA4                             0x17D0  
#define HOST_DATA5                             0x17D4  
#define HOST_DATA6                             0x17D8  
#define HOST_DATA7                             0x17DC
#define HOST_DATA_LAST                         0x17E0
#define DP_SRC_ENDIAN                          0x15D4
#define DP_SRC_FRGD_CLR                        0x15D8  
#define DP_SRC_BKGD_CLR                        0x15DC  
#define DP_WRITE_MASK                          0x16cc
#define SC_LEFT                                0x1640  
#define SC_RIGHT                               0x1644  
#define SC_TOP                                 0x1648  
#define SC_BOTTOM                              0x164C  
#define SRC_SC_RIGHT                           0x1654  
#define SRC_SC_BOTTOM                          0x165C  
#define DP_CNTL                                0x16C0  
/* DP_CNTL bit constants */
#	define DST_X_RIGHT_TO_LEFT             0x00000000
#	define DST_X_LEFT_TO_RIGHT             0x00000001
#	define DST_Y_BOTTOM_TO_TOP             0x00000000
#	define DST_Y_TOP_TO_BOTTOM             0x00000002
#	define DST_X_MAJOR                     0x00000000
#	define DST_Y_MAJOR                     0x00000004
#	define DST_X_TILE                      0x00000008
#	define DST_Y_TILE                      0x00000010
#	define DST_LAST_PEL                    0x00000020
#	define DST_TRAIL_X_RIGHT_TO_LEFT       0x00000000
#	define DST_TRAIL_X_LEFT_TO_RIGHT       0x00000040
#	define DST_TRAP_FILL_RIGHT_TO_LEFT     0x00000000
#	define DST_TRAP_FILL_LEFT_TO_RIGHT     0x00000080
#	define DST_BRES_SIGN                   0x00000100
#	define DST_HOST_BIG_ENDIAN_EN          0x00000200
#	define DST_POLYLINE_NONLAST            0x00008000
#	define DST_RASTER_STALL                0x00010000
#	define DST_POLY_EDGE                   0x00040000
#define DP_CNTL_XDIR_YDIR_YMAJOR               0x16D0  
/* DP_CNTL_XDIR_YDIR_YMAJOR bit constants (short version of DP_CNTL) */
#	define DST_X_MAJOR_S                   0x00000000
#	define DST_Y_MAJOR_S                   0x00000001
#	define DST_Y_BOTTOM_TO_TOP_S           0x00000000
#	define DST_Y_TOP_TO_BOTTOM_S           0x00008000
#	define DST_X_RIGHT_TO_LEFT_S           0x00000000
#	define DST_X_LEFT_TO_RIGHT_S           0x80000000
#define DP_DATATYPE                            0x16C4  
/* DP_DATATYPE bit constants */
#	define DST_8BPP                        0x00000002
#	define DST_15BPP                       0x00000003
#	define DST_16BPP                       0x00000004
#	define DST_24BPP                       0x00000005
#	define DST_32BPP                       0x00000006
#	define DST_8BPP_RGB332                 0x00000007
#	define DST_8BPP_Y8                     0x00000008
#	define DST_8BPP_RGB8                   0x00000009
#	define DST_16BPP_VYUY422               0x0000000b
#	define DST_16BPP_YVYU422               0x0000000c
#	define DST_32BPP_AYUV444               0x0000000e
#	define DST_16BPP_ARGB4444              0x0000000f
#	define BRUSH_SOLIDCOLOR                0x00000d00
#	define SRC_MONO                        0x00000000
#	define SRC_MONO_LBKGD                  0x00010000
#	define SRC_DSTCOLOR                    0x00030000
#	define BYTE_ORDER_MSB_TO_LSB           0x00000000
#	define BYTE_ORDER_LSB_TO_MSB           0x40000000
#	define DP_CONVERSION_TEMP              0x80000000
#	define HOST_BIG_ENDIAN_EN	      (1 << 29)
#define DP_MIX                                 0x16C8  
/* DP_MIX bit constants */
#	define DP_SRC_RECT                     0x00000200
#	define DP_SRC_HOST                     0x00000300
#	define DP_SRC_HOST_BYTEALIGN           0x00000400
#define DP_WRITE_MSK                           0x16CC  
#define DP_XOP                                 0x17F8  
#define CLR_CMP_CLR_SRC                        0x15C4
#define CLR_CMP_CLR_DST                        0x15C8
#define CLR_CMP_CNTL                           0x15C0
/* CLR_CMP_CNTL bit constants */
#	define COMPARE_SRC_FALSE               0x00000000
#	define COMPARE_SRC_TRUE                0x00000001
#	define COMPARE_SRC_NOT_EQUAL           0x00000004
#	define COMPARE_SRC_EQUAL               0x00000005
#	define COMPARE_SRC_EQUAL_FLIP          0x00000007
#	define COMPARE_DST_FALSE               0x00000000
#	define COMPARE_DST_TRUE                0x00000100
#	define COMPARE_DST_NOT_EQUAL           0x00000400
#	define COMPARE_DST_EQUAL               0x00000500
#	define COMPARE_DESTINATION             0x00000000
#	define COMPARE_SOURCE                  0x01000000
#	define COMPARE_SRC_AND_DST             0x02000000
#define CLR_CMP_MSK                            0x15CC  
#define DSTCACHE_MODE                          0x1710  
#define DSTCACHE_CTLSTAT                       0x1714  
/* DSTCACHE_CTLSTAT bit constants */
#	define RB2D_DC_FLUSH		       (3 << 0)
#	define RB2D_DC_FLUSH_ALL	       0xf
#	define RB2D_DC_BUSY		       (1 << 31)
#define DEFAULT_OFFSET                         0x16e0
#define DEFAULT_PITCH_OFFSET                   0x16E0  
#define DEFAULT_SC_BOTTOM_RIGHT                0x16E8  
/* DEFAULT_SC_BOTTOM_RIGHT bit constants */
#	define DEFAULT_SC_RIGHT_MAX	       (0x1fff << 0)
#	define DEFAULT_SC_BOTTOM_MAX	       (0x1fff << 16)
#define DP_GUI_MASTER_CNTL                     0x146C  
/* DP_GUI_MASTER_CNTL bit constants */
#	define GMC_SRC_PITCH_OFFSET_DEFAULT    0x00000000
#	define GMC_SRC_PITCH_OFFSET_LEAVE      0x00000001
#	define GMC_DST_PITCH_OFFSET_DEFAULT    0x00000000
#	define GMC_DST_PITCH_OFFSET_LEAVE      0x00000002
#	define GMC_SRC_CLIP_DEFAULT            0x00000000
#	define GMC_SRC_CLIP_LEAVE              0x00000004
#	define GMC_DST_CLIP_DEFAULT            0x00000000
#	define GMC_DST_CLIP_LEAVE              0x00000008
#	define GMC_BRUSH_8x8MONO               0x00000000
#	define GMC_BRUSH_8x8MONO_LBKGD         0x00000010
#	define GMC_BRUSH_8x1MONO               0x00000020
#	define GMC_BRUSH_8x1MONO_LBKGD         0x00000030
#	define GMC_BRUSH_1x8MONO               0x00000040
#	define GMC_BRUSH_1x8MONO_LBKGD         0x00000050
#	define GMC_BRUSH_32x1MONO              0x00000060
#	define GMC_BRUSH_32x1MONO_LBKGD        0x00000070
#	define GMC_BRUSH_32x32MONO             0x00000080
#	define GMC_BRUSH_32x32MONO_LBKGD       0x00000090
#	define GMC_BRUSH_8x8COLOR              0x000000a0
#	define GMC_BRUSH_8x1COLOR              0x000000b0
#	define GMC_BRUSH_1x8COLOR              0x000000c0
#	define GMC_BRUSH_SOLID_COLOR           0x000000d0
#	define GMC_DST_8BPP                    0x00000200
#	define GMC_DST_15BPP                   0x00000300
#	define GMC_DST_16BPP                   0x00000400
#	define GMC_DST_24BPP                   0x00000500
#	define GMC_DST_32BPP                   0x00000600
#	define GMC_DST_8BPP_RGB332             0x00000700
#	define GMC_DST_8BPP_Y8                 0x00000800
#	define GMC_DST_8BPP_RGB8               0x00000900
#	define GMC_DST_16BPP_VYUY422           0x00000b00
#	define GMC_DST_16BPP_YVYU422           0x00000c00
#	define GMC_DST_32BPP_AYUV444           0x00000e00
#	define GMC_DST_16BPP_ARGB4444          0x00000f00
#	define GMC_SRC_MONO                    0x00000000
#	define GMC_SRC_MONO_LBKGD              0x00001000
#	define GMC_SRC_DSTCOLOR                0x00003000
#	define GMC_BYTE_ORDER_MSB_TO_LSB       0x00000000
#	define GMC_BYTE_ORDER_LSB_TO_MSB       0x00004000
#	define GMC_DP_CONVERSION_TEMP_9300     0x00008000
#	define GMC_DP_CONVERSION_TEMP_6500     0x00000000
#	define GMC_DP_SRC_RECT                 0x02000000
#	define GMC_DP_SRC_HOST                 0x03000000
#	define GMC_DP_SRC_HOST_BYTEALIGN       0x04000000
#	define GMC_3D_FCN_EN_CLR               0x00000000
#	define GMC_3D_FCN_EN_SET               0x08000000
#	define GMC_DST_CLR_CMP_FCN_LEAVE       0x00000000
#	define GMC_DST_CLR_CMP_FCN_CLEAR       0x10000000
#	define GMC_AUX_CLIP_LEAVE              0x00000000
#	define GMC_AUX_CLIP_CLEAR              0x20000000
#	define GMC_WRITE_MASK_LEAVE            0x00000000
#	define GMC_WRITE_MASK_SET              0x40000000
#	define GMC_CLR_CMP_CNTL_DIS            (1 << 28)
#	define GMC_SRC_DATATYPE_COLOR	       (3 << 12)
#	define ROP3_S                	       0x00cc0000
#	define ROP3_SRCCOPY		       0x00cc0000
#	define ROP3_P                	       0x00f00000
#	define ROP3_PATCOPY		       0x00f00000
#	define DP_SRC_SOURCE_MASK              (7    << 24)
#	define GMC_BRUSH_NONE                  (15   <<  4)
#	define DP_SRC_SOURCE_MEMORY	       (2    << 24)
#	define GMC_BRUSH_SOLIDCOLOR	       0x000000d0
#define SC_TOP_LEFT                            0x16EC  
#define SC_BOTTOM_RIGHT                        0x16F0  
#define SRC_SC_BOTTOM_RIGHT                    0x16F4  
#define RB2D_DSTCACHE_CTLSTAT		       0x342C
#define RB2D_DSTCACHE_MODE                     0x3428

#define RADEON_BASE_CODE                    0x0f0b
#define RADEON_BIOS_0_SCRATCH               0x0010
#define RADEON_BIOS_1_SCRATCH               0x0014
#define RADEON_BIOS_2_SCRATCH               0x0018
#define RADEON_BIOS_3_SCRATCH               0x001c
#define RADEON_BIOS_4_SCRATCH               0x0020
#define RADEON_BIOS_5_SCRATCH               0x0024
#define RADEON_BIOS_6_SCRATCH               0x0028
#define RADEON_BIOS_7_SCRATCH               0x002c


#define CLK_PIN_CNTL                               0x0001
#define PPLL_CNTL                                  0x0002
#	define PPLL_RESET                          (1 <<  0)
#	define PPLL_SLEEP                          (1 <<  1)
#	define PPLL_ATOMIC_UPDATE_EN               (1 << 16)
#	define PPLL_VGA_ATOMIC_UPDATE_EN           (1 << 17)
#	define PPLL_ATOMIC_UPDATE_VSYNC            (1 << 18)
#define PPLL_REF_DIV                               0x0003
#	define PPLL_REF_DIV_MASK                   0x03ff
#	define PPLL_ATOMIC_UPDATE_R                (1 << 15) /* same as _W */
#	define PPLL_ATOMIC_UPDATE_W                (1 << 15) /* same as _R */
#define PPLL_DIV_0                                 0x0004
#define PPLL_DIV_1                                 0x0005
#define PPLL_DIV_2                                 0x0006
#define PPLL_DIV_3                                 0x0007
#define VCLK_ECP_CNTL                              0x0008
#define HTOTAL_CNTL                                0x0009
#define HTOTAL2_CNTL                               0x002e /* PLL */
#define M_SPLL_REF_FB_DIV                          0x000a
#define AGP_PLL_CNTL                               0x000b
#define SPLL_CNTL                                  0x000c
#define SCLK_CNTL                                  0x000d
#define MPLL_CNTL                                  0x000e
#define MCLK_CNTL                                  0x0012
/* MCLK_CNTL bit constants */
#	define FORCEON_MCLKA			   (1 << 16)
#	define FORCEON_MCLKB         	   	   (1 << 17)
#	define FORCEON_YCLKA         	      	   (1 << 18)
#	define FORCEON_YCLKB         	   	   (1 << 19)
#	define FORCEON_MC            	  	   (1 << 20)
#	define FORCEON_AIC           	   	   (1 << 21)
#define PLL_TEST_CNTL                              0x0013
#define P2PLL_CNTL                                 0x002a /* P2PLL */
#	define P2PLL_RESET                         (1 <<  0)
#	define P2PLL_SLEEP                         (1 <<  1)
#	define P2PLL_ATOMIC_UPDATE_EN              (1 << 16)
#	define P2PLL_VGA_ATOMIC_UPDATE_EN          (1 << 17)
#	define P2PLL_ATOMIC_UPDATE_VSYNC           (1 << 18)
#define P2PLL_DIV_0                                0x002c
#	define P2PLL_FB0_DIV_MASK                  0x07ff
#	define P2PLL_POST0_DIV_MASK                0x00070000
#define P2PLL_REF_DIV                              0x002B /* PLL */
#	define P2PLL_REF_DIV_MASK                  0x03ff
#	define P2PLL_ATOMIC_UPDATE_R               (1 << 15) /* same as _W */
#	define P2PLL_ATOMIC_UPDATE_W               (1 << 15) /* same as _R */

/* masks */

#define CONFIG_MEMSIZE_MASK		0x1f000000
#define MEM_CFG_TYPE			0x40000000
#define DST_OFFSET_MASK			0x003fffff
#define DST_PITCH_MASK			0x3fc00000
#define DEFAULT_TILE_MASK		0xc0000000
#define	PPLL_DIV_SEL_MASK		0x00000300
#define	PPLL_FB3_DIV_MASK		0x000007ff
#define	PPLL_POST3_DIV_MASK		0x00070000

#define GUI_ACTIVE			0x80000000

/* GEN_RESET_CNTL bit constants */
#define SOFT_RESET_GUI                             0x00000001
#define SOFT_RESET_VCLK                            0x00000100
#define SOFT_RESET_PCLK                            0x00000200
#define SOFT_RESET_ECP                             0x00000400
#define SOFT_RESET_DISPENG_XCLK                    0x00000800


/* RAGE THEATER REGISTERS */

#define VIPH_CH0_DATA                              0x0c00
#define VIPH_CH1_DATA                              0x0c04
#define VIPH_CH2_DATA                              0x0c08
#define VIPH_CH3_DATA                              0x0c0c
#define VIPH_CH0_ADDR                              0x0c10
#define VIPH_CH1_ADDR                              0x0c14
#define VIPH_CH2_ADDR                              0x0c18
#define VIPH_CH3_ADDR                              0x0c1c
#define VIPH_CH0_SBCNT                             0x0c20
#define VIPH_CH1_SBCNT                             0x0c24
#define VIPH_CH2_SBCNT                             0x0c28
#define VIPH_CH3_SBCNT                             0x0c2c
#define VIPH_CH0_ABCNT                             0x0c30
#define VIPH_CH1_ABCNT                             0x0c34
#define VIPH_CH2_ABCNT                             0x0c38
#define VIPH_CH3_ABCNT                             0x0c3c
#define VIPH_CONTROL                               0x0c40
#define VIPH_DV_LAT                                0x0c44
#define VIPH_BM_CHUNK                              0x0c48
#define VIPH_DV_INT                                0x0c4c
#define VIPH_TIMEOUT_STAT                          0x0c50

#define VIPH_REG_DATA                               0x0084
#define VIPH_REG_ADDR                               0x0080

/* Address Space Rage Theatre Registers (VIP Access) */
#define VIP_VIP_VENDOR_DEVICE_ID                 0x0000
#define VIP_VIP_SUB_VENDOR_DEVICE_ID             0x0004
#define VIP_VIP_COMMAND_STATUS                   0x0008
#define VIP_VIP_REVISION_ID                      0x000c
#define VIP_HW_DEBUG                             0x0010
#define VIP_SW_SCRATCH                           0x0014
#define VIP_I2C_CNTL_0                           0x0020
#define VIP_I2C_CNTL_1                           0x0024
#define VIP_I2C_DATA                             0x0028
#define VIP_INT_CNTL                             0x002c
#define VIP_GPIO_INOUT                           0x0030
#define VIP_GPIO_CNTL                            0x0034
#define VIP_CLKOUT_GPIO_CNTL                     0x0038
#define VIP_RIPINTF_PORT_CNTL                    0x003c
#define VIP_ADC_CNTL                             0x0400
#define VIP_ADC_DEBUG                            0x0404
#define VIP_STANDARD_SELECT                      0x0408
#define VIP_THERMO2BIN_STATUS                    0x040c
#define VIP_COMB_CNTL0                           0x0440
#define VIP_COMB_CNTL1                           0x0444
#define VIP_COMB_CNTL2                           0x0448
#define VIP_COMB_LINE_LENGTH                     0x044c
#define VIP_NOISE_CNTL0                          0x0450
#define VIP_HS_PLINE                             0x0480
#define VIP_HS_DTOINC                            0x0484
#define VIP_HS_PLLGAIN                           0x0488
#define VIP_HS_MINMAXWIDTH                       0x048c
#define VIP_HS_GENLOCKDELAY                      0x0490
#define VIP_HS_WINDOW_LIMIT                      0x0494
#define VIP_HS_WINDOW_OC_SPEED                   0x0498
#define VIP_HS_PULSE_WIDTH                       0x049c
#define VIP_HS_PLL_ERROR                         0x04a0
#define VIP_HS_PLL_FS_PATH                       0x04a4
#define VIP_SG_BLACK_GATE                        0x04c0
#define VIP_SG_SYNCTIP_GATE                      0x04c4
#define VIP_SG_UVGATE_GATE                       0x04c8
#define VIP_LP_AGC_CLAMP_CNTL0                   0x0500
#define VIP_LP_AGC_CLAMP_CNTL1                   0x0504
#define VIP_LP_BRIGHTNESS                        0x0508
#define VIP_LP_CONTRAST                          0x050c
#define VIP_LP_SLICE_LIMIT                       0x0510
#define VIP_LP_WPA_CNTL0                         0x0514
#define VIP_LP_WPA_CNTL1                         0x0518
#define VIP_LP_BLACK_LEVEL                       0x051c
#define VIP_LP_SLICE_LEVEL                       0x0520
#define VIP_LP_SYNCTIP_LEVEL                     0x0524
#define VIP_LP_VERT_LOCKOUT                      0x0528
#define VIP_VS_DETECTOR_CNTL                     0x0540
#define VIP_VS_BLANKING_CNTL                     0x0544
#define VIP_VS_FIELD_ID_CNTL                     0x0548
#define VIP_VS_COUNTER_CNTL                      0x054c
#define VIP_VS_FRAME_TOTAL                       0x0550
#define VIP_VS_LINE_COUNT                        0x0554
#define VIP_CP_PLL_CNTL0                         0x0580
#define VIP_CP_PLL_CNTL1                         0x0584
#define VIP_CP_HUE_CNTL                          0x0588
#define VIP_CP_BURST_GAIN                        0x058c
#define VIP_CP_AGC_CNTL                          0x0590
#define VIP_CP_ACTIVE_GAIN                       0x0594
#define VIP_CP_PLL_STATUS0                       0x0598
#define VIP_CP_PLL_STATUS1                       0x059c
#define VIP_CP_PLL_STATUS2                       0x05a0
#define VIP_CP_PLL_STATUS3                       0x05a4
#define VIP_CP_PLL_STATUS4                       0x05a8
#define VIP_CP_PLL_STATUS5                       0x05ac
#define VIP_CP_PLL_STATUS6                       0x05b0
#define VIP_CP_PLL_STATUS7                       0x05b4
#define VIP_CP_DEBUG_FORCE                       0x05b8
#define VIP_CP_VERT_LOCKOUT                      0x05bc
#define VIP_H_ACTIVE_WINDOW                      0x05c0
#define VIP_V_ACTIVE_WINDOW                      0x05c4
#define VIP_H_VBI_WINDOW                         0x05c8
#define VIP_V_VBI_WINDOW                         0x05cc
#define VIP_VBI_CONTROL                          0x05d0
#define VIP_DECODER_DEBUG_CNTL                   0x05d4
#define VIP_SINGLE_STEP_DATA                     0x05d8
#define VIP_MASTER_CNTL                          0x0040
#define VIP_RGB_CNTL                             0x0048
#define VIP_CLKOUT_CNTL                          0x004c
#define VIP_SYNC_CNTL                            0x0050
#define VIP_I2C_CNTL                             0x0054
#define VIP_HTOTAL                               0x0080
#define VIP_HDISP                                0x0084
#define VIP_HSIZE                                0x0088
#define VIP_HSTART                               0x008c
#define VIP_HCOUNT                               0x0090
#define VIP_VTOTAL                               0x0094
#define VIP_VDISP                                0x0098
#define VIP_VCOUNT                               0x009c
#define VIP_VFTOTAL                              0x00a0
#define VIP_DFCOUNT                              0x00a4
#define VIP_DFRESTART                            0x00a8
#define VIP_DHRESTART                            0x00ac
#define VIP_DVRESTART                            0x00b0
#define VIP_SYNC_SIZE                            0x00b4
#define VIP_TV_PLL_FINE_CNTL                     0x00b8
#define VIP_CRT_PLL_FINE_CNTL                    0x00bc
#define VIP_TV_PLL_CNTL                          0x00c0
#define VIP_CRT_PLL_CNTL                         0x00c4
#define VIP_PLL_CNTL0                            0x00c8
#define VIP_PLL_TEST_CNTL                        0x00cc
#define VIP_CLOCK_SEL_CNTL                       0x00d0
#define VIP_VIN_PLL_CNTL                         0x00d4
#define VIP_VIN_PLL_FINE_CNTL                    0x00d8
#define VIP_AUD_PLL_CNTL                         0x00e0
#define VIP_AUD_PLL_FINE_CNTL                    0x00e4
#define VIP_AUD_CLK_DIVIDERS                     0x00e8
#define VIP_AUD_DTO_INCREMENTS                   0x00ec
#define VIP_L54_PLL_CNTL                         0x00f0
#define VIP_L54_PLL_FINE_CNTL                    0x00f4
#define VIP_L54_DTO_INCREMENTS                   0x00f8
#define VIP_PLL_CNTL1                            0x00fc
#define VIP_FRAME_LOCK_CNTL                      0x0100
#define VIP_SYNC_LOCK_CNTL                       0x0104
#define VIP_TVO_SYNC_PAT_ACCUM                   0x0108
#define VIP_TVO_SYNC_THRESHOLD                   0x010c
#define VIP_TVO_SYNC_PAT_EXPECT                  0x0110
#define VIP_DELAY_ONE_MAP_A                      0x0114
#define VIP_DELAY_ONE_MAP_B                      0x0118
#define VIP_DELAY_ZERO_MAP_A                     0x011c
#define VIP_DELAY_ZERO_MAP_B                     0x0120
#define VIP_TVO_DATA_DELAY_A                     0x0140
#define VIP_TVO_DATA_DELAY_B                     0x0144
#define VIP_HOST_READ_DATA                       0x0180
#define VIP_HOST_WRITE_DATA                      0x0184
#define VIP_HOST_RD_WT_CNTL                      0x0188
#define VIP_VSCALER_CNTL1                        0x01c0
#define VIP_TIMING_CNTL                          0x01c4
#define VIP_VSCALER_CNTL2                        0x01c8
#define VIP_Y_FALL_CNTL                          0x01cc
#define VIP_Y_RISE_CNTL                          0x01d0
#define VIP_Y_SAW_TOOTH_CNTL                     0x01d4
#define VIP_UPSAMP_AND_GAIN_CNTL                 0x01e0
#define VIP_GAIN_LIMIT_SETTINGS                  0x01e4
#define VIP_LINEAR_GAIN_SETTINGS                 0x01e8
#define VIP_MODULATOR_CNTL1                      0x0200
#define VIP_MODULATOR_CNTL2                      0x0204
#define VIP_MV_MODE_CNTL                         0x0208
#define VIP_MV_STRIPE_CNTL                       0x020c
#define VIP_MV_LEVEL_CNTL1                       0x0210
#define VIP_MV_LEVEL_CNTL2                       0x0214
#define VIP_PRE_DAC_MUX_CNTL                     0x0240
#define VIP_TV_DAC_CNTL                          0x0280
#define VIP_CRC_CNTL                             0x02c0
#define VIP_VIDEO_PORT_SIG                       0x02c4
#define VIP_VBI_CC_CNTL                          0x02c8
#define VIP_VBI_EDS_CNTL                         0x02cc
#define VIP_VBI_20BIT_CNTL                       0x02d0
#define VIP_VBI_DTO_CNTL                         0x02d4
#define VIP_VBI_LEVEL_CNTL                       0x02d8
#define VIP_UV_ADR                               0x0300
#define VIP_MV_STATUS                            0x0330
#define VIP_UPSAMP_COEFF0_0                      0x0340
#define VIP_UPSAMP_COEFF0_1                      0x0344
#define VIP_UPSAMP_COEFF0_2                      0x0348
#define VIP_UPSAMP_COEFF1_0                      0x034c
#define VIP_UPSAMP_COEFF1_1                      0x0350
#define VIP_UPSAMP_COEFF1_2                      0x0354
#define VIP_UPSAMP_COEFF2_0                      0x0358
#define VIP_UPSAMP_COEFF2_1                      0x035c
#define VIP_UPSAMP_COEFF2_2                      0x0360
#define VIP_UPSAMP_COEFF3_0                      0x0364
#define VIP_UPSAMP_COEFF3_1                      0x0368
#define VIP_UPSAMP_COEFF3_2                      0x036c
#define VIP_UPSAMP_COEFF4_0                      0x0370
#define VIP_UPSAMP_COEFF4_1                      0x0374
#define VIP_UPSAMP_COEFF4_2                      0x0378
#define VIP_TV_DTO_INCREMENTS                    0x0390
#define VIP_CRT_DTO_INCREMENTS                   0x0394
#define VIP_VSYNC_DIFF_CNTL                      0x03a0
#define VIP_VSYNC_DIFF_LIMITS                    0x03a4
#define VIP_VSYNC_DIFF_RD_DATA                   0x03a8
#define VIP_SCALER_IN_WINDOW                     0x0618
#define VIP_SCALER_OUT_WINDOW                    0x061c
#define VIP_H_SCALER_CONTROL                     0x0600
#define VIP_V_SCALER_CONTROL                     0x0604
#define VIP_V_DEINTERLACE_CONTROL                0x0608
#define VIP_VBI_SCALER_CONTROL                   0x060c
#define VIP_DVS_PORT_CTRL                        0x0610
#define VIP_DVS_PORT_READBACK                    0x0614
#define VIP_FIFOA_CONFIG                         0x0800
#define VIP_FIFOB_CONFIG                         0x0804
#define VIP_FIFOC_CONFIG                         0x0808
#define VIP_SPDIF_PORT_CNTL                      0x080c
#define VIP_SPDIF_CHANNEL_STAT                   0x0810
#define VIP_SPDIF_AC3_PREAMBLE                   0x0814
#define VIP_I2S_TRANSMIT_CNTL                    0x0818
#define VIP_I2S_RECEIVE_CNTL                     0x081c
#define VIP_SPDIF_TX_CNT_REG                     0x0820
#define VIP_IIS_TX_CNT_REG                       0x0824

/* Status defines */
#define VIP_BUSY 0
#define VIP_IDLE 1
#define VIP_RESET 2

#define VIPH_TIMEOUT_STAT__VIPH_REG_STAT 0x00000010
#define VIPH_TIMEOUT_STAT__VIPH_REG_AK 0x00000010
#define VIPH_TIMEOUT_STAT__VIPH_REGR_DIS 0x01000000
#define TEST_DEBUG_CNTL__TEST_DEBUG_OUT_EN 0x00000001

#define RT_ATI_ID 0x4D541002

/* Register/Field values: */
#define     RT_COMP0              0x0
#define     RT_COMP1              0x1
#define     RT_COMP2              0x2
#define     RT_YF_COMP3           0x3
#define     RT_YR_COMP3           0x4
#define     RT_YCF_COMP4          0x5
#define     RT_YCR_COMP4          0x6

/* Video standard defines */
#define     RT_NTSC           0x0
#define     RT_PAL            0x1
#define     RT_SECAM          0x2
#define     extNONE           0x0000
#define     extNTSC           0x0100
#define     extRsvd           0x0200
#define     extPAL            0x0300
#define     extPAL_M          0x0400
#define     extPAL_N          0x0500
#define     extSECAM          0x0600
#define     extPAL_NCOMB      0x0700
#define     extNTSC_J         0x0800
#define     extNTSC_443       0x0900
#define     extPAL_BGHI       0x0A00
#define     extPAL_60         0x0B00
 /* these are used in MSP3430 */
#define     extPAL_DK1	      0x0C00
#define     extPAL_AUTO       0x0D00

#define     RT_FREF_2700      6
#define     RT_FREF_2950      5

#define     RT_COMPOSITE      0x0
#define     RT_SVIDEO         0x1

#define     RT_NORM_SHARPNESS 0x03
#define     RT_HIGH_SHARPNESS 0x0F

#define     RT_HUE_PAL_DEF    0x00

#define     RT_DECINTERLACED      0x1
#define     RT_DECNONINTERLACED   0x0

#define     NTSC_LINES          525
#define     PAL_SECAM_LINES     625

#define     RT_ASYNC_ENABLE   0x0
#define     RT_ASYNC_DISABLE  0x1
#define     RT_ASYNC_RESET    0x1

#define     RT_VINRST_ACTIVE  0x0
#define     RT_VINRST_RESET   0x1
#define     RT_L54RST_RESET   0x1

#define     RT_REF_CLK        0x0
#define     RT_PLL_VIN_CLK    0x1

#define     RT_VIN_ASYNC_RST  0x20
#define     RT_DVS_ASYNC_RST  0x80

#define     RT_ADC_ENABLE     0x0
#define     RT_ADC_DISABLE    0x1

#define     RT_DVSDIR_IN      0x0
#define     RT_DVSDIR_OUT     0x1

#define     RT_DVSCLK_HIGH    0x0
#define     RT_DVSCLK_LOW     0x1

#define     RT_DVSCLK_SEL_8FS     0x0
#define     RT_DVSCLK_SEL_27MHZ   0x1

#define     RT_DVS_CONTSTREAM     0x1
#define     RT_DVS_NONCONTSTREAM  0x0

#define     RT_DVSDAT_HIGH    0x0
#define     RT_DVSDAT_LOW     0x1

#define     RT_ADC_CNTL_DEFAULT               0x03252338

/* COMB_CNTL0 FILTER SETTINGS FOR DIFFERENT STANDARDS: */
#define     RT_NTSCM_COMB_CNTL0_COMPOSITE     0x09438090
#define     RT_NTSCM_COMB_CNTL0_SVIDEO        0x48540000

#define     RT_PAL_COMB_CNTL0_COMPOSITE       0x09438090
#define     RT_PAL_COMB_CNTL0_SVIDEO          0x40348090

#define     RT_SECAM_COMB_CNTL0_COMPOSITE     0xD0108090 /* instead of orig 0xD0088090 - eric*/
#define     RT_SECAM_COMB_CNTL0_SVIDEO        0x50148090

#define     RT_PALN_COMB_CNTL0_COMPOSITE      0x09438090
#define     RT_PALN_COMB_CNTL0_SVIDEO         0x40348090

#define     RT_PALM_COMB_CNTL0_COMPOSITE      0x09438090
#define     RT_PALM_COMB_CNTL0_SVIDEO         0x40348090
/* End of filter settings. */

/* COMB_CNTL1 FILTER SETTINGS FOR DIFFERENT STANDARDS: */
#define     RT_NTSCM_COMB_CNTL1_COMPOSITE     0x00000010
#define     RT_NTSCM_COMB_CNTL1_SVIDEO        0x00000081

#define     RT_PAL_COMB_CNTL1_COMPOSITE       0x00000010
#define     RT_PAL_COMB_CNTL1_SVIDEO          0x000000A1

#define     RT_SECAM_COMB_CNTL1_COMPOSITE     0x00000091
#define     RT_SECAM_COMB_CNTL1_SVIDEO        0x00000081

#define     RT_PALN_COMB_CNTL1_COMPOSITE      0x00000010
#define     RT_PALN_COMB_CNTL1_SVIDEO         0x000000A1

#define     RT_PALM_COMB_CNTL1_COMPOSITE      0x00000010
#define     RT_PALM_COMB_CNTL1_SVIDEO         0x000000A1
/* End of filter settings. */

/* COMB_CNTL2 FILTER SETTINGS FOR DIFFERENT STANDARDS: */
#define     RT_NTSCM_COMB_CNTL2_COMPOSITE     0x16161010
#define     RT_NTSCM_COMB_CNTL2_SVIDEO        0xFFFFFFFF

#define     RT_PAL_COMB_CNTL2_COMPOSITE       0x06080102 /* instead of 0x16161010 - Ivo */
#define     RT_PAL_COMB_CNTL2_SVIDEO          0x06080102

#define     RT_SECAM_COMB_CNTL2_COMPOSITE     0xffffffff /* instead of 0x06080102 - eric */
#define     RT_SECAM_COMB_CNTL2_SVIDEO        0x06080102

#define     RT_PALN_COMB_CNTL2_COMPOSITE      0x06080102
#define     RT_PALN_COMB_CNTL2_SVIDEO         0x06080102

#define     RT_PALM_COMB_CNTL2_COMPOSITE      0x06080102
#define     RT_PALM_COMB_CNTL2_SVIDEO         0x06080102
/* End of filter settings. */

/* COMB_LINE_LENGTH FILTER SETTINGS FOR DIFFERENT STANDARDS: */
#define     RT_NTSCM_COMB_LENGTH_COMPOSITE    0x0718038A
#define     RT_NTSCM_COMB_LENGTH_SVIDEO       0x0718038A

#define     RT_PAL_COMB_LENGTH_COMPOSITE      0x08DA046B
#define     RT_PAL_COMB_LENGTH_SVIDEO         0x08DA046B

#define     RT_SECAM_COMB_LENGTH_COMPOSITE    0x08DA046A
#define     RT_SECAM_COMB_LENGTH_SVIDEO       0x08DA046A

#define     RT_PALN_COMB_LENGTH_COMPOSITE     0x07260391
#define     RT_PALN_COMB_LENGTH_SVIDEO        0x07260391

#define     RT_PALM_COMB_LENGTH_COMPOSITE     0x07160389
#define     RT_PALM_COMB_LENGTH_SVIDEO        0x07160389
/* End of filter settings. */

/* LP_AGC_CLAMP_CNTL0 */
#define     RT_NTSCM_SYNCTIP_REF0              0x00000037
#define     RT_NTSCM_SYNCTIP_REF1              0x00000029
#define     RT_NTSCM_CLAMP_REF                 0x0000003B
#define     RT_NTSCM_PEAKWHITE                 0x000000FF
#define     RT_NTSCM_VBI_PEAKWHITE             0x000000C2

#define     RT_NTSCM_WPA_THRESHOLD             0x00000406
#define     RT_NTSCM_WPA_TRIGGER_LO            0x000000B3

#define     RT_NTSCM_WPA_TRIGGER_HIGH          0x0000021B

#define     RT_NTSCM_LP_LOCKOUT_START          0x00000206
#define     RT_NTSCM_LP_LOCKOUT_END            0x00000021
#define     RT_NTSCM_CH_DTO_INC                0x00400000
#define     RT_NTSCM_CH_PLL_SGAIN              0x00000001
#define     RT_NTSCM_CH_PLL_FGAIN              0x00000002

#define     RT_NTSCM_CR_BURST_GAIN             0x0000007A
#define     RT_NTSCM_CB_BURST_GAIN             0x000000AC

#define     RT_NTSCM_CH_HEIGHT                 0x000000CD
#define     RT_NTSCM_CH_KILL_LEVEL             0x000000C0
#define     RT_NTSCM_CH_AGC_ERROR_LIM          0x00000002
#define     RT_NTSCM_CH_AGC_FILTER_EN          0x00000000
#define     RT_NTSCM_CH_AGC_LOOP_SPEED         0x00000000

#define     RT_NTSCM_CRDR_ACTIVE_GAIN          0x0000007A
#define     RT_NTSCM_CBDB_ACTIVE_GAIN          0x000000AC

#define     RT_NTSCM_VERT_LOCKOUT_START        0x00000207
#define     RT_NTSCM_VERT_LOCKOUT_END          0x0000000E

#define     RT_NTSCJ_SYNCTIP_REF0              0x00000004
#define     RT_NTSCJ_SYNCTIP_REF1              0x00000012
#define     RT_NTSCJ_CLAMP_REF                 0x0000003B
#define     RT_NTSCJ_PEAKWHITE                 0x000000CB
#define     RT_NTSCJ_VBI_PEAKWHITE             0x000000C2
#define     RT_NTSCJ_WPA_THRESHOLD             0x000004B0
#define     RT_NTSCJ_WPA_TRIGGER_LO            0x000000B4
#define     RT_NTSCJ_WPA_TRIGGER_HIGH          0x0000021C
#define     RT_NTSCJ_LP_LOCKOUT_START          0x00000206
#define     RT_NTSCJ_LP_LOCKOUT_END            0x00000021

#define     RT_NTSCJ_CR_BURST_GAIN             0x00000071
#define     RT_NTSCJ_CB_BURST_GAIN             0x0000009F
#define     RT_NTSCJ_CH_HEIGHT                 0x000000CD
#define     RT_NTSCJ_CH_KILL_LEVEL             0x000000C0
#define     RT_NTSCJ_CH_AGC_ERROR_LIM          0x00000002
#define     RT_NTSCJ_CH_AGC_FILTER_EN          0x00000000
#define     RT_NTSCJ_CH_AGC_LOOP_SPEED         0x00000000

#define     RT_NTSCJ_CRDR_ACTIVE_GAIN          0x00000071
#define     RT_NTSCJ_CBDB_ACTIVE_GAIN          0x0000009F
#define     RT_NTSCJ_VERT_LOCKOUT_START        0x00000207
#define     RT_NTSCJ_VERT_LOCKOUT_END          0x0000000E

#define     RT_PAL_SYNCTIP_REF0                0x37  /* instead of 0x00000004 - Ivo */
#define     RT_PAL_SYNCTIP_REF1                0x26  /* instead of 0x0000000F - Ivo */
#define     RT_PAL_CLAMP_REF                   0x0000003B
#define     RT_PAL_PEAKWHITE                   0xFF /* instead of 0x000000C1 -  Ivo */
#define     RT_PAL_VBI_PEAKWHITE               0xC6 /* instead of 0x000000C7 - Ivo */
#define     RT_PAL_WPA_THRESHOLD               0x59C /* instead of 0x000006A4 - Ivo */

#define     RT_PAL_WPA_TRIGGER_LO              0x00000096
#define     RT_PAL_WPA_TRIGGER_HIGH            0x000001C2
#define     RT_PAL_LP_LOCKOUT_START            0x00000263
#define     RT_PAL_LP_LOCKOUT_END              0x0000002C

#define     RT_PAL_CH_DTO_INC                  0x00400000
#define     RT_PAL_CH_PLL_SGAIN                1   /* instead of 0x00000002 - Ivo */
#define     RT_PAL_CH_PLL_FGAIN                2   /* instead of 0x00000001 - Ivo */
#define     RT_PAL_CR_BURST_GAIN               0x0000007A
#define     RT_PAL_CB_BURST_GAIN               0x000000AB
#define     RT_PAL_CH_HEIGHT                   0x0000009C
#define     RT_PAL_CH_KILL_LEVEL               4   /* instead of 0x00000090 - Ivo */
#define     RT_PAL_CH_AGC_ERROR_LIM            1   /* instead of 0x00000002 - Ivo */
#define     RT_PAL_CH_AGC_FILTER_EN            1   /* instead of 0x00000000 - Ivo */
#define     RT_PAL_CH_AGC_LOOP_SPEED           0x00000000

#define     RT_PAL_CRDR_ACTIVE_GAIN            0x9E /* instead of 0x0000007A - Ivo */
#define     RT_PAL_CBDB_ACTIVE_GAIN            0xDF /* instead of 0x000000AB - Ivo */
#define     RT_PAL_VERT_LOCKOUT_START          0x00000269
#define     RT_PAL_VERT_LOCKOUT_END            0x00000012

#define     RT_SECAM_SYNCTIP_REF0              0x37 /* instead of 0x00000004 - Ivo */
#define     RT_SECAM_SYNCTIP_REF1              0x26 /* instead of 0x0000000F - Ivo */
#define     RT_SECAM_CLAMP_REF                 0x0000003B
#define     RT_SECAM_PEAKWHITE                 0xFF /* instead of 0x000000C1 - Ivo */
#define     RT_SECAM_VBI_PEAKWHITE             0xC6 /* instead of 0x000000C7 - Ivo */
#define     RT_SECAM_WPA_THRESHOLD             0x57A /* instead of 0x6A4,  instead of 0x0000059C is Ivo's value , -eric*/

#define     RT_SECAM_WPA_TRIGGER_LO            0x96 /* instead of 0x0000026B - eric */
#define     RT_SECAM_WPA_TRIGGER_HIGH          0x000001C2
#define     RT_SECAM_LP_LOCKOUT_START          0x263 /* instead of 0x0000026B - eric */
#define     RT_SECAM_LP_LOCKOUT_END            0x2b /* instead of 0x0000002C -eric */

#define     RT_SECAM_CH_DTO_INC                0x003E7A28
#define     RT_SECAM_CH_PLL_SGAIN              0x4 /* instead of 0x00000006 - Volodya */
#define     RT_SECAM_CH_PLL_FGAIN              0x7 /* instead of 0x00000006 -Volodya */

#define     RT_SECAM_CR_BURST_GAIN             0x1FF /* instead of 0x00000200 -Volodya */
#define     RT_SECAM_CB_BURST_GAIN             0x1FF /* instead of 0x00000200 -Volodya */
#define     RT_SECAM_CH_HEIGHT                 0x00000066
#define     RT_SECAM_CH_KILL_LEVEL             0x00000060
#define     RT_SECAM_CH_AGC_ERROR_LIM          0x00000003
#define     RT_SECAM_CH_AGC_FILTER_EN          0x00000000
#define     RT_SECAM_CH_AGC_LOOP_SPEED         0x00000000

#define     RT_SECAM_CRDR_ACTIVE_GAIN          0x11B /* instead of 0x00000200 - eric */
#define     RT_SECAM_CBDB_ACTIVE_GAIN          0x15A /* instead of 0x00000200 - eric */
#define     RT_SECAM_VERT_LOCKOUT_START        0x00000269
#define     RT_SECAM_VERT_LOCKOUT_END          0x00000012

#define     RT_PAL_VS_FIELD_BLANK_END          0x2A /* instead of 0x0000002C - Ivo*/
#define     RT_NTSCM_VS_FIELD_BLANK_END        0x0000000A

#define     RT_NTSCM_FIELD_IDLOCATION          0x00000105
#define     RT_PAL_FIELD_IDLOCATION            0x00000137

#define     RT_NTSCM_H_ACTIVE_START            0x00000070
#define     RT_NTSCM_H_ACTIVE_END              0x00000363

#define     RT_PAL_H_ACTIVE_START              0x0000009A
#define     RT_PAL_H_ACTIVE_END                0x00000439

#define     RT_NTSCM_V_ACTIVE_START            ((22-4)*2+1)
#define     RT_NTSCM_V_ACTIVE_END              ((22+240-4)*2+1)

#define     RT_PAL_V_ACTIVE_START              0x2E /* instead of 0x00000023  (Same as SECAM) - Ivo */
#define     RT_PAL_V_ACTIVE_END                0x269 /* instead of 0x00000262 - Ivo */

/* VBI */
#define     RT_NTSCM_H_VBI_WIND_START          0x00000049
#define     RT_NTSCM_H_VBI_WIND_END            0x00000366

#define     RT_PAL_H_VBI_WIND_START            0x00000084
#define     RT_PAL_H_VBI_WIND_END              0x0000041F

#define     RT_NTSCM_V_VBI_WIND_START          fld_V_VBI_WIND_START_def
#define     RT_NTSCM_V_VBI_WIND_END            fld_V_VBI_WIND_END_def

#define     RT_PAL_V_VBI_WIND_START            0x8 /* instead of 0x0000000B - Ivo */
#define     RT_PAL_V_VBI_WIND_END              0x2D /* instead of 0x00000022 - Ivo */

#define     RT_VBI_CAPTURE_EN                  0x00000001  /* Enable */
#define     RT_VBI_CAPTURE_DIS                 0x00000000  /* Disable */
#define     RT_RAW_CAPTURE                     0x00000002  /* Use raw Video Capture. */

#define     RT_NTSCM_VSYNC_INT_TRIGGER         0x2AA
#define     RT_PALSEM_VSYNC_INT_TRIGGER        0x353

#define     RT_NTSCM_VSYNC_INT_HOLD            0x17
#define     RT_PALSEM_VSYNC_INT_HOLD           0x1C

#define     RT_NTSCM_VS_FIELD_BLANK_START      0x206
#define     RT_PALSEM_VS_FIELD_BLANK_START     0x26D /* instead of 0x26C - Ivo */

#define     RT_FIELD_FLIP_EN                   0x4
#define     RT_V_FIELD_FLIP_INVERTED           0x2000

#define     RT_NTSCM_H_IN_START                0x70
#define     RT_PAL_H_IN_START                  154 /* instead of 144 - Ivo */
#define     RT_SECAM_H_IN_START                0x91 /* instead of 0x9A,  Ivo value is 154,  instead of 144 - Volodya, - eric */
#define     RT_NTSC_H_ACTIVE_SIZE              744
#define     RT_PAL_H_ACTIVE_SIZE               928 /* instead of 927 - Ivo */
#define     RT_SECAM_H_ACTIVE_SIZE             932 /* instead of 928, instead of 927 - Ivo, - eric */
#define     RT_NTSCM_V_IN_START                (0x23)
#define     RT_PAL_V_IN_START                  44 /* instead of (45-6) - Ivo */
#define     RT_SECAM_V_IN_START                0x2C /* instead of (45-6) - Volodya */
#define     RT_NTSCM_V_ACTIVE_SIZE             480
#define     RT_PAL_V_ACTIVE_SIZE               572 /* instead of 575 - Ivo */
#define     RT_SECAM_V_ACTIVE_SIZE             570 /* instead of 572, instead of 575 - Ivo, - eric */

#define     RT_NTSCM_WIN_CLOSE_LIMIT           0x4D
#define     RT_NTSCJ_WIN_CLOSE_LIMIT           0x4D
#define     RT_NTSC443_WIN_CLOSE_LIMIT         0x5F
#define     RT_PALM_WIN_CLOSE_LIMIT            0x4D
#define     RT_PALN_WIN_CLOSE_LIMIT            0x5F
#define     RT_SECAM_WIN_CLOSE_LIMIT           0xC7 /* instead of 0x5F - eric */

#define     RT_NTSCM_VS_FIELD_BLANK_START      0x206

#define     RT_NTSCM_HS_PLL_SGAIN              0x5
#define     RT_NTSCM_HS_PLL_FGAIN              0x7

#define     RT_NTSCM_H_OUT_WIND_WIDTH          0x2F4
#define     RT_NTSCM_V_OUT_WIND_HEIGHT         0xF0

#define     TV          0x1
#define     LINEIN      0x2
#define     MUTE        0x3

#define  DEC_COMPOSITE              0
#define  DEC_SVIDEO                 1
#define  DEC_TUNER                  2

#define  DEC_NTSC                   0
#define  DEC_PAL                    1
#define  DEC_SECAM                  2
#define  DEC_NTSC_J                 8

#define  DEC_SMOOTH                 0
#define  DEC_SHARP                  1

/* RT Register Field Defaults: */
#define     fld_tmpReg1_def      0x00000000
#define     fld_tmpReg2_def      0x00000001
#define     fld_tmpReg3_def      0x00000002

#define     fld_LP_CONTRAST_def      0x0000006e
#define     fld_LP_BRIGHTNESS_def    0x00003ff0
#define     fld_CP_HUE_CNTL_def      0x00000000
#define     fld_LUMA_FILTER_def      0x00000001
#define     fld_H_SCALE_RATIO_def    0x00010000
#define     fld_H_SHARPNESS_def      0x00000000

#define     fld_V_SCALE_RATIO_def    0x00000800
#define     fld_V_DEINTERLACE_ON_def     0x00000001
#define     fld_V_BYPSS_def              0x00000000
#define     fld_V_DITHER_ON_def          0x00000001
#define     fld_EVENF_OFFSET_def         0x00000000
#define     fld_ODDF_OFFSET_def          0x00000000

#define     fld_INTERLACE_DETECTED_def   0x00000000

#define     fld_VS_LINE_COUNT_def    0x00000000
#define     fld_VS_DETECTED_LINES_def    0x00000000
#define     fld_VS_ITU656_VB_def     0x00000000

#define     fld_VBI_CC_DATA_def          0x00000000
#define     fld_VBI_CC_WT_def            0x00000000
#define     fld_VBI_CC_WT_ACK_def        0x00000000
#define     fld_VBI_CC_HOLD_def          0x00000000
#define     fld_VBI_DECODE_EN_def        0x00000000

#define     fld_VBI_CC_DTO_P_def         0x00001802
#define     fld_VBI_20BIT_DTO_P_def      0x0000155c

#define     fld_VBI_CC_LEVEL_def         0x0000003f
#define     fld_VBI_20BIT_LEVEL_def      0x00000059
#define     fld_VBI_CLK_RUNIN_GAIN_def   0x0000010f

#define     fld_H_VBI_WIND_START_def     0x00000041
#define     fld_H_VBI_WIND_END_def       0x00000366

#define     fld_V_VBI_WIND_START_def     0x0D
#define     fld_V_VBI_WIND_END_def       0x24

#define     fld_VBI_20BIT_DATA0_def      0x00000000
#define     fld_VBI_20BIT_DATA1_def      0x00000000
#define     fld_VBI_20BIT_WT_def         0x00000000
#define     fld_VBI_20BIT_WT_ACK_def     0x00000000
#define     fld_VBI_20BIT_HOLD_def       0x00000000

#define     fld_VBI_CAPTURE_ENABLE_def   0x00000000

#define     fld_VBI_EDS_DATA_def         0x00000000
#define     fld_VBI_EDS_WT_def           0x00000000
#define     fld_VBI_EDS_WT_ACK_def       0x00000000
#define     fld_VBI_EDS_HOLD_def         0x00000000

#define     fld_VBI_SCALING_RATIO_def    0x00010000
#define     fld_VBI_ALIGNER_ENABLE_def   0x00000000

#define     fld_H_ACTIVE_START_def       0x00000070
#define     fld_H_ACTIVE_END_def         0x000002f0

#define     fld_V_ACTIVE_START_def       ((22-4)*2+1)
#define     fld_V_ACTIVE_END_def         ((22+240-4)*2+2)

#define     fld_CH_HEIGHT_def            0x000000CD
#define     fld_CH_KILL_LEVEL_def        0x000000C0
#define     fld_CH_AGC_ERROR_LIM_def     0x00000002
#define     fld_CH_AGC_FILTER_EN_def     0x00000000
#define     fld_CH_AGC_LOOP_SPEED_def    0x00000000

#define     fld_HUE_ADJ_def              0x00000000

#define     fld_STANDARD_SEL_def         0x00000000
#define     fld_STANDARD_YC_def          0x00000000

#define     fld_ADC_PDWN_def             0x00000001
#define     fld_INPUT_SELECT_def         0x00000000

#define     fld_ADC_PREFLO_def           0x00000003
#define     fld_H_SYNC_PULSE_WIDTH_def   0x00000000
#define     fld_HS_GENLOCKED_def         0x00000000
#define     fld_HS_SYNC_IN_WIN_def       0x00000000

#define     fld_VIN_ASYNC_RST_def        0x00000001
#define     fld_DVS_ASYNC_RST_def        0x00000001

/* Vendor IDs: */
#define     fld_VIP_VENDOR_ID_def        0x00001002
#define     fld_VIP_DEVICE_ID_def        0x00004d54
#define     fld_VIP_REVISION_ID_def      0x00000001

/* AGC Delay Register */
#define     fld_BLACK_INT_START_def      0x00000031
#define     fld_BLACK_INT_LENGTH_def     0x0000000f

#define     fld_UV_INT_START_def         0x0000003b
#define     fld_U_INT_LENGTH_def         0x0000000f
#define     fld_V_INT_LENGTH_def         0x0000000f
#define     fld_CRDR_ACTIVE_GAIN_def     0x0000007a
#define     fld_CBDB_ACTIVE_GAIN_def     0x000000ac

#define     fld_DVS_DIRECTION_def        0x00000000
#define     fld_DVS_VBI_CARD8_SWAP_def    0x00000000
#define     fld_DVS_CLK_SELECT_def       0x00000000
#define     fld_CONTINUOUS_STREAM_def    0x00000000
#define     fld_DVSOUT_CLK_DRV_def       0x00000001
#define     fld_DVSOUT_DATA_DRV_def      0x00000001

#define     fld_COMB_CNTL0_def           0x09438090
#define     fld_COMB_CNTL1_def           0x00000010

#define     fld_COMB_CNTL2_def           0x16161010
#define     fld_COMB_LENGTH_def          0x0718038A

#define     fld_SYNCTIP_REF0_def         0x00000037
#define     fld_SYNCTIP_REF1_def         0x00000029
#define     fld_CLAMP_REF_def            0x0000003B
#define     fld_AGC_PEAKWHITE_def        0x000000FF
#define     fld_VBI_PEAKWHITE_def        0x000000D2

#define     fld_WPA_THRESHOLD_def        0x000003B0

#define     fld_WPA_TRIGGER_LO_def       0x000000B4
#define     fld_WPA_TRIGGER_HIGH_def     0x0000021C

#define     fld_LOCKOUT_START_def        0x00000206
#define     fld_LOCKOUT_END_def          0x00000021

#define     fld_CH_DTO_INC_def           0x00400000
#define     fld_PLL_SGAIN_def            0x00000001
#define     fld_PLL_FGAIN_def            0x00000002

#define     fld_CR_BURST_GAIN_def        0x0000007a
#define     fld_CB_BURST_GAIN_def        0x000000ac

#define     fld_VERT_LOCKOUT_START_def   0x00000207
#define     fld_VERT_LOCKOUT_END_def     0x0000000E

#define     fld_H_IN_WIND_START_def      0x00000070
#define     fld_V_IN_WIND_START_def      0x00000027

#define     fld_H_OUT_WIND_WIDTH_def     0x000002f4

#define     fld_V_OUT_WIND_WIDTH_def     0x000000f0

#define     fld_HS_LINE_TOTAL_def        0x0000038E

#define     fld_MIN_PULSE_WIDTH_def      0x0000002F
#define     fld_MAX_PULSE_WIDTH_def      0x00000046

#define     fld_WIN_CLOSE_LIMIT_def      0x0000004D
#define     fld_WIN_OPEN_LIMIT_def       0x000001B7

#define     fld_VSYNC_INT_TRIGGER_def    0x000002AA

#define     fld_VSYNC_INT_HOLD_def       0x0000001D

#define     fld_VIN_M0_def               0x00000039
#define     fld_VIN_N0_def               0x0000014c
#define     fld_MNFLIP_EN_def            0x00000000
#define     fld_VIN_P_def                0x00000006
#define     fld_REG_CLK_SEL_def          0x00000000

#define     fld_VIN_M1_def               0x00000000
#define     fld_VIN_N1_def               0x00000000
#define     fld_VIN_DRIVER_SEL_def       0x00000000
#define     fld_VIN_MNFLIP_REQ_def       0x00000000
#define     fld_VIN_MNFLIP_DONE_def      0x00000000
#define     fld_TV_LOCK_TO_VIN_def       0x00000000
#define     fld_TV_P_FOR_WINCLK_def      0x00000004

#define     fld_VINRST_def               0x00000001
#define     fld_VIN_CLK_SEL_def          0x00000000

#define     fld_VS_FIELD_BLANK_START_def     0x00000206

#define     fld_VS_FIELD_BLANK_END_def   0x0000000A

/*#define     fld_VS_FIELD_IDLOCATION_def  0x00000105 */
#define     fld_VS_FIELD_IDLOCATION_def  0x00000001
#define     fld_VS_FRAME_TOTAL_def       0x00000217

#define     fld_SYNC_TIP_START_def       0x00000372
#define     fld_SYNC_TIP_LENGTH_def      0x0000000F

#define     fld_GAIN_FORCE_DATA_def      0x00000000
#define     fld_GAIN_FORCE_EN_def        0x00000000
#define     fld_I_CLAMP_SEL_def          0x00000003
#define     fld_I_AGC_SEL_def            0x00000001
#define     fld_EXT_CLAMP_CAP_def        0x00000001
#define     fld_EXT_AGC_CAP_def          0x00000001
#define     fld_DECI_DITHER_EN_def       0x00000001
#define     fld_ADC_PREFHI_def           0x00000000
#define     fld_ADC_CH_GAIN_SEL_def      0x00000001

#define     fld_HS_PLL_SGAIN_def         0x00000003

#define     fld_NREn_def                 0x00000000
#define     fld_NRGainCntl_def           0x00000000
#define     fld_NRBWTresh_def            0x00000000
#define     fld_NRGCTresh_def            0x00000000
#define     fld_NRCoefDespeclMode_def    0x00000000

#define     fld_GPIO_5_OE_def            0x00000000
#define     fld_GPIO_6_OE_def            0x00000000

#define     fld_GPIO_5_OUT_def           0x00000000
#define     fld_GPIO_6_OUT_def           0x00000000

/* End of field default values. */

#endif	/* _RADEON_H */

