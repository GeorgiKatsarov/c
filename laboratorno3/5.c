#include<stdio.h>
int Binary(int a){
    int b = 0;
    int c = 1;
    while (a>0)
    {
        b = b + a%2*c;
        a = a/2;
        c = c*10;
    }
    return b;
}
int main(){
    int a;
    scanf("%d", &a);
    printf("%d", Binary(a));
    return 0;
}