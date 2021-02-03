/********************************************************
 * This file, login.c, is licensed under the GNU GPLv3. *
 * (c) DamieFC 2021										*
 ********************************************************/
#include "../libraries/cli/cprompt.h"
#include "logininfo.h"

int main(){
	char loginprompt = "Type \"login\" to login: "
	printf("loginprompt");
	scanf("%s", input);
	if (input == "login"){
		// I got another .h file! AND WE'RE OFF LIKE A HERD OF TURTLES!
		char attemptusername
		char attemptpassword
		scanf("%s", attemptusername);
		if(attemptusername == rootusername){
			printf("Ok, root! Password: ");
			scanf("%s", attemptpassword);
			if (attemptpassword == rootpass){
				printf("Hi, root! \n");
				printf("%s", prompt);
			}
		}
	}
}
