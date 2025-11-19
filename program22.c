#include <stdio.h>

#define ROWS 5
#define COLS 10

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    char seats[ROWS][COLS];
    int i, j, reserved, r, c;

    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) 
        {   
            seats[i][j] = '0';
        }
    }

    printf("Enter the number of reserved seats: ");
    scanf("%d", &reserved);

    for (i = 0; i < reserved; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i + 1);
        scanf("%d %d", &r, &c);

        // Validate input before marking
        if (r < 1 || r > ROWS || c < 1 || c > COLS) {
            printf("Invalid row or seat number. Skipping this entry.\n");
            continue;
        }

        // Mark seat as reserved with 'X'
        seats[r - 1][c - 1] = 'X';
    }

    // Display seating chart
    printf("\nSeating Chart:\n");
    for (i = 0; i < ROWS; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < COLS; j++) {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }

    return 0;
}
