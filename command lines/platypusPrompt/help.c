/*****************************************************************
 * This is the file "help.c" for the builtin command in the 	 *
 * Platypus OS shell, "help".									 *
 *****************************************************************/
#include <stdio.h>
// A few important variables
char input
char cprompt = "you@platypusOS:~#"
// more are coming, I think

// Ok, on to the fun stuff!

printf("%c", cprompt)
scanf("%c", input)
if (input == "help" || "HELP" || "Help" || "HeLp" || "hELP" || "hElP" || "help!" || "Help!" || "HELP!" || "hELP!" || "HeLp!" || "hElP"){
	printf("This is the Platypus OS command line. There are a few things that you need to know: \n")
	printf("1. You can login using the 'login' command \n")
	printf("2. This is still in development, but it is still usable \n")
	printf("3. You can get the version of this by adding '-v' at the end of the command \n")
	printf("%c", cprompt)
}
else{
		printf("huh? \n")
		printf("%c", cprompt)
}
if (input =="help -v" || "HELP -v" || "Help -v" || "HeLp -v" || "hELP -v" || "hElP -v" || "help! -v" || "Help! -v" || "HELP! -v" || "hELP! -v" || "HeLp! -v" || "hElP -v"){
	printf("New \n")
	printf("%c", cprompt)
}