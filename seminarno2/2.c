#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int minutes = a*60+b;
    minutes += 15;
    int hours = minutes/60;
    minutes = minutes-hours*60;
    if (hours>=24)
    {
        hours = -1*(24-hours);
    }
    if (minutes<10)
    {
        printf("%d:0%d", hours, minutes);
    }
    else
    {
        printf("%d:%d", hours, minutes);
    }
    return 0;
}