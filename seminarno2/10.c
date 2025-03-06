#include <stdio.h>

int main() {
    int n, num;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    
    printf("Въведете броя на числата: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Невалиден вход.\n");
        return 1;
    }
    
    printf("Въведете %d числа: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &num) != 1 || num < 1 || num > 1000) {
            printf("Невалидно число.\n");
            return 1;
        }
        
        if (num < 200) count1++;
        else if (num < 400) count2++;
        else if (num < 600) count3++;
        else if (num < 800) count4++;
        else count5++;
    }
    
    printf("%.2f%%\n", (count1 * 100.0) / n);
    printf("%.2f%%\n", (count2 * 100.0) / n);
    printf("%.2f%%\n", (count3 * 100.0) / n);
    printf("%.2f%%\n", (count4 * 100.0) / n);
    printf("%.2f%%\n", (count5 * 100.0) / n);
    
    return 0;
}
