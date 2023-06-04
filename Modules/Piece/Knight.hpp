// Subclass:  Knight.hpp
#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "Piece.hpp"

class Knight : public Piece {
public:
  constexpr Knight(PieceColor color) : Piece(color, "N") { }
  bool canMove(int startRow, int startCol, int endRow, int endCol) const override;
};

#endif
