/*
 * SPDX-FileCopyrightText: 2019-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <assert.h>
#include "esp_log_private.h"

#ifdef __ZEPHYR__
#include <zephyr/kernel.h>
#endif
#include "hal/cpu_hal.h"

static int s_lock = 0;

void esp_log_impl_lock(void)
{
    assert(s_lock == 0);
    s_lock = 1;
}

bool esp_log_impl_lock_timeout(void)
{
    esp_log_impl_lock();
    return true;
}

void esp_log_impl_unlock(void)
{
    assert(s_lock == 1);
    s_lock = 0;
}

/* FIXME: define an API for getting the timestamp in soc/hal IDF-2351 */
uint32_t esp_log_early_timestamp(void)
{
    extern uint32_t ets_get_cpu_frequency(void);
    return cpu_hal_get_cycle_count() / (ets_get_cpu_frequency() * 1000);
}

uint32_t esp_log_timestamp(void) __attribute__((alias("esp_log_early_timestamp")));
