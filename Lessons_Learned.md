# Lessons Learned

### 1. Forward declaration
    Useful to prevent circular dependencies.
    -- ChessBoard.hpp
### 2. Destructors
    The use of destructors ensure the best possible memory management.
    -- ChessBoard.hpp
### 3. Private member variables

### 4. Str vs Char
    - Contextual choice - requirement specific.
    - `std::string` class
        1. Flexibility
            - Class with inherent methods (manipulation)
        2. Safety
            - Strings in CPP are null-terminated ("\0")
        3. Dynamic size
    - `char` array
        1. Memory
            - Potentially smaller
        2. Compatibility
            - Possibly necessary with certain APIs or Libraries having requirement for null-term `char` arrays
      
