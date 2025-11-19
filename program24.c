#include <stdio.h>
#include <ctype.h>   

#define MAX 500

int noteLength(char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

void reverseNote(char s[], char rev[]) {
    int len = noteLength(s);
    for (int i = 0; i < len; i++)
        rev[i] = s[len - 1 - i];
    rev[len] = '\0';
}

int compareNotes(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return 0;  
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0'); 
}

void copyNote(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void concatNotes(char a[], char b[], char res[]) {
    int i = 0, j = 0;
    while (a[i] != '\0') {
        res[i] = a[i];
        i++;
    }
    while (b[j] != '\0') {
        res[i + j] = b[j];
        j++;
    }
    res[i + j] = '\0';
}

void toUpperCase(char s[]) {
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
}

void toLowerCase(char s[]) {
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
}

void capitalizeWords(char s[]) {
    int newWord = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
            newWord = 1;
        } else if (newWord && s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
            newWord = 0;
        } else {
            newWord = 0;
        }
    }
}

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");

    char note1[MAX], note2[MAX], result[MAX];
    int choice;

    printf("Enter first note: ");
    fgets(note1, MAX, stdin);

    do {
        printf("\n--- Note Manager ---\n");
        printf("1. Calculate Length\n");
        printf("2. Reverse Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Upper Case Converter\n");
        printf("7. Lower Case Converter\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // consume newline after number

        switch (choice) {
            case 1:
                printf("Length: %d\n", noteLength(note1));
                break;
            case 2:
                reverseNote(note1, result);
                printf("Reversed: %s\n", result);
                break;
            case 3:
                printf("Enter second note: ");
                fgets(note2, MAX, stdin);
                if (compareNotes(note1, note2))
                    printf("Notes are identical.\n");
                else
                    printf("Notes differ.\n");
                break;
            case 4:
                copyNote(note1, result);
                printf("Copied Note: %s\n", result);
                break;
            case 5:
                printf("Enter second note to concatenate: ");
                fgets(note2, MAX, stdin);
                concatNotes(note1, note2, result);
                printf("Concatenated Note: %s", result);
                break;
            case 6:
                toUpperCase(note1);
                printf("Upper Case: %s\n", note1);
                break;
            case 7:
                toLowerCase(note1);
                printf("Lower Case: %s\n", note1);
                break;
            case 8:
                capitalizeWords(note1);
                printf("Capitalized: %s\n", note1);
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 9);

    return 0;
}
