/******************************************************************
 * This file, pwd.c, is licensed under the GNU GPL version 3. It  *
 * implements the pwd command found in Unix and Linux.            *
 ******************************************************************/
#include "../../include/cli/prompt.h"

int main(){
    if(input == "pwd"){
        printf("%s\n", str);
        prscnPrompt();
    }
}
