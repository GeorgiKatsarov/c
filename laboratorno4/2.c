#include <stdio.h>

#define ARRAY_SIZE 10
#define MIN_VALUE -5000
#define MAX_VALUE 5000

int main() {
    int n[10];
    int sum = 0;
    int min_value = -5000;
    int max_value = 5000;

    for (int i = 0; i < 10; i++) {
        do {
            printf("Enter number %d (between %d and %d): ", i + 1, min_value, max_value);
            scanf("%d", &n[i]);
        } while (n[i] < min_value && n[i] > max_value);
    }

    for (int i = 0; i < 10; i++) {
        sum += n[i];
    }

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}