# Rock_Paper_Scissor_Using_C
A simple Rock Paper Scissors game in C where the user plays against the computer. The winner is determined based on predefined rules using random computer choices. 

**Rock-Paper-Scissors Game Project Description**

**1. Introduction**
The Rock-Paper-Scissors game is a popular hand game played between two participants. This project implements a console-based version in C, where the user competes against the computer. The game continues until either the player or the computer reaches a score of 10, determining the winner.

**2. Implementation Approach**
- The game uses a loop that runs until either the user or the computer reaches a score of 10.
- The user selects their choice by entering 1 (Rock), 2 (Paper), or 3 (Scissors).
- The computer randomly selects its choice using the `rand()` function.
- The program then compares the choices and determines the winner based on the standard rules:
  - Rock vs Paper -> Paper wins.
  - Rock vs Scissors -> Rock wins.
  - Paper vs Scissors -> Scissors wins.
- The scores are updated accordingly after each round.
- The final winner is displayed when a score of 10 is reached by either the player or the computer.

**3. Features**
- Score tracking for both the user and the computer.
- Randomized computer choice for fair gameplay.
- Continuous play until one player reaches 10 points.
- Clear console output displaying choices, scores, and results.

**4. Functions Used**
- `rand() % 3 + 1`: Generates a random choice for the computer.
- `printf() and scanf()`: Used for user input and displaying game information.
- `while(1)`: Loop ensures continuous gameplay until one player reaches 10 points.
- `getch()`: Waits for user input before closing the program.

**5. Conclusion**
This Rock-Paper-Scissors project is a simple yet engaging game demonstrating fundamental programming concepts such as loops, conditional statements, random number generation, and user interaction. It can be extended to include additional features like a graphical user interface, multiplayer mode, or enhanced scoring mechanisms.


