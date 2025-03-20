#include<stdio.h>
int countWords(char str[]){
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    return count + 1;
}
int main(){
    printf("%d\n", countWords("Georgi Georgiev"));
    return 0;
}