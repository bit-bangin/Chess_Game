// Subclass:  Bishop.hpp
#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "Piece.hpp"

class Bishop : public Piece {
public:
  constexpr Bishop(PieceColor color) : Piece(color, "B") { }
  bool canMove(int startRow, int startCol, int endRow, int endCol) const override;
};

#endif
