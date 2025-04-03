#include <stdio.h>


int main() {
    int n = 3, m = 3; // Размери на масива
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int maxSum = 0; 
    int result = 0;    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int currentSum = 0;

            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    int ni = i + di;
                    int nj = j + dj;

                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && !(di == 0 && dj == 0)) {
                        currentSum += matrix[ni][nj];
                    }
                }
            }

            if (currentSum > maxSum) {
                maxSum = currentSum;
                result = matrix[i][j];
            }
        }
    }

    // Извеждане на резултата
    printf("Числото с най-голям сбор на околните числа е %d със сбор %d\n", result, maxSum);

    return 0;
}