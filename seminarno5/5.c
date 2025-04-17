#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define WORD "programming"

int main() {
    char secret[] = WORD;
    int len = strlen(secret);
    char* guessed = (char*)malloc((len + 1) * sizeof(char));
    int tries = 0;
    int maxTries = len + 2;
    char letter;
    int found;

    if (guessed == NULL) {
        printf("Грешка при заделяне на памет.\n");
        return 1;
    }

    // Инициализиране
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }
    guessed[len] = '\0';

    printf("Добре дошъл в Бесеница!\nДумата има %d букви.\n", len);

    while (tries < maxTries) {
        printf("Текуща дума: %s\n", guessed);
        printf("Въведи буква: ");
        scanf(" %c", &letter);
        letter = tolower(letter);

        tries++;
        found = 0;

        for (int i = 0; i < len; i++) {
            if (tolower(secret[i]) == letter && guessed[i] == '_') {
                guessed[i] = secret[i];
                found = 1;
            }
        }

        if (found) {
            printf("Познато! Буквата '%c' съществува.\n", letter);
        } else {
            printf("Няма такава буква.\n");
        }

        if (strcmp(guessed, secret) == 0) {
            printf("Браво! Позна думата: %s\n", secret);
            printf("Успя с %d опита (максимум: %d).\n", tries, maxTries);
            free(guessed);
            return 0;
        }
    }

    printf("Съжалявам, не успя да познаеш думата навреме.\n");
    printf("Тайната дума беше: %s\n", secret);

    free(guessed);
    return 0;
}
