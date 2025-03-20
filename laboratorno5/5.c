#include<stdio.h>
int numberOfVowels(char str[]){
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        i++;
    }
    return count;
}
int main(){
    printf("%d\n", numberOfVowels("Georgi Georgiev"));
    return 0;
}