// Base class: Piece.hpp
#ifndef PIECE_HPP
#define PIECE_HPP

# include <string>

enum class PieceColor { WHITE, BLACK };

class Piece {
protected:
  PieceColor color;
  std::string symbol;
public:
  constexpr Piece(PieceColor color, std::string symbol) : color(color), symbol(symbol) { }
  virtual ~Piece() = default;
  constexpr PieceColor getColor() const { return color; }
  constexpr std::string getSymbol() const { return symbol; }
  virtual bool canMove(int startRow, int startCol, int endRow, int endCol) const = 0;
  // Consider v. clone fx below ---
  //virtual Piece* clone() const = 0;
};

#endif
