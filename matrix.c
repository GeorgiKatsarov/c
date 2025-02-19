#include <stdio.h>

int main() {
    printf("Hello world \n");

    int matrix[3][3];

    // Read the matrix
    printf("Enter 9 numbers for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        
    }
    printf("All numbers were successfully read!\n");

    // Print the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int determinant = matrix[0][0]*matrix[1][1]*matrix[2][2]+matrix[0][1]*matrix[1][2]*matrix[2][0] + matrix[0][2]*matrix[1][0]*matrix[2][1]-matrix[0][2]*matrix[1][1]*matrix[2][0]-matrix[0][0]*matrix[1][2]*matrix[2][1]-matrix[0][1]*matrix[1][0]*matrix[2][2];
    printf("\n determinant = %d", determinant);
    return 0;
}