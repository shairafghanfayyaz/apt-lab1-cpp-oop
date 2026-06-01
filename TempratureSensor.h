/**
 * @file TempratureSensor.h
 * @brief Defines the TemperatureSensor class for reading temperature from a Valve object.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * This header declares the TemperatureSensor class which simulates a temperature sensor.
 * It provides a method to read the current temperature from the Valve hardware interface.
 */

#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include "Valve.h"

/**
 * @class TemperatureSensor
 * @brief Simulates a temperature sensor.
 *
 * Provides functionality to read current temperature data from a Valve instance.
 */
class TemperatureSensor {
public:
    /**
     * @brief Reads the current temperature from the valve.
     * @param valve Reference to the Valve object to read temperature from.
     * @return The current temperature in degrees Celsius.
     */
    int readtemp(Valve& valve);
};

#endif // TEMPERATURESENSOR_H
