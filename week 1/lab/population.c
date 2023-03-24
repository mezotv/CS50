#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int s;
    do
    {
        s = get_int("Start Population: ");
    }
    while (s < 9);

    // TODO: Prompt for end size
    int e;
    do
    {
        e = get_int("End Population: ");
    }
    while (e < s);

    int y = 0;

    // TODO: Calculate number of years until we reach threshold
    while (s < e)
    {
        s = s + (s / 3) - (s / 4);
        y++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", y);
}