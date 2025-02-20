#include<stdio.h>
int main(){
    float a,b,d;
    scanf("%f,%f,%f", &a, &b,&d);
    float area = a*b;
    float circum = 3.14*d;
    printf("\n Obikolkata na kruga e: %.2fcm, Liceto na pravougulnika e: %.2fcm^2.", circum, area );
    return 0;
}