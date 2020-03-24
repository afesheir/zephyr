/*
 * Copyright (c) 2017, NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* SoC level DTS fixup file */

#define DT_NUM_IRQ_PRIO_BITS			DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define DT_NUM_MPU_REGIONS			DT_ARM_ARMV7M_MPU_E000ED90_ARM_NUM_MPU_REGIONS

#define DT_RTC_0_NAME				DT_LABEL(DT_INST(0, nxp_imx_gpt))
#define DT_RTC_1_NAME				DT_LABEL(DT_INST(1, nxp_imx_gpt))

#define DT_ETH_MCUX_0_NAME			DT_NXP_KINETIS_ETHERNET_402D8000_LABEL
#define DT_ETH_MCUX_0_MAC			DT_NXP_KINETIS_ETHERNET_402D8000_LOCAL_MAC_ADDRESS
#define DT_ETH_MCUX_0_IRQ_PRI			DT_NXP_KINETIS_ETHERNET_402D8000_IRQ_0_PRIORITY
#define DT_IRQ_ETH_COMMON			DT_NXP_KINETIS_ETHERNET_402D8000_IRQ_0
#define DT_IRQ_ETH_IEEE1588_TMR			DT_NXP_KINETIS_PTP_402D8000_PTP_IRQ_0

#define DT_ETH_MCUX_1_NAME			DT_NXP_KINETIS_ETHERNET_402D4000_LABEL
#define DT_ETH_MCUX_1_MAC			DT_NXP_KINETIS_ETHERNET_402D4000_LOCAL_MAC_ADDRESS
#define DT_ETH_MCUX_1_IRQ_PRI			DT_NXP_KINETIS_ETHERNET_402D4000_IRQ_0_PRIORITY
#define DT_IRQ_ETH1_COMMON			DT_NXP_KINETIS_ETHERNET_402D4000_IRQ_0
#define DT_IRQ_ETH1_IEEE1588_TMR		DT_NXP_KINETIS_PTP_402D4000_PTP_IRQ_0

#define CONFIG_ENTROPY_NAME			DT_NXP_KINETIS_TRNG_400CC000_LABEL

#define DT_USBD_MCUX_EHCI_NAME        DT_NXP_KINETIS_USBD_402E0000_LABEL
#define DT_USBD_MCUX_EHCI_IRQ         DT_NXP_KINETIS_USBD_402E0000_IRQ_USB_OTG
#define DT_USBD_MCUX_EHCI_IRQ_PRI     DT_NXP_KINETIS_USBD_402E0000_IRQ_0_PRIORITY
#define DT_USBD_MCUX_EHCI_BASE_ADDRESS    DT_NXP_KINETIS_USBD_402E0000_BASE_ADDRESS
#define DT_USBD_MCUX_EHCI_NUM_BIDIR_EP    DT_NXP_KINETIS_USBD_402E0000_NUM_BIDIR_ENDPOINTS
#define DT_USBD_MCUX_EHCI_MAXIMUM_SPEED   DT_NXP_KINETIS_USBD_402E0000_MAXIMUM_SPEED

#define DT_PWM_MCUX_0_BASE_ADDRESS		DT_NXP_FLEXPWM_403DC000_BASE_ADDRESS
#define DT_PWM_MCUX_0_IRQ			DT_NXP_IMX_PWM_403DC000_PWM0_IRQ_0
#define DT_PWM_MCUX_0_IRQ_PRI			DT_NXP_IMX_PWM_403DC000_PWM0_IRQ_0_PRIORITY
#define DT_PWM_MCUX_0_NAME			DT_NXP_IMX_PWM_403DC000_PWM0_LABEL
#define DT_PWM_MCUX_0_INDEX			DT_NXP_IMX_PWM_403DC000_PWM0_INDEX

#define DT_PWM_MCUX_1_BASE_ADDRESS		DT_NXP_FLEXPWM_403DC000_BASE_ADDRESS
#define DT_PWM_MCUX_1_IRQ			DT_NXP_IMX_PWM_403DC000_PWM1_IRQ_0
#define DT_PWM_MCUX_1_IRQ_PRI			DT_NXP_IMX_PWM_403DC000_PWM1_IRQ_0_PRIORITY
#define DT_PWM_MCUX_1_NAME			DT_NXP_IMX_PWM_403DC000_PWM1_LABEL
#define DT_PWM_MCUX_1_INDEX			DT_NXP_IMX_PWM_403DC000_PWM1_INDEX

#define DT_PWM_MCUX_2_BASE_ADDRESS		DT_NXP_FLEXPWM_403DC000_BASE_ADDRESS
#define DT_PWM_MCUX_2_IRQ			DT_NXP_IMX_PWM_403DC000_PWM2_IRQ_0
#define DT_PWM_MCUX_2_IRQ_PRI			DT_NXP_IMX_PWM_403DC000_PWM2_IRQ_0_PRIORITY
#define DT_PWM_MCUX_2_NAME			DT_NXP_IMX_PWM_403DC000_PWM2_LABEL
#define DT_PWM_MCUX_2_INDEX			DT_NXP_IMX_PWM_403DC000_PWM2_INDEX

#define DT_PWM_MCUX_3_BASE_ADDRESS		DT_NXP_FLEXPWM_403DC000_BASE_ADDRESS
#define DT_PWM_MCUX_3_IRQ			DT_NXP_IMX_PWM_403DC000_PWM3_IRQ_0
#define DT_PWM_MCUX_3_IRQ_PRI			DT_NXP_IMX_PWM_403DC000_PWM3_IRQ_0_PRIORITY
#define DT_PWM_MCUX_3_NAME			DT_NXP_IMX_PWM_403DC000_PWM3_LABEL
#define DT_PWM_MCUX_3_INDEX			DT_NXP_IMX_PWM_403DC000_PWM3_INDEX

#define DT_PWM_MCUX_4_BASE_ADDRESS		DT_NXP_FLEXPWM_403E0000_BASE_ADDRESS
#define DT_PWM_MCUX_4_IRQ			DT_NXP_IMX_PWM_403E0000_PWM0_IRQ_0
#define DT_PWM_MCUX_4_IRQ_PRI			DT_NXP_IMX_PWM_403E0000_PWM0_IRQ_0_PRIORITY
#define DT_PWM_MCUX_4_NAME			DT_NXP_IMX_PWM_403E0000_PWM0_LABEL
#define DT_PWM_MCUX_4_INDEX			DT_NXP_IMX_PWM_403E0000_PWM0_INDEX

#define DT_PWM_MCUX_5_BASE_ADDRESS		DT_NXP_FLEXPWM_403E0000_BASE_ADDRESS
#define DT_PWM_MCUX_5_IRQ			DT_NXP_IMX_PWM_403E0000_PWM1_IRQ_0
#define DT_PWM_MCUX_5_IRQ_PRI			DT_NXP_IMX_PWM_403E0000_PWM1_IRQ_0_PRIORITY
#define DT_PWM_MCUX_5_NAME			DT_NXP_IMX_PWM_403E0000_PWM1_LABEL
#define DT_PWM_MCUX_5_INDEX			DT_NXP_IMX_PWM_403E0000_PWM1_INDEX

#define DT_PWM_MCUX_6_BASE_ADDRESS		DT_NXP_FLEXPWM_403E0000_BASE_ADDRESS
#define DT_PWM_MCUX_6_IRQ			DT_NXP_IMX_PWM_403E0000_PWM2_IRQ_0
#define DT_PWM_MCUX_6_IRQ_PRI			DT_NXP_IMX_PWM_403E0000_PWM2_IRQ_0_PRIORITY
#define DT_PWM_MCUX_6_NAME			DT_NXP_IMX_PWM_403E0000_PWM2_LABEL
#define DT_PWM_MCUX_6_INDEX			DT_NXP_IMX_PWM_403E0000_PWM2_INDEX

#define DT_PWM_MCUX_7_BASE_ADDRESS		DT_NXP_FLEXPWM_403E0000_BASE_ADDRESS
#define DT_PWM_MCUX_7_IRQ			DT_NXP_IMX_PWM_403E0000_PWM3_IRQ_0
#define DT_PWM_MCUX_7_IRQ_PRI			DT_NXP_IMX_PWM_403E0000_PWM3_IRQ_0_PRIORITY
#define DT_PWM_MCUX_7_NAME			DT_NXP_IMX_PWM_403E0000_PWM3_LABEL
#define DT_PWM_MCUX_7_INDEX			DT_NXP_IMX_PWM_403E0000_PWM3_INDEX

#define DT_PWM_MCUX_8_BASE_ADDRESS		DT_NXP_FLEXPWM_403E4000_BASE_ADDRESS
#define DT_PWM_MCUX_8_IRQ			DT_NXP_IMX_PWM_403E4000_PWM0_IRQ_0
#define DT_PWM_MCUX_8_IRQ_PRI			DT_NXP_IMX_PWM_403E4000_PWM0_IRQ_0_PRIORITY
#define DT_PWM_MCUX_8_NAME			DT_NXP_IMX_PWM_403E4000_PWM0_LABEL
#define DT_PWM_MCUX_8_INDEX			DT_NXP_IMX_PWM_403E4000_PWM0_INDEX

#define DT_PWM_MCUX_9_BASE_ADDRESS		DT_NXP_FLEXPWM_403E4000_BASE_ADDRESS
#define DT_PWM_MCUX_9_IRQ			DT_NXP_IMX_PWM_403E4000_PWM1_IRQ_0
#define DT_PWM_MCUX_9_IRQ_PRI			DT_NXP_IMX_PWM_403E4000_PWM1_IRQ_0_PRIORITY
#define DT_PWM_MCUX_9_NAME			DT_NXP_IMX_PWM_403E4000_PWM1_LABEL
#define DT_PWM_MCUX_9_INDEX			DT_NXP_IMX_PWM_403E4000_PWM1_INDEX

#define DT_PWM_MCUX_10_BASE_ADDRESS		DT_NXP_FLEXPWM_403E4000_BASE_ADDRESS
#define DT_PWM_MCUX_10_IRQ			DT_NXP_IMX_PWM_403E4000_PWM2_IRQ_0
#define DT_PWM_MCUX_10_IRQ_PRI			DT_NXP_IMX_PWM_403E4000_PWM2_IRQ_0_PRIORITY
#define DT_PWM_MCUX_10_NAME			DT_NXP_IMX_PWM_403E4000_PWM2_LABEL
#define DT_PWM_MCUX_10_INDEX			DT_NXP_IMX_PWM_403E4000_PWM2_INDEX

#define DT_PWM_MCUX_11_BASE_ADDRESS		DT_NXP_FLEXPWM_403E4000_BASE_ADDRESS
#define DT_PWM_MCUX_11_IRQ			DT_NXP_IMX_PWM_403E4000_PWM3_IRQ_0
#define DT_PWM_MCUX_11_IRQ_PRI			DT_NXP_IMX_PWM_403E4000_PWM3_IRQ_0_PRIORITY
#define DT_PWM_MCUX_11_NAME			DT_NXP_IMX_PWM_403E4000_PWM3_LABEL
#define DT_PWM_MCUX_11_INDEX			DT_NXP_IMX_PWM_403E4000_PWM3_INDEX

#define DT_PWM_MCUX_12_BASE_ADDRESS		DT_NXP_FLEXPWM_403E8000_BASE_ADDRESS
#define DT_PWM_MCUX_12_IRQ			DT_NXP_IMX_PWM_403E8000_PWM0_IRQ_0
#define DT_PWM_MCUX_12_IRQ_PRI			DT_NXP_IMX_PWM_403E8000_PWM0_IRQ_0_PRIORITY
#define DT_PWM_MCUX_12_NAME			DT_NXP_IMX_PWM_403E8000_PWM0_LABEL
#define DT_PWM_MCUX_12_INDEX			DT_NXP_IMX_PWM_403E8000_PWM0_INDEX

#define DT_PWM_MCUX_13_BASE_ADDRESS		DT_NXP_FLEXPWM_403E8000_BASE_ADDRESS
#define DT_PWM_MCUX_13_IRQ			DT_NXP_IMX_PWM_403E8000_PWM1_IRQ_0
#define DT_PWM_MCUX_13_IRQ_PRI			DT_NXP_IMX_PWM_403E8000_PWM1_IRQ_0_PRIORITY
#define DT_PWM_MCUX_13_NAME			DT_NXP_IMX_PWM_403E8000_PWM1_LABEL
#define DT_PWM_MCUX_13_INDEX			DT_NXP_IMX_PWM_403E8000_PWM1_INDEX

#define DT_PWM_MCUX_14_BASE_ADDRESS		DT_NXP_FLEXPWM_403E8000_BASE_ADDRESS
#define DT_PWM_MCUX_14_IRQ			DT_NXP_IMX_PWM_403E8000_PWM2_IRQ_0
#define DT_PWM_MCUX_14_IRQ_PRI			DT_NXP_IMX_PWM_403E8000_PWM2_IRQ_0_PRIORITY
#define DT_PWM_MCUX_14_NAME			DT_NXP_IMX_PWM_403E8000_PWM2_LABEL
#define DT_PWM_MCUX_14_INDEX			DT_NXP_IMX_PWM_403E8000_PWM2_INDEX

#define DT_PWM_MCUX_15_BASE_ADDRESS		DT_NXP_FLEXPWM_403E8000_BASE_ADDRESS
#define DT_PWM_MCUX_15_IRQ			DT_NXP_IMX_PWM_403E8000_PWM3_IRQ_0
#define DT_PWM_MCUX_15_IRQ_PRI			DT_NXP_IMX_PWM_403E8000_PWM3_IRQ_0_PRIORITY
#define DT_PWM_MCUX_15_NAME			DT_NXP_IMX_PWM_403E8000_PWM3_LABEL
#define DT_PWM_MCUX_15_INDEX			DT_NXP_IMX_PWM_403E8000_PWM3_INDEX

#define DT_VIDEO_MCUX_CSI_BASE_ADDRESS		DT_NXP_IMX_CSI_402BC000_BASE_ADDRESS
#define DT_VIDEO_MCUX_CSI_IRQ			DT_NXP_IMX_CSI_402BC000_IRQ_0
#define DT_VIDEO_MCUX_CSI_IRQ_PRI		DT_NXP_IMX_CSI_402BC000_IRQ_0_PRIORITY
#define DT_VIDEO_MCUX_CSI_NAME			DT_NXP_IMX_CSI_402BC000_LABEL
#define DT_VIDEO_MCUX_CSI_SENSOR_NAME		DT_NXP_IMX_CSI_402BC000_SENSOR_LABEL

/* End of SoC Level DTS fixup file */
