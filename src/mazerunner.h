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
#include <stdio.h>
#include <stdlib.h>

/* Definitions */
#define BUFF_SIZE 1024

enum results {
	SOLVED,
	INV_ARGS,
	LOAD_FAIL
};

int loadMaze(const char* mazefile, char* buffer);

#endif
