// ednomeren masiv ot ints, da se suzdade vtori po sledniya nachin:
// purviq element na vtoriq masiv e maksimalniq element ot purviq masiv
// mejdiinnite sa otricatelnite ot purviq masiv
// posledniq element e broq na nechetni element v purviq masiv

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid size\n");
        return 1;
    }
    
    int* arr1 = (int*)malloc(n * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    int max = arr1[0];
    int negCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr1[i] > max) {
            max = arr1[i];
        }
        if (arr1[i] < 0) {
            negCount++;
        }
        if (arr1[i] % 2 != 0) {
            oddCount++;
        }
    }
    int sizeOfArray = 1 + negCount + 1; // max + negatives + oddCount
    int* arr2 = (int*)malloc(sizeOfArray * sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        free(arr1);
        return 1;
    }
    arr2[0] = max;
    int index = 1;
    for (int i = 0; i < n; i++) {
        if (arr1[i] < 0) {
            arr2[index] = arr1[i];
            index++;
        }
    }
    arr2[index] = oddCount;
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    free(arr1);
    free(arr2);
}