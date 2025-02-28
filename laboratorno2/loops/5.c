#include<stdio.h>
int main(){
    int a, sum;
    sum = 0;
    do
    {
        scanf("%d", &a);
        sum+=a;
    } while (a!=0);
    printf("The sum of the numbers is %d", sum);
    return 0;
}
