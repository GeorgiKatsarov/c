//pointers
#include<stdio.h>
int main(){
    int a = 5;
    int b = 10;
    int *p1 = &a;
    int *p2 = &b;
    printf("Values: %d %d", *p1, *p2);
    printf(" Adresses: %d %d", p1, p2);
    int c = *p1 * *p2;
    printf(" Product: %d", c);
    int s = *p1 + *p2;
    printf(" Sum: %d", s);
    float d = (float)*p1 / *p2;
    printf(" Division: %.2f", d);
    int e = *p1 - *p2;
    printf(" Difference: %d", e);
    return 0;
}