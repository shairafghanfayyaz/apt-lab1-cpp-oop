/**
 * @file Display.cpp
 * @brief Implements the Display class responsible for showing temperature information to the user.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * Contains methods to initialize the display and output the current temperature to the console.
 */

#include "Display.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructs a Display object and outputs initialization message.
 */
Display::Display() {
    cout << "Heat Controller is ON.\n"; ///< Indicate heating system is active
}

/**
 * @brief Displays the updated temperature to the user.
 *
 *
 * Outputs a message indicating the temperature has been updated,
 * followed by the current temperature value.
 */
void Display::finaltemp(int temp) const {
    cout << "Temperature has been updated.\n";
    cout << "Current Temperature: " << temp << "°C\n"; ///< Print temperature with unit
}
