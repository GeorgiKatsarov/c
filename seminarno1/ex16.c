#include<stdio.h>
int main(){
    float days, pay, doll;
    scanf("%f", &days);
    scanf("%f", &pay);
    scanf("%f", &doll);
    float sum = (((days*pay*12)*0.75 + 2.5*days*pay))/365*doll;
    printf("%f",sum);
    return 0;
}