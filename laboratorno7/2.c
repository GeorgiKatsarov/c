#include <stdio.h>
#include <stdlib.h>

int* readFromKeyInDynamicArray(int *size) {
    int capacity = 5; 
    int count = 0; 
    int num;

    int *arr = (int*)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Грешка при заделянето на памет!\n");
        exit(1);
    }

    printf("Въведете числа (0 за край):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        if (count == capacity) {
            capacity *= 2; 
            arr = (int*)realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Грешка при разширяването на паметта!\n");
                exit(1);
            }
        }

        arr[count++] = num;
    }

    *size = count; 
    return arr;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int size;
    int *numbers = readFromKeyInDynamicArray(&size);

    printf("Въведените числа: ");
    printArray(numbers, size);

    qsort(numbers, size, sizeof(int), compare);

    printf("Сортирани числа: ");
    printArray(numbers, size);

    free(numbers); 
    return 0;
}
