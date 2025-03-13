#include<stdio.h>
int main(){
    int n[7];
    int i, j, temp;
    for ( i = 0; i < 7; i++)
    {
        do {
            scanf("%d", &n[i]);
        } while (n[i] > 5000 && n[i] < -5000);
    
    }
    for (int j = 0; j < 7; j++)
    {
        for (int i = 1; i < 7; i++)
        {
            temp = n[i];
            if (n[i]<n[i-1])
            {
                n[i] = n[i-1];
                n[i-1] = temp;
            }
        
        }
    }
    printf("The biggest number is %d", n[6]);
    printf("The smallest number is %d", n[0]);
    return 0;
    
}