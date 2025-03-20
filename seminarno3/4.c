#include <stdio.h>

int main() {
    int initial[60];
    int movedByK[60];
    int n;
    int k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &initial[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        movedByK[(i + k) % n] = initial[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", movedByK[i]);
    }
    return 0;
}

