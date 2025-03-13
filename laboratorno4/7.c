#include<stdio.h>
int main(){
    int n[60];
    //sum of elements, the product of non 0 elements, print all even elements, the avg of negative elements, find the biggest and the smallest element
    int i;
    int sum = 0;
    int product = 1;
    int even = 0;
    int negative = 0;
    int min = 5000;
    int max = -5000;
    for ( i = 0; i < 60; i++)
    {
        do {
            scanf("%d", &n[i]);
        } while (n[i] > 5000 && n[i] < -5000);
        sum+=n[i];
        if (n[i] != 0)
        {
            product*=n[i];
        }
        if (n[i] % 2 == 0)
        {
            even = n[i];
        }
        if (n[i] < 0)
        {
            negative+=n[i];
        }
        if (n[i] > max)
        {
            max = n[i];
        }
        if (n[i] < min)
        {
            min = n[i];
        }
    }
    printf("The sum of the elements is %d\n", sum);
    printf("The product of the non 0 elements is %d\n", product);
    printf("The even elements are: ");
    for ( i = 0; i < 60; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf("%d ", n[i]);
        }
    }
    printf("\n");
    printf("The average of the negative elements is %.2f\n", (double)negative/60);
    printf("The biggest element is %d\n", max);
    printf("The smallest element is %d\n", min);
    return 0;
    

}