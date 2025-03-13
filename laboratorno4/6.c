#include<stdio.h>
int main(){
    int r[20];
    int p[20];
    int n[20];
    int i;
    for ( i = 0; i < 20; i++)
    {
        //fill the arr with random numbers between -10 and 10
        r[i] = rand() % 21 - 10;
    }
    for (i = 0; i < 20; i++)
    {
        if (r[i] < 0)
        {
            n[i] = r[i];
        }
        else
        {
            p[i] = r[i];
        }
    }
    printf("The elements of the firs array are: ");
    for ( i = 0; i < 20; i++)
    {
        printf("%d ", r[i]);
    }
    printf("\n");
    printf("The elements of the negative array are: ");
    for ( i = 0; i < 20; i++)
    {
        printf("%d ", n[i]);
    }
    printf("\n");
    printf("The elements of the positive array are: ");
    for ( i = 0; i < 20; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;

    
}