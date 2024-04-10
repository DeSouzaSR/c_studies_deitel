#include <stdio.h>

int main (void) {
    float totalDistance = 0;
    float totalFuel = 0;
    float distance = 0;
    float fuel;

    printf("\nEnter the distance you drove:\n");
    scanf("%f", &distance);
    printf("Enter the amount of fuel used:\n");
    scanf("%f", &fuel);
    printf("Current consumption is %0.4f km/l\n", distance / fuel);
    while (distance > -1) {
        totalDistance = totalDistance + distance;
        totalFuel = totalFuel + fuel;

        printf("\nEnter the distance you drove:\n");
        scanf("%f", &distance);
        if (distance > -1) {
            printf("Enter the amount of fuel used:\n");
            scanf("%f", &fuel);
            printf("Current consumption is %0.4f\n", distance / fuel);
        }
    }
    printf("Current consumption of total distance\n");
    printf("Total distance: %0.2f km\n", totalDistance);
    printf("Total fuel: %0.2f l\n", totalFuel);
    printf("Total consumption: %0.4f km/l\n", totalDistance / totalFuel);
}