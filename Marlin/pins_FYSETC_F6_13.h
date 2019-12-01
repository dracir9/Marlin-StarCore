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
 * Fysetc F6 v1.3 pin assignment
 */

#ifndef __AVR_ATmega2560__
  #error "Oops!  Make sure you have 'Fysetc_F6' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "Fysetc F6 v1.3"
#endif

//
// Servos
//
#define SERVO0_PIN		     13
#define SERVO1_PIN         11
#define SERVO2_PIN         10
#ifndef SERVO3_PIN
#define SERVO3_PIN          4
#endif

//
// Limit Switches
//
#define X_MIN_PIN          63
#define X_MAX_PIN		       64
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15
#define Z_MIN_PIN          12
#define Z_MAX_PIN           2

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
	#define Z_MIN_PROBE_PIN  -1 // Z-min is recommended, of course, it can be any other idle pins.
#endif

//
// Steppers
//
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#ifndef X_CS_PIN
  #define X_CS_PIN         70
#endif

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#ifndef Y_CS_PIN
  #define Y_CS_PIN         39
#endif

#define Z_STEP_PIN         43
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       58
#ifndef Z_CS_PIN
  #define Z_CS_PIN         74
#endif

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#ifndef E0_CS_PIN
  #define E0_CS_PIN        47
#endif

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
#ifndef E1_CS_PIN
  #define E1_CS_PIN        32
#endif

#define E2_STEP_PIN        59
#define E2_DIR_PIN         57
#define E2_ENABLE_PIN      40
#ifndef E2_CS_PIN
  #define E2_CS_PIN        42
#endif

#if HAS_DRIVER(TMC2208)

  /**
   * TMC2208 stepper drivers
   * Software serial
   */

  #define X_SERIAL_TX_PIN    72
  #define X_SERIAL_RX_PIN    71

  #define Y_SERIAL_TX_PIN    75
  #define Y_SERIAL_RX_PIN    73

  #define Z_SERIAL_TX_PIN    79
  #define Z_SERIAL_RX_PIN    78

  #define E0_SERIAL_TX_PIN   77
  #define E0_SERIAL_RX_PIN   76

  #define E1_SERIAL_TX_PIN   81
  #define E1_SERIAL_RX_PIN   80

  #define E2_SERIAL_TX_PIN   82
  #define E2_SERIAL_RX_PIN   22

#endif

//
// Temperature Sensors
//
#define TEMP_0_PIN         12   // Analog Input
#define TEMP_1_PIN         13   // Analog Input
#define TEMP_2_PIN		   14	// Analog Input
#define TEMP_BED_PIN       15   // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN        5
#define HEATER_1_PIN        6
#define HEATER_2_PIN        7
#define HEATER_BED_PIN      8


#define FAN_PIN			   44
#define FAN1_PIN           45
#define FAN2_PIN           46

//
// Misc. Functions
//
#define SDSS               53
#define LED_PIN            13

#ifndef FILWIDTH_PIN
  #define FILWIDTH_PIN      10   // Analog Input on endstop X+
#endif

// define digital pin 10 for the filament runout sensor. Use the digital input 10 on the servos connector
#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN    SERVO2_PIN
#endif

// define digital pin 11 for the PS_ON control. Use the digital input 11 on the servos connector
#ifndef PS_ON_PIN
  #define PS_ON_PIN        SERVO1_PIN
#endif

#if ENABLED(CASE_LIGHT_ENABLE) && !defined(CASE_LIGHT_PIN)
  #if NUM_SERVOS <= 1 && !(ENABLED(RGB_LED) || ENABLED(RGBW_LED)) // try to use servo connector
	#define CASE_LIGHT_PIN    4
  #endif
#endif

#if ENABLED(RGB_LED) || ENABLED(RGBW_LED)
  #define RGB_LED_R_PIN    3
  #define RGB_LED_G_PIN    SERVO3_PIN
  #define RGB_LED_B_PIN    9
  #define RGB_LED_W_PIN    -1
#endif

//////////////////////////
// LCDs and Controllers //
//////////////////////////

#define LCD_PINS_RS         16
#define LCD_PINS_ENABLE     17
#define LCD_PINS_D4         23
#define LCD_PINS_D5         25
#define LCD_PINS_D6         27
#define LCD_PINS_D7         29
#define BEEPER_PIN          37
#define BTN_EN1             31
#define BTN_EN2             33
#define BTN_ENC             35
#define SD_DETECT_PIN       49
#define KILL_PIN            41
