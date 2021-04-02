#include '../../include/cli/prompt.h'

int main(){
    prscnPrompt();
    if (input == "hello" || "Hello" || "HeLlO"){
        printf("Hi! Glad you're here!");
        printf("%s", prompt);
    }
}
