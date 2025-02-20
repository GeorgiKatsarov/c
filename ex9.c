#include <stdio.h>

int main() {
    double a, b, h, area;

    printf("Въведете основа a: ");
    scanf("%lf", &a);
    
    printf("Въведете основа b: ");
    scanf("%lf", &b);
    
    printf("Въведете височина h: ");
    scanf("%lf", &h);
    
    area = ((a + b) / 2) * h;
    
    printf("Лицето на трапеца е: %.2f\n", area);
    
    return 0;
}
