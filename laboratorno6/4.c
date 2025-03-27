#include <stdio.h>

int main() {
    int arr[20];
    int tempLength = 1, tempStIndex = 0;
    int maxLength = 1, StIndex = 0;

    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 19; i++) {
        if (arr[i] == arr[i + 1]) {
            tempLength++;
        } else {
            if (tempLength > maxLength) {
                maxLength = tempLength;
                StIndex = tempStIndex;
            }
            tempLength = 1;
            tempStIndex = i + 1;
        }
    }

    if (tempLength > maxLength) {
        maxLength = tempLength;
        StIndex = tempStIndex;
    }

    for (int i = StIndex; i < StIndex + maxLength; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
