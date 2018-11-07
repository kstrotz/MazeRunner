/*
 * MazeRunner main function.
 *
 * K. Strotz
 * 6 Nov 2018
 */

#include "mazerunner.h"

int main(int argc, char** argv){
	
	if (argc != 2){
		fprintf(stderr, "Usage: %s <maze file>\n", argv[0]);
		return INV_ARGS;
	}

}
