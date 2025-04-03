#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    int * stations;
    i = 7;
    
    stations = (int*)malloc(i * sizeof(int));
    if (stations == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (n = 0; n < i; n++){
        stations[n] = n;    
    }
    for (n = 0; n < i; n++){
        printf("%d ", stations[n]);
    }
    int *ptrToStations = stations;
    stations = (int*)realloc(stations, (i + 1) * sizeof(int));
    if (stations == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    stations[i] = 8;
    for (n = 0; n < i + 1; n++){
        printf("%d ", stations[n]);
    }
    free(ptrToStations);
    free(stations);

    printf("\n");
}