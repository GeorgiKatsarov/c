#include<stdio.h>
void Switch(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
}
int main(){
    int a=5;
    int b=10;
    printf(" a %d  b %d\n", a, b);
    Switch(a,b);
    printf(" a %d  b %d", a, b);
    return 0;
}