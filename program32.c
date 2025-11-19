#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    printf("Daksh Vegad\n");
    printf("25CE137");
    FILE *fp = fopen("Demo.txt", "r");
    if (fp == NULL) {
        printf("Error: File 'Demo.txt' does not exist or cannot be opened.\n");
        return 1;
    }

    char ch;
    char word[200];  
    int index = 0;

    printf("\nReversed content:\n");

    while ((ch = fgetc(fp)) != EOF) {
        if (!isspace(ch)) {
            if (index < sizeof(word) - 1) {  
                word[index++] = ch;
            }
        } 
        
        else {
            if (index > 0) {
                word[index] = '\0';        
                reverseWord(word, word + index - 1);
                printf("%s", word);
                index = 0;
            }
            printf("%c", ch);  
        }
    }

    
    if (index > 0) {
        word[index] = '\0';
        reverseWord(word, word + index - 1);
        printf("%s", word);
    }

    fclose(fp);

    return 0;
}
