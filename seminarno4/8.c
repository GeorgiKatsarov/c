#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)malloc(10 * sizeof(int));
    int size = 10;

    printf("Въведете 10 числа:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        int index, value;
        printf("Въведете индекс и число (0 за спиране): ");
        scanf("%d", &index);

        if (index == 0) {
            break;
        }

        scanf("%d", &value);

        if (index < 0 || index > size) {
            printf("Невалиден индекс. Опитайте отново.\n");
            continue;
        }

        arr = (int*)realloc(arr, (size + 1) * sizeof(int));
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = value;
        size++;

        printf("Текущият масив:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    free(arr);
    return 0;
}