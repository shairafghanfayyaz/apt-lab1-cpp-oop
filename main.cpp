/**
 * @file main.cpp
 * @brief Entry point for the Reversi (Othello) console game.
 *
 * This file initializes the Reversi board, displays it in the console,
 * and runs the main game loop for two players taking turns.
 */

#include <iostream>
#include "ReversiBoard.h"
#include "ReversiConsoleView.h"

/**
 * @brief The main function that runs the Reversi game.
 *
 * Creates a board and console view, then runs the game loop.
 * Players alternate entering their moves until the game is terminated
 * or invalid input is detected.
 *
 * @return int Exit code.
 */
int main() {
    ReversiBoard board;                     ///< Create the game board
    ReversiConsoleView view(&board);        ///< Create the console view tied to the board

    CellState currentPlayer = CellState::P1; ///< Start with Player 1
    bool gameRunning = true;                 ///< Controls the main game loop

    while (gameRunning) {                    ///< Main game loop begins
        view.print();                        ///< Print the board to the console

        std::cout << "Player "
                  << (currentPlayer == CellState::P1 ? "1 (X)" : "2 (O)")
                  << ", enter move (row col): ";  ///< Prompt current player

        int row = -1, col = -1;              ///< Variables to store user input
        std::cin >> row >> col;              ///< Read user input

        if (!std::cin) {                     ///< Check for invalid input (letters, etc.)
            std::cout << "Invalid input, exiting.\n"; ///< Error message
            break;                           ///< End game loop
        }

        if (!board.placePiece(row, col, currentPlayer)) { ///< Try placing the piece
            std::cout << "Invalid move, please try again.\n"; ///< Move was illegal
        } else {
            currentPlayer =                   ///< Switch players
                (currentPlayer == CellState::P1) ? CellState::P2 : CellState::P1;
        }
    }

    return 0;                                 ///< Program finished successfully
}
