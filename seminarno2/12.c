#include <stdio.h>

void draw_butterfly(int n) {
    int width = 2 * n - 1;
    int height = 2 * (n - 2) + 1;

    // Draw the upper part of the butterfly
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            printf(i % 2 == 0 ? "*" : "-");
        }
        printf("\\");
        for (int j = 0; j < width - 2 * n; j++) {
            printf(" ");
        }
        printf("/");
        for (int j = 0; j < n; j++) {
            printf(i % 2 == 0 ? "*" : "-");
        }
        printf("\n");
    }

    // Draw the middle part of the butterfly
    for (int j = 0; j < (width - 1) / 2; j++) {
        printf(" ");
    }
    printf(" @\n");

    // Draw the lower part of the butterfly
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            printf(i % 2 == 0 ? "*" : "-");
        }
        printf("/");
        for (int j = 0; j < width - 2 * n; j++) {
            printf(" ");
        }
        printf("\\");
        for (int j = 0; j < n; j++) {
            printf(i % 2 == 0 ? "*" : "-");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    draw_butterfly(n);
    return 0;
}