#include<stdio.h>
int main(){
    int seconds, minutes;
    scanf("%d", &seconds);
    minutes = seconds/60;
    seconds = seconds-minutes*60;
    if (seconds<10)
    {
        printf("%d:%02d", minutes, seconds);
    }
    else
    {
        printf("%d:%d", minutes, seconds);
    }
    return 0;
}