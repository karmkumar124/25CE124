#include <stdio.h>
#include <string.h>

// Structure for Coach
struct Coach {
    char name[50];
    int age;
    int experience;
};

// Structure for Team (contains Coach as a nested structure)
struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

// Function prototypes
void addTeam(struct Team teams[], int *count);
void displayTeams(struct Team teams[], int count);
void searchTeam(struct Team teams[], int count, char name[]);

int main() {
    struct Team teams[50];  // Array to store multiple teams
    int count = 0;
    int choice;
    char searchName[50];

    while (1) {
        printf("\n--- Sports Team Management ---\n");
        printf("1. Add New Team\n");
        printf("2. Display All Teams\n");
        printf("3. Search Team by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume newline

        switch (choice) {
            case 1:
                addTeam(teams, &count);
                break;
            case 2:
                displayTeams(teams, count);
                break;
            case 3:
                printf("Enter Team Name to search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0'; // remove newline
                searchTeam(teams, count, searchName);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// Function to add new team
void addTeam(struct Team teams[], int *count) {
    printf("\nEnter Team Name: ");
    fgets(teams[*count].teamName, sizeof(teams[*count].teamName), stdin);
    teams[*count].teamName[strcspn(teams[*count].teamName, "\n")] = '\0';

    printf("Enter Sport Type: ");
    fgets(teams[*count].sportType, sizeof(teams[*count].sportType), stdin);
    teams[*count].sportType[strcspn(teams[*count].sportType, "\n")] = '\0';

    printf("Enter Coach Name: ");
    fgets(teams[*count].coach.name, sizeof(teams[*count].coach.name), stdin);
    teams[*count].coach.name[strcspn(teams[*count].coach.name, "\n")] = '\0';

    printf("Enter Coach Age: ");
    scanf("%d", &teams[*count].coach.age);
    printf("Enter Years of Experience: ");
    scanf("%d", &teams[*count].coach.experience);
    getchar(); // consume newline

    (*count)++;
    printf("Team added successfully!\n");
}

// Function to display all teams
void displayTeams(struct Team teams[], int count) {
    if (count == 0) {
        printf("No teams available.\n");
        return;
    }

    printf("\n--- List of Teams ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Experience: %d years\n", teams[i].coach.experience);
    }
}

// Function to search for a team by name
void searchTeam(struct Team teams[], int count, char name[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(teams[i].teamName, name) == 0) {
            printf("\nTeam Found:\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Experience: %d years\n", teams[i].coach.experience);
            return;
        }
    }
    printf("Team not found.\n");
}
