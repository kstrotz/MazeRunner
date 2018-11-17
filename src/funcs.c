/*
 * Functions for Maze Runner.
 *
 * K. Strotz
 * 17 Nov 2018
 */

#include "mazerunner.h"

void loadMaze(const char* mazefile, char* buffer){
	char* mode = "r";
	FILE * mazehandle = fopen(mazefile, mode);
	size_t chk = fread(buffer, sizeof(char), 1024, mazehandle); 
	printf("chk = %d\n", chk);
	int chkcl = fclose(mazehandle);
	printf("chkcl = %d\n", chkcl);
}
