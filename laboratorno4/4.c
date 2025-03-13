#include<stdio.h>
int main(){
    int n[8];
    int i;
    int sum = 0;
    for ( i = 0; i < 8; i++)
    {
        do {
            scanf("%d", &n[i]);
        } while (n[i] > 5000 && n[i] < -5000);
        sum+=n[i];
    
    }
    double avg = (double)sum/8;
    printf("The average is %.2f", avg);
    return 0;
}