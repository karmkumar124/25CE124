#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int marks;

    printf("Enter student marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid input! Marks must be between 0 and 100.\n");
    } 
    else {
        if (marks >= 90) {
            printf("Marks: %d --> Grade: A\n", marks);
        }
        else if (marks >= 80) {
            printf("Marks: %d --> Grade: B\n", marks);
        }
        else if (marks >= 70) {
            printf("Marks: %d --> Grade: C\n", marks);
        }
        else if (marks >= 60) {
            printf("Marks: %d --> Grade: D\n", marks);
        }
        else {
            printf("Marks: %d --> Grade: F\n", marks);
        }
    }

    return 0;
}
