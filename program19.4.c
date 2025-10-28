#include <stdio.h>

int main()
{
    int rows = 4;
    int i, j, space;
    char alphabet;

    for (i = 1; i <= rows; i++)
        {
        for (space = 1; space <= rows - i; space++)
            {
            printf(" ");
        }

        alphabet = 'A';
        for (j = 1; j <= i; j++)
            {
            printf("%c", alphabet);
            alphabet++;
        }

        alphabet--;
        for (j = 1; j < i; j++)
            {
            alphabet--;
            printf("%c", alphabet);
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--)
        {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }

        alphabet = 'A';
        for (j = 1; j <= i; j++)
            {
            printf("%c", alphabet);
            alphabet++;
        }
        alphabet--;
        for (j = 1; j < i; j++)
            {
            alphabet--;
            printf("%c", alphabet);
        }
        printf("\n");
    }

    return 0;
}
