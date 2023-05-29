#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include <vector>
#include <memory> //for std::sharted_ptr
#include <iostream>

class Piece; // Forward declaration of Piece class.

class ChessBoard {
public:
    // Contructor initializes the board with pieces in their starting positions.
    ChessBoard();
    // Destructor for memory management.
    ~ChessBoard()
    // Method sets the piece at the given location on the board.
    void setPiece(int row, int col, std::shared_ptr<Piece> piece);
    // Method returns the piece at the given location on the board.
    std::shared_ptr<Piece> getPiece(int row, int col) const;
    // Method checks if given location contains a piece.
    bool isPieceOnBoard(int row, int col) const;
    // Method checks if the specified location is valid destination.
    bool isDestinationValid(int row, int col) const;
    // Method prints the board to the console.
    void printBoard() const;

private:
    /* A 2D vector of pointers to pieces. "A vector of vectors."
    The first index is the row, the second is the column.
    */
    std::vector<std::vector<std::shared_ptr<Piece>>> pieces;
};

#endif // CHESSBOARD_HPP
