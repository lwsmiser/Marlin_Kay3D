/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 *  MKS BASE v1.4 
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS BASE 1.4 only supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_NAME "MKS BASE 1.4"

//
// Heaters / Fans
//
#define MOSFET_D_PIN              7   // PH4 ** Pin16 ** PWM7   //E1
#define FAN_PIN                   9   // PH6 ** Pin18 ** PWM9
// Other Mods
#define CASE_LIGHT_PIN           11   // PB5 ** Pin24 ** PWM11
#define SERVO3_PIN               12   // PB6 ** Pin25 ** D12
#define PS_ON_PIN                 2   // X+ // PE4 ** Pin6  ** PWM2       **MUST BE HARDWARE PWM
#define FILWIDTH_PIN             15   // Y+ // PJ0 ** Pin63 ** USART3_RX  **Pin should have a pullup!
#define FIL_RUNOUT_PIN           19   // Z+ // PD2 ** Pin45 ** USART1_RX


//
// M3/M4/M5 - Spindle/Laser Control
//
#define SPINDLE_LASER_PWM_PIN     2   // X+ // PE4 ** Pin6  ** PWM2       **MUST BE HARDWARE PWM
#define SPINDLE_LASER_ENABLE_PIN 15   // Y+ // PJ0 ** Pin63 ** USART3_RX  **Pin should have a pullup!
#define SPINDLE_DIR_PIN          19   // Z+ // PD2 ** Pin45 ** USART1_RX

/**
 * Microstepping pins
 */
#define X_MS1_PIN                 5  // PE3 ** Pin5  ** PWM5
#define X_MS2_PIN                 6  // PH3 ** Pin15 ** PWM6
#define Y_MS1_PIN                59  // PF5 ** Pin92 ** A5
#define Y_MS2_PIN                58  // PF4 ** Pin93 ** A4
#define Z_MS1_PIN                22  // PA0 ** Pin78 ** D22
#define Z_MS2_PIN                39  // PG2 ** Pin70 ** D39
#define E0_MS1_PIN               64  // PK2 ** Pin87 ** A10
#define E0_MS2_PIN               63  // PK1 ** Pin88 ** A9
#define E1_MS1_PIN               57  // PF3 ** Pin94 ** A3
#define E1_MS2_PIN                4  // PG5 ** Pin1  ** PWM4

#include "pins_RAMPS.h"

  /*****************************************/
 /* Available connectors on MKS BASE v1.4 */
/*****************************************/

/*
 *******
 * GND *
 *******   E0
 *  10 *
 *******
 * GND *
 *******   E1
 *  7  *
 *******
 * GND *
 *******   FAN
 *  9  *
 *******
10 // PB4 ** Pin23 ** PWM10
7  // PH4 ** Pin16 ** PWM7
9  // PH6 ** Pin18 ** PWM9
 *******
 * GND *
 *******   Heat Bed
 *  8  *
 *******
8  // PH5 ** Pin17 ** PWM8
 **********
 * 12-24V *
 **********   Power
 *  GND   *
 **********
XS3 Connector
 *****************
 * 65 * GND * 5V *
 *****************
 * 66 * GND * 5V *
 *****************
65 // PK3 ** Pin86 ** A11
66 // PK4 ** Pin85 ** A12
Servos Connector
 *****************
 * 11 * GND * 5V *
 *****************
 * 12 * GND * 5V *
 *****************
11 // PB5 ** Pin24 ** PWM11 
12 // PB6 ** Pin25 ** PWM12
ICSP
 *****************
 * 5V * 51 * GND *
 *****************
 * 50 * 52 * RST *
 *****************
50 // PB3 ** Pin22 ** SPI_MISO  
51 // PB2 ** Pin21 ** SPI_MOSI  
52 // PB1 ** Pin20 ** SPI_SCK
XS6/AUX-1 Connector
 **********************
 * 5V * GND * NC * 20 *
 **********************
 * 50 *  51 * 52 * 21 *
 **********************
50 // PB3 ** Pin22 ** SPI_MISO  
51 // PB2 ** Pin21 ** SPI_MOSI  
52 // PB1 ** Pin20 ** SPI_SCK
20 // PD1 ** Pin44 ** I2C_SDA 
21 // PD0 ** Pin43 ** I2C_SCL
Temperature
 **********************************
 * GND * 69 * GND * 68 * GND * 68 *
 **********************************
69 // PK7 ** Pin82 ** A15
68 // PK6 ** Pin83 ** A14 
67 // PK5 ** Pin84 ** A13
Limit Switches
 ************
 *  2 * GND * X+
 ************
 *  3 * GND * X-
 ************
 * 15 * GND * Y+
 ************
 * 14 * GND * Y-
 ************
 * 19 * GND * Z+
 ************
 * 18 * GND * Z-
 ************
2  // PE4 ** Pin6  ** PWM2       **X+
3  // PE5 ** Pin7  ** PWM3       **X-
15 // PJ0 ** Pin63 ** USART3_RX  **Y+
14 // PJ1 ** Pin64 ** USART3_TX  **Y-
19 // PD2 ** Pin45 ** USART1_RX  **Z+
18 // PD3 ** Pin46 ** USART1_TX  **Z-
EXP1
 ************
 *  37 * 35 *
 ************
 *  17 * 16 *
 ************
 *  23 * 25 *
 ************
 *  27 * 29 *
 ************
 * GND * 5V *
 ************
37 // PC0 ** Pin53 ** D37
35 // PC2 ** Pin55 ** D35
17 // PH0 ** Pin12 ** USART2_RX
16 // PH1 ** Pin13 ** USART2_TX
23 // PA1 ** Pin77 ** D23
25 // PA3 ** Pin75 ** D25
27 // PA5 ** Pin73 ** D27
29 // PA7 ** Pin71 ** D29
EXP2
 ************
 *  50 * 52 *
 ************
 *  31 * 53 *
 ************
 *  33 * 51 *
 ************
 *  49 * 41 *
 ************
 * GND * NC *
 ************
50 // PB3 ** Pin22 ** SPI_MISO
52 // PB1 ** Pin20 ** SPI_SCK
31 // PC6 ** Pin59 ** D31
53 // PB0 ** Pin19 ** SPI_SS
33 // PC4 ** Pin57 ** D33
51 // PB2 ** Pin21 ** SPI_MOSI
49 // PL0 ** Pin35 ** D49
41 // PG0 ** Pin51 ** D41
*/