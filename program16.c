
#include <stdio.h>

int main() {
    int matchsticks = 21;
    int user_pick, computer_pick;

    printf("Welcome to the 21 Matchstick Game!\n");
    printf("The player forced to pick the last matchstick loses.\n");
    printf("There are initially %d matchsticks.\n", matchsticks);

    while (matchsticks > 1) {
        // User's turn
        printf("\nYour turn. Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        // Input validation for user's pick
        if (user_pick < 1 || user_pick > 4 || user_pick >= matchsticks) {
            printf("Invalid pick! You must pick between 1 and 4 matchsticks, and not more than remaining.\n");
            continue; // Ask for input again
        }

        matchsticks -= user_pick;
        printf("You picked %d matchsticks. %d matchsticks remaining.\n", user_pick, matchsticks);

        if (matchsticks == 1) {
            printf("\nOne matchstick remains. You are forced to pick the last one. You lose!\n");
            break;
        }

        // Computer's turn (winning strategy)
        computer_pick = 5 - user_pick;
        matchsticks -= computer_pick;
        printf("Computer picked %d matchsticks. %d matchsticks remaining.\n", computer_pick, matchsticks);

        if (matchsticks == 1) {
            printf("\nOne matchstick remains. Computer is forced to pick the last one. Computer loses!\n");
            printf("You win! (Though the computer is designed to win, it can lose if you get lucky on the last turn.)\n");
            break;
        }
    }

    printf("\nGame Over!\n");
    return 0;
}
