#include<stdio.h>
int compareStrings(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 1;
    }
    return 0;
}
int main(){
    printf("%d\n", compareStrings("Georgi", "Georgi"));
    printf("%d\n", compareStrings("Georgi", "Georgiev"));
    printf("%d\n", compareStrings("Georgi", "Georg"));
    return 0;
}