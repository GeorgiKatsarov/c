#include<stdio.h>
int main(){
    float a,b,bigger, smaller;
    scanf("%f %f", &a, &b);
    if (a>b)
    {
        bigger = a;
        smaller = b;
    }
    else
    {
        bigger = b;
        smaller = a;
    }
    for (float i = smaller+1; i < bigger; i+=0.01)
    {
       printf("%.2f\n", i*i-4);
    }
    
}