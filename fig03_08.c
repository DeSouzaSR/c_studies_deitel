/*
Figure 3.8: fig03_08.c

Class Average Program with Sentinel Controlled Repetition
*/

#include <stdio.h>

int main (void) { 
    int count = 0;
    float total = 0;
    float average;
    float grade;

    printf("\nEnter grade [press -1 to finish]: \n");
    scanf("%f", &grade);
    while (grade != -1) {
        total = total + grade;
        count = count + 1;
        scanf("%f", &grade);
    }
    
    if (count != 0) {
        average = total / count;
        printf("Average: %0.1f\n", average);
    } else {
        printf("No grades were reported\n");
    }

    return 0;
}