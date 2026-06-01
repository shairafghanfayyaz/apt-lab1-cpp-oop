/**
 * @file ModuloNCounter.h
 * @brief Defines the ModuloNCounter class for a multi-digit modulo counter.
 *
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * This file declares the ModuloNCounter class which manages a multi-digit counter,
 * composed of multiple ModuloNDigit objects. It supports incrementing the whole counter,
 * overflow handling, and output formatting for different bases such as binary, octal,
 * decimal, and hexadecimal.
 */

#ifndef MODULONCOUNTER_H_
#define MODULONCOUNTER_H_

#include "ModuloNDigit.h" ///< Include single-digit modulo digit counter

/**
 * @class ModuloNCounter
 * @brief Multi-digit modulo counter with a customizable base.
 *
 * This class implements a counter composed of multiple ModuloNDigit digits.
 * Supports increment operations with proper carry handling across digits.
 * The base of the counter can be set to common bases like 2, 8, 10, or 16.
 */
class ModuloNCounter {
private:
    ModuloNDigit* DigitCA; ///< Dynamic array of ModuloNDigit counters representing each digit
    unsigned int CS;       ///< Number of digits in the counter
    unsigned int base;     ///< Base of the counter (e.g., 2, 8, 10, 16)

public:
    /**
     * @brief Constructs a multi-digit counter.
     * @param CS Number of digits in the counter.
     * @param base Base for the counter digits (2, 8, 10, 16).
     *
     * Dynamically allocates an array of ModuloNDigit digits, each initialized to the given base.
     */
    ModuloNCounter(unsigned int CS, unsigned int base);

    /**
     * @brief Destructor releases allocated memory.
     *
     * Ensures no memory leaks by deleting the dynamic array of digits.
     */
    ~ModuloNCounter();

    /**
     * @brief Pre-increment operator.
     * @return Reference to the incremented ModuloNCounter.
     *
     * Increments the whole multi-digit counter, handling carry overflow between digits.
     * The counter wraps around to zero after reaching its maximum value.
     */
    ModuloNCounter& operator++();

    /**
     * @brief Prints the current value of the multi-digit counter.
     *
     * Outputs the counter digits from most significant to least significant,
     * formatted according to the base (digits 10-15 are shown as A-F).
     */
    void print() const;
};

#endif // MODULONCOUNTER_H_
