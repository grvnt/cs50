#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //Get text string from the user
    string text = get_string("Text: ");

    //Count letters
    int letters = count_letters(text);

    //Count words
    int words = count_words(text);

    //Count sentences
    int sentences = count_sentences(text);

    //Calculate reading level index
    float grade = (0.0588 * letters / words * 100 - 0.296 * sentences / words * 100 - 15.8);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %g\n", round(grade));
    }
}

//Count the letters of the text
int count_letters(string text)
{
    //Keep count of letters
    int count = 0;

    //iterate and count alphabet (l)etters
    for (int l = 0, len = strlen(text); l < len; l++)
    {
        if (isalpha(text[l]))
        {
            count += 1;
        }
    }
    return count;
}
//Count words of text
int count_words(string text)
{
    //Keep count of words
    int count = 0;

    //Count (s)paces
    for (int s = 0, len = strlen(text); s < len; s++)
    {
        if (isspace(text[s]))
        {
            count += 1;
        }
    }
    return count + 1;
}
//Count the sentences
int count_sentences(string text)
{
    //keep count of sentences
    int count = 0;

    //Count (p)unctuation
    for (int p = 0, len = strlen(text); p < len; p++)
    {
        if (text[p] == '.' || text[p] == '?' || text[p] == '!')
        {
            count += 1;
        }
    }
    return count;
}