# Architecture

## 1. Class Definitions

### `Piece` Class
- **About**
  - Represents a chess piece.
- **Methods**
  - `move()`  |   _moves piece to a new square_
  - `capture()`  |  _removes the piece from the game_
- **Subclasses** 
  - Subclass for each type of `piece`
    - Properites
      - Color
      - Position
  - Method
    - `getPossibleMoves()`  |  _Returns a list of valid moves for the piece_

### `Square` Class
- **About**
  - Represents a square on the chess board.
- **Properties**
  - Reference to the `Piece` object currently occupying given `Square`
  - `null` if empty
- **Methods**
  - `getPiece()`  |  _Returns the `Piece` currently occupying the `Square`_
  - `setPiece(Piece piece)`  |  _Sets `Piece` currently occupying the `Square`_
  - `isEmpty()`  |   _Returns whether or not a `Square` is empty_

### `Board` Class
- **About**
  - Represents the chess board.
- **Properties**
  - 2-dimensional array of `Squares`
- **Methods**
      - `getSquare(int x, int y)`  |   _returns the `Square` at the given coordinates._
      - `movePiece(Piece piece, SquareDest)`  |   _move `Pieces` around on the `board`_
      - `check status()`  |  _check current state of the `board`_
      - `displayBoard()`  |  _prints state of `board` to console_
      
### `Player` Class
- **About**
  - Represents a player in the game.
- **Properties**
  - Player color
  - Pieces in play
  - Turn 
- **Methods**
  - `getColor()`  |  _returns the color of the player's pieces_
  - `getActivePieces()`  |  _returns a list of given player's pieces still in play_
  - `isInCheck()`  |  _checks whether the player is currently in check_
  - `makeMove()`  |  _prompts the player to input a move (human player)_

### `Game` Class
- **About**
  - Controls flow of the game.
- **Properties** 
  - Game loop
  - Contains a `Board` and 2 `Players`
- **Methods**
  - `startGame()`  |  _starts the game, setting up initial board state, starts game loop_
  - `endGame()`  |  _ends the game, declaring winner (or draw), performs cleanup_
  - `switchPlayer()`  |  _asks current player to make a move, determines if move is valid_
  - `evaluateGameState()`  |  _evaluates current state of game, checks for endgame conditions_

## 2. Main Function
- Create a `Game` object
  - Start game play, continue until end
- Additionally handle setup and/or cleanup before and after a game. 

## 3. Considerations
- Concept representation
- Special situations
- Complexity
- Chess engine
