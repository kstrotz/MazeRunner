/*
 * MazeRunner main function.
 *
 * K. Strotz
 * 6 Nov 2018
 */

/* This header will include all others */
#include "mazerunner.h"

int main(int argc, char** argv){

	/* Check for valid argument count */	
	if (argc != 2){
		fprintf(stderr, "Usage: %s <maze file>\n", argv[0]);
		return INV_ARGS;
	}
	
	return 0;

}
