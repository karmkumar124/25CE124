#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int num = 4; 
    
    for (int i = 0; i < num; i++) {
       
        for (int j = 0; j < num - i; j++) {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

   
    for (int i = num - 2; i >= 0; i--) {
       
        for (int j = 0; j < num - i; j++) {
            printf(" ");
        }
       
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
      
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}