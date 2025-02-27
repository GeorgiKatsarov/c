#include<stdio.h>
int main(){
    int n,k,num,a;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a>k &&a%3==0)
        {
           num++;
        }
    }
    printf("The count of numbers bigger than %d and devisable by 3 is %d", k, num);
    return 0;
}