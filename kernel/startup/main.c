/********************************************************************
 * This file, main.c, is licensed under the GPLv3.0 or higher.      *
 * (c) DamieFC 2021                                                 *
 *******                                                      *******
 * Has the stuff for when the system boots up.                      *
 ********************************************************************/
#include "../../devices/emerald/video/vbe.h"

int main(){
    Color white = {255, 255, 255} black = {0, 0, 0};
    
    VBE_clear_screen(1, black);
    VBE_puts("WELCOME TO PLATYPUS OS I DON'T KNOW WHY I TYPED THIS IN CAPS.", white);
}
