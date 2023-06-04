# Computer Science Concepts Taught Using Chess

## Algorithms

### About the relationship between chess and algorithms
- Chess is a complex game with a large number of possible moves. Strategy and planning is critical to success in chess. 
- Algorithms can be used to:
  - Calculate the best move
  - Search for a particular pattern
  - Evaluate a position

### Examples
- Specific Algorithms
  - **Minimax Search**
    - Works by recursively exploring all possible moves, then choosing the move that leads to the best possible outcome. 
    - Concepts:
      - Search trees
      - Algorithmic exploration of search trees
  - **Alpha-Beta Pruning**
    - Technique used to improve the efficiency of minimax search.
      - Works by elliminating branches of the search tree that cannot lead to the best possible outcome.
  - **Heuristics**
    - Rules of thumb that can be used to make decisions in chess.
      - "Capture an opponents piece if possible"
    - Useful for teaching students about the importance of using domain knowledge to improve the efficiency of algorithms.  
- **Skills Valuable to Computer Science**
  - **Problem-Solving**
    - Identify problems, generate solutions, evaluate effectiveness of solutions
  - **Critical Thinking**
    - Think critically about circumstance, make decisions based on available information  
  - **Creativity**
    - Thinking outside of the box
    - Come up with new and innovative solutions

## Data Structures

### Examples
- Board representation
  - Store current state of board - later used to determine
  - Pieces on board, location, possible moves
- Move representation
  - Store data about chess move
  - Used to execute, undo, evaluate
- Piece representation
  - Characteristics of a piece
  - Type, color, movement, pattern, attack range
- Game state represenation
   - Winner of game, current player, current turn

## Object-Oriented Programming

### About the relationship between chess and OOP
- Object-oriented programming (OOP) is a programming paradigm that uses objects to model real-world entities.
- Objects are made up of:
  - Data (_what it is_)
  - Behavior (_what it does_)
- Objects can interact with one another to achieve a common goal. 
### Additional Benefits
- Encapsulation
  - Encapsulate data + behavior into objects. 
  - Increase modularity of the code (portability)
    - Easier to maintain 
- Abstraction
  - Enable to abstract away the details of implementation  
- Polymorphism
  - Provies ability to use the same interface for different types of objects. 

### Examples
- Piece Objects
  - Each piece can be represented as an object.
  - Store Information (_what it is_)
    - Type
    - Color
    - Movement pattern
    - Attack range
  - Methods (_what it does_)
    - Moving piece
    - Capturing opponent's piece
    - Evaluating position
- Board Object
  - Store Information (_what it is_)
    - State of board
    - Location of all pieces 
  - Methods (_what it does_)
    - Moving piecing
    - Capturing pieces
    - Evaluating game state
- Game Object
  - Store Information (_what it is_)
    - Current state of game
    - State of players, board, turn order
  - Methods (_what it does_)
    - Starting the game
    - Making moves
    - Evaluating the game state
