/*
Savings calculator with shared transport.

This program calculates your daily car expense, so you can estimate how much
money you could save with carpooling, which also has other advantages such
as reducing carbon emissions and congestion. The application must request
the following information, and display the costs of the daily commute to work:

a) Total kilometers driven per day.
b) Cost per liter of fuel.
c) Average kilometers per liter.
d) Parking price per day.
e) Daily expenses with tolls.
*/

#include <stdio.h>
int main ( void )
{
    float total_kilometer_per_day; // [km/d]
    float cost_per_liter_fuel; // BRL/l
    float average_kilometer_per_liter; // [km/l]
    float parking_price_per_day; // [BRL]
    float daily_expense_tolls; // [BRL]
    
    float fuel_per_day; // [l]
    float fuel_cost; // [BRL]
    float toll_cost; // [BRL]
    float parking_cost; // [BRL]
    float cost_per_day; // [BRL]

    printf("Enter total kilometer per day: \n");
    scanf("%f", &total_kilometer_per_day);
    
    printf("Enter cost per liter fuel: \n");
    scanf("%f", &cost_per_liter_fuel);
    
    printf("Enter average kilometer per liter: \n");
    scanf("%f", &average_kilometer_per_liter);
    
    printf("Enter parking price per day: \n");
    scanf("%f", &parking_price_per_day);
    
    printf("Enter daily expense tolls: \n");
    scanf("%f", &daily_expense_tolls);
    
    fuel_per_day = total_kilometer_per_day / average_kilometer_per_liter;
    fuel_cost = fuel_per_day * cost_per_liter_fuel; 
    cost_per_day = fuel_cost + toll_cost + parking_cost;

    printf("\nThe cost per day: %.2f BRL\n", cost_per_day);

    return(0);

}