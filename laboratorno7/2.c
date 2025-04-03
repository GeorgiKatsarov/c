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

int georgiSort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}

void menu() {
    printf("\nМеню:\n");
    printf("1. Въведете числа\n");
    printf("2. Принтирайте числата\n");
    printf("3. Сортирайте числата\n");
    printf("4. Изход\n");
    printf("Изберете опция: ");
}

int main() {
    int *numbers = NULL;
    int size = 0;
    int choice;

    do {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numbers != NULL) {
                    free(numbers);
                }
                numbers = readFromKeyInDynamicArray(&size);
                break;
            case 2:
                if (numbers == NULL) {
                    printf("Масивът е празен. Моля, въведете числа първо.\n");
                } else {
                    printf("Числата в масива: ");
                    printArray(numbers, size);
                }
                break;
            case 3:
                if (numbers == NULL) {
                    printf("Масивът е празен. Моля, въведете числа първо.\n");
                } else {
                    georgiSort(numbers, size);
                    printf("Числата са сортирани.\n");
                }
                break;
            case 4:
                printf("Изход...\n");
                break;
            default:
                printf("Невалидна опция. Опитайте отново.\n");
        }
    } while (choice != 4);

    if (numbers != NULL) {
        free(numbers);
    }

    return 0;
}
