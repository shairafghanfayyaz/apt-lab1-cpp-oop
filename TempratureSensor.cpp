/**
 * @file TempratureSensor.cpp
 * @brief Implements the TemperatureSensor class to read temperature from the valve.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * Contains method definitions for TemperatureSensor that reads current temperature from a Valve object.
 */

#include "TempratureSensor.h"
#include <iostream>

using namespace std;

int TemperatureSensor::readtemp(Valve& valve) {
    return valve.gettemp(); ///< Returns temperature reading from the valve
}
