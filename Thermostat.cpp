/**
 * @file Thermostat.cpp
 * @brief Implements the Thermostat class managing the desired temperature setting.
 * @author Muhammad Shair Afghan
 *
 * Defines the constructor, setter, and getter for the thermostat's desired temperature.
 * The default desired temperature is initialized to 20°C.
 */

#include "Thermostat.h"
#include <iostream>

using namespace std;


Thermostat::Thermostat() : DesiredTemp(20) {
    cout << "Thermostat initialized\n";
    cout << "Default desired temperature of room is 20°C.\n";
}

/**
 * @param temp Desired temperature in degrees Celsius.
 */
void Thermostat::setDT(int temp) {
    DesiredTemp = temp;
    cout << "Desired temperature set to " << DesiredTemp << "°C.\n";
}


int Thermostat::getDT() const {
    return DesiredTemp;
}
