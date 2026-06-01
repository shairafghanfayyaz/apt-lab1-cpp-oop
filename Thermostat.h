/**
 * @file Thermostat.h
 * @brief Declares the Thermostat class for managing desired temperature settings.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * This header defines the Thermostat class that holds and manages the desired temperature
 * setting for the heating control system. It provides methods to set and get this temperature.
 */

#ifndef THERMOSTAT_H
#define THERMOSTAT_H

/**
 * @class Thermostat
 * @brief Manages thermostat desired temperature.
 *
 * Stores the desired temperature and provides accessors to set and retrieve it.
 */
class Thermostat {
private:
    int DesiredTemp; ///< Desired temperature in degrees Celsius.

public:
    /**
     * @brief Constructs a Thermostat with a default temperature setting.
     */
    Thermostat();

    /**
     * @brief Sets the desired temperature.
     *
     */
    void setDT(int temp);

    /**
     * @brief Gets the currently set desired temperature.
     * @return Desired temperature in degrees Celsius.
     */
    int getDT() const;
};

#endif // THERMOSTAT_H
