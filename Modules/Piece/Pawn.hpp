// Subclass:  Pawn.hpp
#ifndef PAWN_HPP
#define PAWN_HPP

#include "Piece.hpp"

class Pawn : public Piece {
public:
  constexpr Pawn(PieceColor color) : Piece(color, "P") { }
  bool canMove(int startRow, int startCol, int endRow, int endCol) const override;
};

#endif
