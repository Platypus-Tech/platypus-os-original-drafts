/********************************************************************************
 * This file, prompt.h, is licensed under the GNU General Public License.       *
 * It contains information retaining to the command prompt.                     *
 * (c) DamieFC & berg95 2020-2021                                               *
 ********************************************************************************/

#ifndef PLATYPROMPT_PROMPT_H
#define PLATYPROMPT_PROMPT_H
// Important libraries

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/* important variables */

FILE *getpwd;
char *command = "pwd";
char c = 0;
char str[];
char input[];

getpwd = (FILE*)popen(command, "r");
while (fread(&c, sizeof c, 1, getpwd)) {
    strncat(str, &c, 1);
}
char prompt[] = "you@platypusos:";

void prscnPrompt();

void prscnPrompt(){
    printf("%s%s#", prompt, str);
    gets("%s", input); /* So it doesn't stop at a space like it did before, but it stops at a newline :) */
}
#ENDIF /* PLATYPROMPT_PROMPT_H */
