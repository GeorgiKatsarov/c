#include<stdio.h>

void DrawTr(int n){
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        
    }
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 1; j < i+1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        
    }
}
int main(){
    int n;
    scanf("%d", &n);
    DrawTr(n);
    return 0;
}