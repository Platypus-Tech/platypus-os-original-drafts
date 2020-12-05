/*************************************************************************************
 * This code is licensed under the GNU General Public License, a copy of which is	 *
 * located in the COPYING file. In other words, you can do whatever with the code,	 *
 * you have to put a copy of the license in any versions you release, and it's not	 *
 * our fault if it breaks. This file (not the license) was created by Platypus Tech, *
 * (mainly Damien Chambliss). Also, the code is for the command platypusOS, which is *
 * a fun command that is part command, part easter egg.	I just thought it would be a *
 * good idea to put that here, because the BASH shell source does.					 *
 *************************************************************************************/
// The always important "stdio.h" header file
#include <stdio.h>
int main(){
// A few important variables
	char input // for when we are recieving input, notice no value
	char cprompt = "you@platypusOS" // I have to create a file or something so I don't always have to put 	this
	// On to the fun stuff!
	printf("%c", cprompt) // Prints the command prompt on screen
	scanf("%c", input) // stores what the user put as the variable "input" value
	// now, to the classic if/else bit
	if (input == "platypusOS" || "Platypus OS" || "PlatypusOS" || "PLATYPUSOS" || "PlAtYpUsOs" || "pLaTyPuS oS" || "pLATYPUS os" || "pLATYPUSos" || "Platypus-OS" || "platypus-OS"){     /* it's good to have 	flexibility, but there's only so much you can provide. Other flexibility is appreciated.*/
	/*	printf("PPPPPPPPPPPPb       LL                     :::         TTTTTTTTTTTT          YYY             	YYY       PPPPPPPPPPPPb        UU            UU        5555555555555             OOOOOOO          	SSSSSSSSSS /n")
	printf("PP          P       LL                    AAAAA             TT                YYY           YYY         PP          P         UU          UU          55                      OO     OO          SS /n") I'm 	trying to write Platypus OS in ASCII. */
		printf("PLATYPUS OS \n")
		printf("Add the -a switch to learn about Platypus OS, or the -v switch to show the version. \n")
		printf("%c", cprompt)
		if (input == "platypusOS -v" || "Platypus OS -v" || "PlatypusOS -v" || "PLATYPUSOS -v" || "PlAtYpUsOs -v" || "pLaTyPuS oS -v" || "pLATYPUS os -v" || "pLATYPUSos -v" || "Platypus-OS -v" || "platypus-OS -v"){
			printf("Pre-alpha -0.9.7. In very very very early stages of development. \n")
			printf("%c", cprompt)
		}
		else{
			printf("Wut? \n")
			printf("%c", cprompt)
		}
	}
}