#include<stdio.h>
int Max(int a, int b){
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main(){
    int a,b, max;
    scanf("%d", &a);
    scanf("%d", &b);
    while (a!=0)
    {
        max = Max(a,b);
        scanf("%d", &a);
        max = Max(a,max);
    }
    
    return 0;
}