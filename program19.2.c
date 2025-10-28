#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j, space;

    for (i = 1; i <= rows; i++)
        {
        for (space = 1; space < i; space++)
        {
            printf("  ");
        }

        if (i == 1)
            {
            for (j = 1; j <= 9; j++)
            {
                printf("%d ", j);
            }
        } else {
            printf("%d ", i);
            for (space = 1; space <= (rows - i) * 4 - 2; space++)
            {
                 if (space == (rows - i) * 4 - 2 && (rows - i) * 4 - 2 > 0 )
                 {
                 } else {
                     printf(" ");
                 }
            }
            if (i < rows) {
                printf(" %d", 2 * rows - i);
            }
        }
        printf("\n");
    }
    return 0;
}
