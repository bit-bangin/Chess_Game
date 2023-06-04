// Subclass:  King.hpp
#ifndef KING_HPP
#define KING_HPP

#include "Piece.hpp"

class King : public Piece {
public:
  constexpr King(PieceColor color) : Piece(color, "K") { }
  bool canMove(int startRow, int startCol, int endRow, int endCol) const override;
};

#endif
