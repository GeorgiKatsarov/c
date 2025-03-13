#include<stdio.h>
int getAvg(int [], int);

int main(){
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAvg(balance, 5);
    printf("Average value is: %.2f", avg);
    return 0;
}
int getAvg(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (double)sum/n;
}