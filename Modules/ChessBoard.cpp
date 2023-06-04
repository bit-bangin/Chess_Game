#include "ChessBoard.hpp"
#include "pieces.hpp"
#include <iostream>

ChessBoard::ChessBoard() {
  // Initialize 2D vector with nullptrs
  pieces.resize(8, std::vector<std::shared_ptr<Piece>>(8, nullptr));
  
  // Initialize board with pieces in indicated starting positions
  // Initialize pawns.
  for (int j = 0; j < 8; ++j) {
    pieces[1][j] = std::make_shared<Pawn>(1, j, PieceColor::WHITE);
    pieces[6][j] = std::make_shared<Pawn>(6, j, PieceColor::BLACK);
  }
  
  // Initialize rooks, knights, bishops, queen, king.
  for (int i = 0; i < 8; i+=7) {
    PieceColor color = (i == 0) ? PieceColor::WHITE : PieceColor::BLACK;
    pieces[i][0] = std::make_shared<Rook>(i, 0, color);
    pieces[i][7] = std::make_shared<Rook>(i, 7, color);
    pieces[i][1] = std::make_shared<Knight>(i, 1, color);
    pieces[i][6] = std::make_shared<Knight>(i, 6, color);
    pieces[i][2] = std::make_shared<Bishop>(i, 2, color);
    pieces[i][5] = std::make_shared<Bishop>(i, 5, color);
    pieces[i][3] = std::make_shared<Queen>(i, 3, color);
    pieces[i][4] = std::make_shared<King>(i, 4, color);
  }
}

ChessBoard::~ChessBoard() {
    // Pieces will be automatically deleted upon destruction of the board.
}
void ChessBoard::setPiece(int row, int col, std::shared_ptr<Piece> piece){
    if(row >= 0 && row < 8 && col >= 0 && col < 8) {
        pieces[row][col] = piece;
    } else {
        // Handle error: invalid index
        std::cout << "Invalid Index: " << row << ", " << col << std::endl;
    }
}

std::shared_ptr<Piece> ChessBoard::getPiece(int row, int col) const {
    if(row >= 0 && row < 8 && col >= 0 && col < 8) {
        return pieces[row][col];
    } else {
        // Handle error: invalid index
        return nullptr;
    }
}

bool ChessBoard::isPieceOnBoard(int row, int col) const {
    if(row >= 0 && row < 8 && col >= 0 && col < 8) {
        return pieces[row][col] != nullptr;
    } else {
        return false;
    }
}

bool ChessBoard::isPieceValid(int row, int col) const {
    if (!isPieceOnBoard(row, col)) {
        return false;
      
      return True:
    }

void ChessBoard::printBoard() const {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (pieces[i][j] != nullptr) {
                std::cout << pieces[i][j]->getSymbol() << ' ';
            } else {
                std::cout << ". ";
            }
        }
        std::cout << '\n';
    }
}  
