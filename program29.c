//Daksh Vegad
//25CE137
#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 50


struct Coach {
    char name[50];
    int age;
    int experience; 
};


struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    struct Team teams[MAX_TEAMS];
    int teamCount = 0;
    int choice;
    char searchName[50];

    do {
        printf("\n===== CHARUSAT Sports Team Management =====\n");
        printf("1. Add New Team\n");
        printf("2. Search Team by Name\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add new team
                if (teamCount < MAX_TEAMS) {
                    printf("\n--- Enter Team Details ---\n");
                    printf("Enter Team Name: ");
                    scanf(" %[^\n]", teams[teamCount].teamName);

                    printf("Enter Sport Type: ");
                    scanf(" %[^\n]", teams[teamCount].sportType);

                    printf("\n--- Enter Coach Details ---\n");
                    printf("Enter Coach Name: ");
                    scanf(" %[^\n]", teams[teamCount].coach.name);

                    printf("Enter Coach Age: ");
                    scanf("%d", &teams[teamCount].coach.age);

                    printf("Enter Coach Experience (in years): ");
                    scanf("%d", &teams[teamCount].coach.experience);

                    teamCount++;
                    printf("Team added successfully!\n");
                } else {
                    printf("Team list is full!\n");
                }
                break;

            case 2: // Search team by name
                printf("\nEnter Team Name to Search: ");
                scanf(" %[^\n]", searchName);
                int found = 0;

                for (int i = 0; i < teamCount; i++) {
                    if (strcmp(teams[i].teamName, searchName) == 0) {
                        printf("\n--- Team Found ---\n");
                        printf("Team Name : %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Coach Age : %d\n", teams[i].coach.age);
                        printf("Experience : %d years\n", teams[i].coach.experience);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Team not found!\n");
                break;

            case 3: // Display all teams
                if (teamCount == 0) {
                    printf("\nNo teams to display.\n");
                } else {
                    printf("\n--- All Teams and Coaches ---\n");
                    for (int i = 0; i < teamCount; i++) {
                        printf("\nTeam %d:\n", i + 1);
                        printf("Team Name : %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Coach Age : %d\n", teams[i].coach.age);
                        printf("Experience: %d years\n", teams[i].coach.experience);
                    }
                }
                break;

            case 4:
                printf("\nExiting Program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
