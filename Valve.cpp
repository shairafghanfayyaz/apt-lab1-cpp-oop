/**
 * @file Valve.cpp
 * @brief Implements the Valve class managing temperature input and retrieval.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * Defines constructor prompting for initial temperature and a method to return the current temperature.
 */

#include "Valve.h"
#include <iostream>

using namespace std;

/*
 * Constructs Valve and prompts user for initial temperature input.
 */
Valve::Valve() : currentTemp() {
    cout << "Initializing Heater Valve...\n";
    cout << "Set the initial temperature (°C): ";
    cin >> currentTemp;
}

/*
 * Returns the current temperature setting of the valve.
 * Current temperature in degrees Celsius.
 */
int Valve::gettemp() const {
    return currentTemp;
}
