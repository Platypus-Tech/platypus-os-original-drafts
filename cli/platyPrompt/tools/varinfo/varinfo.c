/******************************************************************************
 * This file, varinfo.c, is licensed under the GNU General Public License. It *
 * is a command to get the information of a system variable in memory.        *
 ******************************************************************************/
#include "../../../../include/cli/prompt.h"

int main(){
    if (input == "varinfo"){
        printf("Welcome to varinfo! This tool allows you to find the location of a system variable.\n");
        printf("To use, just type a variable at the prompt!\n");
        printf("NOTE: NO SPACES OR NEWLINES, WILL STOP WHEN ONE IS ENCOUNTERED.\n");
        char variable;
        printf("> ")
        scanf("%s", variable);
        if(variable == "prompt"){
            *promptLoc = &prompt
            printf("The location of the \"prompt\" variable is %x", &promptLoc);
            printf("The value of the \"prompt\" variable is %s", prompt);
            prscnPrompt();
        }
    }
}
