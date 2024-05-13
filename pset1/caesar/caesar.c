#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string key);

int main(int argc, string argv[])
{
    //Get key (k) from command line
    //If more or less than 2 arguments, print usage message

    if (argc != 2)
    {
        printf("Usage ./caesar key\n");
        return 1;
    }

    //If k is not a single positive digit return error (Usage: ./caesar key)

    //Convert string k into an integer (atoi  - stdlib.h)

    //Get plain text (p) from user

    //Shift p by k to get c

        //Print c
}

bool only_digits(string key)
{
    //Store value in bool

    bool digit = false;

    for (int i = 0, len = strlen(key); i < len; i++)
    {
        if (isdigit(key[i]))
        {
            return 1;
        }
    }
    return 0;
}