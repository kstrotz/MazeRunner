/*
 * MazeRunner main function.
 *
 * K. Strotz
 * 6 Nov 2018
 */

/* This header will include all others */
#include "mazerunner.h"

int main(int argc, char** argv){

#ifndef TEST
	/* Check for valid argument count */	
	if (argc != 2){
		fprintf(stderr, "Usage: %s <maze file>\n", argv[0]);
		return INV_ARGS;
	}
	
	/* Allocate memory and load maze from file */
	char* buffer = (char*) malloc(sizeof(char)*BUFF_SIZE);
	int chkload = loadMaze(argv[1], buffer);
	if (chkload != 0){
		return LOAD_FAIL;
	}
#else
	if (argc != 1){
		fprintf(stderr, "Compiled as test version.\nUsage: %s\n", argv[0]);
		return INV_ARGS;
	}

	char* tstmaze = "../test/maze1.txt";
	char* buffer = (char*) malloc(sizeof(char)*BUFF_SIZE);
	int chkload = loadMaze(tstmaze, buffer);
	if (chkload != 0){
		return LOAD_FAIL;
	}
#endif

//	defSize(buffer);

	/* Ensure buffer is null terminated */
	buffer[(BUFF_SIZE-1)] = '\0';	
	bool solved = FALSE;
	int x, y;

	/* Find start position */
	int start = findStart(buffer);
	int srow = (start/COLUMNS);
	int scol = (start%COLUMNS);

	/* Find end position */
	int fin = findFinish(buffer);
	int frow = (fin/COLUMNS);
	int fcol = (fin%COLUMNS);

	/* Begin NCURSES and display to screen */
	initMaze(buffer, srow, scol, frow, fcol);
	
	while (solved == FALSE){
		getyx(stdscr, y, x);
		if ((y == frow) && (x == fcol)){
			solved = TRUE;
		} else {
			usrMove(y, x);
		}
	}

	(solved == TRUE) ? dispWin() : dispLose();

	return 0;

}
