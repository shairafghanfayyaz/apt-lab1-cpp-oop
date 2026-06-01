/**
 * @file ModuloNCounter.cpp
 * @brief Implements ModuloNCounter methods for a multi-digit modulo counter.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 * Contains method definitions for ModuloNCounter which supports multi-digit counting
 * with overflow handling and formatted printing in different numeral bases.
 *
 * DigitCA= Digit Counter ARRAY
 * CS = Counter Size
 * baseval = Base Value

 */

#include "ModuloNCounter.h"
#include <iostream>
#include <cmath>

using namespace std;

ModuloNCounter::ModuloNCounter(unsigned int CS, unsigned int baseval) {
    this->CS = CS;               ///< Store number of digits
    this->base = baseval;        ///< Store base value
    this->DigitCA = new ModuloNDigit[CS]; ///< Allocate array for digits

    for (unsigned int i = 0; i < CS; i++) {
        DigitCA[i] = ModuloNDigit(baseval); ///< Initialize each digit with base
    }

    cout << "Initialized a " << CS << "-digit counter with base " << baseval << "." << endl;
}

ModuloNCounter::~ModuloNCounter() {
    delete[] DigitCA; ///< Free allocated digit array memory
    cout << "Counter memory released successfully." << endl;
}

ModuloNCounter& ModuloNCounter::operator++() {
    // Increment digits starting from least significant to handle carrying
    for (int i = CS - 1; i >= 0; i--) {
        ++DigitCA[i]; ///< Increment current digit

        if (!DigitCA[i].isOverflow()) {
            break; ///< Stop if no overflow from current digit
        }
        // If overflow occurs at most significant digit, wrap around count
        if (i == 0) {
            cout << "Counter overflow! Resetting to zero." << endl;
        }
    }
    return *this;
}

void ModuloNCounter::print() const {
    for (unsigned int i = 0; i < CS; i++) {
        DigitCA[i].print(); ///< Print each digit
        cout << " ";        ///< Add space for readability between digits
    }
}
