#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int numbers[25];
    int i;
    int positiveCount = 0, negativeCount = 0;
    int evenCount = 0, oddCount = 0;

    printf("Enter 25 integers:\n");

    
    for (i = 0; i < 25; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < 25; i++) {
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        }

        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    
    printf("\n--- Statistics ---\n");
    printf("Total Positive Numbers: %d\n", positiveCount);
    printf("Total Negative Numbers: %d\n", negativeCount);
    printf("Total Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers: %d\n", oddCount);

    return 0;
}
