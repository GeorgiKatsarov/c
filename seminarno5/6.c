#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAnagram(char str1[], char str2[]) {
    // Ако дължините са различни, не могат да бъдат анаграми
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Създаване на масиви за броене на букви
    int count1[26] = {0};
    int count2[26] = {0};

    // Извършване на броене на буквите в двата низа
    for (int i = 0; str1[i] != '\0'; i++) {
        count1[tolower(str1[i]) - 'a']++;
        count2[tolower(str2[i]) - 'a']++;
    }

    // Проверка дали броят на всяка буква е същият в двата низа
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }

    // Ако всичко е наред, връщаме 1
    return 1;
}

int main() {
    char str1[100], str2[100];

    // Въвеждане на двата низа
    printf("Въведи първия низ: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Премахване на новия ред от края на низа

    printf("Въведи втория низ: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Премахване на новия ред от края на низа

    // Проверка за анаграма
    if (isAnagram(str1, str2)) {
        printf("Низовете са анаграми!\n");
    } else {
        printf("Низовете не са анаграми.\n");
    }

    return 0;
}
