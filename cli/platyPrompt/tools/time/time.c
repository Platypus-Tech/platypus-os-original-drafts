/******************************************************************************************
 * This file, time.c, is licensed under the GNU GPL version 3. It implements the `time`   *
 * command in the OS. Honestly, the code is adapted from Wikipedia's example.             *
 ******************************************************************************************/

#include "../../../../include/common/time.h"
#include "../../../../include/cli/prompt.h"
#include "../../../../include/common/stdlib.h"

int main(void)
{
    prscnPrompt();
    if (input == "time" || "Time" || "TIME" || "tIME"){

    time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to obtain the current time.\n");
        printf("%s", prompt);
    }

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        printf("%s", prompt);
    }

    /* Print to stdout. ctime() has already added a terminating newline character. */
    (void) printf("Current time is %s", c_time_string);
    }
}
