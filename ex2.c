#include <stdio.h>

int main(){

    for (int i = 1; i < 11; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
        
    }
    
    return 0;
}