//Daksh Vegad
//25CE137
#include <stdio.h>


void sortPrices(float *ptr, int n) {
    float temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int n;
    float prices[100];

    printf("Enter the number of items: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: No items to sort.\n");
        return 0;
    }

    printf("Enter %d prices (in any order):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter price[%d]: ",i+1);
        if (scanf("%f", &prices[i]) != 1) {
            printf("Error: Invalid input for price. Please enter numeric values only.\n");
            return 0;
        }
        if (prices[i] < 0) {
            printf("Error: Negative prices are not allowed.\n");
            return 0;
        }
    }

    
    sortPrices(prices, n);

    
    printf("\nSorted Prices (Ascending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", *(prices + i));  
    }
    printf("\n");

    return 0;
}
