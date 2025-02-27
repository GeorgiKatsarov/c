#include<stdio.h>
int main(){
    int a,b,sum,prod;
    sum = 0;
    prod = 1;
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
        if (i%2==0)
        {
            sum += i;
        }
        else
        {
            prod*=i;
        }
        printf("Product: %d\n", prod);
        printf("Sum: %d\n", sum);
    }
    return 0;
}