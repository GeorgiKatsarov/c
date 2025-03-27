#include <stdio.h>

void bubbleSortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[20];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSortDescending(arr, n);

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    printf("%d\n", sum);
    return 0;
}
