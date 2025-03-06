#include<stdio.h>
int main(){
    float volume, hours, firstPipe, secondPipe;
    scanf("%f %f %f %f", &volume, &hours, &firstPipe, &secondPipe);
    float pipeVolume = (firstPipe+secondPipe)*hours;
    if (pipeVolume<volume)
    {
        printf("The pool is %.2f full", (pipeVolume/volume)*100);
        printf("Pipe 1: %.2f\n", (firstPipe*hours)/pipeVolume*100);
        printf("Pipe 2: %.2f\n", (secondPipe*hours)/pipeVolume*100);
    }
    else if (pipeVolume > volume)
    {
        printf("For %.2f hours the pool overflows with %.2f liters", hours, pipeVolume-volume);
    }
    else if (pipeVolume=volume)
    {
        printf("The pool is %.2f full", (pipeVolume/volume)*100);
        printf("Pipe 1: %.2f\n", (firstPipe*hours)/pipeVolume*100);
        printf("Pipe 2: %.2f\n", (secondPipe*hours)/pipeVolume*100);
    }

    return 0;
}