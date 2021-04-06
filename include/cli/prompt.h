#ifndef PROMPT_H
#define PROMPT_H
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
char input;

// char fs = filesystem location;

getpwd = (FILE*)popen(command, "r");
while (fread(&c, sizeof c, 1, getpwd)) {
    strncat(str, &c, 1);
}
prompt = "you@platypusos:";

void prscnPrompt();

void prscnPrompt(){
    printf("%s%s#", prompt, str);
    gets("%s", input);
}
#ENDIF /* PROMPT_H */
