/*
 * Copyright (c) 2025 Infineon Technologies AG,
 * or an affiliate of Infineon Technologies AG.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Driver for Infineon PSOC C3 HPPASS Analog Subsystem
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_ADC_IFX_HPPASS_ANALOG_H_
#define ZEPHYR_INCLUDE_DRIVERS_ADC_IFX_HPPASS_ANALOG_H_

#include <zephyr/device.h>
#include <zephyr/devicetree.h>

#include "cy_pdl.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const cy_stc_hppass_sar_t ifx_hppass_sar_pdl_cfg_struct_default;

/**
 * @brief Initialize the HPPASS analog subsystem
 *
 * @param dev Pointer to the device structure for the driver instance
 *
 * @retval 0 If successful.
 * @retval -EINVAL Invalid parameters.
 * @retval -EIO I/O error when accessing device.
 */
int ifx_hppass_init(void);

/**
 * @brief Use the HPPASS AC for ADC initialization
 *
 * @param dev Pointer to the device structure for the driver instance
 *
 * @retval 0 If successful.
 * @retval -EINVAL Invalid parameters.
 * @retval -EIO I/O error when accessing device.
 *
 * HPPASS AC must be used to initialize the ADC subsystem after the SAR ADC has been configured.
 */
int ifx_hppass_ac_init_adc(void);

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_INCLUDE_DRIVERS_ADC_IFX_HPPASS_ANALOG_H_ */
