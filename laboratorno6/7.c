#include <stdio.h>

#define MAX 20

int arr[MAX][MAX];
int visited[MAX][MAX];
int n;

int isValid(int x, int y, int value) {
    return (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y] && arr[x][y] == value);
}

int dfs(int x, int y, int value) {
    visited[x][y] = 1;
    int size = 1;

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (isValid(newX, newY, value)) {
            size += dfs(newX, newY, value);
        }
    }

    return size;
}

int main() {
    scanf("%d", &n);

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            visited[i][j] = 0; 
        }
    }

    int maxSize = 0;
    int maxValue = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                int size = dfs(i, j, arr[i][j]);
                if (size > maxSize) {
                    maxSize = size;
                    maxValue = arr[i][j];
                }
            }
        }
    }

    printf("Най-голямата област е със стойност %d и размер %d\n", maxValue, maxSize);

    return 0;
}