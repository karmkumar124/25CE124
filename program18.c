
#include <stdio.h>

int main() {
    int verticalSize, horizontalSize;

    // Get user input for vertical size
    printf("Enter the size of table vertically: ");
    scanf("%d", &verticalSize);

    // Get user input for horizontal size
    printf("Enter the size of table horizontally: ");
    scanf("%d", &horizontalSize);

    // Display the header for the multiplication table
    printf("\nMultiplication Table (%d x %d):\n", verticalSize, horizontalSize);

    // Generate and display the multiplication table
    for (int i = 1; i <= verticalSize; i++) {
        for (int j = 1; j <= horizontalSize; j++) {
            printf("%4d", i * j); // Print product with formatting for alignment
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
