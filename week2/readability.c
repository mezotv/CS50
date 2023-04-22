#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
        if (text[i] == ' ')
        {
            words++;
        }

        if ((text[i] == '!') || (text[i] == '?') || (text[i] == '.'))
        {
            sentences++;
        }
    }

    float l = letters / words * 100;
    float s = sentences / words * 100;

    float calculation = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8;

    int index = round(calculation);

    // Prints used for debugging

    // printf("Total letters: %i\n", letters);
    // printf("Total words: %i\n", words);
    // printf("Total sentences: %i\n", sentences);
    //   printf("Indexs: %d\n", index);
    //  printf("l: %f\n", l);
    //   printf("s: %f\n", s);

    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
