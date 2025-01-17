/*
    Copyright (c) 2014-2021 Ultimaker B.V. All rights reserved.

    Marlin is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Marlin is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Marlin.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef FAN_DRIVER_H
#define FAN_DRIVER_H

#include <stdint.h>

void initFans();
/**
 Set the current fan speed for the side fans that cool the print.
 @param fan_speed PWM output for the fans, in the range 0 to 255.
 */
void setMaterialCoolingFanSpeed(uint8_t fan_speed);
/**
 Get the currently active fan speed for the cooling fan.
 @return current cooling fan speed in the range 0 to 255.
 */
uint8_t getMaterialCoolingFanSpeed();

/**
 Set the fan speed for the hotend cooling fan. This fan cools the top of the hotend to prevent heat-creep.
 @param fan_speed PWM output for the fans, in the range 0 to 255.
 */
void setHotendCoolingFanSpeed(uint8_t fan_speed);

/** @brief Sets the speed for the 24V fans that cool the electronics inside the case.
 *          Currently only supports speeds 0 and 255 !!!
 * @param fan_speed PWM output for the fans, in the range 0 to 255.
 */
void setCaseFanSpeed(uint8_t fan_speed);

#endif//FAN_DRIVER_H
