# Logic

## 1. Board Representation
### `Board` Object
- Represent the chessboard as a 2 dimensional array that contains the state of all the squares on the board, with relation to the `Piece` objects.

## 2. Piece Movement
### `Piece` Objects
- **Pawn** (P)
  - Can move forward 1 square (on the first move - forward 2 squares)
  - Captured only diagonally
  - En passant, promotion
- **Rook** (R)
  - Can move any number of squares vertically or horizontally. 
- **Knight** (N)
  - Moves in an "L" shape.
  - 2 squares in 1 direction + 1 square perpendicular
- **Bishop** (B)
  - Can move ny number of squares diagonally.
- **Queen** (Q)
  - Moves any number of squares in any direction.
- **King** (K)
  - Capable of moving 1 square - any direction
  - Castling

### `Piece` Object Methods
- Each `piece` object should have a method to determine if a move is valid for that type of piece.
  - Considering the current position of the piece, desired new position. 

## 3. Game State
### `Game` Object
- Track current game state, including: 
  - Player turn
  - If either player is in check or checkmate
  - If draw condition has been met
    - Statelmate, or threefold repetition.  
### `Game` Object Methods
- Make moves
- Evaluate current state of the game after each move

## 4. Check & Checkmate
After each move, check if the move has put the opposing king in check or checkmate. 
- Check
  - Review all of the squares on the board and see if any of the current player's pieces could legally move to the square containing the opposing king.
- Checkmate
  - Determine if there are legal moves that the opposing player could make that would get their king out of check. 
  - If there are no such moves, then it is checkmate.

## 5. Draw Conditions
After each move, check for draw conditions. 
- Stalemate
  - The player whose turn it is currently is not in _check_, however there are no legal moves. 
- Threefold Repetitiion
  - The same board position ahs occured 3 tiems
- Fifty-Move Rule
  - 50 moves without any pawn moves or captures. 
