/**
 * Copyright 2018 - 2020 HITSIC
 * All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _INC_HAL_CH32V103_H_
#define _INC_HAL_CH32F103_H_

#if (!defined(CPU_CH32V103R8T6))
#error CPU incorrect !
#endif // ! CPU_CH32V103R8T6


#include "ch32v10x.h"
#include "ch32v10x_adc.h"
#include "ch32v10x_bkp.h"
#include "ch32v10x_crc.h"
#include "ch32v10x_dbgmcu.h"
#include "ch32v10x_dma.h"
#include "ch32v10x_exti.h"
#include "ch32v10x_flash.h"
#include "ch32v10x_gpio.h"
#include "ch32v10x_i2c.h"
#include "ch32v10x_iwdg.h"
#include "ch32v10x_pwr.h"
#include "ch32v10x_rcc.h"
#include "ch32v10x_rtc.h"
#include "ch32v10x_spi.h"
#include "ch32v10x_tim.h"
#include "ch32v10x_usart.h"
#include "ch32v10x_wwdg.h"
#include "ch32v10x_usb.h"
#include "ch32v10x_usb_host.h"
#include "ch32v10x_misc.h"


#include "sc_common.h"
#include "sc_uart.h"
#include "sc_gpio.h"
#include "sc_i2c.h"

//BSP RTE

#include "board.h"
//#include "clock_config.h"
//#include "pin_mux.h"
//#include "peripherals.h"


//CMB
//#include "cm_backtrace.h"




#endif // ! _INC_HAL_CH32V103_H_
