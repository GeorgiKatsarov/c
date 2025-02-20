#include<stdio.h>
int main(){
    float priceKgFr, priceKgVe, kgFr, kgVe, pechalba;
    scanf("%f", &priceKgVe);
    printf("\n");
    scanf("%f", &priceKgFr);
    printf("\n");
    scanf("%f", &kgVe);
    printf("\n");
    scanf("%f", &kgFr);
    printf("\n");
    pechalba = (priceKgFr*kgFr +priceKgVe*kgVe)*1.95;
    printf("Pechalbi %.2f", pechalba);
}