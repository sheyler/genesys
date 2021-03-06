/*
    This file is part of Genesys.

    Genesys is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Genesys is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Genesys.  If not, see <http://www.gnu.org/licenses/>.

    Copyright (C) 2016 Clemens Kirchgatterer <clemens@1541.org>.
*/

#ifndef _LED_H_
#define _LED_H_

// LED colors
#define LED_GRN 0
#define LED_YEL 1
#define LED_RED 2

// yellow led blink intervalls
#define NET_LED_BLINK_PERIOD       150
#define TELEMETRY_LED_BLINK_PERIOD 750
#define ERROR_LED_BLINK_PERIOD     300

// green led pulse and pause width
#ifdef ALPHA
#define GRN_LED_OFF_MS 1250
#else
#define GRN_LED_OFF_MS 1750
#endif
#define GRN_LED_ON_MS   100

bool led_init(void);
bool led_fini(void);
void led_poll(void);

void led_on(int led);
void led_off(int led);
void led_toggle(int led);
void led_pulse(int led, uint16_t on, uint16_t off = 0);
void led_flash(int led, uint16_t ms = 100);

#endif // _LED_H_
