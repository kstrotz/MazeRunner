Maze Runner

A simple terminal game to let a player navigate a maze.

This program was used as a way to learn basic programming using the NCURSES library.
Therefore, this program requires the NCURSES library be installed in order to compile.
It's still a work in progress, so no promise is made of any functionality.

The game reads a text file containing the maze, with the following format:

 - Mazes can be of variable size up to a point (not yet determined).
 - The start is indicated by S
 - The end is indicated by E
 - The walls are indicated *

Gameplay is as follows:

 - The program is run with the maze file as a command line argument
 - The user starts at the red S, and must move to the green E
 - The user may move in any blank space using the arrow keys
 - If the user moves into a wall, the game ends
 - The game finishes when the user reaches the E
 - The track is displayed as the user moves

To play:

 1. git clone https://github.com/kstrotz/MazeRunner.git
 2. cd src
 3. gcc main.c funcs.c [-o ../target/release/runner] [-D TEST] -lncurses
 4. cd [output directory]
 5. ./runner [maze file]

The -o flag specifies the output file. Default is ./a.out

The -D flag with the TEST parameter will compile with a test maze [../target/maze1.txt]

The -lncurses flag is required for the linker to include the NCURSES library

