#include<stdio.h>
int main(){
    float w, wpl, hpl, wpe, hpe, plochki, time;
    scanf("%f", &w);
    printf("\n");
    scanf("%f", &wpl);
    printf("\n");
    scanf("%f", &hpl);
    printf("\n");
    scanf("%f", &wpe);
    printf("\n");
    scanf("%f", &hpe);
    printf("\n");
    plochki = (w*w - hpe*wpe)/(wpl*hpl);
    time = plochki*0.2;
    printf("Plochki %f", plochki);
    printf("Time %f", time);


    return 0;
}