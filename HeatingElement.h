/**
 * @file HeatingElement.h
 * @brief Defines the HeatingElement class to simulate a heating element in the system.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 *
 * This file declares the HeatingElement class which provides interfaces to toggle and
 * control the heating element, check its state, and simulate gradual heating.
 */

#ifndef HEATINGELEMENT_H
#define HEATINGELEMENT_H

/**
 * @class HeatingElement
 * @brief Simulates the heating element's ON/OFF state and heating behavior.
 *
 * Provides control to toggle the heating element and simulate heating a specific temperature.
 */
class HeatingElement {
private:
    bool isOn; ///< True if the heating element is ON, false otherwise.

public:
    /**
     * A Class Heating Element Constructor
     */
    HeatingElement();

    /**
     *
     * @param state True to turn ON, False to turn OFF.
     */
    void ToggHeater(bool state);

    /**
     * @brief A bool function initiated
     *
     */
    bool isHeating() const;

    /**
     * @brief A desired heat function initiated
     * @param CT, Current Temperature
     * @param DT, Desired Temperature
     */
    int desiredheat(int CT, int DT);
};

#endif // HEATINGELEMENT_H
