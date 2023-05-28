# Basic Rules for Chess
This document outlines the real world rules for a chess game. 

## Objective
The primary objective during a game of chess is to achieve the condition of "**checkmate**" against one's opponent.

_Checkmate_: 
>The condition during which you are able to put your opponent's king under attack in such a manner that your opponent has no (game-legal) recourse to mitigate the attack on the next turn. 

_Check_:
> The condition during which one's king is under the threat of capture. 

## Rules 
### Setup
- 8x8 grid "chessboard" (64 squares)
- Each player begins with 16 pieces
  - 1 king, 1 queen, 2 rooks, 2 knights, 2 bishops, 8 pawns
- Pieces are set up on the two ranks (rows) closest the players
  - Rank closest to the player: 
    - R N B K Q B N R
  - The next rank is 8 pawns (p)
### Turns
- Players alternate turns
  - White pieces move first
- During each turn, the player must make a legal move. 
### Movement
- Each type of piece has specific permissions dictating movement. 
### Special Moves
- Castling
  - Move involving King and a rook - enabling simultaneous movement.  
- En Passant
  - Pawn capturing another Pawn that has just moved 2 squares forward from start can capture it as if it had only moved 1 square forward.
- Pawn Promotion
  - If a pawn reaches it's 8th rank - promoted to Q, R, B, or N of the same color. 
### Check & Checkmate
- Check
  - The condition during which the king is under the threat of capture. 
- Checkmate
  - The condition during which you are able to put your opponent's king under attack in such a manner that your opponent has no (game-legal) recourse to mitigate the attack on the next turn. 
### Stalemate
The condition in which a player is not in check, but has no legal moves. 
### Draw
- Neither player has sufficient pieces to force a checkmate
- The precise position occurs 3 times
- No capture made in the last 50 moves
### Resignation
If a player resigns, their opponent wins. 

## Pieces & Associated Moves

### **`Pawn` (P)**
- **Movement**
  - Vertically forward 1 square.
  - Option to move 2 squares for first move (white = rank 2, black = rank 7)
- **Capture**
  - Diagonally, one square forward, and to the left or right. 
- **Special**
  - _En Passant)_
    - If a `pawn`(w) advances 2 squares from it's starting position and ends up to the side of an opponent's `pawn`(b), that `pawn`(b) has the option of capturing the `pawn`(w) as if it had moved one square forward.
  - _Promotion_
    - If a `pawn` reaches the end of the board (8th rank for white, 1st for black), it is promoted to another piece (Queen) 
### **`Rook` (R)**
- **Movement**
  - The `rook` can move any number of squares along a rank or file (_that is, horizontally or vertically_)
### **`Knight` (N)**
- **Movement**
  - `Knights` move to any of the squares immediately adjacent to them, followed by moving 2 squares in a line perpindicular to the first. 
    - "L" shape
- **Special**
  - `Knights` are the only piece capable of jumping other pieces.
### **`Bishop` (B)**
- **Movement**
  - `Bishop` can move any number of squares diagonally.
### **`Queen` (Q)**
- **Movement**
  - The `Queen` can move any number of squares along a rank, or file, or diagonally.
    - Combining the power of the `bishop` + the `rook`. 
### **`King` (K)**
- **Movement**
  - Moves 1 square in any direction
- **Special**
  - _Castling_
    - Once per game, each `king` is allowed to make a special _castling_ move.
    - _Castling_ consists of moving the `king` 2 squares along the first rank toward a `rook` on the player's initial squares, then placing the `rook` on the square just crossed by the `king`.
