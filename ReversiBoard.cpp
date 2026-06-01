/**
 * @file ReversiBoard.cpp
 * @brief Implements the ReversiBoard class managing an 8*8 Reversi game grid.
 *
 * Initializes the game grid with empty cells and places the standard starting pieces.
 * Contains game logic for checking valid moves, flipping pieces, and placing new pieces.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 */

#include "ReversiBoard.h"    // Include the header file declaring ReversiBoard

/**
 * @brief Constructs a ReversiBoard and initializes all cells as empty.
 *
 * Places the four starting pieces in the center as per Reversi rules:
 * - (3,3) = P2
 * - (3,4) = P1
 * - (4,3) = P1
 * - (4,4) = P2
 */
ReversiBoard::ReversiBoard() {
    for (auto& row : grid) {
        row.fill(CellState::E);
    }
    grid[3][3] = CellState::P2;         // Place P2 at (3,3)
    grid[3][4] = CellState::P1;         // Place P1 at (3,4)
    grid[4][3] = CellState::P1;         // Place P1 at (4,3)
    grid[4][4] = CellState::P2;         // Place P2 at (4,4)
}

/**
 * @brief Destructor for ReversiBoard.
 *
 * No dynamic memory management is required in this class,
 * so the destructor has no special operations.
 */
ReversiBoard::~ReversiBoard() {}

/**
 * @brief Checks if specified position is within board boundaries.
 *
 * @return True if position is within the 8*8 grid, false otherwise.
 */
bool ReversiBoard::inBounds(int row, int col) const {
    return (row >= 0 && row < 8 && col >= 0 && col < 8); // Return true if coordinates in range
}

/**
 * @brief Returns the CellState at a given position.
 *
 * If position is out of bounds, returns CellState::E.
 *
 * @return The current CellState at the position.
 */
CellState ReversiBoard::getFieldState(int row, int col) const
{

    if (!inBounds(row, col)) 	// Check if coordinates are outside board
    {
        return CellState::E;    // Treat out-of-bounds as empty
    }
    return grid[row][col];     // Return the actual cell state
}

/**
 * @brief Checks and optionally flips captured pieces along a direction.
 *
 * This checks if placing a piece at (row, col) captures opponent pieces
 * in the given direction (dRow, dCol) according to Reversi rules.
 * If doFlip is true, captured pieces are flipped to the player's color.
 *
 * @return True if a valid capture path is found in this direction, false otherwise.
 */
bool ReversiBoard::checkDirection(int row, int col, int dRow, int dCol,
                                  CellState player, bool doFlip) {
    int r = row + dRow;
    int c = col + dCol;

    // Determine opponent
    CellState opponent = (player == CellState::P1) ? CellState::P2 : CellState::P1;

    // First adjacent cell must belong to the opponent.
    // If first cell not opponent or out of bounds

    if (!inBounds(r, c) || grid[r][c] != opponent) {
        return false;
    }

    r += dRow;
    c += dCol;

    // Continue while inside board
    while (inBounds(r, c)) {
        if (grid[r][c] == CellState::E) {             // If an empty cell is reached
            return false;
        }
        if (grid[r][c] == player) {                   // If player's piece found
            if (doFlip) {                             // If flipping is allowed
                int fr = row + dRow;                  // Start flipping from first opponent cell (row)
                int fc = col + dCol;                  // Start flipping from first opponent cell (col)
                while (fr != r || fc != c) {          // While not reached player's matching piece
                    grid[fr][fc] = player;            // Flip opponent piece to player's piece
                    fr += dRow;                       // Move along direction
                    fc += dCol;                       // Move along direction
                }
            }
            return true;                              // Valid capture found
        }
        r += dRow;                                    // Continue scanning next row
        c += dCol;                                    // Continue scanning next column
    }
    return false;                                     // No capture found before leaving board
}

/**
 * @brief Attempts to place the player's piece at the specified position.
 *
 * Validates the move by checking all 8 directions for valid captures.
 * If valid, flips opponent pieces and places the player's piece.
 *
 *
 * @return True if the move is valid and executed, false otherwise.
 */
bool ReversiBoard::placePiece(int row, int col, CellState player) {
    if (!inBounds(row, col) || grid[row][col] != CellState::E) {
        return false;
    }
    // All 8 directions for searching captures using std::array
    static const std::array<std::array<int, 2>, 8> directions {{
           {{-1, 0}},  // Up
           {{-1, 1}},  // Up-Right
           {{ 0, 1}},  // Right
           {{ 1, 1}},  // Down-Right
           {{ 1, 0}},  // Down
           {{ 1,-1}},  // Down-Left
           {{ 0,-1}},  // Left
           {{-1,-1}}   // Up-Left
       }};

    bool validMove = false;

    // Loop through each direction
    for (const auto& dir : directions) {
        if (checkDirection(row, col, dir[0], dir[1], player, true)) { // Check and flip pieces
            validMove = true;
        }
    }

    if (validMove) {                    // If at least one direction was valid
        grid[row][col] = player;        // Place player's piece
    }

    return validMove;                   // Return whether move succeeded
}

