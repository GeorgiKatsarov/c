#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[20];
    int b = 1;
    arr[0] = 1;
    int index = 1;
    int countDev = 0;
    while (sizeof(arr) / sizeof(arr[0]) != n)
    {
        countDev = 0;
        b++;
        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0)
            {
                countDev++;
            }
        }
        if (countDev == 2)
        {
            arr[index] = b;
            index++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}