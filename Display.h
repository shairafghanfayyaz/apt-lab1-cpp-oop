/**
 *
 * @file Display.h
 * @brief Defines the Display class for showing temperature information to the user.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * This file declares the Display class that provides functionality to output temperature
 * information to the user interface.
 */

#ifndef DISPLAY_H
#define DISPLAY_H

/**
 * @class Display
 * @brief Responsible for displaying system information, primarily temperature.
 */
class Display {
public:
    /**
     * Constructs the Display object.
     */
    Display();

    /**
     *
     * @param temp Current temperature to be displayed.
     */
    void finaltemp(int temp) const;
};

#endif // DISPLAY_H
