#include<stdio.h>
void removeWhiteSpace(char str[]){
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}
int main(){
    char str[20] = "Georgi Georgiev";
    removeWhiteSpace(str);
    printf("%s\n", str);
    return 0;
}