#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int arr[10][10];
    //pulnim s random chisla
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = rand() % 100;
        }
        
    }
    //suma na diagonal
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i][i];
    }
    printf("Sum of diagonal: %d\n", sum);
    //suma na vtorostepennata diagonal
    sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i][9 - i];
    }
    printf("Sum of second diagonal: %d\n", sum);
    //suma na redovete
    for (int i = 0; i < 10; i++)
    {
        sum = 0;
        for (int j = 0; j < 10; j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i, sum);
    }

    //suma na kolonite
    for (int i = 0; i < 10; i++)
    {
        sum = 0;
        for (int j = 0; j < 10; j++)
        {
            sum += arr[j][i];
        }
        printf("Sum of column %d: %d\n", i, sum);
    }
}