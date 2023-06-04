// Subclass:  Queen.hpp
#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "Piece.hpp"

class Queen : public Piece {
public:
  constexpr Queen(PieceColor color) : Piece(color, "Q") { }
  bool canMove(int startRow, int startCol, int endRow, int endCol) const override;
};

#endif
