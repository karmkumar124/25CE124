#include <stdio.h>
#include <string.h>

// Define structure for books
struct Book {
    char title[50];
    int available; // 1 = available, 0 = borrowed
};

// Declare a few sample books
struct Book library[] = {
    {"The Great Gatsby", 1},
    {"To Kill a Mockingbird", 1},
    {"1984", 1},
    {"Moby Dick", 1},
    {"Pride and Prejudice", 1}
};

int totalBooks = 5;

// Function to display list of available books
void displayBooks() {
    printf("\nList of Available Books:\n");
    int count = 0;
    for (int i = 0; i < totalBooks; i++) {
        if (library[i].available) {
            printf("%d. %s\n", count + 1, library[i].title);
            count++;
        }
    }
    if (count == 0) {
        printf("No books available right now.\n");
    }
}

// Function to get total number of books
int getTotalBooks() {
    return totalBooks;
}

// Function to borrow a book
void borrowBook(char *bookName) {
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(library[i].title, bookName) == 0) {
            if (library[i].available) {
                library[i].available = 0;
                printf("\nYou have successfully borrowed \"%s\".\n", library[i].title);
                return;
            } else {
                printf("\nSorry, \"%s\" is currently not available.\n", library[i].title);
                return;
            }
        }
    }
    printf("\nBook \"%s\" not found in library.\n", bookName);
}

// Function to calculate fine for overdue books
float calculateFine(int daysLate) {
    float finePerDay = 2.0; // Rs.2 per day
    return daysLate * finePerDay;
}

// Main function
int main() {
    int choice;
    char name[50];
    int days;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Display Available Books\n");
        printf("2. Get Total Number of Books\n");
        printf("3. Borrow a Book\n");
        printf("4. Calculate Fine\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                displayBooks();
                break;

            case 2:
                printf("\nTotal number of books in library: %d\n", getTotalBooks());
                break;

            case 3:
                printf("\nEnter book name to borrow: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0; // remove newline
                borrowBook(name);
                break;

            case 4:
                printf("\nEnter number of days late: ");
                scanf("%d", &days);
                printf("Fine amount: Rs. %.2f\n", calculateFine(days));
                break;

            case 5:
                printf("\nExiting system. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
