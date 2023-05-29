# Program Flow

## 1. Initialize the Game
- Set up initial board position
- Initialize any variables or data structures required to track game state

## 2. Main Game Loop
- Loop continues until end conditions met
  - Checkmate, stalemate, resignation
- On each iteration of the loop
  - Print the Board
    - Display current board and players.
  - Get the Move
    - Ask current player for their move - await input. 
  - Validate the Move
    - Check if the move is legal
      - Can the piece move that way?
      - Does the move leave current player's `king` in check?
  - Make the Move
    - If the move is legal, update the board to reflect the move.
  - Check Game State
    - After the move, check if endgame conditions met.
    - If not - switch turns and continue.

## 3. End of Game
- Once the game ends, display final board state, result of game

## 4. Cleanup
- Clean up any resources that were used during gameplay
- Including: 
  - Freeing memory allocated for `Piece` objects. 
