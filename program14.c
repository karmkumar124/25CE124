#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    float balance = 5000.00; 
    float withdrawalAmount;
    char continueTransaction = 'y';

    printf("Welcome to the National Bank of Bharat ATM!\n");
    printf("Your current balance is: ₹%.2f\n", balance);

    while (continueTransaction == 'y' || continueTransaction == 'Y') {
        printf("\nEnter the amount you wish to withdraw: ₹");
        scanf("%f", &withdrawalAmount);

        if (withdrawalAmount <= 0) {
            printf("Invalid amount. Please enter a positive amount.\n");
            continue; 
        }

        
        if (withdrawalAmount > balance) {
            printf("Insufficient balance. Your current balance is ₹%.2f\n", balance);
        } else {
            
            balance -= withdrawalAmount;
            printf("Withdrawal successful!\n");
            printf("Remaining balance: ₹%.2f\n", balance);
        }


        printf("\nDo you want to perform another transaction? (y/n): ");
        scanf(" %c", &continueTransaction); 
    }

    printf("\nThank you for using the National Bank of Bharat ATM. Goodbye!\n");
    return 0;
}