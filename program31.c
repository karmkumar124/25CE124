#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Name:Daksh Vegad\n");
    printf("ID no:25CE137\n");
    char *summary;
    int initialSize, newSize;

    printf("Enter initial memory size for summary (in bytes): ");
    scanf("%d", &initialSize);
    getchar(); 

    
    summary = (char *)calloc(initialSize, sizeof(char));
    
    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter your initial article summary:\n");
    fgets(summary, initialSize, stdin);

    printf("\nCurrent Summary:\n%s", summary);
    printf("\nEnter new size to expand memory (in bytes): ");
    scanf("%d", &newSize);
    getchar(); // clear newline

    char *temp = realloc(summary, newSize);
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(summary);
        return 1;
    }
    summary = temp;

    printf("\nEnter the updated longer article summary:\n");
    fgets(summary, newSize, stdin);

    printf("\nUpdated Summary:\n%s", summary);

    // free allocated memory
    free(summary);

    return 0;
}
