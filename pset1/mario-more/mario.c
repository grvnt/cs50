#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Height, row, column 1 & 2, space 1 & 2 //
    int h, r, c1, c2, s1, s2;

    // Prompt height from user //
    do
    {
        h = get_int("Enter Height:");
    }

    while (h < 1 | h > 8);

    for (r = 0; r < h; r++)
    {
        for (s1 = 0; s1 < h - r - 1; s1++)
        {
            printf(" ");
        }
        for (c1 = 0; c1 <= r; c1++)
        {
            printf("#");
        }
        for (s2 = 0; s2 < 2; s2++)
        {
            printf(" ");
        }
        for (c2 = 0; c2 <= r; c2++)
        {
            printf("#");
        }
        printf("\n");
    }
}