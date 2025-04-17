#include <stdio.h>
#include <string.h>
#include <math.h>

#define CHAIR_PRICE 13.99
#define TABLE_PRICE 42.00
#define CUPS_PRICE 5.98
#define DISHES_PRICE 21.02

int main() {
    int guests;
    scanf("%d", &guests);
    getchar();

    int chairs = 0, tables = 0, cups = 0, dishes = 0;
    double totalSpent = 0.0;
    char item[20];

    while (1) {
        fgets(item, sizeof(item), stdin);
        item[strcspn(item, "\n")] = '\0'; // махаме новия ред

        if (strcmp(item, "PARTY!") == 0)
            break;

        if (strcmp(item, "Chair") == 0) {
            chairs++;
            totalSpent += CHAIR_PRICE;
        } else if (strcmp(item, "Table") == 0) {
            tables++;
            totalSpent += TABLE_PRICE;
        } else if (strcmp(item, "Cups") == 0) {
            cups += 6;
            totalSpent += CUPS_PRICE;
        } else if (strcmp(item, "Dishes") == 0) {
            dishes += 6;
            totalSpent += DISHES_PRICE;
        }
    }

    printf("%.2lf\n", totalSpent);

    int neededTables = (int)ceil(guests / 8.0);
    int neededChairs = guests;
    int neededCups = guests;
    int neededDishes = guests;

    if (tables < neededTables)
        printf("%d Table%s\n", neededTables - tables, (neededTables - tables > 1) ? "s" : "");
    if (chairs < neededChairs)
        printf("%d Chair%s\n", neededChairs - chairs, (neededChairs - chairs > 1) ? "s" : "");
    if (cups < neededCups)
        printf("%d Cups\n", (int)ceil((neededCups - cups) / 6.0));
    if (dishes < neededDishes)
        printf("%d Dishes\n", (int)ceil((neededDishes - dishes) / 6.0));

    return 0;
}
