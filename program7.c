#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int age;
    float ticket_price = 0.0;
    const float ADULT_TICKET_FARE = 25.0; 
    const int CHILD_AGE_CUTOFF = 12;     
    const int SENIOR_AGE_CUTOFF = 60;    

    
    printf("Enter visitor's age: ");
    scanf("%d", &age);

    if (age < 0 || age > 120) {
        printf("Error: Age must be between 0 and 120.\n");
        return 1; // Exit with an error code
    }

    
    if (age < CHILD_AGE_CUTOFF) {
        ticket_price = 0.0; 
        printf("Free entry for children under %d years old!\n", CHILD_AGE_CUTOFF);
    } else if (age >= SENIOR_AGE_CUTOFF) { 
        ticket_price = ADULT_TICKET_FARE * 0.5; 
        printf("Senior citizen discount applied! Ticket price: %.2f\n", ticket_price);
    } else {
        ticket_price = ADULT_TICKET_FARE; 
        printf("Adult ticket price: %.2f\n", ticket_price);
    }

    printf("Total amount payable: %.2f\n", ticket_price);

    return 0;
}
