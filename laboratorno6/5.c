#include <stdio.h>

int isSubstring(const char str[], const char sub[]) {
    int i, j;
    
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j]) {
                break; 
            }
        }
        if (sub[j] == '\0') {
            return 1; 
        }
    }
    return 0; 
}

int searchName(char names[20][128], char search[128]) {
    for (int i = 0; i < 20; i++) {
        if (isSubstring(names[i], search)) {  
            return i; 
        }
    }
    return -1; 
}

int main() {
    char names[20][128];

    printf("Enter 20 names:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%s", names[i]);
    }

    char search[128];
    printf("Enter search term: ");
    scanf("%s", search);

    int index = searchName(names, search);

    printf("full name: %s\n", names[index]);

    return 0;
}
