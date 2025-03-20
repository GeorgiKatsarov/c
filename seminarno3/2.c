#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int is_valid = 1; 
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            if (arr[i] >= arr[i + 1]) {
                is_valid = 0;
                break;
            }
        } else {
            if (arr[i] <= arr[i + 1]) {
                is_valid = 0;
                break;
            }
        }
    }

    if (is_valid) {
        printf("The sequence satisfies the relations.\n");
    } else {
        printf("The sequence does not satisfy the relations.\n");
    }

    free(arr);
    return 0;
}