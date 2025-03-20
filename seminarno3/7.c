#include <stdio.h>

void findSubsequenceWithSum(int arr[], int n, int target) {
    for (int start = 0; start < n; start++) {
        int sum = 0;
        for (int end = start; end < n; end++) {
            sum += arr[end];
            if (sum == target) {
                printf("Subsequence with sum %d: ", target);
                for (int i = start; i <= end; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                return;
            }
        }
    }
    printf("No subsequence with sum %d found.\n", target);
}

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[60];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    findSubsequenceWithSum(arr, n, target);

    return 0;
}
