// Subclass of Piece:  Rook.hpp
#ifndef ROOK_HPP
#define ROOK_HPP

#include "Piece.hpp"

class Rook : public Piece {
public:
  constexpr Rook(PieceColor color) : Piece(color, "R") { }
  bool canMove(int startRow, int startCol, int endRow, int endCol) const override;
};

#endif
