#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int stairs;
    //while stairs is between 1 and 8 let the user truth if not prompt again

    do
    {
        stairs = get_int("How many stairs do you want? ");
    }
    while (stairs > 8 || stairs < 1);

    // prints both the hash and the blankspace
    for (int i = 0; i < stairs; i++)
    {
        for (int space = stairs - 1; space > i; space--)
        {
            printf(" ");
        }
        for (int hash = -1; hash < i; hash++)
        {
            printf("#");
        }
        // prints a new line after each stair
        printf("\n");
    }
}