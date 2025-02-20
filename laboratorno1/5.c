#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int h, m,s;
    h = a /3600;
    a -= h*3600;
    m = a/60;
    a-=m*60;
    s = a;
    printf("%d chas %d min %d sec", h, m, s);
}