#include <stdio.h>

#define MAX_N 100000
#define MAX_M 1000000

int friends[MAX_N + 1][100]; 
int friendCount[MAX_N + 1];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i <= n; i++) {
        friendCount[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        friends[a][friendCount[a]] = b;
        friendCount[a]++;

        friends[b][friendCount[b]] = a;
        friendCount[b]++;
    }

    int queries;
    scanf("%d", &queries);

    for (int i = 0; i < queries; i++) {
        int person;
        scanf("%d", &person);
        printf("%d\n", friendCount[person]);
    }

    return 0;
}