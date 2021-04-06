#include "panic.h"
#include "../devices/emerald/video/vbe.h"
#include "../libraries/graphics/emerald/libk/logging.h"
#include "../libraries/graphics/emerald/libk/random.h"
char *comments_lol[] =
    {
        "Something happened.",
        "F.",
        "The kernel crashed successfully.",
        "oops I did a woopsie doopsie OwO.",
        "Random error just to annoy you.",
        "Keyboard not found, press F to pay respects.",
        "Greenpeace free'd the mallocs",
        "Typo in the code.",
        "Excuse Me Sir, do you have a moment to talk about our Lord and Saviour?",
        "Never gonna give you up",
        "E.",
        "Error 404, kernel not found.",
        "To boot or not to boot.",
        ":(",
        "Kernel is not in the sudoers file. This incident will be reported.",
        "Error Code: INSERT_FUNNY_THING_HERE",
        "Screen not found"

};

char *comments_somewhat_serious[] =
{
    "Memory out.",
    "CPU got to hot",
    "Ok, seriously, I have no idea what happened",
    "Buffer overflow",
    "No power :\"
};
void __panic(char *file, const char function[20], int line, char *message)
{
    static Color blueScreen = {0, 0, 255};

    VBE_clear_screen(0,blueScreen);

    __asm__("cli");

    Color red = {245, 49, 0}, gray = {105, 100, 99}, blue = {19, 144, 194};

    VBE_puts("------------------------------------------------------------------------\n", red);
    VBE_puts("KERNEL PANIC\n", red);
    VBE_cputf(gray, " /* %s */", comments_lol[rand() % 17]);
    VBE_cputf(red, "%s", message);
    VBE_putf("In %s at %s(), line %d", file, function, line);
    VBE_puts("And this too", red);
    VBE_cputf(gray, "/* %s */", comments_somewhat_serious[rand()] % 17);
    VBE_cputf(red, "%s", message);
    VBE_putf("In %s at %s(), line %d", file, function, line);

    //while (1)
        //;
}
