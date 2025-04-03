#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Въведете размерите на матрицата (n и m): ");
    scanf("%d %d", &n, &m);

    if (n < 3 || m < 3) {
        printf("Матрицата трябва да е поне 3x3.\n");
        return 1;
    }

    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(m * sizeof(int));
    }

    printf("Въведете елементите на матрицата:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxSum = 0;
    int startRow = 0, startCol = 0;

    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            int currentSum = 0;
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    currentSum += matrix[i + x][j + y];
                }
            }
            if (currentSum > maxSum) {
                maxSum = currentSum;
                startRow = i;
                startCol = j;
            }
        }
    }

    printf("Подматрицата с максимална сума (%d) е:\n", maxSum);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[startRow + i][startCol + j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}