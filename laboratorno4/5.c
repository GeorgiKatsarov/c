#include<stdio.h>
#include<math.h>
int main(){
    int n[7];
    int i, j, temp, closest;
    float min_diff = 5000.0;
    double avg;
    int sum = 0;
    for ( i = 0; i < 7; i++)
    {
        do {
            scanf("%d", &n[i]);
        } while (n[i] > 5000 && n[i] < -5000);
        sum+=n[i];
    }
    avg = (double)sum/7;
    printf("The average is %.2f", avg);
    for (int i = 0; i < 7; i++) {
        float diff = fabs(n[i] - avg);
        if (diff < min_diff) {
            min_diff = diff;
            closest = n[i];
        }

    }
    printf("The closest number to the average is %d", closest);
    return 0;
    
}