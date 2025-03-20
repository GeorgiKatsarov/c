#include <stdio.h>

int main() {
    int arr[60];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxLength = 1, currentLength = 1;
    int startIndex = 0, maxStartIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 1;
            startIndex = i;
        }
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }

    printf("The longest sequence of identical elements is: ");
    for (int i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}