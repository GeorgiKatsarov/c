#include<stdio.h>
int sizeOfStr(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
void main(){
    printf("%d\n", sizeOfStr("Georgi"));
}