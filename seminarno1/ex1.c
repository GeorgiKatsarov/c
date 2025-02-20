#include <stdio.h>

int main(){
    char str[11][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", str[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}