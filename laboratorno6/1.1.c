#include<stdio.h>
int main(){ 
    int matrix[20][20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //diagonal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][i]);
    }
    //vtorostepenne diagonal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][n - i - 1]);
    }
    //upper triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
    }
    //lower triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", matrix[i][j]);
        }
    }
    
    
    
}