#ifndef __HW_H__
#define __HW_H__

//stdint header include
#include <stdint.h>

// register mapping header 
#include "stm32_reg.h"

//include core driver
#include "Hw_Gpio.h"

//include Hw_Lib
#include "Hw_Led.h"
#include "Hw_Key.h"

//include LIB
#include "Ld_Printf.h"
#include "Util.h"

#ifdef HW_LOCAL
#define HW_DEF
#else
#define HW_DEF                      extern
#endif

HW_DEF void Hw_Init();




#endif