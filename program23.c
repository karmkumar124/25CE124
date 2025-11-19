#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int prices[100];   
    printf("Enter prices for each day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    
    for (int i = 1; i < n; i++) {
        int profit = prices[i] - minPrice;   
        if (profit > maxProfit) {
            maxProfit = profit;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];            
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);
    return 0;
}
