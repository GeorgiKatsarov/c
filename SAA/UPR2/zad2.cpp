//dvumeren masiv ot celi chisla
//da se suzdade ednomeren masiv na bazata na purviq po sledniya nachin:
// elementite na ednomerniq masiv predstavlyavat elementite ot dvata diagonala na dvumerniq masiv, no ne vsichki a samo tezi koito sa po golemi ot 10
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(){
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    if (n <= 0 || m <= 0 || n > MAX || m > MAX) {
        printf("Invalid size\n");
        return 1;
    }
    
    int arr[MAX][MAX];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i < m && arr[i][i] > 10) { // main diagonal
            count++;
        }
        if (i < m && arr[i][m - 1 - i] > 10 && (m - 1 - i) != i) { // secondary diagonal
            count++;
        }
    }

    int* result = (int*)malloc(count * sizeof(int));
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (i < m && arr[i][i] > 10) { // main diagonal
            result[index++] = arr[i][i];
        }
        if (i < m && arr[i][m - 1 - i] > 10 && (m - 1 - i) != i) { // secondary diagonal
            result[index++] = arr[i][m - 1 - i];
        }
    }

    printf("Resulting array: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}