/**
 * @file Valve.h
 * @brief Declares the Valve class responsible for managing the heater valve temperature setting.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * This header defines the Valve class, which stores and provides access to the current temperature
 * of the heating valve. It offers methods to get the current temperature setting.
 */

#ifndef VALVE_H
#define VALVE_H

/**
 * @class Valve
 * @brief Represents a heater valve controlling the temperature.
 *
 * Stores the current temperature and allows access to it.
 */
class Valve {
private:
    int currentTemp; ///< Current temperature setting in degrees Celsius.

public:
    /**
     * @brief Constructs a Valve instance and prompts user to set initial temperature.
     */
    Valve();

    /**
     * @brief Returns the current temperature of the valve.
     * @return Current temperature in degrees Celsius.
     */
    int gettemp() const;
};

#endif // VALVE_H
