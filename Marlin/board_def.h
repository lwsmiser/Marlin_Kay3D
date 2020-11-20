#pragma once


#ifndef __MARLIN_FIRMWARE__
#define __MARLIN_FIRMWARE__
#endif

//
// Prefix header to acquire configurations
//
#include <stdint.h>

#include "Configuration.h"


#if ENABLED(BTTSKRE3MINIV2_0)
#define motherboard_name BOARD_BTT_SKR_MINI_E3_V2_0
#define SERIAL_PORT 2
#define SERIAL_PORT_2 -1
#define BAUDRATE 115200
#endif

#if ENABLED(BTTE3_TURBO)
#define motherboard_name BOARD_BTT_SKR_E3_TURBO
#define SERIAL_PORT -1
#define SERIAL_PORT_2 0
#define BAUDRATE 115200
#endif

#if ENABLED(TH3DEZBOARD_LITE)
#define motherboard_name BOARD_TH3D_EZBOARD
#define SERIAL_PORT -1
//#define SERIAL_PORT_2 -1 //absent entry
#define BAUDRATE 115200
#endif


#if ENABLED(BTTSKRE3MINIV1_2)
#define motherboard_name BOARD_BTT_SKR_MINI_E3_V1_2
#define SERIAL_PORT 2
#define SERIAL_PORT_2 -1
#define BAUDRATE 115200
#endif

#if ENABLED(BTTSKR1_3)
#define motherboard_name BOARD_BTT_SKR_V1_3
#define SERIAL_PORT 0
#define SERIAL_PORT_2 -1
#define BAUDRATE 115200
#endif

#if ENABLED(BTTGTRV1_0)
#define motherboard_name BOARD_BIGTREE_GTR_V1_0
#define SERIAL_PORT -1
#define SERIAL_PORT_2 3
#define BAUDRATE 115200
#endif

#if ENABLED(BTTSKR1_4)
#define motherboard_name BOARD_BTT_SKR_V1_4
#define SERIAL_PORT -1
#define SERIAL_PORT_2 0
#define BAUDRATE 115200
#endif


#if ENABLED(BTTSKRV1_4TURBO)
#define motherboard_name BOARD_BTT_SKR_V1_4_TURBO
#define SERIAL_PORT 0
#define SERIAL_PORT_2 -1
#define BAUDRATE 115200
#endif

#if ENABLED(BTTSKRE3DIPV1_0)
#define motherboard_name BOARD_BTT_SKR_E3_DIP
#define SERIAL_PORT -1 //2
#define SERIAL_PORT_2 2 //-1
#define BAUDRATE 115200
#endif

#if ENABLED(BTTSKRE3DIPV1_1)
#define motherboard_name BOARD_BTT_SKR_E3_DIP
#define SERIAL_PORT -1 //2
#define SERIAL_PORT_2 2 //-1
#define BAUDRATE 115200
#endif

#if ENABLED(BTTSKRPROV1_1)
#define motherboard_name BOARD_BTT_SKR_PRO_V1_1
#define SERIAL_PORT 6
#define SERIAL_PORT_2 1
#define BAUDRATE 115200
#endif 

#if ENABLED(Original_creality1)
//#define processor_name BIGTREE_SKR_PRO //use this value in platform.ino. Serach for 'change_value' and replace it with this value BIGTREE_SKR_PRO
#define motherboard_name BOARD_MELZI_CREALITY
#define SERIAL_PORT 0
#define BAUDRATE 115200
//#if ENABLED(BLTOUCH) //already declared in pins_MELZI_CREALITY.h
//#define SERVO0_PIN 27 //already declared in pins_MELZI_CREALITY.h
//#endif
#endif 

#if ENABLED(Original_creality2)
#define motherboard_name BOARD_RAMPS_13_EFB
#define SERIAL_PORT 0
#define BAUDRATE 115200
#endif 

#if ENABLED(Original_creality4)
#define motherboard_name BOARD_CREALITY_V4 //only for V4.2.2 board
#define SERIAL_PORT 1
#define SERIAL_PORT_2 3
#define BAUDRATE 115200
#endif 

#if ENABLED(Original_creality5)
#define motherboard_name BOARD_CREALITY_V427 //only for V4.2.7 board
#define SERIAL_PORT 1
#define SERIAL_PORT_2 3
#define BAUDRATE 115200
#endif 

#if ENABLED (MKSGENLV1_0)
#define motherboard_name BOARD_MKS_GEN_L
#define SERIAL_PORT 0
#define BAUDRATE 115200
#endif 


#if ENABLED(BTTSKRNPRO1_1)
#define motherboard_name BOARD_BTT_SKR_V1_1
#define SERIAL_PORT 0 //changed from 1
#define SERIAL_PORT_2 -1
#define BAUDRATE 115200
#endif 

#if ENABLED(FYSETCV1_1A)
#define motherboard_name BOARD_FYSETC_CHEETAH
#define SERIAL_PORT 1
#define BAUDRATE 115200
#endif 


#if ENABLED(FYSETCV1_1B)
#define motherboard_name BOARD_FYSETC_CHEETAH
#define SERIAL_PORT 1
#define BAUDRATE 115200
#endif 

#if ENABLED(FYSETCV1_2A) //3
#define motherboard_name BOARD_FYSETC_CHEETAH_V12
#define SERIAL_PORT 1
#define BAUDRATE 115200
#endif 

#if ENABLED(FYSETCV1_2B) //4
#define motherboard_name BOARD_FYSETC_CHEETAH_V12
#define SERIAL_PORT 1
#define BAUDRATE 115200
#endif 

#if ENABLED(BTTSKRE3MINIV1_0)
#define motherboard_name BOARD_BTT_SKR_MINI_E3_V1_0
#define SERIAL_PORT -1
#define SERIAL_PORT_2 2
#define BAUDRATE 115200
#endif 
