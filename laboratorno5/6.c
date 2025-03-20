#include<stdio.h>

void capitalizeLower(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
int main(){
    char str[20];
    scanf("%s", str);
    capitalizeLower(str);
    printf("%s\n", str);
    return 0;
}