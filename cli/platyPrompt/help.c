/*****************************************************************
 * This is the file "help.c" for the builtin command in the 	 *
 * Platypus OS shell, "help".									 *
 *****************************************************************/
#include "../../include/cli/prompt.h"
#include <string.h>
// Can use either no arguments, or -v for version

// pass command line arguments
int main(int argc, char *argv[]) {

	// check for valid number of argments passed
	// if 0 arguments passed
	if (argc == 1) {
		printf("This is the Platypus OS command line. There are a few things that you need to know: \n"
		"1. You can login using the 'login' command \n"
		"2. This is still in development, but it is still usable \n"
		"3. You can get the version of this by adding '-v' at the end of the command \n");

	} // if 1 argument is passed
	else if (argc == 2) {
	
		// compare command line arguments instead of having to use a nested prompt
		if (! strcmp(argv[1],"-v")) {
			printf("version -0.9.4-rc2 \n");
		} else { 
			printf("huh? \n"); // if one argument is passed but is invalid
		}
	// if invalid number of arguments
	} else {
		printf("Invalid number of arguments. Please input either one or zero arguments.\n");
	}
}
