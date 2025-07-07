 C-Games
This is a small project to create a Rock, Paper, Scissors game. To develop any game or project, mind mapping and idea design are essential.

Steps to Create the Game:
First: Create a mind map to design the rules and identify available materials.

Second: Develop the game logic.

Third: Draw a flowchart of the game logic for better understanding.

Fourth: Define the features/functions of the game.

Game Modes:
3 vs 3 Mode

Player vs Player (PvP)

Player vs Computer (PvC)

Computer vs Computer (CvC)

Key Functions:
For computer moves, we use random number generation (rand() and srand()) to control sequences.

choiceToWord() → Converts characters (r/p/s) to Rock, Paper, Scissor.

getResult() → Compares moves to determine the winner.

int main() → The entry point of the program, controlling the entire game.

Variables & Logic:
Variables are declared according to their data types.

A do-while loop ensures the game runs at least once before checking the "Play Again?" condition.

if-else conditions handle player/computer turns for decision-making.

A short pause (Sleep(500)) adds suspense between moves (uses <windows.h>—differs on Linux/MacOS).

End of Game:
After each round, the player is asked:
"Do you want to play again? (Yes/No)"
