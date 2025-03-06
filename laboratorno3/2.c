#include<stdio.h>
float RightTriangle(float a, float b){
    printf("Its a right triangle");
    return a*b/2;
}
float Rectangle(float a, float b){
    printf("Its a rectangle");
    return a*b;
}
float Circle(float r){
    printf("Its a circle");
    return 3.1415926*r*r;
}
float Square(float a){
    printf("Its a square");
    return a*a;
}
int main(){
    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        float a;
        scanf("%f", &a);
        Square(a);
    }
    else if (a == 2)
    {
        float a,b;
        scanf("%f", &a);
        scanf("%f", &b);
        Rectangle(a,b);
    }
    else if (a == 3)
    {
        float a,b;
        scanf("%f", &a);
        scanf("%f", &b);
        RightTriangle(a,b);
    }
    else if (a == 4)
    {
        float r;
        scanf("%f", &r);
        Circle(r);
    }
    
    return 0;
}