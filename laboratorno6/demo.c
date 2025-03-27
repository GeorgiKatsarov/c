#include<stdio.h>
int main(){
    double firss[2][2];
    double second[2][2];
    double result[2][2];
    printf("Enter the elements of the first matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf", &firss[i][j]);
        }
        
    }
    printf("Enter the elements of the second matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf", &second[i][j]);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = firss[i][j] + second[i][j];
        }
        
    }
    printf("The sum of the two matrices is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }

}