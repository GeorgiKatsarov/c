#include <stdio.h>

int main() {
    int arrayToSort[60];
    int n;
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrayToSort[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrayToSort[j] < arrayToSort[j + 1]) {
                temp = arrayToSort[j];
                arrayToSort[j] = arrayToSort[j + 1];
                arrayToSort[j + 1] = temp;
            }
        }
    }

    int k;
    scanf("%d", &k);
    printf("%d e %d-ti po golemina element", arrayToSort[n-k], k);
    return 0;
}