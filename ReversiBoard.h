/**
 * @file ReversiBoard.h
 * @brief Declares the Reversi board and game logic.
 *
 * @author Muhammad Shair Afghan
 * @date Nov 11, 2025
 */

#ifndef REVERSIBOARD_H
#define REVERSIBOARD_H

#include <array>

/**
 * @enum CellState
 * @brief Enum representing the state of a board cell.
 */
enum class CellState {
    E,   ///< Empty: No piece on the cell///
    P1,  ///< P1: Player 1's piece is Black///
    P2   ///< P2: Player 2's piece is White///
};

/**
 * @class ReversiBoard
 * @brief Represents the state and logic of the Reversi game board.
 */
class ReversiBoard {
private:
    std::array<std::array<CellState, 8>, 8> grid; ///< 8x8 grid of cell states.

    /**
     *
     * @param row Starting row.
     * @param col Starting column.
     * @param dRow Row direction increment.
     * @param dCol Column direction increment.
     * @param player The player making the move.
     * @param doFlip If true, flips the opponent's pieces; otherwise, just checks validity.
     *
     */
    bool checkDirection(int row, int col, int dRow, int dCol, CellState player, bool doFlip);

    /**
     *
     * @param row Row to check.
     * @param col Column to check.
     *
     */
    bool inBounds(int row, int col) const;

public:
    /**
     * @brief Initializes the board with starting pieces.
     */
    ReversiBoard();

    /**
     * @brief Destructor.
     */
    virtual ~ReversiBoard();

    /**
     *
     * @param row Row index.
     * @param col Column index.
     *
     */
    CellState getFieldState(int row, int col) const;

    /**
     *
     * @param row Row index.
     * @param col Column index.
     * @param player Player (P1 or P2) placing the piece.
     *
     */
    bool placePiece(int row, int col, CellState player);
};

#endif // REVERSIBOARD_H
