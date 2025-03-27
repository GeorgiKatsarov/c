#include<stdio.h>
int countOfEachLetterInStr(char str[]){
    int i = 0;
    int count[26] = {0};
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }
}
int main(){
    char str[128];
    scanf("%s", str);
    countOfEachLetterInStr(str);
    return 0;
}