/**
 * @file ReversiConsoleView.h
 * @brief Declares the class for console-based display of the Reversi board.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 */

#ifndef REVERSICONSOLEVIEW_H
#define REVERSICONSOLEVIEW_H

#include "ReversiBoard.h"

/**
 * @class ReversiConsoleView
 * @brief Prints the Reversi board to the console.
 */
class ReversiConsoleView {
private:
    const ReversiBoard* board;

public:
    /**
     * @brief Constructor that initializes the view with a board reference.
     * @param board Pointer to the ReversiBoard to display.
     */
    explicit ReversiConsoleView(const ReversiBoard* board);

    /**
     * @brief Prints the board state to standard output.
     */
    void print() const;
};

#endif // REVERSICONSOLEVIEW_H
