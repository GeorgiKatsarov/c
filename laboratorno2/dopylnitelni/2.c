#include<stdio.h>
int main(){
    float a,b, bigger, smaller, a1, b1, m, y;
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
    scanf("%f %f %f", &a1, &b1, &m);
    for (int i = smaller+1; i < bigger; i++)
    {
       if (i<=m)
       {
        y = b1+i;
       }
       else
        {  if (i != 4)
        {
            y= (a1*1)/(4-i);
        }
        else
        {
            printf("Division by zero");
        }

       printf("Y = %.2f\n", y);
    }
}
    return 0;
}