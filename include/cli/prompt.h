#ifndef PROMPT_H
#define PROMPT_H
// Important libraries

#include<stdio.h>
#include<math.h>
#include<limits.h>

/* important variables */

char input;

// char fs = filesystem location;

prompt = "you@platypusos:~#";

void prscnPrompt();

void prscnPrompt(){
    printf("%s", prompt);
    gets("%s", input);
}
#ENDIF /* PROMPT_H */
