#include<stdio.h>
int main(){
    int x, produc, sum, sto, des, ed;
    scanf("%d", x);
    ed = x%10;
    x/=10;
    des = x%10;
    x/=10;
    sto = x %10;
    printf("%d %d %d", sto, des, ed);

}