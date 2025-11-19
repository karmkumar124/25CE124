#include <stdio.h>
#include <unistd.h>  

int main() {
    printf("name: Daksh Vegad\n");
    printf("ID No: 25CE137\n");
    float totalDistance, distancePerMin;
    float distance = 0.0;
    int minute = 0;

    printf("Enter marathon distance (e.g., 5 or 10 km): ");
    scanf("%f", &totalDistance);

    printf("Enter distance covered per minute (e.g., 0.5): ");
    scanf("%f", &distancePerMin);

    while (1) {
        minute++;
        distance += distancePerMin;

        printf("Minute %d: Distance covered = %.2f km\n", minute, distance);

        if (distance >= totalDistance) {
            printf("\nMarathon complete in %d minutes!\n", minute);
            break;
        }

        sleep(1);  
    }

    return 0;
}
