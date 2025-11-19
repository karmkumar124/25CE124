
#include <stdio.h>
#include <string.h>

union BookDetails {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int status; 
};


struct Book {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int status;
};

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    struct Book book;
    union BookDetails detail;
    int choice;

    do {
        printf("\n===== Library Management Menu =====\n");
        printf("1. Enter Book Details\n");
        printf("2. Display Book Details\n");
        printf("3. Update Book Status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\n--- Enter Book Details ---\n");
                printf("Enter Accession Number: ");
                scanf("%d", &detail.accessionNumber);
                book.accessionNumber = detail.accessionNumber;

                printf("Enter Book Title: ");
                scanf(" %[^\n]", detail.title);
                strcpy(book.title, detail.title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", detail.author);
                strcpy(book.author, detail.author);

                printf("Enter Price (₹): ");
                scanf("%f", &detail.price);
                book.price = detail.price;

                printf("Enter Book Status (1 = Issued, 0 = Available): ");
                scanf("%d", &detail.status);
                book.status = detail.status;

                printf("Book details added successfully!\n");
                break;

            case 2:
                printf("\n--- Displaying Book Details ---\n");
                printf("Accession Number : %d\n", book.accessionNumber);
                printf("Title            : %s\n", book.title);
                printf("Author           : %s\n", book.author);
                printf("Price (₹)        : %.2f\n", book.price);
                printf("Status           : %s\n", (book.status == 1) ? "ISSUED" : "AVAILABLE");
                break;

            case 3:
                printf("\n--- Update Book Status ---\n");
                printf("Enter new status (1 = Issued, 0 = Available): ");
                scanf("%d", &detail.status);
                book.status = detail.status;
                printf("Status updated successfully!\n");
                break;

            case 4:
                printf("\nExiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}
