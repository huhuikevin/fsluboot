/*
 * (C) Copyright 2013
 * NVIDIA Corporation <www.nvidia.com>
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef _TEGRA124_PINMUX_H_
#define _TEGRA124_PINMUX_H_

/*
 * Pin groups which we adjust. There are three basic attributes of each pin
 * group which use this enum:
 *
 *	- function
 *	- pullup / pulldown
 *	- tristate or normal
 */
enum pmux_pingrp {
	PINGRP_ULPI_DATA0 = 0,  /* offset 0x3000 */
	PINGRP_ULPI_DATA1,
	PINGRP_ULPI_DATA2,
	PINGRP_ULPI_DATA3,
	PINGRP_ULPI_DATA4,
	PINGRP_ULPI_DATA5,
	PINGRP_ULPI_DATA6,
	PINGRP_ULPI_DATA7,
	PINGRP_ULPI_CLK,
	PINGRP_ULPI_DIR,
	PINGRP_ULPI_NXT,
	PINGRP_ULPI_STP,
	PINGRP_DAP3_FS,
	PINGRP_DAP3_DIN,
	PINGRP_DAP3_DOUT,
	PINGRP_DAP3_SCLK,
	PINGRP_GPIO_PV0,
	PINGRP_GPIO_PV1,
	PINGRP_SDMMC1_CLK,
	PINGRP_SDMMC1_CMD,
	PINGRP_SDMMC1_DAT3,
	PINGRP_SDMMC1_DAT2,
	PINGRP_SDMMC1_DAT1,
	PINGRP_SDMMC1_DAT0,
	PINGRP_CLK2_OUT = PINGRP_SDMMC1_DAT0 + 3,
	PINGRP_CLK2_REQ,
	PINGRP_HDMI_INT = PINGRP_CLK2_REQ + 41,
	PINGRP_DDC_SCL,
	PINGRP_DDC_SDA,
	PINGRP_UART2_RXD = PINGRP_DDC_SDA + 19,
	PINGRP_UART2_TXD,
	PINGRP_UART2_RTS_N,
	PINGRP_UART2_CTS_N,
	PINGRP_UART3_TXD,
	PINGRP_UART3_RXD,
	PINGRP_UART3_CTS_N,
	PINGRP_UART3_RTS_N,
	PINGRP_GPIO_PU0,
	PINGRP_GPIO_PU1,
	PINGRP_GPIO_PU2,
	PINGRP_GPIO_PU3,
	PINGRP_GPIO_PU4,
	PINGRP_GPIO_PU5,
	PINGRP_GPIO_PU6,
	PINGRP_GEN1_I2C_SDA,
	PINGRP_GEN1_I2C_SCL,
	PINGRP_DAP4_FS,
	PINGRP_DAP4_DIN,
	PINGRP_DAP4_DOUT,
	PINGRP_DAP4_SCLK,
	PINGRP_CLK3_OUT,
	PINGRP_CLK3_REQ,
	/* Renamed on Tegra124, from GMI_xx to GPIO_Pxx */
	PINGRP_GPIO_PC7,			/* offset 0x31c0 */
	PINGRP_GPIO_PI5,
	PINGRP_GPIO_PI7,
	PINGRP_GPIO_PK0,
	PINGRP_GPIO_PK1,
	PINGRP_GPIO_PJ0,
	PINGRP_GPIO_PJ2,
	PINGRP_GPIO_PK3,
	PINGRP_GPIO_PK4,
	PINGRP_GPIO_PK2,
	PINGRP_GPIO_PI3,
	PINGRP_GPIO_PI6,
	PINGRP_GPIO_PG0,
	PINGRP_GPIO_PG1,
	PINGRP_GPIO_PG2,
	PINGRP_GPIO_PG3,
	PINGRP_GPIO_PG4,
	PINGRP_GPIO_PG5,
	PINGRP_GPIO_PG6,
	PINGRP_GPIO_PG7,
	PINGRP_GPIO_PH0,
	PINGRP_GPIO_PH1,
	PINGRP_GPIO_PH2,
	PINGRP_GPIO_PH3,
	PINGRP_GPIO_PH4,
	PINGRP_GPIO_PH5,
	PINGRP_GPIO_PH6,
	PINGRP_GPIO_PH7,
	PINGRP_GPIO_PJ7,
	PINGRP_GPIO_PB0,
	PINGRP_GPIO_PB1,
	PINGRP_GPIO_PK7,
	PINGRP_GPIO_PI0,
	PINGRP_GPIO_PI1,
	PINGRP_GPIO_PI2,
	PINGRP_GPIO_PI4,			/* offset 0x324c */
	PINGRP_GEN2_I2C_SCL,
	PINGRP_GEN2_I2C_SDA,
	PINGRP_SDMMC4_CLK,
	PINGRP_SDMMC4_CMD,
	PINGRP_SDMMC4_DAT0,
	PINGRP_SDMMC4_DAT1,
	PINGRP_SDMMC4_DAT2,
	PINGRP_SDMMC4_DAT3,
	PINGRP_SDMMC4_DAT4,
	PINGRP_SDMMC4_DAT5,
	PINGRP_SDMMC4_DAT6,
	PINGRP_SDMMC4_DAT7,
	PINGRP_CAM_MCLK = PINGRP_SDMMC4_DAT7 + 2,
	PINGRP_GPIO_PCC1,
	PINGRP_GPIO_PBB0,
	PINGRP_CAM_I2C_SCL,
	PINGRP_CAM_I2C_SDA,
	PINGRP_GPIO_PBB3,
	PINGRP_GPIO_PBB4,
	PINGRP_GPIO_PBB5,
	PINGRP_GPIO_PBB6,
	PINGRP_GPIO_PBB7,
	PINGRP_GPIO_PCC2,
	PINGRP_JTAG_RTCK,
	PINGRP_PWR_I2C_SCL,
	PINGRP_PWR_I2C_SDA,
	PINGRP_KB_ROW0,
	PINGRP_KB_ROW1,
	PINGRP_KB_ROW2,
	PINGRP_KB_ROW3,
	PINGRP_KB_ROW4,
	PINGRP_KB_ROW5,
	PINGRP_KB_ROW6,
	PINGRP_KB_ROW7,
	PINGRP_KB_ROW8,
	PINGRP_KB_ROW9,
	PINGRP_KB_ROW10,
	PINGRP_KB_ROW11,
	PINGRP_KB_ROW12,
	PINGRP_KB_ROW13,
	PINGRP_KB_ROW14,
	PINGRP_KB_ROW15,
	PINGRP_KB_COL0,				/* offset 0x32fc */
	PINGRP_KB_COL1,
	PINGRP_KB_COL2,
	PINGRP_KB_COL3,
	PINGRP_KB_COL4,
	PINGRP_KB_COL5,
	PINGRP_KB_COL6,
	PINGRP_KB_COL7,
	PINGRP_CLK_32K_OUT,
	PINGRP_CORE_PWR_REQ = PINGRP_CLK_32K_OUT + 2,	/* offset 0x3324 */
	PINGRP_CPU_PWR_REQ,
	PINGRP_PWR_INT_N,
	PINGRP_CLK_32K_IN,
	PINGRP_OWR,
	PINGRP_DAP1_FS,
	PINGRP_DAP1_DIN,
	PINGRP_DAP1_DOUT,
	PINGRP_DAP1_SCLK,
	PINGRP_CLK1_REQ,
	PINGRP_CLK1_OUT,
	PINGRP_SPDIF_IN,
	PINGRP_SPDIF_OUT,
	PINGRP_DAP2_FS,
	PINGRP_DAP2_DIN,
	PINGRP_DAP2_DOUT,
	PINGRP_DAP2_SCLK,
	PINGRP_DVFS_PWM,
	PINGRP_GPIO_X1_AUD,
	PINGRP_GPIO_X3_AUD,
	PINGRP_DVFS_CLK,
	PINGRP_GPIO_X4_AUD,
	PINGRP_GPIO_X5_AUD,
	PINGRP_GPIO_X6_AUD,
	PINGRP_GPIO_X7_AUD,
	PINGRP_SDMMC3_CLK = PINGRP_GPIO_X7_AUD + 3,
	PINGRP_SDMMC3_CMD,
	PINGRP_SDMMC3_DAT0,
	PINGRP_SDMMC3_DAT1,
	PINGRP_SDMMC3_DAT2,
	PINGRP_SDMMC3_DAT3,
	PINGRP_PEX_L0_RST = PINGRP_SDMMC3_DAT3 + 6, /* offset 0x33bc */
	PINGRP_PEX_L0_CLKREQ,
	PINGRP_PEX_WAKE,
	PINGRP_PEX_L1_RST = PINGRP_PEX_WAKE + 2,
	PINGRP_PEX_L1_CLKREQ,
	PINGRP_HDMI_CEC = PINGRP_PEX_L1_CLKREQ + 4, /* offset 0x33e0 */
	PINGRP_SDMMC1_WP_N,
	PINGRP_SDMMC3_CD_N,
	PINGRP_GPIO_W2_AUD,
	PINGRP_GPIO_W3_AUD,
	PINGRP_USB_VBUS_EN0,
	PINGRP_USB_VBUS_EN1,
	PINGRP_SDMMC3_CLK_LB_IN,
	PINGRP_SDMMC3_CLK_LB_OUT,
	PINGRP_GMI_CLK_LB,
	PINGRP_RESET_OUT_N,
	PINGRP_KB_ROW16,			/* offset 0x340c */
	PINGRP_KB_ROW17,
	PINGRP_USB_VBUS_EN2,
	PINGRP_GPIO_PFF2,
	PINGRP_DP_HPD,				/* last reg offset = 0x3430 */
	PINGRP_COUNT,
};

enum pdrive_pingrp {
	PDRIVE_PINGROUP_AO1 = 0, /* offset 0x868 */
	PDRIVE_PINGROUP_AO2,
	PDRIVE_PINGROUP_AT1,
	PDRIVE_PINGROUP_AT2,
	PDRIVE_PINGROUP_AT3,
	PDRIVE_PINGROUP_AT4,
	PDRIVE_PINGROUP_AT5,
	PDRIVE_PINGROUP_CDEV1,
	PDRIVE_PINGROUP_CDEV2,
	PDRIVE_PINGROUP_DAP1 = 10,	/* offset 0x890 */
	PDRIVE_PINGROUP_DAP2,
	PDRIVE_PINGROUP_DAP3,
	PDRIVE_PINGROUP_DAP4,
	PDRIVE_PINGROUP_DBG,
	PDRIVE_PINGROUP_SDIO3 = 18,	/* offset 0x8B0 */
	PDRIVE_PINGROUP_SPI,
	PDRIVE_PINGROUP_UAA,
	PDRIVE_PINGROUP_UAB,
	PDRIVE_PINGROUP_UART2,
	PDRIVE_PINGROUP_UART3,
	PDRIVE_PINGROUP_SDIO1 = 33,     /* offset 0x8EC */
	PDRIVE_PINGROUP_DDC = 37,       /* offset 0x8FC */
	PDRIVE_PINGROUP_GMA,
	PDRIVE_PINGROUP_GME = 42,	/* offset 0x910 */
	PDRIVE_PINGROUP_GMF,
	PDRIVE_PINGROUP_GMG,
	PDRIVE_PINGROUP_GMH,
	PDRIVE_PINGROUP_OWR,
	PDRIVE_PINGROUP_UAD,
	PDRIVE_PINGROUP_DEV3 = 49,      /* offset 0x92c */
	PDRIVE_PINGROUP_CEC = 52,       /* offset 0x938 */
	PDRIVE_PINGROUP_AT6 = 75,	/* offset 0x994 */
	PDRIVE_PINGROUP_DAP5,
	PDRIVE_PINGROUP_VBUS,
	PDRIVE_PINGROUP_AO3,
	PDRIVE_PINGROUP_HVC,
	PDRIVE_PINGROUP_SDIO4,
	PDRIVE_PINGROUP_AO0,
	PDRIVE_PINGROUP_COUNT,
};

/*
 * Functions which can be assigned to each of the pin groups. The values here
 * bear no relation to the values programmed into pinmux registers and are
 * purely a convenience. The translation is done through a table search.
 */
enum pmux_func {
	PMUX_FUNC_AHB_CLK,
	PMUX_FUNC_APB_CLK,
	PMUX_FUNC_AUDIO_SYNC,
	PMUX_FUNC_CRT,
	PMUX_FUNC_DAP1,
	PMUX_FUNC_DAP2,
	PMUX_FUNC_DAP3,
	PMUX_FUNC_DAP4,
	PMUX_FUNC_DAP5,
	PMUX_FUNC_DISPA,
	PMUX_FUNC_DISPB,
	PMUX_FUNC_EMC_TEST0_DLL,
	PMUX_FUNC_EMC_TEST1_DLL,
	PMUX_FUNC_GMI,
	PMUX_FUNC_GMI_INT,
	PMUX_FUNC_HDMI,
	PMUX_FUNC_I2C1,
	PMUX_FUNC_I2C2,
	PMUX_FUNC_I2C3,
	PMUX_FUNC_IDE,
	PMUX_FUNC_KBC,
	PMUX_FUNC_MIO,
	PMUX_FUNC_MIPI_HS,
	PMUX_FUNC_NAND,
	PMUX_FUNC_OSC,
	PMUX_FUNC_OWR,
	PMUX_FUNC_PCIE,
	PMUX_FUNC_PLLA_OUT,
	PMUX_FUNC_PLLC_OUT1,
	PMUX_FUNC_PLLM_OUT1,
	PMUX_FUNC_PLLP_OUT2,
	PMUX_FUNC_PLLP_OUT3,
	PMUX_FUNC_PLLP_OUT4,
	PMUX_FUNC_PWM,
	PMUX_FUNC_PWR_INTR,
	PMUX_FUNC_PWR_ON,
	PMUX_FUNC_RTCK,
	PMUX_FUNC_SDMMC1,
	PMUX_FUNC_SDMMC2,
	PMUX_FUNC_SDMMC3,
	PMUX_FUNC_SDMMC4,
	PMUX_FUNC_SFLASH,
	PMUX_FUNC_SPDIF,
	PMUX_FUNC_SPI1,
	PMUX_FUNC_SPI2,
	PMUX_FUNC_SPI2_ALT,
	PMUX_FUNC_SPI3,
	PMUX_FUNC_SPI4,
	PMUX_FUNC_TRACE,
	PMUX_FUNC_TWC,
	PMUX_FUNC_UARTA,
	PMUX_FUNC_UARTB,
	PMUX_FUNC_UARTC,
	PMUX_FUNC_UARTD,
	PMUX_FUNC_UARTE,
	PMUX_FUNC_ULPI,
	PMUX_FUNC_VI,
	PMUX_FUNC_VI_SENSOR_CLK,
	PMUX_FUNC_XIO,
	/* End of Tegra2 MUX selectors */
	PMUX_FUNC_BLINK,
	PMUX_FUNC_CEC,
	PMUX_FUNC_CLK12,
	PMUX_FUNC_DAP,
	PMUX_FUNC_DAPSDMMC2,
	PMUX_FUNC_DDR,
	PMUX_FUNC_DEV3,
	PMUX_FUNC_DTV,
	PMUX_FUNC_VI_ALT1,
	PMUX_FUNC_VI_ALT2,
	PMUX_FUNC_VI_ALT3,
	PMUX_FUNC_EMC_DLL,
	PMUX_FUNC_EXTPERIPH1,
	PMUX_FUNC_EXTPERIPH2,
	PMUX_FUNC_EXTPERIPH3,
	PMUX_FUNC_GMI_ALT,
	PMUX_FUNC_HDA,
	PMUX_FUNC_HSI,
	PMUX_FUNC_I2C4,
	PMUX_FUNC_I2C5,
	PMUX_FUNC_I2CPWR,
	PMUX_FUNC_I2S0,
	PMUX_FUNC_I2S1,
	PMUX_FUNC_I2S2,
	PMUX_FUNC_I2S3,
	PMUX_FUNC_I2S4,
	PMUX_FUNC_NAND_ALT,
	PMUX_FUNC_POPSDIO4,
	PMUX_FUNC_POPSDMMC4,
	PMUX_FUNC_PWM0,
	PMUX_FUNC_PWM1,
	PMUX_FUNC_PWM2,
	PMUX_FUNC_PWM3,
	PMUX_FUNC_SATA,
	PMUX_FUNC_SPI5,
	PMUX_FUNC_SPI6,
	PMUX_FUNC_SYSCLK,
	PMUX_FUNC_VGP1,
	PMUX_FUNC_VGP2,
	PMUX_FUNC_VGP3,
	PMUX_FUNC_VGP4,
	PMUX_FUNC_VGP5,
	PMUX_FUNC_VGP6,
	/* End of Tegra3 MUX selectors */
	PMUX_FUNC_USB,
	PMUX_FUNC_SOC,
	PMUX_FUNC_CPU,
	PMUX_FUNC_CLK,
	PMUX_FUNC_PWRON,
	PMUX_FUNC_PMI,
	PMUX_FUNC_CLDVFS,
	PMUX_FUNC_RESET_OUT_N,
	/* End of Tegra114 MUX selectors */

	PMUX_FUNC_SAFE,
	PMUX_FUNC_MAX,

	PMUX_FUNC_INVALID = 0x4000,
	PMUX_FUNC_RSVD1 = 0x8000,
	PMUX_FUNC_RSVD2 = 0x8001,
	PMUX_FUNC_RSVD3 = 0x8002,
	PMUX_FUNC_RSVD4 = 0x8003,
};

/* return 1 if a pmux_func is in range */
#define pmux_func_isvalid(func) \
	((((func) >= 0) && ((func) < PMUX_FUNC_MAX)) || \
	(((func) >= PMUX_FUNC_RSVD1) && ((func) <= PMUX_FUNC_RSVD4)))

/* return 1 if a pingrp is in range */
#define pmux_pingrp_isvalid(pin) (((pin) >= 0) && ((pin) < PINGRP_COUNT))

/* The pullup/pulldown state of a pin group */
enum pmux_pull {
	PMUX_PULL_NORMAL = 0,
	PMUX_PULL_DOWN,
	PMUX_PULL_UP,
};
/* return 1 if a pin_pupd_is in range */
#define pmux_pin_pupd_isvalid(pupd) (((pupd) >= PMUX_PULL_NORMAL) && \
				((pupd) <= PMUX_PULL_UP))

/* Defines whether a pin group is tristated or in normal operation */
enum pmux_tristate {
	PMUX_TRI_NORMAL = 0,
	PMUX_TRI_TRISTATE = 1,
};
/* return 1 if a pin_tristate_is in range */
#define pmux_pin_tristate_isvalid(tristate) \
	(((tristate) >= PMUX_TRI_NORMAL) && \
	((tristate) <= PMUX_TRI_TRISTATE))

enum pmux_pin_io {
	PMUX_PIN_OUTPUT = 0,
	PMUX_PIN_INPUT = 1,
	PMUX_PIN_NONE,
};
/* return 1 if a pin_io_is in range */
#define pmux_pin_io_isvalid(io) (((io) >= PMUX_PIN_OUTPUT) && \
				((io) <= PMUX_PIN_INPUT))

enum pmux_pin_lock {
	PMUX_PIN_LOCK_DEFAULT = 0,
	PMUX_PIN_LOCK_DISABLE,
	PMUX_PIN_LOCK_ENABLE,
};
/* return 1 if a pin_lock is in range */
#define pmux_pin_lock_isvalid(lock) (((lock) >= PMUX_PIN_LOCK_DEFAULT) && \
				((lock) <= PMUX_PIN_LOCK_ENABLE))

enum pmux_pin_od {
	PMUX_PIN_OD_DEFAULT = 0,
	PMUX_PIN_OD_DISABLE,
	PMUX_PIN_OD_ENABLE,
};
/* return 1 if a pin_od is in range */
#define pmux_pin_od_isvalid(od) (((od) >= PMUX_PIN_OD_DEFAULT) && \
				((od) <= PMUX_PIN_OD_ENABLE))

enum pmux_pin_ioreset {
	PMUX_PIN_IO_RESET_DEFAULT = 0,
	PMUX_PIN_IO_RESET_DISABLE,
	PMUX_PIN_IO_RESET_ENABLE,
};
/* return 1 if a pin_ioreset_is in range */
#define pmux_pin_ioreset_isvalid(ioreset) \
				(((ioreset) >= PMUX_PIN_IO_RESET_DEFAULT) && \
				((ioreset) <= PMUX_PIN_IO_RESET_ENABLE))

enum pmux_pin_rcv_sel {
	PMUX_PIN_RCV_SEL_DEFAULT = 0,
	PMUX_PIN_RCV_SEL_NORMAL,
	PMUX_PIN_RCV_SEL_HIGH,
};
/* return 1 if a pin_rcv_sel_is in range */
#define pmux_pin_rcv_sel_isvalid(rcv_sel) \
				(((rcv_sel) >= PMUX_PIN_RCV_SEL_DEFAULT) && \
				((rcv_sel) <= PMUX_PIN_RCV_SEL_HIGH))

/* Available power domains used by pin groups */
enum pmux_vddio {
	PMUX_VDDIO_BB = 0,
	PMUX_VDDIO_LCD,
	PMUX_VDDIO_VI,
	PMUX_VDDIO_UART,
	PMUX_VDDIO_DDR,
	PMUX_VDDIO_NAND,
	PMUX_VDDIO_SYS,
	PMUX_VDDIO_AUDIO,
	PMUX_VDDIO_SD,
	PMUX_VDDIO_CAM,
	PMUX_VDDIO_GMI,
	PMUX_VDDIO_PEXCTL,
	PMUX_VDDIO_SDMMC1,
	PMUX_VDDIO_SDMMC3,
	PMUX_VDDIO_SDMMC4,

	PMUX_VDDIO_NONE
};

#define PGRP_SLWF_NONE	-1
#define PGRP_SLWF_MAX	3
#define PGRP_SLWR_NONE	PGRP_SLWF_NONE
#define PGRP_SLWR_MAX	PGRP_SLWF_MAX

#define PGRP_DRVUP_NONE	-1
#define PGRP_DRVUP_MAX	127
#define PGRP_DRVDN_NONE	PGRP_DRVUP_NONE
#define PGRP_DRVDN_MAX	PGRP_DRVUP_MAX

#define PGRP_SCHMT_NONE	-1
#define PGRP_HSM_NONE	PGRP_SCHMT_NONE

/* return 1 if a padgrp is in range */
#define pmux_padgrp_isvalid(pd) (((pd) >= 0) && ((pd) < PDRIVE_PINGROUP_COUNT))

/* return 1 if a slew-rate rising/falling edge value is in range */
#define pmux_pad_slw_isvalid(slw) (((slw) == PGRP_SLWF_NONE) || \
				(((slw) >= 0) && ((slw) <= PGRP_SLWF_MAX)))

/* return 1 if a driver output pull-up/down strength code value is in range */
#define pmux_pad_drv_isvalid(drv) (((drv) == PGRP_DRVUP_NONE) || \
				(((drv) >= 0) && ((drv) <= PGRP_DRVUP_MAX)))

/* return 1 if a low-power mode value is in range */
#define pmux_pad_lpmd_isvalid(lpm) (((lpm) == PGRP_LPMD_NONE) || \
				(((lpm) >= 0) && ((lpm) <= PGRP_LPMD_X)))

/* Defines a pin group cfg's low-power mode select */
enum pgrp_lpmd {
	PGRP_LPMD_X8 = 0,
	PGRP_LPMD_X4,
	PGRP_LPMD_X2,
	PGRP_LPMD_X,
	PGRP_LPMD_NONE = -1,
};

/* Defines whether a pin group cfg's schmidt is enabled or not */
enum pgrp_schmt {
	PGRP_SCHMT_DISABLE = 0,
	PGRP_SCHMT_ENABLE = 1,
};

/* Defines whether a pin group cfg's high-speed mode is enabled or not */
enum pgrp_hsm {
	PGRP_HSM_DISABLE = 0,
	PGRP_HSM_ENABLE = 1,
};

/*
 * This defines the configuration for a pin group's pad control config
 */
struct padctrl_config {
	enum pdrive_pingrp padgrp;	/* pin group PDRIVE_PINGRP_x */
	int slwf;			/* falling edge slew         */
	int slwr;			/* rising edge slew          */
	int drvup;			/* pull-up drive strength    */
	int drvdn;			/* pull-down drive strength  */
	enum pgrp_lpmd lpmd;		/* low-power mode selection  */
	enum pgrp_schmt schmt;		/* schmidt enable            */
	enum pgrp_hsm hsm;		/* high-speed mode enable    */
};

/* Tegra124 pin drive group and pin mux registers */
#define PDRIVE_PINGROUP_OFFSET	(0x868 >> 2)
#define PMUX_OFFSET	((0x3000 >> 2) - PDRIVE_PINGROUP_OFFSET - \
				PDRIVE_PINGROUP_COUNT)
struct pmux_tri_ctlr {
	uint pmt_reserved0[9];		/* ABP_MISC_PP_ offsets 00-20 */
	uint pmt_cfg_ctl;		/* _CONFIG_CTL_0, offset 24        */

	uint pmt_reserved[528];		/* ABP_MISC_PP_ reserved offs 28-864 */

	uint pmt_drive[PDRIVE_PINGROUP_COUNT];	/* pin drive grps offs 868 */
	uint pmt_reserved5[PMUX_OFFSET];
	uint pmt_ctl[PINGRP_COUNT];	/* mux/pupd/tri regs, offset 0x3000 */
};

/*
 * This defines the configuration for a pin, including the function assigned,
 * pull up/down settings and tristate settings. Having set up one of these
 * you can call pinmux_config_pingroup() to configure a pin in one step. Also
 * available is pinmux_config_table() to configure a list of pins.
 */
struct pingroup_config {
	enum pmux_pingrp pingroup;	/* pin group PINGRP_...             */
	enum pmux_func func;		/* function to assign FUNC_...      */
	enum pmux_pull pull;		/* pull up/down/normal PMUX_PULL_...*/
	enum pmux_tristate tristate;	/* tristate or normal PMUX_TRI_...  */
	enum pmux_pin_io io;		/* input or output PMUX_PIN_...  */
	enum pmux_pin_lock lock;	/* lock enable/disable PMUX_PIN...  */
	enum pmux_pin_od od;		/* open-drain or push-pull driver  */
	enum pmux_pin_ioreset ioreset;	/* input/output reset PMUX_PIN...  */
	enum pmux_pin_rcv_sel rcv_sel;	/* select between High and Normal  */
					/* VIL/VIH receivers */
};

/* Set a pin group to tristate */
void pinmux_tristate_enable(enum pmux_pingrp pin);

/* Set a pin group to normal (non tristate) */
void pinmux_tristate_disable(enum pmux_pingrp pin);

/* Set the pull up/down feature for a pin group */
void pinmux_set_pullupdown(enum pmux_pingrp pin, enum pmux_pull pupd);

/* Set the mux function for a pin group */
void pinmux_set_func(enum pmux_pingrp pin, enum pmux_func func);

/* Set the complete configuration for a pin group */
void pinmux_config_pingroup(struct pingroup_config *config);

/* Set a pin group to tristate or normal */
void pinmux_set_tristate(enum pmux_pingrp pin, int enable);

/* Set a pin group as input or output */
void pinmux_set_io(enum pmux_pingrp pin, enum pmux_pin_io io);

/**
 * Configure a list of pin groups
 *
 * @param config	List of config items
 * @param len		Number of config items in list
 */
void pinmux_config_table(struct pingroup_config *config, int len);

/* Set a group of pins from a table */
void pinmux_init(void);

/**
 * Set the GP pad configs
 *
 * @param config	List of config items
 * @param len		Number of config items in list
 */
void padgrp_config_table(struct padctrl_config *config, int len);

#endif	/* _TEGRA124_PINMUX_H_ */
