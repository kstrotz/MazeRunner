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
