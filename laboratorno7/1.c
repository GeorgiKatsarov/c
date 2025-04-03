#include <stdio.h>
#include <stdlib.h>

int* readFromKeyInDynamicArray(int* size) {
    int n, *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    *size = n;
    return arr;
}

void printDynamicArray(int* arr, int size) {
    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumDynamicArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int findBiggestElement(int* arr, int size) {
    int biggest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    return biggest;
}

int findSmallestElement(int* arr, int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int sumOfEvenElements(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void menu() {
    printf("\nMenu:\n");
    printf("1. Enter numbers\n");
    printf("2. Print numbers\n");
    printf("3. Sum of elements\n");
    printf("4. Find biggest element\n");
    printf("5. Find smallest element\n");
    printf("6. Sum of even elements\n");
    printf("7. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int* arr = NULL;
    int size = 0;
    int choice;

    do {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (arr != NULL) {
                    free(arr);
                }
                arr = readFromKeyInDynamicArray(&size);
                break;
            case 2:
                if (arr == NULL) {
                    printf("Array is empty. Please enter numbers first.\n");
                } else {
                    printDynamicArray(arr, size);
                }
                break;
            case 3:
                if (arr == NULL) {
                    printf("Array is empty. Please enter numbers first.\n");
                } else {
                    printf("Sum of elements: %d\n", sumDynamicArray(arr, size));
                }
                break;
            case 4:
                if (arr == NULL) {
                    printf("Array is empty. Please enter numbers first.\n");
                } else {
                    printf("Biggest element: %d\n", findBiggestElement(arr, size));
                }
                break;
            case 5:
                if (arr == NULL) {
                    printf("Array is empty. Please enter numbers first.\n");
                } else {
                    printf("Smallest element: %d\n", findSmallestElement(arr, size));
                }
                break;
            case 6:
                if (arr == NULL) {
                    printf("Array is empty. Please enter numbers first.\n");
                } else {
                    printf("Sum of even elements: %d\n", sumOfEvenElements(arr, size));
                }
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (choice != 7);

    if (arr != NULL) {
        free(arr);
    }

    return 0;
}