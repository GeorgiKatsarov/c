#include<stdio.h>

int main(){
    double degrees, radians;
    printf("Въведете ъгъл в градуси: ");
    scanf("%lf", &degrees);
    radians = degrees * (3.14159265358979323846 / 180.0);
    printf("%.2f градуса = %.6f радиана\n", degrees, radians);
    return 0;

}