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
int main(){
    prscnPrompt();
	if (input == "platypusOS" || "Platypus OS" || "PlatypusOS" || "PLATYPUSOS" || "PlAtYpUsOs" || "pLaTyPuS oS" || "pLATYPUS os" || "pLATYPUSos" || "Platypus-OS" || "platypus-OS"){     /* it's good to have 	flexibility, but there's only so much you can provide. Other flexibility is appreciated.*/
	/*	printf("PPPPPPPPPPPPb       LL                     :::         TTTTTTTTTTTT          YYY             	YYY       PPPPPPPPPPPPb        UU            UU        5555555555555             OOOOOOO          	SSSSSSSSSS /n")
	printf("PP          P       LL                    AAAAA             TT                YYY           YYY         PP          P         UU          UU          55                      OO     OO          SS /n") I'm 	trying to write Platypus OS in ASCII. */
		printf("PLATYPUS OS \n");
		printf("Add the -v switch to show the version. \n");
		printf("%s", prompt);
		if (input == "platypusOS -v" || "Platypus OS -v" || "PlatypusOS -v" || "PLATYPUSOS -v" || "PlAtYpUsOs -v" || "pLaTyPuS oS -v" || "pLATYPUS os -v" || "pLATYPUSos -v" || "Platypus-OS -v" || "platypus-OS -v"){
			printf("Pre-alpha -0.9.6. In very very very early stages of development. \n");
			printf("%s", prompt);
		}
		else{
			printf("Wut? \n");
			printf("%s", prompt);
		}
	}
}
