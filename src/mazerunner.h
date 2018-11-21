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
#define COLUMNS 40

enum results {
	SOLVED,
	INV_ARGS,
	LOAD_FAIL
};

int loadMaze(const char* mazefile, char* buffer);
int findStart(const char* buffer);
int findFinish(const char* buffer);
void initMaze(const char* buffer, int srow, int scol, int frow, int fcol);
void usrMove(int y, int x);
void dispWin(void);
void dispLose(void);

#endif
