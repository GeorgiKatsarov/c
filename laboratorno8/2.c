#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct vehicle{
    char name[100];
    int year;
    double price;
    int doors;
    int seats;
} Vehicle;
int main(){
    Vehicle v1;
    scanf("%s", v1.name);
    scanf("%d", &v1.year);
    scanf("%lf", &v1.price);
    scanf("%d", &v1.doors);
    scanf("%d", &v1.seats);
    Vehicle v2;
    strcpy(v2.name, "Boeing 747");
    scanf("%d", &v2.year);
    scanf("%lf", &v2.price);
    scanf("%d", &v2.doors);
    scanf("%d", &v2.seats);
    printf("Vehicle name: %s\n", v1.name);
    printf("Year: %d\n", v1.year);
    printf("Price: %.2f\n", v1.price);
    printf("Doors: %d\n", v1.doors);
    printf("Seats: %d\n", v1.seats);
    printf("Vehicle name: %s\n", v2.name);
    printf("Year: %d\n", v2.year);
    printf("Price: %.2f\n", v2.price);
    printf("Doors: %d\n", v2.doors);
    printf("Seats: %d\n", v2.seats);
    printf("Comparing vehicles:\n");
    if (v1.price > v2.price)
    {
        printf("%s is more expensive than %s\n", v1.name, v2.name);
    }
    else if (v1.price < v2.price)
    {
        printf("%s is more expensive than %s\n", v2.name, v1.name);
    }
    else
    {
        printf("%s and %s have the same price\n", v1.name, v2.name);
    }
    printf("Comparing number of seats:\n");
    if (v1.seats > v2.seats)
    {
        printf("%s has more seats than %s\n", v1.name, v2.name);
    }
    else if (v1.seats < v2.seats)
    {
        printf("%s has more seats than %s\n", v2.name, v1.name);
    }
    else
    {
        printf("%s and %s have the same number of seats\n", v1.name, v2.name);
    }
    printf("Comparing number of doors:\n");
    if (v1.doors > v2.doors)
    {
        printf("%s has more doors than %s\n", v1.name, v2.name);
    }
    else if (v1.doors < v2.doors)
    {
        printf("%s has more doors than %s\n", v2.name, v1.name);
    }
    else
    {
        printf("%s and %s have the same number of doors\n", v1.name, v2.name);
    }


}