#include<stdio.h>
int main(){
    printf("Vuvedete razstoqnie v inchove: ");
    float inch;
    scanf("%f", &inch);
    float cm = inch/2.54;
    float m = cm/100;
    float dm = cm/10;
    float mm = cm*10;
    printf("%.2f cm\n", cm);
    printf("%.2f m\n", m);
    printf("%.2f dm\n", dm);
    printf("%.2f mm\n", mm);

}