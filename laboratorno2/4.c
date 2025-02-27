#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 0:
        printf("n is zero");
        break;
    case 1:
        printf("n is one");
        break;
    case 2:
        printf("n is two");
        break;
    case 3:
        printf("n is three");
        break;
    case 4:
        printf("n is four");
        break;
    case 5:
        printf("n is five");
        break; 
    case 6:
        printf("n is six");
        break;
    case 7: 
        printf("n is seven");
        break;
    case 8: 
        printf("n is eight");
        break;     
    case 9:
        printf("n is nine");
        break;  
    default:
        break;
    }
    return 0;
}