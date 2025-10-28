#include <stdio.h>

int main() {
    int balance = 5000;
    int withdraw;
    char choice;
    printf("Your Current Balance Is 5000 rs.\n");



    do {
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);

        if (withdraw > balance) {
            printf("Insufficient balance.\n");
        } else {
            balance -= withdraw;
            printf("Withdrawal successful.\n Remaining balance: %d\n", balance);
        }

        printf("Do you want to withdraw more? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the ATM.\n");

    return 0;
}

