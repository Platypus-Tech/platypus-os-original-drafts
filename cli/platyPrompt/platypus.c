/*************************************************************************************
 * This code is licensed under the GNU General Public License, a copy of which is    *
 * located in the COPYING file. In other words, you can do whatever with the code,   *
 * you have to put a copy of the license in any versions you release, and it's not   *
 * our fault if it breaks. This file (not the license) was created by Platypus Tech, *
 * (mainly Damien Chambliss). Also, the code is for the command platypusOS, which is *
 * a fun command that is part command, part easter egg.	I just thought it would be a *
 * good idea to put that here, because the BASH shell source does.                   *
 *************************************************************************************/
// The always important "stdio.h" header file
#include "../../include/cli/prompt.h"
#include <string.h>

// pass command line arguments, a more traditional unix-like command
int main(int argc, char *argv[]) {
	
	// check for valid number of argments passed
	if (argc == 2){
		
		// compare command line arguments instead of having to use a nested prompt
		if (! strcmp(argv[1],"-v")) {
			printf("PlatypusOS Pre-alpha -0.9.6. In very very very early stages of development. \n");
		} else {
			printf("PlatypusOS\n");
		//prscnPrompt();
			
		}
	// if invalid number of arguments
	} else {
		printf("Invalid number of arguments. Please input exactly one argument.\n");
	}
}
