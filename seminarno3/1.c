#include <stdio.h>

int main() {
    int n[60];
    int b;
    int startingIndCurrent = 0;
    int startingIndPrevious = 0;
    int lengthLongSamenow = 0;
    int lengthLongSamethen = 0;

    scanf("%d", &b);
    for (int i = 0; i < b; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < b - 1; i++) {
        if (n[i] == n[i + 1]) {
            startingIndCurrent = i;
            lengthLongSamenow = 1;
            while (i < b - 1 && n[i] == n[i + 1]) {
                lengthLongSamenow++;
                i++;
            }
            if (lengthLongSamenow > lengthLongSamethen) {
                lengthLongSamethen = lengthLongSamenow;
                startingIndPrevious = startingIndCurrent;
            }
        }
    }

    printf("The longest sequence of the same elements starts at index %d and has length %d\n", startingIndPrevious, lengthLongSamethen);

    return 0;
}