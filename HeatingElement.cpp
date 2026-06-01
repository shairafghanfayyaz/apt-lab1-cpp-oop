/**
 * @file HeatingElement.cpp
 * @brief Implements the HeatingElement class that simulates heating element operations.
 *
 * @author Muhammad Shair Afghan
 * @	date Nov 11, 2025
 *
 * Defines methods to initialize the heating element, toggle its state,
 * check if it is currently heating, and simulate heating to a desired temperature.
 */

#include "HeatingElement.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructs a HeatingElement object with initial state OFF.
 */
HeatingElement::HeatingElement() : isOn(false) {
    cout << "Heating Element initialized \n";
}

/**
 * @brief Turns the heating element ON or OFF.
 *
 */
void HeatingElement::ToggHeater(bool state) {
    isOn = state;
    cout << "Heating Element is now " << (isOn ? "ON" : "OFF") << ".\n";
}

/**
 * @brief Checks if the heating element is currently ON.
 * @return True if heating element is ON, otherwise false.
 */
bool HeatingElement::isHeating() const {
    return isOn;
}

/**
 * @brief Simulates gradual heating from current to desired temperature.

 * @return The final temperature after heating.
 *
 * Turns on the heating element, increments temperature until desired temperature is reached,
 * then turns the heating element off and reports the final temperature.
 */
int HeatingElement::desiredheat(int CT, int DT) {
    ToggHeater(true); ///< Turn on heating

    while (CT < DT) {
        CT++;
        cout << "Room Temperature..... Increasing: " << CT << "°C\n\n";
    }

    cout << "........................................\n";
    cout << "Required Temperature Achieved: " << DT << "°C.\n";
    ToggHeater(false); ///< Turn off heating

    return CT;
}
