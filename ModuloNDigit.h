/**
 * @file ModuloNDigit.h
 * @brief Defines ModuloNDigit class for a single-digit modulo counter with overflow support.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * This file declares the ModuloNDigit class, simulating a single digit counter that resets after
 * reaching a maximum value. It supports increment operators, overflow detection, and formatted printing.
 */

#ifndef MODULONDIGIT_H_
#define MODULONDIGIT_H_

#include <iostream> ///< Required for I/O operations

#define MAX_COUNT 16 ///< Maximum allowed counter value (e.g., for hexadecimal maximum 15)
#define MIN_COUNT 2  ///< Minimum allowed counter value (e.g., minimum base 2 for binary)

/**
 * @class ModuloNDigit
 * @brief Single digit modulo counter with overflow and formatted output.
 *
 * Supports incrementing with wrap-around, checking overflow status and printing
 * the digit value according to the numeral base (including support for hex digits).
 */
class ModuloNDigit {
private:
    unsigned int Current_value; ///< Current digit value
    unsigned int maximum_val;   ///< Max digit value before overflow (exclusive)

public:
    /**
     * @brief Constructor initializing the digit counter.
     * @param maximum_val Maximum value before resetting (default binary base).
     *
     * Sets the initial current value to zero and clamps maximum_val between MIN_COUNT and MAX_COUNT.
     */
    ModuloNDigit(unsigned int maximum_val = MIN_COUNT);

    /**
     * @brief Pre-increment operator increments the counter.
     * @return Reference to updated ModuloNDigit object.
     *
     * Increments the digit; if maximum reached, resets to zero causing overflow.
     */
    ModuloNDigit& operator++();

    /**
     * @brief Post-increment operator.
     * @return Copy of ModuloNDigit before increment.
     */
    ModuloNDigit operator++(int);

    /**
     * @brief Checks if the digit has overflowed (reset to zero).
     * @return True if overflow occurred, otherwise false.
     */
    bool isOverflow();

    /**
     * @brief Prints the current digit value.
     *
     * Prints digits 0-9 as numbers and 10-15 as A-F for hexadecimal representation.
     */
    void print() const;
};

#endif // MODULONDIGIT_H_
