#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // variables + input
    string text = get_string("Text: ");
    int lettersCount = 0;
    int wordsCount = 1;
    int sentences = 0;

    // counter for letters, words and sentences

    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            lettersCount++;
        }
        else if(text[i] == ' ')
        {
            wordsCount++;
        }
        else if(text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentences++;
        }

    }
    
    printf("letters: %i; words: %i; sentences: %i\n", lettersCount, wordsCount, sentences);
    
    // calculate grade depending on the above variables
    float grade = 0.0588 * (100 * (float) lettersCount / (float) wordsCount) - 0.296 * (100 * (float) sentences / (float) wordsCount) - 15.8;

    // print grade results
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}