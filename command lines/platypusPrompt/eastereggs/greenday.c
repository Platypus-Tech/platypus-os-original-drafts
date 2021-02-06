/*******************************************************************
 * This file, greenday.c, is licensed under the GNU General Public *
 * License. That means you can use this however you want, as long  *
 * as you keep the same license or a compatable license.           */
#include "cprompt.h"

int main(){
	prscnPrompt();
	if (input == "greenday"){
		printf("They're on on my favorite bands! I mainly like 39/Smooth, Dookie, and American Idiot.");
		printf("Why'd you mention them?");
		printf("%s", prompt);
	}
}