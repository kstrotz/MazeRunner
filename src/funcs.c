/*
 * Functions for Maze Runner.
 *
 * K. Strotz
 * 17 Nov 2018
 */

#include "mazerunner.h"

int loadMaze(const char* mazefile, char* buffer){

	char* mode = "r";

	FILE * mazehandle = fopen(mazefile, mode);
	if (mazehandle == NULL){
		fprintf(stderr, "[  ERROR  ] Failed to open maze file.\n");
		return 1;
	}

	size_t chk = fread(buffer, sizeof(char), 1024, mazehandle); 
	if (chk == 0){
		fprintf(stderr, "[  ERROR  ] Failed to read maze file.\n");
		return 1;
	}

	int chkcl = fclose(mazehandle);
	if (chkcl != 0){
		fprintf(stderr, "[  ERROR  ] Failed to close maze file.\n");
		return 1;
	}
	
	return 0;
}

int findStart(const char* buffer){

	int pos = 0;

	for (int i = 0; i < BUFF_SIZE; i++){
		if (buffer[i] == 'S'){
			break;
		} else if (buffer[i] == '\n'){
		} else {
			pos++;
		}
		
	}

	return pos;
}

int findFinish(const char* buffer){
	
	int pos = 0;

	for (int i = 0; i < BUFF_SIZE; i++){
		if (buffer[i] == 'E'){
			break;
		} else if (buffer[i] == '\n'){
		} else {
			pos++;
		}
	}

	return pos;
}

void initMaze(const char* buffer, int srow, int scol, int frow, int fcol){

	initscr();
	start_color();
	keypad(stdscr, TRUE);
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	printw("%s", buffer);
	mvchgat(srow, scol, 1, A_BOLD, 1, NULL);
	mvchgat(frow, fcol, 1, A_BOLD, 2, NULL);
	refresh();

}
