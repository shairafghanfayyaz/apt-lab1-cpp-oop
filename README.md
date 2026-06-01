# APT Lab 1 – Advanced Programming Techniques
### Hochschule Darmstadt | Prof. Dr. Michael Lipp | WS 2025/26

Solutions for the three exercises of APT Lab 1, covering core object-oriented 
design principles in C++. Each exercise is implemented as a standalone Eclipse 
project with full Doxygen documentation and hand-drawn UML class diagrams.

---

## Exercise 1.1 – Reversi Board
A fully functional Reversi (Othello) board implemented in C++.
- `ReversiBoard` class models the game state using an enumeration for field 
  states (EMPTY, PLAYER1, PLAYER2)
- Move validation and piece flipping logic follow official Reversi rules
- `ReversiConsoleView` renders the board to the console via a pointer to 
  ReversiBoard, cleanly separating model and view (MVC-inspired)
- Interactive main loop queries the current player for their next move

## Exercise 2.1 – Modulo Counter
An OOP reimplementation of the C pre-course modulo-n counter task.
- `ModuloNDigit` models a single digit that wraps around at a configurable 
  maximum value n
- `ModuloNCounter` composes multiple digits into a multi-digit counter 
  supporting binary, octal, decimal, and hexadecimal bases
- Both prefix (`++counter`) and postfix (`counter++`) increment operators 
  are overloaded with correct return-value semantics
- Constructors and destructors replace the init/deinit functions from the 
  C version; dynamic memory is managed explicitly

## Exercise 3.1 – Heat Controller Decomposition
A functional decomposition of a heating controller into component classes.
- Identifies and models 7+ functional components including:
  TemperatureSensor, DesiredTemperatureControl, Comparator, Actuator, 
  Display, Timer, and SafetyMonitor
- Each class documents its purpose, state (data members), and capabilities 
  (methods) exhaustively in Doxygen format
- UML class diagram shows all relationships (composition, association)
- A written scenario traces which methods are invoked when the user 
  raises the target temperature by 5 degrees

---

## Build & Documentation
Each project includes a `.doxyfile` for generating HTML documentation.
To build docs in Eclipse: right-click project → *@ Build Documentation*
Open `html/index.html` in a browser to view the generated output.

## Rules Compliance
- No `<windows.h>` or `<conio.h>` includes
- Maximum line length: 80 characters
- Local variables declared only when their initial value is known
- No compilation errors across all three projects
