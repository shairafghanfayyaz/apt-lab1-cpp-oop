/**
 * @file main.cpp
 * @brief Main entry point for the room heating system application.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * Initializes the Controller and starts the temperature control process.
 */

#include "Controller.h"
#include <iostream>

using namespace std;

int main() {
    cout << "WELCOME TO THE ROOM HEATING SYSTEM\n\n"; ///< Welcome message

    Controller controller; ///< Instantiate the Controller class
    controller.temperaturechange(); ///< Begin temperature control process

    return 0;
}
