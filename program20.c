#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int n;
    int num =1;
    printf("Enter total number of participants (N): ");
    scanf("%d", &n);

    int ids[n-1];           
    int sum = 0;            
    int total = n * (n + 1) / 2;   
    printf("Enter %d participant IDs:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        printf("ID[%d]",num++);
        scanf("%d", &ids[i]);
        sum += ids[i];      
    }

    int missing = total - sum;
    printf("Missing participant ID is: %d\n", missing);

    return 0;
}
