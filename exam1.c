#include <stdio.h>

int main(){
    //getting the size of the list
    int flag = 0;
    int n;
    while (flag == 0)
    {
        scanf("%d", &n);
        if (n > 25 || n < 45)
        {
            flag = 1;
        }
        
    }
    int list1[45];
    list1[1] = 1;
    printf("%d", list1[1]);

    
    return 0;
}