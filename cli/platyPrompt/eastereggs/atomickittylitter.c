/*****************************************************
 * This file (atomickittylitter.c) is licensed under *
 * the GNU GPLv3. It (the file, not the license)     *
 * displays a made-up ad advertising Atomic Kitty    *
 * Litter.                                           *
 *****************************************************/
#include "../../../libraries/cli/cprompt.h"

prscnPrompt();
int main(){
    if (input == "kittylitter"){
        printf("Sick of cleaning the litterbox? This is the product for you! Atomic Kitty Litter makes it so you never have to clean it again! \n"); 
        printf("It kills the cat, so there's no problem! No cat no poop! \n");
        printf("But wait! There's more! Order now and you'll get 2 bags of Atomic Kitty Litter, PLUS the new Fusion Kitty Litter, which works almost immediatly! \n");
        printf("\n Warning: can cause mass human death. Do not use in populated areas. You are responsible for obeying local nuclear material laws. \n");
        printf("%s", prompt);
    };
};
