#include<stdio.h>
int main(){
    int a,b,sum;
    sum = 0;
    scanf("%d %d", &a, &b);
    int bigger, smaller;
    if (a>b)
    {
        bigger = a;
        smaller = b;
    }
    else
    {
        bigger = b;
        smaller = a;
    }
    for (int i = smaller+1; i < bigger; i++)
    {
        sum += i;
    }
    printf("The sum of the numbers between %d and %d is %d", smaller, bigger, sum);
    return 0;
}