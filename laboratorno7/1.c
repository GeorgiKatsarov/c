#include<stdio.h>
#include<stdlib.h>

int* readFromKeyInDynamicArray() {
    int n, *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    return arr;
}
void printDynamicArray(int* arr) {
    printf("The elements of the array are:\n");
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return arr;
}
int sumDynamicArray(int* arr) {
    int sum = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        sum += arr[i];
    }
    return sum;
}
int findBiggestElement(int* arr) {
    int biggest = arr[0];
    for (int i = 1; i < sizeof(arr)/sizeof(int); i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    return biggest;
}
int findSmallestElement(int* arr) {
    int smallest = arr[0];
    for (int i = 1; i < sizeof(arr)/sizeof(int); i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
int sumOfEvenElements(int* arr) {
    int sum = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main(){
    int* arr = readFromKeyInDynamicArray();
    if (arr == NULL) {
        return 1; // Memory allocation failed
    }

    printDynamicArray(arr);
    printf("Sum of elements: %d\n", sumDynamicArray(arr));
    printf("Biggest element: %d\n", findBiggestElement(arr));
    printf("Smallest element: %d\n", findSmallestElement(arr));
    printf("Sum of even elements: %d\n", sumOfEvenElements(arr));

    free(arr); // Free the allocated memory
    return 0;
    
}