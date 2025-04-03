#include <stdio.h>
#include <stdlib.h>


int arr[30];
int size = 0;

void add(int x) {
    arr[size++] = x;
}

void delete(int x) {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != x) {
            arr[newSize++] = arr[i];
        }
    }
    size = newSize;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void smallest(int x) {
    if (x > size) {
        printf("Error: Not enough elements\n");
        return;
    }
    qsort(arr, size, sizeof(int), compare);
    printf("%d\n", arr[x - 1]);
}

int main() {
    int command, x;

    while (scanf("%d", &command) != EOF) {
        if (command == 1) {
            scanf("%d", &x);
            add(x);
        } else if (command == 2) {
            scanf("%d", &x);
            delete(x);
        } else if (command == 3) {
            scanf("%d", &x);
            smallest(x);
        } else {
            printf("Invalid command\n");
        }
    }

    return 0;
}