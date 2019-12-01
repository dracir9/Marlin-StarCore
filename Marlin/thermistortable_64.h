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

// 47k bed thermistor
const short temptable_64[][2] PROGMEM = {
	{ OV(246), 120 },
	{ OV(265), 115 },
	{ OV(300), 110 },
	{ OV(353), 105 },
	{ OV(390), 100 },
	{ OV(430),  95 },
	{ OV(470),  90 },
	{ OV(513),  85 },
	{ OV(555),  80 },
	{ OV(598),  75 },
	{ OV(641),  70 },
	{ OV(682),  65 },
	{ OV(723),  60 },
	{ OV(761),  55 },
	{ OV(797),  50 },
	{ OV(830),  45 },
	{ OV(860),  40 },
	{ OV(886),  35 },
	{ OV(910),  30 },
	{ OV(930),  25 },
	{ OV(948),  20 },
	{ OV(962),  15 },
	{ OV(975),  10 },
	{ OV(985),   5 },
	{ OV(992),   0 },
};
