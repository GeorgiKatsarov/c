#include<stdio.h>
int main(){
    int initial[60];
    int flipped[60];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &initial[i]);
    }
    for (int i = 0; i < n; i++)
    {
        flipped[i] = initial[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", flipped[i]);
    }
    
}