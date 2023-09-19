#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Make sure that only 1 cl-argument is passed in and if not return an error
    if (argc != 2)
    {
        printf("Usage: ./caesar number\n");
        return 1;
    }

    // Declare the number string
    string number = argv[1];

    // Make sure the input is a number
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar number\n");
            return 1;
        }
    }
    printf("Sucess!\n%s\n", number);

    // Get the text to caeser from the user
    string text = get_string("plaintext: ");

    int n = atoi(number);
    printf("ciphertext: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if (isupper(text[i]))
        {
            printf("%c", (((text[i] - 65) + n) % 26) + 65);
        }
        else if (islower(text[i]))
        {
            printf("%c", (((text[i] - 97) + n) % 26) + 97);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
