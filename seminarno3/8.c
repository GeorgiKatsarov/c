#include <stdio.h>

int main() {
    int arr[20] = {0};
    int n = 10;
    int num, pos;

    // Initial input of 10 numbers
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insert numbers at specified positions
    while (n < 20) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        scanf("%d", &pos);
        if (pos < 0 || pos >= 20) {
            printf("Invalid position\n");
            continue;
        }
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = num;
        n++;
    }

    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
