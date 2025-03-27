#include<stdio.h>

int main() {
    int arr[20];
    
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    int count[10][2];
    for (int i = 0; i < 10; i++) {
        count[i][0] = i; 
        count[i][1] = 0; 
    }

   
    for (int i = 0; i < 20; i++) {
        if (arr[i] >= 0 && arr[i] <= 9) { 
            count[arr[i]][1]++;
        }
    }

    int maxCount = 0;
    int mostFrequent = -1;
    for (int i = 0; i < 10; i++) {
        if (count[i][1] > maxCount) {
            maxCount = count[i][1];
            mostFrequent = count[i][0];
        }
    }

    if (mostFrequent != -1) {
        printf("Най-често срещаният елемент е %d (%d пъти).\n", mostFrequent, maxCount);
    } else {
        printf("Няма валидни елементи в масива.\n");
    }

    return 0;
}