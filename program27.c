#include <stdio.h>

int main() {
    int n, i;
    int first_month_savings = 1, second_month_savings = 1, next_savings;

    // 1. Takes the number of months (n) as input from the user.
    printf("Enter the number of months (n): ");
    scanf("%d", &n);

    // 1. Is the input value (n) validated correctly (e.g., n ≥ 1)?
    if (n < 1) {
        printf("Invalid input. Please enter a number of months greater than or equal to 1.\\n");
        return 1;
    }

    printf("Savings plan for %d months:\\n", n);

    // Handle base cases for the first two months.
    if (n >= 1) {
        printf("Month 1: ₹%d\\n", first_month_savings);
    }
    if (n >= 2) {
        printf("Month 2: ₹%d\\n", second_month_savings);
    }

    // 2. Generates a series showing the savings amount for each month based on this pattern.
    // 3. Displays the series to help clients visualize how their savings might grow over time.
    // 2. Is the Fibonacci logic implemented accurately using loops or recursion?
    // 3. Are the first two months (base cases) hardcoded to ₹1 as required?
    // 4. Is the series displayed clearly with month-wise labeling?
    for (i = 3; i <= n; i++) {
        next_savings = first_month_savings + second_month_savings;
        printf("Month %d: ₹%d\\n", i, next_savings);

        first_month_savings = second_month_savings;
        second_month_savings = next_savings;
    }

    return 0;
}
