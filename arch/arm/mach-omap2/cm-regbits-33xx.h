/*
 * AM33XX Power Management register bits
 *
 * This file is automatically generated from the AM33XX hardware databases.
 *
 * Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */


#ifndef __ARCH_ARM_MACH_OMAP2_CM_REGBITS_AM33XX_H
#define __ARCH_ARM_MACH_OMAP2_CM_REGBITS_AM33XX_H

/*
 * Used by CM_AUTOIDLE_DPLL_CORE, CM_AUTOIDLE_DPLL_DDR, CM_AUTOIDLE_DPLL_DISP,
 * CM_AUTOIDLE_DPLL_MPU, CM_AUTOIDLE_DPLL_PER
 */
#define AM33XX_AUTO_DPLL_MODE_SHIFT			0
#define AM33XX_AUTO_DPLL_MODE_MASK			(0x7 << 0)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_ADC_FCLK_SHIFT		14
#define AM33XX_CLKACTIVITY_ADC_FCLK_MASK		(1 << 16)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_CAN_CLK_SHIFT		11
#define AM33XX_CLKACTIVITY_CAN_CLK_MASK			(1 << 11)

/* Used by CM_PER_CLK_24MHZ_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_CLK_24MHZ_GCLK_SHIFT		4
#define AM33XX_CLKACTIVITY_CLK_24MHZ_GCLK_MASK		(1 << 4)

/* Used by CM_PER_CPSW_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_CPSW_125MHZ_GCLK_SHIFT	4
#define AM33XX_CLKACTIVITY_CPSW_125MHZ_GCLK_MASK	(1 << 4)

/* Used by CM_PER_L4HS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_CPSW_250MHZ_GCLK_SHIFT	4
#define AM33XX_CLKACTIVITY_CPSW_250MHZ_GCLK_MASK	(1 << 4)

/* Used by CM_PER_L4HS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_CPSW_50MHZ_GCLK_SHIFT	5
#define AM33XX_CLKACTIVITY_CPSW_50MHZ_GCLK_MASK		(1 << 5)

/* Used by CM_PER_L4HS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_CPSW_5MHZ_GCLK_SHIFT		6
#define AM33XX_CLKACTIVITY_CPSW_5MHZ_GCLK_MASK		(1 << 6)

/* Used by CM_PER_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_CPTS_RFT_GCLK_SHIFT		6
#define AM33XX_CLKACTIVITY_CPTS_RFT_GCLK_MASK		(1 << 6)

/* Used by CM_CEFUSE_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_CUST_EFUSE_SYS_CLK_SHIFT	9
#define AM33XX_CLKACTIVITY_CUST_EFUSE_SYS_CLK_MASK	(1 << 9)

/* Used by CM_L3_AON_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_DBGSYSCLK_SHIFT		2
#define AM33XX_CLKACTIVITY_DBGSYSCLK_MASK		(1 << 2)

/* Used by CM_L3_AON_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_DEBUG_CLKA_SHIFT		4
#define AM33XX_CLKACTIVITY_DEBUG_CLKA_MASK		(1 << 4)

/* Used by CM_PER_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_EMIF_GCLK_SHIFT		2
#define AM33XX_CLKACTIVITY_EMIF_GCLK_MASK		(1 << 2)

/* Used by CM_GFX_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GFX_FCLK_SHIFT		9
#define AM33XX_CLKACTIVITY_GFX_FCLK_MASK		(1 << 9)

/* Used by CM_GFX_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GFX_L3_GCLK_SHIFT		8
#define AM33XX_CLKACTIVITY_GFX_L3_GCLK_MASK		(1 << 8)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GPIO0_GDBCLK_SHIFT		8
#define AM33XX_CLKACTIVITY_GPIO0_GDBCLK_MASK		(1 << 8)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GPIO_1_GDBCLK_SHIFT		19
#define AM33XX_CLKACTIVITY_GPIO_1_GDBCLK_MASK		(1 << 19)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GPIO_2_GDBCLK_SHIFT		20
#define AM33XX_CLKACTIVITY_GPIO_2_GDBCLK_MASK		(1 << 20)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GPIO_3_GDBCLK_SHIFT		21
#define AM33XX_CLKACTIVITY_GPIO_3_GDBCLK_MASK		(1 << 21)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GPIO_4_GDBCLK_SHIFT		22
#define AM33XX_CLKACTIVITY_GPIO_4_GDBCLK_MASK		(1 << 22)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GPIO_5_GDBCLK_SHIFT		26
#define AM33XX_CLKACTIVITY_GPIO_5_GDBCLK_MASK		(1 << 26)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_GPIO_6_GDBCLK_SHIFT		18
#define AM33XX_CLKACTIVITY_GPIO_6_GDBCLK_MASK		(1 << 18)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_I2C0_GFCLK_SHIFT		11
#define AM33XX_CLKACTIVITY_I2C0_GFCLK_MASK		(1 << 11)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_I2C_FCLK_SHIFT		24
#define AM33XX_CLKACTIVITY_I2C_FCLK_MASK		(1 << 24)

/* Used by CM_PER_ICSS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_ICSS_IEP_GCLK_SHIFT		5
#define AM33XX_CLKACTIVITY_ICSS_IEP_GCLK_MASK		(1 << 5)

/* Used by CM_PER_ICSS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_ICSS_OCP_GCLK_SHIFT		4
#define AM33XX_CLKACTIVITY_ICSS_OCP_GCLK_MASK		(1 << 4)

/* Used by CM_PER_ICSS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_ICSS_UART_GCLK_SHIFT		6
#define AM33XX_CLKACTIVITY_ICSS_UART_GCLK_MASK		(1 << 6)

/* Used by CM_PER_L3S_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L3S_GCLK_SHIFT		3
#define AM33XX_CLKACTIVITY_L3S_GCLK_MASK		(1 << 3)

/* Used by CM_L3_AON_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L3_AON_GCLK_SHIFT		3
#define AM33XX_CLKACTIVITY_L3_AON_GCLK_MASK		(1 << 3)

/* Used by CM_PER_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L3_GCLK_SHIFT		4
#define AM33XX_CLKACTIVITY_L3_GCLK_MASK			(1 << 4)

/* Used by CM_PER_L4FW_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L4FW_GCLK_SHIFT		8
#define AM33XX_CLKACTIVITY_L4FW_GCLK_MASK		(1 << 8)

/* Used by CM_PER_L4HS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L4HS_GCLK_SHIFT		3
#define AM33XX_CLKACTIVITY_L4HS_GCLK_MASK		(1 << 3)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L4LS_GCLK_SHIFT		8
#define AM33XX_CLKACTIVITY_L4LS_GCLK_MASK		(1 << 8)

/* Used by CM_GFX_L4LS_GFX_CLKSTCTRL__1 */
#define AM33XX_CLKACTIVITY_L4LS_GFX_GCLK_SHIFT		8
#define AM33XX_CLKACTIVITY_L4LS_GFX_GCLK_MASK		(1 << 8)

/* Used by CM_CEFUSE_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L4_CEFUSE_GICLK_SHIFT	8
#define AM33XX_CLKACTIVITY_L4_CEFUSE_GICLK_MASK		(1 << 8)

/* Used by CM_RTC_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L4_RTC_GCLK_SHIFT		8
#define AM33XX_CLKACTIVITY_L4_RTC_GCLK_MASK		(1 << 8)

/* Used by CM_L4_WKUP_AON_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L4_WKUP_AON_GCLK_SHIFT	2
#define AM33XX_CLKACTIVITY_L4_WKUP_AON_GCLK_MASK	(1 << 2)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_L4_WKUP_GCLK_SHIFT		2
#define AM33XX_CLKACTIVITY_L4_WKUP_GCLK_MASK		(1 << 2)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_LCDC_GCLK_SHIFT		17
#define AM33XX_CLKACTIVITY_LCDC_GCLK_MASK		(1 << 17)

/* Used by CM_PER_LCDC_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_LCDC_L3_OCP_GCLK_SHIFT	4
#define AM33XX_CLKACTIVITY_LCDC_L3_OCP_GCLK_MASK	(1 << 4)

/* Used by CM_PER_LCDC_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_LCDC_L4_OCP_GCLK_SHIFT	5
#define AM33XX_CLKACTIVITY_LCDC_L4_OCP_GCLK_MASK	(1 << 5)

/* Used by CM_PER_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_MCASP_GCLK_SHIFT		7
#define AM33XX_CLKACTIVITY_MCASP_GCLK_MASK		(1 << 7)

/* Used by CM_PER_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_MMC_FCLK_SHIFT		3
#define AM33XX_CLKACTIVITY_MMC_FCLK_MASK		(1 << 3)

/* Used by CM_MPU_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_MPU_CLK_SHIFT		2
#define AM33XX_CLKACTIVITY_MPU_CLK_MASK			(1 << 2)

/* Used by CM_PER_OCPWP_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_OCPWP_L3_GCLK_SHIFT		4
#define AM33XX_CLKACTIVITY_OCPWP_L3_GCLK_MASK		(1 << 4)

/* Used by CM_PER_OCPWP_L3_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_OCPWP_L4_GCLK_SHIFT		5
#define AM33XX_CLKACTIVITY_OCPWP_L4_GCLK_MASK		(1 << 5)

/* Used by CM_RTC_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_RTC_32KCLK_SHIFT		9
#define AM33XX_CLKACTIVITY_RTC_32KCLK_MASK		(1 << 9)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_SPI_GCLK_SHIFT		25
#define AM33XX_CLKACTIVITY_SPI_GCLK_MASK		(1 << 25)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_SR_SYSCLK_SHIFT		3
#define AM33XX_CLKACTIVITY_SR_SYSCLK_MASK		(1 << 3)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_TIMER0_GCLK_SHIFT		10
#define AM33XX_CLKACTIVITY_TIMER0_GCLK_MASK		(1 << 10)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_TIMER1_GCLK_SHIFT		13
#define AM33XX_CLKACTIVITY_TIMER1_GCLK_MASK		(1 << 13)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_TIMER2_GCLK_SHIFT		14
#define AM33XX_CLKACTIVITY_TIMER2_GCLK_MASK		(1 << 14)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_TIMER3_GCLK_SHIFT		15
#define AM33XX_CLKACTIVITY_TIMER3_GCLK_MASK		(1 << 15)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_TIMER4_GCLK_SHIFT		16
#define AM33XX_CLKACTIVITY_TIMER4_GCLK_MASK		(1 << 16)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_TIMER5_GCLK_SHIFT		27
#define AM33XX_CLKACTIVITY_TIMER5_GCLK_MASK		(1 << 27)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_TIMER6_GCLK_SHIFT		28
#define AM33XX_CLKACTIVITY_TIMER6_GCLK_MASK		(1 << 28)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_TIMER7_GCLK_SHIFT		13
#define AM33XX_CLKACTIVITY_TIMER7_GCLK_MASK		(1 << 13)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_UART0_GFCLK_SHIFT		12
#define AM33XX_CLKACTIVITY_UART0_GFCLK_MASK		(1 << 12)

/* Used by CM_PER_L4LS_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_UART_GFCLK_SHIFT		10
#define AM33XX_CLKACTIVITY_UART_GFCLK_MASK		(1 << 10)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_WDT0_GCLK_SHIFT		9
#define AM33XX_CLKACTIVITY_WDT0_GCLK_MASK		(1 << 9)

/* Used by CM_WKUP_CLKSTCTRL */
#define AM33XX_CLKACTIVITY_WDT1_GCLK_SHIFT		4
#define AM33XX_CLKACTIVITY_WDT1_GCLK_MASK		(1 << 4)

/* Used by CLKSEL_GFX_FCLK */
#define AM33XX_CLKDIV_SEL_GFX_FCLK_SHIFT		0
#define AM33XX_CLKDIV_SEL_GFX_FCLK_MASK			(1 << 0)

/* Used by CM_CLKOUT_CTRL */
#define AM33XX_CLKOUT2DIV_SHIFT				3
#define AM33XX_CLKOUT2DIV_MASK				(7 << 3)

/* Used by CM_CLKOUT_CTRL */
#define AM33XX_CLKOUT2EN_SHIFT				7
#define AM33XX_CLKOUT2EN_MASK				(1 << 7)

/* Used by CM_CLKOUT_CTRL */
#define AM33XX_CLKOUT2SOURCE_SHIFT			0
#define AM33XX_CLKOUT2SOURCE_MASK			(7 << 0)

/*
 * Used by CLKSEL_GPIO0_DBCLK, CLKSEL_LCDC_PIXEL_CLK, CLKSEL_TIMER2_CLK,
 * CLKSEL_TIMER3_CLK, CLKSEL_TIMER4_CLK, CLKSEL_TIMER5_CLK, CLKSEL_TIMER6_CLK,
 * CLKSEL_TIMER7_CLK
 */
#define AM33XX_CLKSEL_SHIFT				0
#define AM33XX_CLKSEL_MASK				(0x01 << 0)

/*
 * Renamed from CLKSEL Used by CLKSEL_ICSS_OCP_CLK, CLKSEL_WDT1_CLK,
 * CM_CPTS_RFT_CLKSEL
 */
#define AM33XX_CLKSEL_0_0_SHIFT				0
#define AM33XX_CLKSEL_0_0_MASK				(1 << 0)

#define AM33XX_CLKSEL_0_1_SHIFT				0
#define AM33XX_CLKSEL_0_1_MASK				(3 << 0)

/* Renamed from CLKSEL Used by CLKSEL_TIMER1MS_CLK */
#define AM33XX_CLKSEL_0_2_SHIFT				0
#define AM33XX_CLKSEL_0_2_MASK				(7 << 0)

/* Used by CLKSEL_GFX_FCLK */
#define AM33XX_CLKSEL_GFX_FCLK_SHIFT			1
#define AM33XX_CLKSEL_GFX_FCLK_MASK			(1 << 1)

/*
 * Used by CM_MPU_CLKSTCTRL, CM_RTC_CLKSTCTRL, CM_PER_CLK_24MHZ_CLKSTCTRL,
 * CM_PER_CPSW_CLKSTCTRL, CM_PER_ICSS_CLKSTCTRL, CM_PER_L3S_CLKSTCTRL,
 * CM_PER_L3_CLKSTCTRL, CM_PER_L4FW_CLKSTCTRL, CM_PER_L4HS_CLKSTCTRL,
 * CM_PER_L4LS_CLKSTCTRL, CM_PER_LCDC_CLKSTCTRL, CM_PER_OCPWP_L3_CLKSTCTRL,
 * CM_L3_AON_CLKSTCTRL, CM_L4_WKUP_AON_CLKSTCTRL, CM_WKUP_CLKSTCTRL,
 * CM_GFX_L3_CLKSTCTRL, CM_GFX_L4LS_GFX_CLKSTCTRL__1, CM_CEFUSE_CLKSTCTRL
 */
#define AM33XX_CLKTRCTRL_SHIFT				0
#define AM33XX_CLKTRCTRL_MASK				(0x3 << 0)

/*
 * Used by CM_SSC_DELTAMSTEP_DPLL_CORE, CM_SSC_DELTAMSTEP_DPLL_DDR,
 * CM_SSC_DELTAMSTEP_DPLL_DISP, CM_SSC_DELTAMSTEP_DPLL_MPU,
 * CM_SSC_DELTAMSTEP_DPLL_PER
 */
#define AM33XX_DELTAMSTEP_SHIFT				0
#define AM33XX_DELTAMSTEP_MASK				(0x19 << 0)

/* Used by CM_CLKSEL_DPLL_DDR, CM_CLKSEL_DPLL_DISP, CM_CLKSEL_DPLL_MPU */
#define AM33XX_DPLL_BYP_CLKSEL_SHIFT			23
#define AM33XX_DPLL_BYP_CLKSEL_MASK			(1 << 23)

/* Used by CM_CLKDCOLDO_DPLL_PER */
#define AM33XX_DPLL_CLKDCOLDO_GATE_CTRL_SHIFT		8
#define AM33XX_DPLL_CLKDCOLDO_GATE_CTRL_MASK		(1 << 8)

/* Used by CM_CLKDCOLDO_DPLL_PER */
#define AM33XX_DPLL_CLKDCOLDO_PWDN_SHIFT		12
#define AM33XX_DPLL_CLKDCOLDO_PWDN_MASK			(1 << 12)

/* Used by CM_DIV_M2_DPLL_DDR, CM_DIV_M2_DPLL_DISP, CM_DIV_M2_DPLL_MPU */
#define AM33XX_DPLL_CLKOUT_DIV_SHIFT			0
#define AM33XX_DPLL_CLKOUT_DIV_MASK			(0x1f << 0)

/* Renamed from DPLL_CLKOUT_DIV Used by CM_DIV_M2_DPLL_PER */
#define AM33XX_DPLL_CLKOUT_DIV_0_6_SHIFT		0
#define AM33XX_DPLL_CLKOUT_DIV_0_6_MASK			(0x06 << 0)

/* Used by CM_DIV_M2_DPLL_DDR, CM_DIV_M2_DPLL_DISP, CM_DIV_M2_DPLL_MPU */
#define AM33XX_DPLL_CLKOUT_DIVCHACK_SHIFT		5
#define AM33XX_DPLL_CLKOUT_DIVCHACK_MASK		(1 << 5)

/* Renamed from DPLL_CLKOUT_DIVCHACK Used by CM_DIV_M2_DPLL_PER */
#define AM33XX_DPLL_CLKOUT_DIVCHACK_M2_PER_SHIFT	7
#define AM33XX_DPLL_CLKOUT_DIVCHACK_M2_PER_MASK		(1 << 7)

/*
 * Used by CM_DIV_M2_DPLL_DDR, CM_DIV_M2_DPLL_DISP, CM_DIV_M2_DPLL_MPU,
 * CM_DIV_M2_DPLL_PER
 */
#define AM33XX_DPLL_CLKOUT_GATE_CTRL_SHIFT		8
#define AM33XX_DPLL_CLKOUT_GATE_CTRL_MASK		(1 << 8)

/*
 * Used by CM_CLKSEL_DPLL_CORE, CM_CLKSEL_DPLL_DDR, CM_CLKSEL_DPLL_DISP,
 * CM_CLKSEL_DPLL_MPU
 */
#define AM33XX_DPLL_DIV_SHIFT				0
#define AM33XX_DPLL_DIV_MASK				(0x7f << 0)

#define AM33XX_DPLL_PER_DIV_MASK			(0xff << 0)

/* Renamed from DPLL_DIV Used by CM_CLKSEL_DPLL_PERIPH */
#define AM33XX_DPLL_DIV_0_7_SHIFT			0
#define AM33XX_DPLL_DIV_0_7_MASK			(0x07 << 0)

/*
 * Used by CM_CLKMODE_DPLL_CORE, CM_CLKMODE_DPLL_DDR, CM_CLKMODE_DPLL_DISP,
 * CM_CLKMODE_DPLL_MPU
 */
#define AM33XX_DPLL_DRIFTGUARD_EN_SHIFT			8
#define AM33XX_DPLL_DRIFTGUARD_EN_MASK			(1 << 8)

/*
 * Used by CM_CLKMODE_DPLL_CORE, CM_CLKMODE_DPLL_DDR, CM_CLKMODE_DPLL_DISP,
 * CM_CLKMODE_DPLL_MPU, CM_CLKMODE_DPLL_PER
 */
#define AM33XX_DPLL_EN_SHIFT				0
#define AM33XX_DPLL_EN_MASK				(0x7 << 0)

/*
 * Used by CM_CLKMODE_DPLL_CORE, CM_CLKMODE_DPLL_DDR, CM_CLKMODE_DPLL_DISP,
 * CM_CLKMODE_DPLL_MPU
 */
#define AM33XX_DPLL_LPMODE_EN_SHIFT			10
#define AM33XX_DPLL_LPMODE_EN_MASK			(1 << 10)

/*
 * Used by CM_CLKSEL_DPLL_CORE, CM_CLKSEL_DPLL_DDR, CM_CLKSEL_DPLL_DISP,
 * CM_CLKSEL_DPLL_MPU
 */
#define AM33XX_DPLL_MULT_SHIFT				8
#define AM33XX_DPLL_MULT_MASK				(0x7ff << 8)

/* Renamed from DPLL_MULT Used by CM_CLKSEL_DPLL_PERIPH */
#define AM33XX_DPLL_MULT_PERIPH_SHIFT			8
#define AM33XX_DPLL_MULT_PERIPH_MASK			(0xfff << 8)

/*
 * Used by CM_CLKMODE_DPLL_CORE, CM_CLKMODE_DPLL_DDR, CM_CLKMODE_DPLL_DISP,
 * CM_CLKMODE_DPLL_MPU
 */
#define AM33XX_DPLL_REGM4XEN_SHIFT			11
#define AM33XX_DPLL_REGM4XEN_MASK			(1 << 11)

/* Used by CM_CLKSEL_DPLL_PERIPH */
#define AM33XX_DPLL_SD_DIV_SHIFT			24
#define AM33XX_DPLL_SD_DIV_MASK				(24, 31)

/*
 * Used by CM_CLKMODE_DPLL_CORE, CM_CLKMODE_DPLL_DDR, CM_CLKMODE_DPLL_DISP,
 * CM_CLKMODE_DPLL_MPU, CM_CLKMODE_DPLL_PER
 */
#define AM33XX_DPLL_SSC_ACK_SHIFT			13
#define AM33XX_DPLL_SSC_ACK_MASK			(1 << 13)

/*
 * Used by CM_CLKMODE_DPLL_CORE, CM_CLKMODE_DPLL_DDR, CM_CLKMODE_DPLL_DISP,
 * CM_CLKMODE_DPLL_MPU, CM_CLKMODE_DPLL_PER
 */
#define AM33XX_DPLL_SSC_DOWNSPREAD_SHIFT		14
#define AM33XX_DPLL_SSC_DOWNSPREAD_MASK			(1 << 14)

/*
 * Used by CM_CLKMODE_DPLL_CORE, CM_CLKMODE_DPLL_DDR, CM_CLKMODE_DPLL_DISP,
 * CM_CLKMODE_DPLL_MPU, CM_CLKMODE_DPLL_PER
 */
#define AM33XX_DPLL_SSC_EN_SHIFT			12
#define AM33XX_DPLL_SSC_EN_MASK				(1 << 12)

/* Used by CM_DIV_M4_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT1_DIV_SHIFT		0
#define AM33XX_HSDIVIDER_CLKOUT1_DIV_MASK		(0x1f << 0)

/* Used by CM_DIV_M4_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT1_DIVCHACK_SHIFT		5
#define AM33XX_HSDIVIDER_CLKOUT1_DIVCHACK_MASK		(1 << 5)

/* Used by CM_DIV_M4_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT1_GATE_CTRL_SHIFT	8
#define AM33XX_HSDIVIDER_CLKOUT1_GATE_CTRL_MASK		(1 << 8)

/* Used by CM_DIV_M4_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT1_PWDN_SHIFT		12
#define AM33XX_HSDIVIDER_CLKOUT1_PWDN_MASK		(1 << 12)

/* Used by CM_DIV_M5_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT2_DIV_SHIFT		0
#define AM33XX_HSDIVIDER_CLKOUT2_DIV_MASK		(0x1f << 0)

/* Used by CM_DIV_M5_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT2_DIVCHACK_SHIFT		5
#define AM33XX_HSDIVIDER_CLKOUT2_DIVCHACK_MASK		(1 << 5)

/* Used by CM_DIV_M5_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT2_GATE_CTRL_SHIFT	8
#define AM33XX_HSDIVIDER_CLKOUT2_GATE_CTRL_MASK		(1 << 8)

/* Used by CM_DIV_M5_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT2_PWDN_SHIFT		12
#define AM33XX_HSDIVIDER_CLKOUT2_PWDN_MASK		(1 << 12)

/* Used by CM_DIV_M6_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT3_DIV_SHIFT		0
#define AM33XX_HSDIVIDER_CLKOUT3_DIV_MASK		(0x04 << 0)

/* Used by CM_DIV_M6_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT3_DIVCHACK_SHIFT		5
#define AM33XX_HSDIVIDER_CLKOUT3_DIVCHACK_MASK		(1 << 5)

/* Used by CM_DIV_M6_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT3_GATE_CTRL_SHIFT	8
#define AM33XX_HSDIVIDER_CLKOUT3_GATE_CTRL_MASK		(1 << 8)

/* Used by CM_DIV_M6_DPLL_CORE */
#define AM33XX_HSDIVIDER_CLKOUT3_PWDN_SHIFT		12
#define AM33XX_HSDIVIDER_CLKOUT3_PWDN_MASK		(1 << 12)

/*
 * Used by CM_MPU_MPU_CLKCTRL, CM_RTC_RTC_CLKCTRL, CM_PER_AES0_CLKCTRL,
 * CM_PER_AES1_CLKCTRL, CM_PER_CLKDIV32K_CLKCTRL, CM_PER_CPGMAC0_CLKCTRL,
 * CM_PER_DCAN0_CLKCTRL, CM_PER_DCAN1_CLKCTRL, CM_PER_DES_CLKCTRL,
 * CM_PER_ELM_CLKCTRL, CM_PER_EMIF_CLKCTRL, CM_PER_EMIF_FW_CLKCTRL,
 * CM_PER_EPWMSS0_CLKCTRL, CM_PER_EPWMSS1_CLKCTRL, CM_PER_EPWMSS2_CLKCTRL,
 * CM_PER_GPIO1_CLKCTRL, CM_PER_GPIO2_CLKCTRL, CM_PER_GPIO3_CLKCTRL,
 * CM_PER_GPIO4_CLKCTRL, CM_PER_GPIO5_CLKCTRL, CM_PER_GPIO6_CLKCTRL,
 * CM_PER_GPMC_CLKCTRL, CM_PER_I2C1_CLKCTRL, CM_PER_I2C2_CLKCTRL,
 * CM_PER_ICSS_CLKCTRL, CM_PER_IEEE5000_CLKCTRL, CM_PER_L3_CLKCTRL,
 * CM_PER_L3_INSTR_CLKCTRL, CM_PER_L4FW_CLKCTRL, CM_PER_L4HS_CLKCTRL,
 * CM_PER_L4LS_CLKCTRL, CM_PER_LCDC_CLKCTRL, CM_PER_MAILBOX0_CLKCTRL,
 * CM_PER_MAILBOX1_CLKCTRL, CM_PER_MCASP0_CLKCTRL, CM_PER_MCASP1_CLKCTRL,
 * CM_PER_MCASP2_CLKCTRL, CM_PER_MLB_CLKCTRL, CM_PER_MMC0_CLKCTRL,
 * CM_PER_MMC1_CLKCTRL, CM_PER_MMC2_CLKCTRL, CM_PER_MSTR_EXPS_CLKCTRL,
 * CM_PER_OCMCRAM_CLKCTRL, CM_PER_OCPWP_CLKCTRL, CM_PER_PCIE_CLKCTRL,
 * CM_PER_PKA_CLKCTRL, CM_PER_RNG_CLKCTRL, CM_PER_SHA0_CLKCTRL,
 * CM_PER_SLV_EXPS_CLKCTRL, CM_PER_SPARE0_CLKCTRL, CM_PER_SPARE1_CLKCTRL,
 * CM_PER_SPARE_CLKCTRL, CM_PER_SPI0_CLKCTRL, CM_PER_SPI1_CLKCTRL,
 * CM_PER_SPI2_CLKCTRL, CM_PER_SPI3_CLKCTRL, CM_PER_SPINLOCK_CLKCTRL,
 * CM_PER_TIMER2_CLKCTRL, CM_PER_TIMER3_CLKCTRL, CM_PER_TIMER4_CLKCTRL,
 * CM_PER_TIMER5_CLKCTRL, CM_PER_TIMER6_CLKCTRL, CM_PER_TIMER7_CLKCTRL,
 * CM_PER_TPCC_CLKCTRL, CM_PER_TPTC0_CLKCTRL, CM_PER_TPTC1_CLKCTRL,
 * CM_PER_TPTC2_CLKCTRL, CM_PER_UART1_CLKCTRL, CM_PER_UART2_CLKCTRL,
 * CM_PER_UART3_CLKCTRL, CM_PER_UART4_CLKCTRL, CM_PER_UART5_CLKCTRL,
 * CM_PER_USB0_CLKCTRL, CM_WKUP_ADC_TSC_CLKCTRL, CM_WKUP_CONTROL_CLKCTRL,
 * CM_WKUP_DEBUGSS_CLKCTRL, CM_WKUP_GPIO0_CLKCTRL, CM_WKUP_I2C0_CLKCTRL,
 * CM_WKUP_L4WKUP_CLKCTRL, CM_WKUP_SMARTREFLEX0_CLKCTRL,
 * CM_WKUP_SMARTREFLEX1_CLKCTRL, CM_WKUP_TIMER0_CLKCTRL,
 * CM_WKUP_TIMER1_CLKCTRL, CM_WKUP_UART0_CLKCTRL, CM_WKUP_WDT0_CLKCTRL,
 * CM_WKUP_WDT1_CLKCTRL, CM_GFX_BITBLT_CLKCTRL, CM_GFX_GFX_CLKCTRL,
 * CM_GFX_MMUCFG_CLKCTRL, CM_GFX_MMUDATA_CLKCTRL, CM_CEFUSE_CEFUSE_CLKCTRL
 */
#define AM33XX_IDLEST_SHIFT				16
#define AM33XX_IDLEST_MASK				(0x3 << 16)
#define AM33XX_IDLEST_VAL				0x3

/* Used by CM_MAC_CLKSEL */
#define AM33XX_MII_CLK_SEL_SHIFT			2
#define AM33XX_MII_CLK_SEL_MASK				(1 << 2)

/*
 * Used by CM_SSC_MODFREQDIV_DPLL_CORE, CM_SSC_MODFREQDIV_DPLL_DDR,
 * CM_SSC_MODFREQDIV_DPLL_DISP, CM_SSC_MODFREQDIV_DPLL_MPU,
 * CM_SSC_MODFREQDIV_DPLL_PER
 */
#define AM33XX_MODFREQDIV_EXPONENT_SHIFT		8
#define AM33XX_MODFREQDIV_EXPONENT_MASK			(0x10 << 8)

/*
 * Used by CM_SSC_MODFREQDIV_DPLL_CORE, CM_SSC_MODFREQDIV_DPLL_DDR,
 * CM_SSC_MODFREQDIV_DPLL_DISP, CM_SSC_MODFREQDIV_DPLL_MPU,
 * CM_SSC_MODFREQDIV_DPLL_PER
 */
#define AM33XX_MODFREQDIV_MANTISSA_SHIFT		0
#define AM33XX_MODFREQDIV_MANTISSA_MASK			(0x06 << 0)

/*
 * Used by CM_MPU_MPU_CLKCTRL, CM_RTC_RTC_CLKCTRL, CM_PER_AES0_CLKCTRL,
 * CM_PER_AES1_CLKCTRL, CM_PER_CLKDIV32K_CLKCTRL, CM_PER_CPGMAC0_CLKCTRL,
 * CM_PER_DCAN0_CLKCTRL, CM_PER_DCAN1_CLKCTRL, CM_PER_DES_CLKCTRL,
 * CM_PER_ELM_CLKCTRL, CM_PER_EMIF_CLKCTRL, CM_PER_EMIF_FW_CLKCTRL,
 * CM_PER_EPWMSS0_CLKCTRL, CM_PER_EPWMSS1_CLKCTRL, CM_PER_EPWMSS2_CLKCTRL,
 * CM_PER_GPIO1_CLKCTRL, CM_PER_GPIO2_CLKCTRL, CM_PER_GPIO3_CLKCTRL,
 * CM_PER_GPIO4_CLKCTRL, CM_PER_GPIO5_CLKCTRL, CM_PER_GPIO6_CLKCTRL,
 * CM_PER_GPMC_CLKCTRL, CM_PER_I2C1_CLKCTRL, CM_PER_I2C2_CLKCTRL,
 * CM_PER_ICSS_CLKCTRL, CM_PER_IEEE5000_CLKCTRL, CM_PER_L3_CLKCTRL,
 * CM_PER_L3_INSTR_CLKCTRL, CM_PER_L4FW_CLKCTRL, CM_PER_L4HS_CLKCTRL,
 * CM_PER_L4LS_CLKCTRL, CM_PER_LCDC_CLKCTRL, CM_PER_MAILBOX0_CLKCTRL,
 * CM_PER_MAILBOX1_CLKCTRL, CM_PER_MCASP0_CLKCTRL, CM_PER_MCASP1_CLKCTRL,
 * CM_PER_MCASP2_CLKCTRL, CM_PER_MLB_CLKCTRL, CM_PER_MMC0_CLKCTRL,
 * CM_PER_MMC1_CLKCTRL, CM_PER_MMC2_CLKCTRL, CM_PER_MSTR_EXPS_CLKCTRL,
 * CM_PER_OCMCRAM_CLKCTRL, CM_PER_OCPWP_CLKCTRL, CM_PER_PCIE_CLKCTRL,
 * CM_PER_PKA_CLKCTRL, CM_PER_RNG_CLKCTRL, CM_PER_SHA0_CLKCTRL,
 * CM_PER_SLV_EXPS_CLKCTRL, CM_PER_SPARE0_CLKCTRL, CM_PER_SPARE1_CLKCTRL,
 * CM_PER_SPARE_CLKCTRL, CM_PER_SPI0_CLKCTRL, CM_PER_SPI1_CLKCTRL,
 * CM_PER_SPI2_CLKCTRL, CM_PER_SPI3_CLKCTRL, CM_PER_SPINLOCK_CLKCTRL,
 * CM_PER_TIMER2_CLKCTRL, CM_PER_TIMER3_CLKCTRL, CM_PER_TIMER4_CLKCTRL,
 * CM_PER_TIMER5_CLKCTRL, CM_PER_TIMER6_CLKCTRL, CM_PER_TIMER7_CLKCTRL,
 * CM_PER_TPCC_CLKCTRL, CM_PER_TPTC0_CLKCTRL, CM_PER_TPTC1_CLKCTRL,
 * CM_PER_TPTC2_CLKCTRL, CM_PER_UART1_CLKCTRL, CM_PER_UART2_CLKCTRL,
 * CM_PER_UART3_CLKCTRL, CM_PER_UART4_CLKCTRL, CM_PER_UART5_CLKCTRL,
 * CM_PER_USB0_CLKCTRL, CM_WKUP_ADC_TSC_CLKCTRL, CM_WKUP_CONTROL_CLKCTRL,
 * CM_WKUP_DEBUGSS_CLKCTRL, CM_WKUP_GPIO0_CLKCTRL, CM_WKUP_I2C0_CLKCTRL,
 * CM_WKUP_L4WKUP_CLKCTRL, CM_WKUP_SMARTREFLEX0_CLKCTRL,
 * CM_WKUP_SMARTREFLEX1_CLKCTRL, CM_WKUP_TIMER0_CLKCTRL,
 * CM_WKUP_TIMER1_CLKCTRL, CM_WKUP_UART0_CLKCTRL, CM_WKUP_WDT0_CLKCTRL,
 * CM_WKUP_WDT1_CLKCTRL, CM_WKUP_WKUP_M3_CLKCTRL, CM_GFX_BITBLT_CLKCTRL,
 * CM_GFX_GFX_CLKCTRL, CM_GFX_MMUCFG_CLKCTRL, CM_GFX_MMUDATA_CLKCTRL,
 * CM_CEFUSE_CEFUSE_CLKCTRL
 */
#define AM33XX_MODULEMODE_SHIFT				0
#define AM33XX_MODULEMODE_MASK				(0x3 << 0)

/* Used by CM_WKUP_DEBUGSS_CLKCTRL */
#define AM33XX_OPTCLK_DEBUG_CLKA_SHIFT			30
#define AM33XX_OPTCLK_DEBUG_CLKA_MASK			(1 << 30)

/* Used by CM_WKUP_DEBUGSS_CLKCTRL */
#define AM33XX_OPTFCLKEN_DBGSYSCLK_SHIFT		19
#define AM33XX_OPTFCLKEN_DBGSYSCLK_MASK			(1 << 19)

/* Used by CM_WKUP_GPIO0_CLKCTRL */
#define AM33XX_OPTFCLKEN_GPIO0_GDBCLK_SHIFT		18
#define AM33XX_OPTFCLKEN_GPIO0_GDBCLK_MASK		(1 << 18)

/* Used by CM_PER_GPIO1_CLKCTRL */
#define AM33XX_OPTFCLKEN_GPIO_1_GDBCLK_SHIFT		18
#define AM33XX_OPTFCLKEN_GPIO_1_GDBCLK_MASK		(1 << 18)

/* Used by CM_PER_GPIO2_CLKCTRL */
#define AM33XX_OPTFCLKEN_GPIO_2_GDBCLK_SHIFT		18
#define AM33XX_OPTFCLKEN_GPIO_2_GDBCLK_MASK		(1 << 18)

/* Used by CM_PER_GPIO3_CLKCTRL */
#define AM33XX_OPTFCLKEN_GPIO_3_GDBCLK_SHIFT		18
#define AM33XX_OPTFCLKEN_GPIO_3_GDBCLK_MASK		(1 << 18)

/* Used by CM_PER_GPIO4_CLKCTRL */
#define AM33XX_OPTFCLKEN_GPIO_4_GDBCLK_SHIFT		18
#define AM33XX_OPTFCLKEN_GPIO_4_GDBCLK_MASK		(1 << 18)

/* Used by CM_PER_GPIO5_CLKCTRL */
#define AM33XX_OPTFCLKEN_GPIO_5_GDBCLK_SHIFT		18
#define AM33XX_OPTFCLKEN_GPIO_5_GDBCLK_MASK		(1 << 18)

/* Used by CM_PER_GPIO6_CLKCTRL */
#define AM33XX_OPTFCLKEN_GPIO_6_GDBCLK_SHIFT		18
#define AM33XX_OPTFCLKEN_GPIO_6_GDBCLK_MASK		(1 << 18)

/*
 * Used by CM_MPU_MPU_CLKCTRL, CM_PER_CPGMAC0_CLKCTRL, CM_PER_ICSS_CLKCTRL,
 * CM_PER_IEEE5000_CLKCTRL, CM_PER_LCDC_CLKCTRL, CM_PER_MLB_CLKCTRL,
 * CM_PER_MSTR_EXPS_CLKCTRL, CM_PER_OCPWP_CLKCTRL, CM_PER_PCIE_CLKCTRL,
 * CM_PER_SPARE_CLKCTRL, CM_PER_TPTC0_CLKCTRL, CM_PER_TPTC1_CLKCTRL,
 * CM_PER_TPTC2_CLKCTRL, CM_PER_USB0_CLKCTRL, CM_WKUP_DEBUGSS_CLKCTRL,
 * CM_WKUP_WKUP_M3_CLKCTRL, CM_GFX_BITBLT_CLKCTRL, CM_GFX_GFX_CLKCTRL
 */
#define AM33XX_STBYST_SHIFT				18
#define AM33XX_STBYST_MASK				(1 << 18)

/* Used by CM_WKUP_DEBUGSS_CLKCTRL */
#define AM33XX_STM_PMD_CLKDIVSEL_SHIFT			27
#define AM33XX_STM_PMD_CLKDIVSEL_MASK			(0x29 << 27)

/* Used by CM_WKUP_DEBUGSS_CLKCTRL */
#define AM33XX_STM_PMD_CLKSEL_SHIFT			22
#define AM33XX_STM_PMD_CLKSEL_MASK			(0x23 << 22)

/*
 * Used by CM_IDLEST_DPLL_CORE, CM_IDLEST_DPLL_DDR, CM_IDLEST_DPLL_DISP,
 * CM_IDLEST_DPLL_MPU, CM_IDLEST_DPLL_PER
 */
#define AM33XX_ST_DPLL_CLK_SHIFT			0
#define AM33XX_ST_DPLL_CLK_MASK				(1 << 0)

/* Used by CM_CLKDCOLDO_DPLL_PER */
#define AM33XX_ST_DPLL_CLKDCOLDO_SHIFT			8
#define AM33XX_ST_DPLL_CLKDCOLDO_MASK			(1 << 8)

/*
 * Used by CM_DIV_M2_DPLL_DDR, CM_DIV_M2_DPLL_DISP, CM_DIV_M2_DPLL_MPU,
 * CM_DIV_M2_DPLL_PER
 */
#define AM33XX_ST_DPLL_CLKOUT_SHIFT			9
#define AM33XX_ST_DPLL_CLKOUT_MASK			(1 << 9)

/* Used by CM_DIV_M4_DPLL_CORE */
#define AM33XX_ST_HSDIVIDER_CLKOUT1_SHIFT		9
#define AM33XX_ST_HSDIVIDER_CLKOUT1_MASK		(1 << 9)

/* Used by CM_DIV_M5_DPLL_CORE */
#define AM33XX_ST_HSDIVIDER_CLKOUT2_SHIFT		9
#define AM33XX_ST_HSDIVIDER_CLKOUT2_MASK		(1 << 9)

/* Used by CM_DIV_M6_DPLL_CORE */
#define AM33XX_ST_HSDIVIDER_CLKOUT3_SHIFT		9
#define AM33XX_ST_HSDIVIDER_CLKOUT3_MASK		(1 << 9)

/*
 * Used by CM_IDLEST_DPLL_CORE, CM_IDLEST_DPLL_DDR, CM_IDLEST_DPLL_DISP,
 * CM_IDLEST_DPLL_MPU, CM_IDLEST_DPLL_PER
 */
#define AM33XX_ST_MN_BYPASS_SHIFT			8
#define AM33XX_ST_MN_BYPASS_MASK			(1 << 8)

/* Used by CM_WKUP_DEBUGSS_CLKCTRL */
#define AM33XX_TRC_PMD_CLKDIVSEL_SHIFT			24
#define AM33XX_TRC_PMD_CLKDIVSEL_MASK			(0x26 << 24)

/* Used by CM_WKUP_DEBUGSS_CLKCTRL */
#define AM33XX_TRC_PMD_CLKSEL_SHIFT			20
#define AM33XX_TRC_PMD_CLKSEL_MASK			(0x21 << 20)
#endif
