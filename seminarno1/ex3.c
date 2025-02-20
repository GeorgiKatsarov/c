#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    for (int i = 0; i < 5; i++)
    {
        if (i == 0 || i == 4)
        {
            for (int j = 0; j<10; j++){
                printf("%c", ch);
            }
            printf("\n");
            
        }
        else{
            for (int j = 0; j<10; j++){
                if (j == 0 || j==9)
                {
                    printf("%c", ch);
                }
                else{
                    printf(" ");
                }
                
            }
            printf("\n");
        }
        
    }
    
}