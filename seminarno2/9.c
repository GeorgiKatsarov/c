#include <stdio.h>

int main() {
    int X, Z, workers;
    double Y;

    printf("Въведете площ на лозето (X), грозде на кв.м (Y), желано вино (Z) и брой работници: ");
    if (scanf("%d %lf %d %d", &X, &Y, &Z, &workers) != 4) {
        printf("Невалиден вход.\n");
        return 1;
    }

    double total_grape = X * Y;
    double wine_grape = total_grape * 0.40;
    double produced_wine = wine_grape / 2.5;

    if (produced_wine >= Z) {
        double leftover = produced_wine - Z;
        printf("Enough wine! Total wine: %.0f liters.\n", produced_wine);
        printf("%.0f liters left -> %.0f liters per worker.\n", leftover, leftover / workers);
    } else {
        printf("Not enough wine! %.0f more liters needed.\n", Z - produced_wine);
    }
    
    return 0;
}
