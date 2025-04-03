#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Въведете броя на елементите: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    int* primes = (int*)malloc(n * sizeof(int));
    int* nonPrimes = (int*)malloc(n * sizeof(int));
    int primeCount = 0, nonPrimeCount = 0;

    printf("Въведете елементите на масива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i])) {
            primes[primeCount++] = arr[i];
        } else {
            nonPrimes[nonPrimeCount++] = arr[i];
        }
    }

    printf("Масив без простите числа:\n");
    for (int i = 0; i < nonPrimeCount; i++) {
        printf("%d ", nonPrimes[i]);
    }
    printf("\n");

    printf("Масив с простите числа:\n");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    free(arr);
    free(primes);
    free(nonPrimes);

    return 0;
    //realloc procheti kakvo e
}