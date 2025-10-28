#include <stdio.h> // For input/output operations like printf and scanf
#include <stdlib.h> // For exit function

#define MAX_NOTE_LENGTH 200 // Maximum length for a note
#define MAX_NOTES 10 // Maximum number of notes Alex can store

// Function to calculate the length of a string manually
int myStrlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') { // Loop until the null terminator is found
        length++;
    }
    return length;
}

// Function to reverse a string manually
void myStrrev(char *str) {
    int length = myStrlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to compare two strings manually
int myStrcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    return str1[i] - str2[i]; // Returns 0 if equal, <0 if str1 is smaller, >0 if str1 is larger
}

// Function to copy a string manually
void myStrcpy(char *destination, const char *source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Add null terminator to the destination string
}

// Function to concatenate two strings manually
void myStrcat(char *destination, const char *source) {
    int dest_len = myStrlen(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[dest_len + i] = source[i];
        i++;
    }
    destination[dest_len + i] = '\0'; // Add null terminator
}

// Function to convert a string to uppercase manually
void myStrupr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') { // Check if it's a lowercase letter
            str[i] = str[i] - 32; // Convert to uppercase (ASCII difference)
        }
        i++;
    }
}

// Function to convert a string to lowercase manually
void myStrlwr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') { // Check if it's an uppercase letter
            str[i] = str[i] + 32; // Convert to lowercase (ASCII difference)
        }
        i++;
    }
}

// Function to capitalize the first character of each word manually
void myCapitalizeWords(char *str) {
    int i = 0;
    // Capitalize the first character of the string if it's a letter
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }

    while (str[i] != '\0') {
        if (str[i] == ' ') { // If a space is found, the next character is potentially a new word
            i++; // Move to the next character
            if (str[i] >= 'a' && str[i] <= 'z') { // If it's a lowercase letter
                str[i] = str[i] - 32; // Convert to uppercase
            }
        }
        i++;
    }
}

int main() {
    char notes[MAX_NOTES][MAX_NOTE_LENGTH];
    int num_notes = 0;
    int choice;
    char temp_note[MAX_NOTE_LENGTH]; // Temporary buffer for operations

    do {
        printf("\n--- Alex's Note-Taking App Menu ---\n");
        printf("1. Add a Note\n");
        printf("2. Calculate Length of a Note\n");
        printf("3. Reverse a Note\n");
        printf("4. Compare Two Notes\n");
        printf("5. Copy a Note\n");
        printf("6. Concatenate Notes\n");
        printf("7. Convert Note to Upper Case\n");
        printf("8. Convert Note to Lower Case\n");
        printf("9. Capitalize Each Word in a Note\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Consume the newline character left by scanf
        while (getchar() != '\n');

        switch (choice) {
            case 1: // Add a Note
                if (num_notes < MAX_NOTES) {
                    printf("Enter your note (max %d chars): ", MAX_NOTE_LENGTH - 1);
                    fgets(notes[num_notes], MAX_NOTE_LENGTH, stdin);
                    // Remove the newline character if fgets captured it
                    notes[num_notes][myStrlen(notes[num_notes]) - 1] = '\0';
                    num_notes++;
                    printf("Note added successfully!\n");
                } else {
                    printf("Note limit reached. Cannot add more notes.\n");
                }
                break;
            case 2: // Calculate Length
                if (num_notes > 0) {
                    int note_index;
                    printf("Enter the index of the note (0 to %d): ", num_notes - 1);
                    scanf("%d", &note_index);
                    while (getchar() != '\n'); // Consume newline

                    if (note_index >= 0 && note_index < num_notes) {
                        printf("Length of note %d: %d\n", note_index, myStrlen(notes[note_index]));
                    } else {
                        printf("Invalid note index.\n");
                    }
                } else {
                    printf("No notes to calculate length for.\n");
                }
                break;
            case 3: // Reverse a Note
                if (num_notes > 0) {
                    int note_index;
                    printf("Enter the index of the note to reverse (0 to %d): ", num_notes - 1);
                    scanf("%d", &note_index);
                    while (getchar() != '\n'); // Consume newline

                    if (note_index >= 0 && note_index < num_notes) {
                        myStrrev(notes[note_index]);
                        printf("Note %d reversed: %s\n", note_index, notes[note_index]);
                    } else {
                        printf("Invalid note index.\n");
                    }
                } else {
                    printf("No notes to reverse.\n");
                }
                break;
            case 4: // Compare Two Notes
                if (num_notes >= 2) {
                    int index1, index2;
                    printf("Enter index of first note to compare (0 to %d): ", num_notes - 1);
                    scanf("%d", &index1);
                    while (getchar() != '\n'); // Consume newline
                    printf("Enter index of second note to compare (0 to %d): ", num_notes - 1);
                    scanf("%d", &index2);
                    while (getchar() != '\n'); // Consume newline

                    if (index1 >= 0 && index1 < num_notes && index2 >= 0 && index2 < num_notes) {
                        int comparison_result = myStrcmp(notes[index1], notes[index2]);
                        if (comparison_result == 0) {
                            printf("Notes %d and %d are identical.\n", index1, index2);
                        } else if (comparison_result < 0) {
                            printf("Note %d is lexicographically smaller than Note %d.\n", index1, index2);
                        } else {
                            printf("Note %d is lexicographically larger than Note %d.\n", index1, index2);
                        }
                    } else {
                        printf("Invalid note indices.\n");
                    }
                } else {
                    printf("Need at least two notes to compare.\n");
                }
                break;
            case 5: // Copy a Note
                if (num_notes > 0) {
                    int source_index, dest_index;
                    printf("Enter index of source note to copy (0 to %d): ", num_notes - 1);
                    scanf("%d", &source_index);
                    while (getchar() != '\n'); // Consume newline

                    if (source_index >= 0 && source_index < num_notes) {
                        if (num_notes < MAX_NOTES) {
                            dest_index = num_notes; // Copy to a new note slot
                            myStrcpy(notes[dest_index], notes[source_index]);
                            num_notes++;
                            printf("Note %d copied to a new note at index %d.\n", source_index, dest_index);
                        } else {
                            printf("Note limit reached. Cannot create a new note for copying.\n");
                        }
                    } else {
                        printf("Invalid source note index.\n");
                    }
                } else {
                    printf("No notes to copy.\n");
                }
                break;
            case 6: // Concatenate Notes
                 if (num_notes >= 2) {
                    int index1, index2;
                    printf("Enter index of first note (destination) to concatenate (0 to %d): ", num_notes - 1);
                    scanf("%d", &index1);
                    while (getchar() != '\n'); // Consume newline
                    printf("Enter index of second note (source) to concatenate (0 to %d): ", num_notes - 1);
                    scanf("%d", &index2);
                    while (getchar() != '\n'); // Consume newline

                    if (index1 >= 0 && index1 < num_notes && index2 >= 0 && index2 < num_notes) {
                        // Check if the destination note has enough space
                        if (myStrlen(notes[index1]) + myStrlen(notes[index2]) < MAX_NOTE_LENGTH) {
                            myStrcat(notes[index1], notes[index2]);
                            printf("Notes %d and %d concatenated. Result: %s\n", index1, index2, notes[index1]);
                        } else {
                            printf("Destination note has insufficient space for concatenation.\n");
                        }
                    } else {
                        printf("Invalid note indices.\n");
                    }
                } else {
                    printf("Need at least two notes to concatenate.\n");
                }
                break;
            case 7: // Upper Case Converter
                if (num_notes > 0) {
                    int note_index;
                    printf("Enter the index of the note to convert to uppercase (0 to %d): ", num_notes - 1);
                    scanf("%d", &note_index);
                    while (getchar() != '\n'); // Consume newline

                    if (note_index >= 0 && note_index < num_notes) {
                        myStrupr(notes[note_index]);
                        printf("Note %d converted to uppercase: %s\n", note_index, notes[note_index]);
                    } else {
                        printf("Invalid note index.\n");
                    }
                } else {
                    printf("No notes to convert.\n");
                }
                break;
            case 8: // Lower Case Converter
                if (num_notes > 0) {
                    int note_index;
                    printf("Enter the index of the note to convert to lowercase (0 to %d): ", num_notes - 1);
                    scanf("%d", &note_index);
                    while (getchar() != '\n'); // Consume newline

                    if (note_index >= 0 && note_index < num_notes) {
                        myStrlwr(notes[note_index]);
                        printf("Note %d converted to lowercase: %s\n", note_index, notes[note_index]);
                    } else {
                        printf("Invalid note index.\n");
                    }
                } else {
                    printf("No notes to convert.\n");
                }
                break;
            case 9: // Capitalize Each Word
                if (num_notes > 0) {
                    int note_index;
                    printf("Enter the index of the note to capitalize words (0 to %d): ", num_notes - 1);
                    scanf("%d", &note_index);
                    while (getchar() != '\n'); // Consume newline

                    if (note_index >= 0 && note_index < num_notes) {
                        myCapitalizeWords(notes[note_index]);
                        printf("Note %d with capitalized words: %s\n", note_index, notes[note_index]);
                    } else {
                        printf("Invalid note index.\n");
                    }
                } else {
                    printf("No notes to capitalize words in.\n");
                }
                break;
            case 0: // Exit
                printf("Exiting Alex's Note-Taking App. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
