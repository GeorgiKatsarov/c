#include <stdio.h>

int isStringDecimalNumber(char str[]) {
    int flag = 1;
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    int length = i;

    for (int i = 0; i < length; i++) {
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.' || str[i] == ',') {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    printf("%d\n", isStringDecimalNumber("123.456"));
    printf("%d\n", isStringDecimalNumber("123,456"));
    printf("%d\n", isStringDecimalNumber("123,456.789"));
    printf("%d\n", isStringDecimalNumber("123,456.789a"));
    return 0;
}


