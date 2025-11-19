
#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int matchsticks = 21, user_pick, computer_pick;

    printf("Matchstick Game: There are 21 matchsticks.\n");
    printf("You and the computer will take turns picking 1 to 4 matchsticks.\n");
    printf("The one forced to pick the last matchstick loses!\n\n");

    while (matchsticks > 1) {
        // User's turn
        printf("Matchsticks left: %d\n", matchsticks);
        printf("Your turn! Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        
        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid choice! You must pick between 1 and 4 matchsticks.\n");
            continue;
        }

        matchsticks -= user_pick;

        if (matchsticks == 1) {
            printf("\nOnly 1 matchstick left! You forced the computer to pick it.\n");
            printf(" You WIN! Computer loses.\n");
            break;
        }

        
        computer_pick = 5 - user_pick;
        matchsticks -= computer_pick;

        printf("Computer picks %d matchstick(s).\n", computer_pick);

        if (matchsticks == 1) {
            printf("\nOnly 1 matchstick left! You are forced to pick it next turn.\n");
            printf("Computer WINS! You lose.\n");
            break;
        }
    }

    return 0;
}
