#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //getting the size of the list
    int flag = 0;
    int n;
    while (flag == 0)
    {
        scanf("%d", &n);
        if (n > 25 && n < 45)
        {
            flag = 1;
        }
        else {
            printf("\n n must be between 25 and 45!");
        }
        
        
    }
    //declaration of the list
    int list1[45];
    //filling the list with rand integers
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        int num = rand();
        list1[i] = num;
        printf("%d  ", num); //peinting the numbers to see them
    }
    //finding the count of nums devisable by 3 which are even
    int countEvenDevByThree = 0;
    for (int i = 0; i < n; i++)
    {
        if (list1[i]%2 == 0 && list1[i]%3 == 0)
        {
            countEvenDevByThree++;
        }
        
    }
    //sorting the array
    int temp;
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i < n; i++)
        {
            temp = list1[i];
            if (list1[i]<list1[i-1])
            {
                list1[i] = list1[i-1];
                list1[i-1] = temp;
            }
        
        }
    }
    
    
    printf("\n Sorted array");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", list1[i]);
    }
    printf("\n Number of even numbers devisable by 3: %d", countEvenDevByThree);
    
    
    
    return 0;
}