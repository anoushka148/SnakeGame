# Snake Game

This is a simple **Snake Game** implemented in **C++**. The game features a snake represented by `*`, which moves within a bordered area collecting food represented by `O`. The player's goal is to score 10 points by collecting food without hitting the walls of the game area.



## Features
- **Dynamic Scoring**: The score increases by 1 point each time the snake collects food.
- **Win Condition**: The game is won when the player scores 10 points.
- **Lose Condition**: The game ends if the snake hits the walls.
- **Snake Movement**: The snake can be moved using the numpad keys:
  - Press `6` to move right.
  - Press `4` to move left.
  - Press `2` to move down.
  - Press `8` to move up.
- **Random Food Positioning**: The food (`O`) appears in a random location after each successful collection.
## Game Controls
- Use the following **numpad keys** to control the snake:
  - `6`: Move right
  - `4`: Move left
  - `2`: Move down
  - `8`: Move up

## Winning and Losing
- **Win**: You win the game if you collect 10 pieces of food.
- **Lose**: You lose if the snake hits any of the boundaries.
## Requirements
- **Windows Operating System**: This game uses the `<windows.h>` library for the `Sleep()` function, so it works on Windows systems.

## How to Run
1. **Clone the Repository**: Clone this project to your local machine.
   ```bash
   git clone https://github.com/anoushka148/SnakeGame.git
   cd snake-game
2. **Compile the Code**: Use a C++ compiler such as g++ or any IDE that supports C++ (like Code::Blocks, Visual Studio, etc.) to compile the code.
   ```bash
   g++ snake_game.cpp -o snake_game
3. **Run the Game**: Run the compiled executable.
   ```bash
   ./snake_game
