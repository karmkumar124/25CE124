#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int num = 5; 

    
    for (int i = num; i >= 1; i--) {
       
        for (int j = 0; j < num - i; j++) {
            printf("  ");
        }
        
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    
    for (int i = 2; i <= num; i++) {
        
        for (int j = 0; j < num - i; j++) {
            printf("  ");
        }
        
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}