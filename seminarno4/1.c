#include<stdio.h>

int main() {
    int flagRow = 0, flagCol = 0;
    int matrix[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    for (int i = 0; i < 3; i++) {
        flagRow = 0; 
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] < matrix[i][j + 1]) {
                flagRow = 1;
                break;
            }
        }
        if (flagRow) break;
    }

    for (int j = 0; j < 5; j++) {
        flagCol = 0; 
        for (int i = 0; i < 2; i++) {
            if (matrix[i][j] > matrix[i + 1][j]) {
                flagCol = 1;
                break;
            }
        }
        if (flagCol) break;
    }

    if (!flagRow && !flagCol) {
        printf("Всеки ред е в нарастващ ред, а всяка колона е в намаляващ ред.\n");
    } else {
        printf("Условие не е изпълнено.\n");
    }

    return 0;
}