/**
 * @file Controller.h
 * @brief Defines the Controller class to coordinate heating system components.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * This file declares the Controller class which manages interactions between Valve,
 * Display, TemperatureSensor, Thermostat, and HeatingElement components to control
 * room temperature.
 */

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Valve.h"
#include "Display.h"
#include "TempratureSensor.h"
#include "Thermostat.h"
#include "HeatingElement.h"

/**
 * @class Controller
 * @brief Coordinates valve control, temperature sensing, heating, and display functions.
 *
 * Acts as the central system to manage temperature settings and heating actions using
 * the HVAC hardware components.
 */
class Controller {
private:
    Valve valu;              ///< Valve controlling system flow or heating input
    Display disp;            ///< Display for showing temperature and state
    TemperatureSensor tse;   ///< Sensor to read current temperature
    Thermostat thermo;       ///< Thermostat to manage target temperature settings
    HeatingElement het;      ///< Heating element to warm the environment

public:
    /**
     * @brief Constructs the Controller object, initializing components.
     */
    Controller();

    /**
     * @brief Handles temperature setting and heating control process.
     *
     * Reads current temperature, compares it with target, and controls heating accordingly.
     */
    void temperaturechange();
};

#endif // CONTROLLER_H

