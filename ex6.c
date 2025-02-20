#include<stdio.h>

int main(){
    float celsius;
    scanf("%f", &celsius);
    float far = (9.0/5.0*celsius)+32;
    printf("\n %.2f C = %.2f F", celsius, far);
    return 0;
}