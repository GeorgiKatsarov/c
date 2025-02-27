#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("a is the biggest number");
    } else if (b > a && b > c) {
        printf("b is the biggest number");
    } else {
        printf("c is the biggest number");
    }
    if (a<b && a<c) {
        printf("a is the smallest number");
    } else if (b<a && b<c) {
        printf("b is the smallest number");
    } else {
        printf("c is the smallest number");
    }
    
    return 0;
}