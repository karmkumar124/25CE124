
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the diamond (e.g., 5 for the pattern shown): ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--)
        {
        for (int space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        for (int k = 2; k <= i; k++)
            {
            printf("%d ", k);
        }
        printf("\n");
    }
    for (int i = 2; i <= rows; i++)
        {
        for (int space = 1; space <= rows - i; space++)
            {
            printf("  ");
        }
        for (int j = i; j >= 1; j--)
            {
            printf("%d ", j);
        }
        for (int k = 2; k <= i; k++)
            {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
