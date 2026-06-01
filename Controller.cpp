/**
 * @file Controller.cpp
 * @brief Implements the Controller class for managing the heating system process.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * Contains method definitions for the Controller class that coordinates setting the desired temperature,
 * reading the current temperature, controlling the heating element, and displaying the results.
 * Uses member components: Valve, Display, TemperatureSensor, Thermostat, and HeatingElement.
 */

#include "Controller.h"
#include <iostream>

using namespace std;

/*
 * Constructs the Controller object and outputs initialization confirmation.
 */
Controller::Controller() {
    cout << "Heat Controller initialized.\n";
}

/**
 * @brief the process of setting desired temperature and controlling heating.
 *
 * Prompts the user to input the desired temperature, updates the thermostat with the new value,
 * reads current temperature from the valve using the temperature sensor, heats the system until
 * the desired temperature is reached, and finally displays the resulting temperature.
 */
void Controller::temperaturechange() {
    int newDT;
    cout << "Enter the desired temperature (°C): ";
    cin >> newDT;

    thermo.setDT(newDT); ///< Set new desired temperature in thermostat
    int CT = tse.readtemp(valu); ///< Read current temperature from valve sensor

    CT = het.desiredheat(CT, thermo.getDT()); ///< Heat gradually until desired temperature
    disp.finaltemp(CT); ///< Display the final measured temperature
}
