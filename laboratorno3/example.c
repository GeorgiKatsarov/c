//функции
#include <stdio.h>
float areaOfCircle(float radius){
    return 3.1415926*radius*radius;
}
int main(){
    float radius;
    float radius2 = 5;
    scanf("%f", &radius);
    printf("%.2f", areaOfCircle(radius));
    printf(" %.2f", areaOfCircle(radius2));
    return 0;
}