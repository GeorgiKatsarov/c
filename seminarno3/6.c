#include <stdio.h>

void findLongestSubsequence(int arr[], int n) {
    int maxLength = 1, currentLength = 1;
    int startIndex = 0, endIndex = 0;
    int tempStartIndex = 0;

   
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startIndex = tempStartIndex;
                endIndex = i - 1;
            }
            currentLength = 1;
            tempStartIndex = i;
        }
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
        startIndex = tempStartIndex;
        endIndex = n - 1;
    }

    currentLength = 1;
    tempStartIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startIndex = tempStartIndex;
                endIndex = i - 1;
            }
            currentLength = 1;
            tempStartIndex = i;
        }
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
        startIndex = tempStartIndex;
        endIndex = n - 1;
    }


    printf("The longest subsequence is: ");
    for (int i = startIndex; i <= endIndex; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[60];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLongestSubsequence(arr, n);

    return 0;
}
