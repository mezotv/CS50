#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Creates a string variable that the user input aka the name will be stored in.
    string name = get_string("What is your name?\n");

    // Prints out Hello + the name in the variable
    printf("Hello, %s!\n", name);
}