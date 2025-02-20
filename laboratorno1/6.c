#include<math.h>
#include<stdio.h>
int main(){
    int x1, y1, x2, y2;
    scanf("%d, %d, %d, %d", &x1, &y1, &x2, &y2);
    int height = abs(y1-y2);
    int widht = abs(x1-x2);
    int area = height*widht;
    printf("Area = %d", area);
}