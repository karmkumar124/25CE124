#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5
#define MAX_NAME_LEN 50

// Book structure
typedef struct {
    char name[MAX_NAME_LEN];
    int available; // 1 = available, 0 = borrowed
} Book;

// Global library
Book library[MAX_BOOKS] = {
    {"C Programming", 1},
    {"Data Structures", 1},
    {"Operating Systems", 1},
    {"Database Systems", 1},
    {"Computer Networks", 1}
};

// Function to display available books
void displayBooks() {
    printf("\nAvailable Books:\n");
    int found = 0;
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (library[i].available) {
            printf(" - %s\n", library[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No books available!\n");
    }
}

// Function to get total number of available books
int getTotalBooks() {
    int count = 0;
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (library[i].available) {
            count++;
        }
    }
    return count;
}

// Function to borrow a book
void borrowBook(char *bookName) {
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (strcmp(library[i].name, bookName) == 0) {
            if (library[i].available) {
                library[i].available = 0; // Mark as borrowed
                printf("You borrowed: %s\n", library[i].name);
            } else {
                printf("Sorry, '%s' is already borrowed.\n", bookName);
            }
            return;
        }
    }
    printf("Book '%s' not found in library.\n", bookName);
}

// Function to calculate fine
float calculateFine(int daysLate) {
    float finePerDay = 2.0; // ₹2 per day
    return daysLate * finePerDay;
}

// Main function
int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int choice, days;
    char bookName[MAX_NAME_LEN];

    do {
        printf("\nLibrary Menu:\n");
        printf("1. Display available books\n");
        printf("2. Get total number of books\n");
        printf("3. Borrow a book\n");
        printf("4. Calculate fine\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                displayBooks();
                break;
            case 2:
                printf("Total available books: %d\n", getTotalBooks());
                break;
            case 3:
                printf("Enter book name to borrow: ");
                fgets(bookName, sizeof(bookName), stdin);
                bookName[strcspn(bookName, "\n")] = '\0'; // remove newline
                borrowBook(bookName);
                break;
            case 4:
                printf("Enter number of days late: ");
                scanf("%d", &days);
                printf("Fine amount = ₹%.2f\n", calculateFine(days));
                break;
            case 5:
                printf("Exiting Library System...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}