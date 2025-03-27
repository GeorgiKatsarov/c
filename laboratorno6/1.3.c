#include<stdio.h>
int main(){
    int matrix[4][4];
    int sum = 0;
    int sumLowerTriangle = 0;
    int sumUpperTriangle = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            if (i > j)
            {
                sumLowerTriangle += matrix[i][j];
            }
            if (i < j)
            {
                sumUpperTriangle += matrix[i][j];
            }
        }
    }
    printf("Sum of all elements: %d\n", sum);
    printf("Sum of lower triangle: %d\n", sumLowerTriangle);
    printf("Sum of upper triangle: %d\n", sumUpperTriangle);
}