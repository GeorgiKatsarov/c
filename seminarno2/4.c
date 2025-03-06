#include <stdio.h>

int main() {
    int number;
    double bonus = 0;

    scanf("%d", &number);

    if (number <= 100) {
        bonus = 5;
    } else if (number > 1000) {
        bonus = number * 0.10;
    } else {
        bonus = number * 0.20;
    }

    if (number % 2 == 0) {
        bonus += 1;
    }
    if (number % 10 == 5) {
        bonus += 2;
    }

    printf("Бонус точки: %.1f\n", bonus);
    printf("Общ брой точки: %.1f\n", number + bonus);
    
    return 0;
}
