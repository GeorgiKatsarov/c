#include <stdio.h>

int main() {
    int n = 3, m = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {9, 5, 6},
        {7, 8, 4}
    };

    int maxElement = matrix[0][0], minElement = matrix[0][0];
    int maxRow = 0, minRow = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxRow = i;
            }
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minRow = i;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        int temp = matrix[maxRow][j];
        matrix[maxRow][j] = matrix[minRow][j];
        matrix[minRow][j] = temp;
    }

    printf("Матрицата след размяната на редовете:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}