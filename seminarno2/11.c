#include <stdio.h>

void draw_fortress(int n) {
    if (n % 2 != 0) {
        printf("Please enter an even number.\n");
        return;
    }

    // Draw the top part of the fortress
    printf("/");
    for (int i = 0; i < n / 2 - 1; i++) {
        printf("^");
    }
    printf("\\");
    for (int i = 0; i < n; i++) {
        printf("_");
    }
    printf("/");
    for (int i = 0; i < n / 2 - 1; i++) {
        printf("^");
    }
    printf("\\\n");

    // Draw the walls of the fortress
    for (int i = 0; i < n - 2; i++) {
        printf("|");
        for (int j = 0; j < n * 2; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    // Draw the second to last row with underscores
    printf("|");
    for (int j = 0; j < n/2; j++) {
        printf(" ");
    }
    for (int j = 0; j < n; j++) {
        printf("_");
    }    for (int j = 0; j < n/2; j++) {
        printf(" ");
    }
    printf("|\n");

    // Draw the bottom part of the fortress
    printf("\\");
    for (int i = 0; i < n / 2; i++) {
        printf("_");
    }
    printf("/");
    for (int i = 0; i < n-2; i++) {
        printf(" ");
    }
    printf("\\");
    for (int i = 0; i < n / 2; i++) {
        printf("_");
    }
    printf("/\n");
}

int main() {
    int n;
    printf("Enter an even integer n: ");
    scanf("%d", &n);
    draw_fortress(n);
    return 0;
}