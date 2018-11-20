/*
 * MazeRunner header file.
 *
 * K. Strotz
 * 6 Nov 2018
 */

/* Header guard */
#ifndef MRUNNER_H
#define MRUNNER_H

/* Include other headers */
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

/* Definitions */
#define BUFF_SIZE 1024
#define ROWS 20
#define COLS 40

enum results {
	SOLVED,
	INV_ARGS,
	LOAD_FAIL
};

int loadMaze(const char* mazefile, char* buffer);
int findStart(const char* buffer);

#endif
