#include<stdio.h>
int main(){
   
    printf("Georgi\tSavov\tKatsarov\nKSI\n121224051\nGeorgi\t121224051");
   
    int pi1 = 3;
    float pi2 = 3.14;
    float radius;
    char color[15];
    char dogNmae[13];
    scanf("%f", &radius);
    scanf("%s", color);
    scanf("%s", dogNmae);
    printf("\n The area of the circle is: %.2f, the circle is %s, and %s is barking",radius*radius*pi2, color, dogNmae);

}