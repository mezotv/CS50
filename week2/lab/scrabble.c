#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{

    string score = "";
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    
    // We save it into a variable instead of writing printf all the time
    if (score1 - score2 == 0)
    {
        score = "Tie!\n";
    }
    else if (score1 > score2)
    {
        score = "Player 1 wins!\n";
    }
    else if (score1 < score2)
    {
        score = "Player 2 wins!\n";
    }

    // TODO: Print the winner
    printf("%s", score);
}

int compute_score(string word)
{
    int score = 0;

    for (int i = 0, len = strlen(word); i < len;  i++)
        // Filters out all the special characters to not make them count
        if (isupper(word[i]))
        {
            score += POINTS[word[i] -  'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    return score;
}
