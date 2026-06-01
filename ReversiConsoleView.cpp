/**
 * @file ReversiConsoleView.cpp
 * @brief Implements the console-based view for displaying a Reversi board.
 *
 * Stores a pointer to a ReversiBoard instance for querying and displaying its state.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 */

#include "ReversiConsoleView.h"
#include <iostream>

/**
 * @brief Constructs a console-based view for the Reversi board.
 * @param b Pointer to the board to be displayed.
 */
ReversiConsoleView::ReversiConsoleView(const ReversiBoard* b) : board(b) {}

/**
 * @brief Prints the current Reversi board to the console.
 *
 * Displays row and column labels and prints:
 * - '.' for empty cells
 * - 'X' for Player 1 Black Side
 * - 'O' for Player 2 White Side
 */
void ReversiConsoleView::print() const {
    std::cout << "  0 1 2 3 4 5 6 7\n";   // Print column headers

    for (int i = 0; i < 8; ++i) {         // Loop through each board row
        std::cout << i << ' ';            // Print row number at start of line

        for (int j = 0; j < 8; ++j) {     // Loop through each column in the row
            switch (board->getFieldState(i, j)) {
                case CellState::E:
                    std::cout << ". ";             // Print dot for empty
                    break;
                case CellState::P1:
                    std::cout << "X ";             // Print X for player 1
                    break;
                case CellState::P2:
                    std::cout << "O ";             // Print O for player 2
                    break;
            }
        }

        std::cout << '\n';              // Move to next line after a row is printed
    }
}
