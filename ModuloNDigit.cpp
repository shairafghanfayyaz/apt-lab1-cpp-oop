/**
 *
 * @file ModuloNDigit.cpp
 * @brief Implements ModuloNDigit class methods for a single modulo digit counter.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * Contains definitions for incrementing, overflow checking, and printing a single digit counter.
 */

#include "ModuloNDigit.h"
#include <iostream>

using namespace std;

ModuloNDigit::ModuloNDigit(unsigned int maximum_val) {
    // Clamp maximum_val to allowed range
    if (maximum_val > MAX_COUNT) {
        cout << "Warning: maxValue exceeds MAX_COUNT. Setting maxValue to " << MAX_COUNT << "." << endl;
        maximum_val = MAX_COUNT;
    }
    if (maximum_val < MIN_COUNT) {
        cout << "Warning: maxValue is below MIN_COUNT. Setting maxValue to " << MIN_COUNT << "." << endl;
        maximum_val = MIN_COUNT;
    }

    this->maximum_val = maximum_val; ///< Set maximum digit value
    this->Current_value = 0;          ///< Initialize digit to zero
}

ModuloNDigit& ModuloNDigit::operator++() {
    ++Current_value; ///< Increment digit value

    if (Current_value == maximum_val) {
        Current_value = 0; ///< Reset to zero on overflow
    }
    return *this;
}

ModuloNDigit ModuloNDigit::operator++(int) {
    ModuloNDigit tmp(*this); ///< Save current state before increment
    operator++();            ///< Perform pre-increment
    return tmp;              ///< Return old state
}

bool ModuloNDigit::isOverflow() {
    return Current_value == 0; ///< Overflow occurs when digit resets to zero
}

void ModuloNDigit::print() const {
    if (Current_value < 10) {
        cout << Current_value; ///< Print numeric digit
    } else {
        cout << char('A' + (Current_value - 10)); ///< Print hex digit A-F
    }
}
