# Writing Commands
## `prompt.h`
The prompt.h file is located in [`include/cli/`](https://github.com/Platypus-Tech/platypus-os-desktop-pre-alpha/tree/negative-0.9.2/include/cli). It has all the important stuff for the CLI internals.
## Functions
There is a function to print the command prompt and scan input, `prscnPrompt()`. (`prscnPrompt` stands for **pr**int **sc**a**n** **prompt**, in case you can't figure it out.) It uses the common header file "`stdio.h`", because I like simple and common in code, but for Christmas I always want something obscure, like the Nmap Security Scanner book. OK back to the code.
## Variables
1. The `prompt` variable has the code to display the prompt.
2. The `input` variable is used to store the input gotten from the `gets()` function.
## Example command file
```c
#include "cli/prompt.h"

int main(){
    prscnPrompt();
    if (input == "hi" || "Hi" || "hI" || "HI"){
        printf("Hi!");
        printf("%s", prompt);
    }
}
