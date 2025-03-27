#include<stdio.h>
int main(){
    int matrix[10][10];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //proverqvame dali e magicheski
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[0][i];
    }
    int flag = 1;
    for (int i = 1; i < n; i++)
    {
        int tempSum = 0;
        for (int j = 0; j < n; j++)
        {
            tempSum += matrix[i][j];
        }
        if (tempSum != sum)
        {
            flag = 0;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int tempSum = 0;
        for (int j = 0; j < n; j++)
        {
            tempSum += matrix[j][i];
        }
        if (tempSum != sum)
        {
            flag = 0;
            break;
        }
    }
    int tempSum = 0;
    for (int i = 0; i < n; i++)
    {
        tempSum += matrix[i][i];
    }
    if (tempSum != sum)
    {
        flag = 0;
    }
    tempSum = 0;
    for (int i = 0; i < n; i++)
    {
        tempSum += matrix[i][n - i - 1];
    }
    if (tempSum != sum)
    {
        flag = 0;
    }
    if (flag)
    {
        printf("The matrix is magic\n");
    }
    else
    {
        printf("The matrix is not magic\n");
    }

}